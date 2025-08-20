// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUSAPPCONFIGREQUESTPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_GETBUSAPPCONFIGREQUESTPAYLOAD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class GetBusAppConfigRequestPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBusAppConfigRequestPayload& obj) { 
      DARABONBA_PTR_TO_JSON(originUuid, originUuid_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
    };
    friend void from_json(const Darabonba::Json& j, GetBusAppConfigRequestPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(originUuid, originUuid_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
    };
    GetBusAppConfigRequestPayload() = default ;
    GetBusAppConfigRequestPayload(const GetBusAppConfigRequestPayload &) = default ;
    GetBusAppConfigRequestPayload(GetBusAppConfigRequestPayload &&) = default ;
    GetBusAppConfigRequestPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBusAppConfigRequestPayload() = default ;
    GetBusAppConfigRequestPayload& operator=(const GetBusAppConfigRequestPayload &) = default ;
    GetBusAppConfigRequestPayload& operator=(GetBusAppConfigRequestPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->originUuid_ != nullptr
        && this->phone_ != nullptr; };
    // originUuid Field Functions 
    bool hasOriginUuid() const { return this->originUuid_ != nullptr;};
    void deleteOriginUuid() { this->originUuid_ = nullptr;};
    inline string originUuid() const { DARABONBA_PTR_GET_DEFAULT(originUuid_, "") };
    inline GetBusAppConfigRequestPayload& setOriginUuid(string originUuid) { DARABONBA_PTR_SET_VALUE(originUuid_, originUuid) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline GetBusAppConfigRequestPayload& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


  protected:
    std::shared_ptr<string> originUuid_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
