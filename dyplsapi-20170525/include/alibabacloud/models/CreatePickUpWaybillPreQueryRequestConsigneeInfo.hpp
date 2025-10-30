// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYREQUESTCONSIGNEEINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYREQUESTCONSIGNEEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePickUpWaybillPreQueryRequestConsigneeInfoAddressInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreatePickUpWaybillPreQueryRequestConsigneeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePickUpWaybillPreQueryRequestConsigneeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AddressInfo, addressInfo_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePickUpWaybillPreQueryRequestConsigneeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressInfo, addressInfo_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreatePickUpWaybillPreQueryRequestConsigneeInfo() = default ;
    CreatePickUpWaybillPreQueryRequestConsigneeInfo(const CreatePickUpWaybillPreQueryRequestConsigneeInfo &) = default ;
    CreatePickUpWaybillPreQueryRequestConsigneeInfo(CreatePickUpWaybillPreQueryRequestConsigneeInfo &&) = default ;
    CreatePickUpWaybillPreQueryRequestConsigneeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePickUpWaybillPreQueryRequestConsigneeInfo() = default ;
    CreatePickUpWaybillPreQueryRequestConsigneeInfo& operator=(const CreatePickUpWaybillPreQueryRequestConsigneeInfo &) = default ;
    CreatePickUpWaybillPreQueryRequestConsigneeInfo& operator=(CreatePickUpWaybillPreQueryRequestConsigneeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressInfo_ == nullptr
        && return this->mobile_ == nullptr && return this->name_ == nullptr; };
    // addressInfo Field Functions 
    bool hasAddressInfo() const { return this->addressInfo_ != nullptr;};
    void deleteAddressInfo() { this->addressInfo_ = nullptr;};
    inline const Models::CreatePickUpWaybillPreQueryRequestConsigneeInfoAddressInfo & addressInfo() const { DARABONBA_PTR_GET_CONST(addressInfo_, Models::CreatePickUpWaybillPreQueryRequestConsigneeInfoAddressInfo) };
    inline Models::CreatePickUpWaybillPreQueryRequestConsigneeInfoAddressInfo addressInfo() { DARABONBA_PTR_GET(addressInfo_, Models::CreatePickUpWaybillPreQueryRequestConsigneeInfoAddressInfo) };
    inline CreatePickUpWaybillPreQueryRequestConsigneeInfo& setAddressInfo(const Models::CreatePickUpWaybillPreQueryRequestConsigneeInfoAddressInfo & addressInfo) { DARABONBA_PTR_SET_VALUE(addressInfo_, addressInfo) };
    inline CreatePickUpWaybillPreQueryRequestConsigneeInfo& setAddressInfo(Models::CreatePickUpWaybillPreQueryRequestConsigneeInfoAddressInfo && addressInfo) { DARABONBA_PTR_SET_RVALUE(addressInfo_, addressInfo) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline CreatePickUpWaybillPreQueryRequestConsigneeInfo& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePickUpWaybillPreQueryRequestConsigneeInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The address of the consignee.
    std::shared_ptr<Models::CreatePickUpWaybillPreQueryRequestConsigneeInfoAddressInfo> addressInfo_ = nullptr;
    // The mobile phone number of the consignee.
    // 
    // This parameter is required.
    std::shared_ptr<string> mobile_ = nullptr;
    // The name of the consignee.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
