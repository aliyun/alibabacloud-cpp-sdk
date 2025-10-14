// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSNETDISTRICTRESPONSEBODYENSNETDISTRICTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSNETDISTRICTRESPONSEBODYENSNETDISTRICTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsNetDistrictResponseBodyEnsNetDistricts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsNetDistrictResponseBodyEnsNetDistricts& obj) { 
      DARABONBA_PTR_TO_JSON(EnsNetDistrict, ensNetDistrict_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsNetDistrictResponseBodyEnsNetDistricts& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsNetDistrict, ensNetDistrict_);
    };
    DescribeEnsNetDistrictResponseBodyEnsNetDistricts() = default ;
    DescribeEnsNetDistrictResponseBodyEnsNetDistricts(const DescribeEnsNetDistrictResponseBodyEnsNetDistricts &) = default ;
    DescribeEnsNetDistrictResponseBodyEnsNetDistricts(DescribeEnsNetDistrictResponseBodyEnsNetDistricts &&) = default ;
    DescribeEnsNetDistrictResponseBodyEnsNetDistricts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsNetDistrictResponseBodyEnsNetDistricts() = default ;
    DescribeEnsNetDistrictResponseBodyEnsNetDistricts& operator=(const DescribeEnsNetDistrictResponseBodyEnsNetDistricts &) = default ;
    DescribeEnsNetDistrictResponseBodyEnsNetDistricts& operator=(DescribeEnsNetDistrictResponseBodyEnsNetDistricts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ensNetDistrict_ == nullptr; };
    // ensNetDistrict Field Functions 
    bool hasEnsNetDistrict() const { return this->ensNetDistrict_ != nullptr;};
    void deleteEnsNetDistrict() { this->ensNetDistrict_ = nullptr;};
    inline const vector<Models::DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict> & ensNetDistrict() const { DARABONBA_PTR_GET_CONST(ensNetDistrict_, vector<Models::DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict>) };
    inline vector<Models::DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict> ensNetDistrict() { DARABONBA_PTR_GET(ensNetDistrict_, vector<Models::DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict>) };
    inline DescribeEnsNetDistrictResponseBodyEnsNetDistricts& setEnsNetDistrict(const vector<Models::DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict> & ensNetDistrict) { DARABONBA_PTR_SET_VALUE(ensNetDistrict_, ensNetDistrict) };
    inline DescribeEnsNetDistrictResponseBodyEnsNetDistricts& setEnsNetDistrict(vector<Models::DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict> && ensNetDistrict) { DARABONBA_PTR_SET_RVALUE(ensNetDistrict_, ensNetDistrict) };


  protected:
    std::shared_ptr<vector<Models::DescribeEnsNetDistrictResponseBodyEnsNetDistrictsEnsNetDistrict>> ensNetDistrict_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
