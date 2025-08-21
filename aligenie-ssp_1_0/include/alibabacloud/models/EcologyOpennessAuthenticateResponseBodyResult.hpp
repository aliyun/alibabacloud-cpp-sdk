// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ECOLOGYOPENNESSAUTHENTICATERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_ECOLOGYOPENNESSAUTHENTICATERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class EcologyOpennessAuthenticateResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EcologyOpennessAuthenticateResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(ThirdUserIdentifier, thirdUserIdentifier_);
      DARABONBA_PTR_TO_JSON(ThirdUserType, thirdUserType_);
      DARABONBA_PTR_TO_JSON(UserOpenId, userOpenId_);
    };
    friend void from_json(const Darabonba::Json& j, EcologyOpennessAuthenticateResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(ThirdUserIdentifier, thirdUserIdentifier_);
      DARABONBA_PTR_FROM_JSON(ThirdUserType, thirdUserType_);
      DARABONBA_PTR_FROM_JSON(UserOpenId, userOpenId_);
    };
    EcologyOpennessAuthenticateResponseBodyResult() = default ;
    EcologyOpennessAuthenticateResponseBodyResult(const EcologyOpennessAuthenticateResponseBodyResult &) = default ;
    EcologyOpennessAuthenticateResponseBodyResult(EcologyOpennessAuthenticateResponseBodyResult &&) = default ;
    EcologyOpennessAuthenticateResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EcologyOpennessAuthenticateResponseBodyResult() = default ;
    EcologyOpennessAuthenticateResponseBodyResult& operator=(const EcologyOpennessAuthenticateResponseBodyResult &) = default ;
    EcologyOpennessAuthenticateResponseBodyResult& operator=(EcologyOpennessAuthenticateResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encodeKey_ != nullptr
        && this->encodeType_ != nullptr && this->sceneCode_ != nullptr && this->thirdUserIdentifier_ != nullptr && this->thirdUserType_ != nullptr && this->userOpenId_ != nullptr; };
    // encodeKey Field Functions 
    bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
    void deleteEncodeKey() { this->encodeKey_ = nullptr;};
    inline string encodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
    inline EcologyOpennessAuthenticateResponseBodyResult& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


    // encodeType Field Functions 
    bool hasEncodeType() const { return this->encodeType_ != nullptr;};
    void deleteEncodeType() { this->encodeType_ = nullptr;};
    inline string encodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
    inline EcologyOpennessAuthenticateResponseBodyResult& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline EcologyOpennessAuthenticateResponseBodyResult& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // thirdUserIdentifier Field Functions 
    bool hasThirdUserIdentifier() const { return this->thirdUserIdentifier_ != nullptr;};
    void deleteThirdUserIdentifier() { this->thirdUserIdentifier_ = nullptr;};
    inline string thirdUserIdentifier() const { DARABONBA_PTR_GET_DEFAULT(thirdUserIdentifier_, "") };
    inline EcologyOpennessAuthenticateResponseBodyResult& setThirdUserIdentifier(string thirdUserIdentifier) { DARABONBA_PTR_SET_VALUE(thirdUserIdentifier_, thirdUserIdentifier) };


    // thirdUserType Field Functions 
    bool hasThirdUserType() const { return this->thirdUserType_ != nullptr;};
    void deleteThirdUserType() { this->thirdUserType_ = nullptr;};
    inline string thirdUserType() const { DARABONBA_PTR_GET_DEFAULT(thirdUserType_, "") };
    inline EcologyOpennessAuthenticateResponseBodyResult& setThirdUserType(string thirdUserType) { DARABONBA_PTR_SET_VALUE(thirdUserType_, thirdUserType) };


    // userOpenId Field Functions 
    bool hasUserOpenId() const { return this->userOpenId_ != nullptr;};
    void deleteUserOpenId() { this->userOpenId_ = nullptr;};
    inline string userOpenId() const { DARABONBA_PTR_GET_DEFAULT(userOpenId_, "") };
    inline EcologyOpennessAuthenticateResponseBodyResult& setUserOpenId(string userOpenId) { DARABONBA_PTR_SET_VALUE(userOpenId_, userOpenId) };


  protected:
    std::shared_ptr<string> encodeKey_ = nullptr;
    std::shared_ptr<string> encodeType_ = nullptr;
    std::shared_ptr<string> sceneCode_ = nullptr;
    std::shared_ptr<string> thirdUserIdentifier_ = nullptr;
    std::shared_ptr<string> thirdUserType_ = nullptr;
    std::shared_ptr<string> userOpenId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
