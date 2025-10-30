// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYREQUESTSENDERINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLPREQUERYREQUESTSENDERINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreatePickUpWaybillPreQueryRequestSenderInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePickUpWaybillPreQueryRequestSenderInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AddressInfo, addressInfo_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePickUpWaybillPreQueryRequestSenderInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressInfo, addressInfo_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreatePickUpWaybillPreQueryRequestSenderInfo() = default ;
    CreatePickUpWaybillPreQueryRequestSenderInfo(const CreatePickUpWaybillPreQueryRequestSenderInfo &) = default ;
    CreatePickUpWaybillPreQueryRequestSenderInfo(CreatePickUpWaybillPreQueryRequestSenderInfo &&) = default ;
    CreatePickUpWaybillPreQueryRequestSenderInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePickUpWaybillPreQueryRequestSenderInfo() = default ;
    CreatePickUpWaybillPreQueryRequestSenderInfo& operator=(const CreatePickUpWaybillPreQueryRequestSenderInfo &) = default ;
    CreatePickUpWaybillPreQueryRequestSenderInfo& operator=(CreatePickUpWaybillPreQueryRequestSenderInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressInfo_ == nullptr
        && return this->mobile_ == nullptr && return this->name_ == nullptr; };
    // addressInfo Field Functions 
    bool hasAddressInfo() const { return this->addressInfo_ != nullptr;};
    void deleteAddressInfo() { this->addressInfo_ = nullptr;};
    inline const Models::CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo & addressInfo() const { DARABONBA_PTR_GET_CONST(addressInfo_, Models::CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo) };
    inline Models::CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo addressInfo() { DARABONBA_PTR_GET(addressInfo_, Models::CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo) };
    inline CreatePickUpWaybillPreQueryRequestSenderInfo& setAddressInfo(const Models::CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo & addressInfo) { DARABONBA_PTR_SET_VALUE(addressInfo_, addressInfo) };
    inline CreatePickUpWaybillPreQueryRequestSenderInfo& setAddressInfo(Models::CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo && addressInfo) { DARABONBA_PTR_SET_RVALUE(addressInfo_, addressInfo) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline CreatePickUpWaybillPreQueryRequestSenderInfo& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePickUpWaybillPreQueryRequestSenderInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The address of the sender.
    std::shared_ptr<Models::CreatePickUpWaybillPreQueryRequestSenderInfoAddressInfo> addressInfo_ = nullptr;
    // The mobile phone number of the sender.
    // 
    // This parameter is required.
    std::shared_ptr<string> mobile_ = nullptr;
    // The name of the sender.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
