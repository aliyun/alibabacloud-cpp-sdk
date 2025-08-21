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
    virtual bool empty() const override { this->extInfo_ != nullptr
        && this->sceneCode_ != nullptr && this->thirdUserIdentifier_ != nullptr && this->thirdUserType_ != nullptr; };
    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline     const Darabonba::Json & extInfo() const { DARABONBA_GET(extInfo_) };
    Darabonba::Json & extInfo() { DARABONBA_GET(extInfo_) };
    inline AuthLoginWithThirdUserInfoRequest& setExtInfo(const Darabonba::Json & extInfo) { DARABONBA_SET_VALUE(extInfo_, extInfo) };
    inline AuthLoginWithThirdUserInfoRequest& setExtInfo(Darabonba::Json & extInfo) { DARABONBA_SET_RVALUE(extInfo_, extInfo) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline AuthLoginWithThirdUserInfoRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // thirdUserIdentifier Field Functions 
    bool hasThirdUserIdentifier() const { return this->thirdUserIdentifier_ != nullptr;};
    void deleteThirdUserIdentifier() { this->thirdUserIdentifier_ = nullptr;};
    inline string thirdUserIdentifier() const { DARABONBA_PTR_GET_DEFAULT(thirdUserIdentifier_, "") };
    inline AuthLoginWithThirdUserInfoRequest& setThirdUserIdentifier(string thirdUserIdentifier) { DARABONBA_PTR_SET_VALUE(thirdUserIdentifier_, thirdUserIdentifier) };


    // thirdUserType Field Functions 
    bool hasThirdUserType() const { return this->thirdUserType_ != nullptr;};
    void deleteThirdUserType() { this->thirdUserType_ = nullptr;};
    inline string thirdUserType() const { DARABONBA_PTR_GET_DEFAULT(thirdUserType_, "") };
    inline AuthLoginWithThirdUserInfoRequest& setThirdUserType(string thirdUserType) { DARABONBA_PTR_SET_VALUE(thirdUserType_, thirdUserType) };


  protected:
    Darabonba::Json extInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sceneCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdUserIdentifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdUserType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
