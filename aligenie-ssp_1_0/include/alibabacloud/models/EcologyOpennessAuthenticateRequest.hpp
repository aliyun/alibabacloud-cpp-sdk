// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ECOLOGYOPENNESSAUTHENTICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ECOLOGYOPENNESSAUTHENTICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class EcologyOpennessAuthenticateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EcologyOpennessAuthenticateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_TO_JSON(LoginStateAccessToken, loginStateAccessToken_);
    };
    friend void from_json(const Darabonba::Json& j, EcologyOpennessAuthenticateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_FROM_JSON(LoginStateAccessToken, loginStateAccessToken_);
    };
    EcologyOpennessAuthenticateRequest() = default ;
    EcologyOpennessAuthenticateRequest(const EcologyOpennessAuthenticateRequest &) = default ;
    EcologyOpennessAuthenticateRequest(EcologyOpennessAuthenticateRequest &&) = default ;
    EcologyOpennessAuthenticateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EcologyOpennessAuthenticateRequest() = default ;
    EcologyOpennessAuthenticateRequest& operator=(const EcologyOpennessAuthenticateRequest &) = default ;
    EcologyOpennessAuthenticateRequest& operator=(EcologyOpennessAuthenticateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encodeKey_ != nullptr
        && this->encodeType_ != nullptr && this->loginStateAccessToken_ != nullptr; };
    // encodeKey Field Functions 
    bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
    void deleteEncodeKey() { this->encodeKey_ = nullptr;};
    inline string encodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
    inline EcologyOpennessAuthenticateRequest& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


    // encodeType Field Functions 
    bool hasEncodeType() const { return this->encodeType_ != nullptr;};
    void deleteEncodeType() { this->encodeType_ = nullptr;};
    inline string encodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
    inline EcologyOpennessAuthenticateRequest& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


    // loginStateAccessToken Field Functions 
    bool hasLoginStateAccessToken() const { return this->loginStateAccessToken_ != nullptr;};
    void deleteLoginStateAccessToken() { this->loginStateAccessToken_ = nullptr;};
    inline string loginStateAccessToken() const { DARABONBA_PTR_GET_DEFAULT(loginStateAccessToken_, "") };
    inline EcologyOpennessAuthenticateRequest& setLoginStateAccessToken(string loginStateAccessToken) { DARABONBA_PTR_SET_VALUE(loginStateAccessToken_, loginStateAccessToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> encodeKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> encodeType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> loginStateAccessToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
