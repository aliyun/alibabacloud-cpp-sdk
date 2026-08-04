// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHLOGINWITHTHIRDUSERINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHLOGINWITHTHIRDUSERINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class AuthLoginWithThirdUserInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthLoginWithThirdUserInfoRequest& obj) { 
      DARABONBA_ANY_TO_JSON(ExtInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(ThirdUserIdentifier, thirdUserIdentifier_);
      DARABONBA_PTR_TO_JSON(ThirdUserType, thirdUserType_);
    };
    friend void from_json(const Darabonba::Json& j, AuthLoginWithThirdUserInfoRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(ExtInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(ThirdUserIdentifier, thirdUserIdentifier_);
      DARABONBA_PTR_FROM_JSON(ThirdUserType, thirdUserType_);
    };
    AuthLoginWithThirdUserInfoRequest() = default ;
    AuthLoginWithThirdUserInfoRequest(const AuthLoginWithThirdUserInfoRequest &) = default ;
    AuthLoginWithThirdUserInfoRequest(AuthLoginWithThirdUserInfoRequest &&) = default ;
    AuthLoginWithThirdUserInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthLoginWithThirdUserInfoRequest() = default ;
    AuthLoginWithThirdUserInfoRequest& operator=(const AuthLoginWithThirdUserInfoRequest &) = default ;
    AuthLoginWithThirdUserInfoRequest& operator=(AuthLoginWithThirdUserInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extInfo_ == nullptr
        && this->sceneCode_ == nullptr && this->thirdUserIdentifier_ == nullptr && this->thirdUserType_ == nullptr; };
    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline     const Darabonba::Json & getExtInfo() const { DARABONBA_GET(extInfo_) };
    Darabonba::Json & getExtInfo() { DARABONBA_GET(extInfo_) };
    inline AuthLoginWithThirdUserInfoRequest& setExtInfo(const Darabonba::Json & extInfo) { DARABONBA_SET_VALUE(extInfo_, extInfo) };
    inline AuthLoginWithThirdUserInfoRequest& setExtInfo(Darabonba::Json && extInfo) { DARABONBA_SET_RVALUE(extInfo_, extInfo) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline AuthLoginWithThirdUserInfoRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // thirdUserIdentifier Field Functions 
    bool hasThirdUserIdentifier() const { return this->thirdUserIdentifier_ != nullptr;};
    void deleteThirdUserIdentifier() { this->thirdUserIdentifier_ = nullptr;};
    inline string getThirdUserIdentifier() const { DARABONBA_PTR_GET_DEFAULT(thirdUserIdentifier_, "") };
    inline AuthLoginWithThirdUserInfoRequest& setThirdUserIdentifier(string thirdUserIdentifier) { DARABONBA_PTR_SET_VALUE(thirdUserIdentifier_, thirdUserIdentifier) };


    // thirdUserType Field Functions 
    bool hasThirdUserType() const { return this->thirdUserType_ != nullptr;};
    void deleteThirdUserType() { this->thirdUserType_ = nullptr;};
    inline string getThirdUserType() const { DARABONBA_PTR_GET_DEFAULT(thirdUserType_, "") };
    inline AuthLoginWithThirdUserInfoRequest& setThirdUserType(string thirdUserType) { DARABONBA_PTR_SET_VALUE(thirdUserType_, thirdUserType) };


  protected:
    // Extension information
    Darabonba::Json extInfo_ {};
    // Scene code, which must be requested from Tmall Genie in advance
    // 
    // This parameter is required.
    shared_ptr<string> sceneCode_ {};
    // Third-party User Identifier
    // 
    // This parameter is required.
    shared_ptr<string> thirdUserIdentifier_ {};
    // Third-party User Type
    // 
    // This parameter is required.
    shared_ptr<string> thirdUserType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
