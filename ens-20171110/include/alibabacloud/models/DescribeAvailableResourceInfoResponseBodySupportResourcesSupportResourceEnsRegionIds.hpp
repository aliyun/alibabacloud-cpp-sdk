// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCEENSREGIONIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEINFORESPONSEBODYSUPPORTRESOURCESSUPPORTRESOURCEENSREGIONIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
    };
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds() = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds(const DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds &) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds(DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds &&) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds() = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds& operator=(const DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds &) = default ;
    DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds& operator=(DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ensRegionId_ != nullptr; };
    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline const vector<string> & ensRegionId() const { DARABONBA_PTR_GET_CONST(ensRegionId_, vector<string>) };
    inline vector<string> ensRegionId() { DARABONBA_PTR_GET(ensRegionId_, vector<string>) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds& setEnsRegionId(const vector<string> & ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };
    inline DescribeAvailableResourceInfoResponseBodySupportResourcesSupportResourceEnsRegionIds& setEnsRegionId(vector<string> && ensRegionId) { DARABONBA_PTR_SET_RVALUE(ensRegionId_, ensRegionId) };


  protected:
    std::shared_ptr<vector<string>> ensRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
