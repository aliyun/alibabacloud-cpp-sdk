// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JWTIDENTITYCONFIGJWTPAYLOADCONFIG_HPP_
#define ALIBABACLOUD_MODELS_JWTIDENTITYCONFIGJWTPAYLOADCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class JwtIdentityConfigJwtPayloadConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JwtIdentityConfigJwtPayloadConfig& obj) { 
      DARABONBA_PTR_TO_JSON(payloadKeyName, payloadKeyName_);
      DARABONBA_PTR_TO_JSON(payloadKeyValue, payloadKeyValue_);
    };
    friend void from_json(const Darabonba::Json& j, JwtIdentityConfigJwtPayloadConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(payloadKeyName, payloadKeyName_);
      DARABONBA_PTR_FROM_JSON(payloadKeyValue, payloadKeyValue_);
    };
    JwtIdentityConfigJwtPayloadConfig() = default ;
    JwtIdentityConfigJwtPayloadConfig(const JwtIdentityConfigJwtPayloadConfig &) = default ;
    JwtIdentityConfigJwtPayloadConfig(JwtIdentityConfigJwtPayloadConfig &&) = default ;
    JwtIdentityConfigJwtPayloadConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JwtIdentityConfigJwtPayloadConfig() = default ;
    JwtIdentityConfigJwtPayloadConfig& operator=(const JwtIdentityConfigJwtPayloadConfig &) = default ;
    JwtIdentityConfigJwtPayloadConfig& operator=(JwtIdentityConfigJwtPayloadConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->payloadKeyName_ == nullptr
        && return this->payloadKeyValue_ == nullptr; };
    // payloadKeyName Field Functions 
    bool hasPayloadKeyName() const { return this->payloadKeyName_ != nullptr;};
    void deletePayloadKeyName() { this->payloadKeyName_ = nullptr;};
    inline string payloadKeyName() const { DARABONBA_PTR_GET_DEFAULT(payloadKeyName_, "") };
    inline JwtIdentityConfigJwtPayloadConfig& setPayloadKeyName(string payloadKeyName) { DARABONBA_PTR_SET_VALUE(payloadKeyName_, payloadKeyName) };


    // payloadKeyValue Field Functions 
    bool hasPayloadKeyValue() const { return this->payloadKeyValue_ != nullptr;};
    void deletePayloadKeyValue() { this->payloadKeyValue_ = nullptr;};
    inline string payloadKeyValue() const { DARABONBA_PTR_GET_DEFAULT(payloadKeyValue_, "") };
    inline JwtIdentityConfigJwtPayloadConfig& setPayloadKeyValue(string payloadKeyValue) { DARABONBA_PTR_SET_VALUE(payloadKeyValue_, payloadKeyValue) };


  protected:
    std::shared_ptr<string> payloadKeyName_ = nullptr;
    std::shared_ptr<string> payloadKeyValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
