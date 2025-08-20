// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTFORAPPREQUESTPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTFORAPPREQUESTPAYLOAD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class GetAccountForAppRequestPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountForAppRequestPayload& obj) { 
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(originUuid, originUuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountForAppRequestPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(originUuid, originUuid_);
    };
    GetAccountForAppRequestPayload() = default ;
    GetAccountForAppRequestPayload(const GetAccountForAppRequestPayload &) = default ;
    GetAccountForAppRequestPayload(GetAccountForAppRequestPayload &&) = default ;
    GetAccountForAppRequestPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountForAppRequestPayload() = default ;
    GetAccountForAppRequestPayload& operator=(const GetAccountForAppRequestPayload &) = default ;
    GetAccountForAppRequestPayload& operator=(GetAccountForAppRequestPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->phone_ != nullptr
        && this->originUuid_ != nullptr; };
    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline GetAccountForAppRequestPayload& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // originUuid Field Functions 
    bool hasOriginUuid() const { return this->originUuid_ != nullptr;};
    void deleteOriginUuid() { this->originUuid_ = nullptr;};
    inline string originUuid() const { DARABONBA_PTR_GET_DEFAULT(originUuid_, "") };
    inline GetAccountForAppRequestPayload& setOriginUuid(string originUuid) { DARABONBA_PTR_SET_VALUE(originUuid_, originUuid) };


  protected:
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<string> originUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
