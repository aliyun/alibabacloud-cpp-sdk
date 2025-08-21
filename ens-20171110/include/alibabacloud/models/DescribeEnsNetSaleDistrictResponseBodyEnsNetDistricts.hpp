// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSNETSALEDISTRICTRESPONSEBODYENSNETDISTRICTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSNETSALEDISTRICTRESPONSEBODYENSNETDISTRICTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsNetSaleDistrictResponseBodyEnsNetDistricts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsNetSaleDistrictResponseBodyEnsNetDistricts& obj) { 
      DARABONBA_PTR_TO_JSON(EnsNetDistrict, ensNetDistrict_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsNetSaleDistrictResponseBodyEnsNetDistricts& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsNetDistrict, ensNetDistrict_);
    };
    DescribeEnsNetSaleDistrictResponseBodyEnsNetDistricts() = default ;
    DescribeEnsNetSaleDistrictResponseBodyEnsNetDistricts(const DescribeEnsNetSaleDistrictResponseBodyEnsNetDistricts &) = default ;
    DescribeEnsNetSaleDistrictResponseBodyEnsNetDistricts(DescribeEnsNetSaleDistrictResponseBodyEnsNetDistricts &&) = default ;
    DescribeEnsNetSaleDistrictResponseBodyEnsNetDistricts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsNetSaleDistrictResponseBodyEnsNetDistricts() = default ;
    DescribeEnsNetSaleDistrictResponseBodyEnsNetDistricts& operator=(const DescribeEnsNetSaleDistrictResponseBodyEnsNetDistricts &) = default ;
    DescribeEnsNetSaleDistrictResponseBodyEnsNetDistricts& operator=(DescribeEnsNetSaleDistrictResponseBodyEnsNetDistricts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ensNetDistrict_ != nullptr; };
    // ensNetDistrict Field Functions 
    bool hasEnsNetDistrict() const { return this->ensNetDistrict_ != nullptr;};
    void deleteEnsNetDistrict() { this->ensNetDistrict_ = nullptr;};
    inline const vector<Models::DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict> & ensNetDistrict() const { DARABONBA_PTR_GET_CONST(ensNetDistrict_, vector<Models::DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict>) };
    inline vector<Models::DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict> ensNetDistrict() { DARABONBA_PTR_GET(ensNetDistrict_, vector<Models::DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict>) };
    inline DescribeEnsNetSaleDistrictResponseBodyEnsNetDistricts& setEnsNetDistrict(const vector<Models::DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict> & ensNetDistrict) { DARABONBA_PTR_SET_VALUE(ensNetDistrict_, ensNetDistrict) };
    inline DescribeEnsNetSaleDistrictResponseBodyEnsNetDistricts& setEnsNetDistrict(vector<Models::DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict> && ensNetDistrict) { DARABONBA_PTR_SET_RVALUE(ensNetDistrict_, ensNetDistrict) };


  protected:
    std::shared_ptr<vector<Models::DescribeEnsNetSaleDistrictResponseBodyEnsNetDistrictsEnsNetDistrict>> ensNetDistrict_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
