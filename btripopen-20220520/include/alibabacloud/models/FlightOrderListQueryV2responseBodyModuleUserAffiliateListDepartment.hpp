// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEUSERAFFILIATELISTDEPARTMENT_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYV2RESPONSEBODYMODULEUSERAFFILIATELISTDEPARTMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment& obj) { 
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(depart_name, departName_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment& obj) { 
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(depart_name, departName_);
    };
    FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment() = default ;
    FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment(const FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment(FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment &&) = default ;
    FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment() = default ;
    FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment& operator=(const FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment &) = default ;
    FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment& operator=(FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->departId_ != nullptr
        && this->departName_ != nullptr; };
    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // departName Field Functions 
    bool hasDepartName() const { return this->departName_ != nullptr;};
    void deleteDepartName() { this->departName_ = nullptr;};
    inline string departName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
    inline FlightOrderListQueryV2ResponseBodyModuleUserAffiliateListDepartment& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


  protected:
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<string> departName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
