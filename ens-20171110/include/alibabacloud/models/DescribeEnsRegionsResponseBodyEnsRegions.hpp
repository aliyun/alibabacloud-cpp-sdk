// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSREGIONSRESPONSEBODYENSREGIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSREGIONSRESPONSEBODYENSREGIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsRegionsResponseBodyEnsRegions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsRegionsResponseBodyEnsRegions& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegions, ensRegions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsRegionsResponseBodyEnsRegions& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegions, ensRegions_);
    };
    DescribeEnsRegionsResponseBodyEnsRegions() = default ;
    DescribeEnsRegionsResponseBodyEnsRegions(const DescribeEnsRegionsResponseBodyEnsRegions &) = default ;
    DescribeEnsRegionsResponseBodyEnsRegions(DescribeEnsRegionsResponseBodyEnsRegions &&) = default ;
    DescribeEnsRegionsResponseBodyEnsRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsRegionsResponseBodyEnsRegions() = default ;
    DescribeEnsRegionsResponseBodyEnsRegions& operator=(const DescribeEnsRegionsResponseBodyEnsRegions &) = default ;
    DescribeEnsRegionsResponseBodyEnsRegions& operator=(DescribeEnsRegionsResponseBodyEnsRegions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ensRegions_ != nullptr; };
    // ensRegions Field Functions 
    bool hasEnsRegions() const { return this->ensRegions_ != nullptr;};
    void deleteEnsRegions() { this->ensRegions_ = nullptr;};
    inline const vector<Models::DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions> & ensRegions() const { DARABONBA_PTR_GET_CONST(ensRegions_, vector<Models::DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions>) };
    inline vector<Models::DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions> ensRegions() { DARABONBA_PTR_GET(ensRegions_, vector<Models::DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions>) };
    inline DescribeEnsRegionsResponseBodyEnsRegions& setEnsRegions(const vector<Models::DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions> & ensRegions) { DARABONBA_PTR_SET_VALUE(ensRegions_, ensRegions) };
    inline DescribeEnsRegionsResponseBodyEnsRegions& setEnsRegions(vector<Models::DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions> && ensRegions) { DARABONBA_PTR_SET_RVALUE(ensRegions_, ensRegions) };


  protected:
    std::shared_ptr<vector<Models::DescribeEnsRegionsResponseBodyEnsRegionsEnsRegions>> ensRegions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
