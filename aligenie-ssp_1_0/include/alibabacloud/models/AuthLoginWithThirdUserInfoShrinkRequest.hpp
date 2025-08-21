// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHLOGINWITHTHIRDUSERINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHLOGINWITHTHIRDUSERINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class AuthLoginWithThirdUserInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthLoginWithThirdUserInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExtInfo, extInfoShrink_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(ThirdUserIdentifier, thirdUserIdentifier_);
      DARABONBA_PTR_TO_JSON(ThirdUserType, thirdUserType_);
    };
    friend void from_json(const Darabonba::Json& j, AuthLoginWithThirdUserInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtInfo, extInfoShrink_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(ThirdUserIdentifier, thirdUserIdentifier_);
      DARABONBA_PTR_FROM_JSON(ThirdUserType, thirdUserType_);
    };
    AuthLoginWithThirdUserInfoShrinkRequest() = default ;
    AuthLoginWithThirdUserInfoShrinkRequest(const AuthLoginWithThirdUserInfoShrinkRequest &) = default ;
    AuthLoginWithThirdUserInfoShrinkRequest(AuthLoginWithThirdUserInfoShrinkRequest &&) = default ;
    AuthLoginWithThirdUserInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthLoginWithThirdUserInfoShrinkRequest() = default ;
    AuthLoginWithThirdUserInfoShrinkRequest& operator=(const AuthLoginWithThirdUserInfoShrinkRequest &) = default ;
    AuthLoginWithThirdUserInfoShrinkRequest& operator=(AuthLoginWithThirdUserInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extInfoShrink_ != nullptr
        && this->sceneCode_ != nullptr && this->thirdUserIdentifier_ != nullptr && this->thirdUserType_ != nullptr; };
    // extInfoShrink Field Functions 
    bool hasExtInfoShrink() const { return this->extInfoShrink_ != nullptr;};
    void deleteExtInfoShrink() { this->extInfoShrink_ = nullptr;};
    inline string extInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(extInfoShrink_, "") };
    inline AuthLoginWithThirdUserInfoShrinkRequest& setExtInfoShrink(string extInfoShrink) { DARABONBA_PTR_SET_VALUE(extInfoShrink_, extInfoShrink) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline AuthLoginWithThirdUserInfoShrinkRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // thirdUserIdentifier Field Functions 
    bool hasThirdUserIdentifier() const { return this->thirdUserIdentifier_ != nullptr;};
    void deleteThirdUserIdentifier() { this->thirdUserIdentifier_ = nullptr;};
    inline string thirdUserIdentifier() const { DARABONBA_PTR_GET_DEFAULT(thirdUserIdentifier_, "") };
    inline AuthLoginWithThirdUserInfoShrinkRequest& setThirdUserIdentifier(string thirdUserIdentifier) { DARABONBA_PTR_SET_VALUE(thirdUserIdentifier_, thirdUserIdentifier) };


    // thirdUserType Field Functions 
    bool hasThirdUserType() const { return this->thirdUserType_ != nullptr;};
    void deleteThirdUserType() { this->thirdUserType_ = nullptr;};
    inline string thirdUserType() const { DARABONBA_PTR_GET_DEFAULT(thirdUserType_, "") };
    inline AuthLoginWithThirdUserInfoShrinkRequest& setThirdUserType(string thirdUserType) { DARABONBA_PTR_SET_VALUE(thirdUserType_, thirdUserType) };


  protected:
    std::shared_ptr<string> extInfoShrink_ = nullptr;
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
