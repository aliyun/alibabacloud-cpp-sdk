// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGINSTATEINFO_HPP_
#define ALIBABACLOUD_MODELS_LOGINSTATEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class LoginStateInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoginStateInfo& obj) { 
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(ThirdUserIdentifier, thirdUserIdentifier_);
      DARABONBA_PTR_TO_JSON(ThirdUserType, thirdUserType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, LoginStateInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(ThirdUserIdentifier, thirdUserIdentifier_);
      DARABONBA_PTR_FROM_JSON(ThirdUserType, thirdUserType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    LoginStateInfo() = default ;
    LoginStateInfo(const LoginStateInfo &) = default ;
    LoginStateInfo(LoginStateInfo &&) = default ;
    LoginStateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoginStateInfo() = default ;
    LoginStateInfo& operator=(const LoginStateInfo &) = default ;
    LoginStateInfo& operator=(LoginStateInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sceneCode_ != nullptr
        && this->thirdUserIdentifier_ != nullptr && this->thirdUserType_ != nullptr && this->userId_ != nullptr; };
    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline LoginStateInfo& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // thirdUserIdentifier Field Functions 
    bool hasThirdUserIdentifier() const { return this->thirdUserIdentifier_ != nullptr;};
    void deleteThirdUserIdentifier() { this->thirdUserIdentifier_ = nullptr;};
    inline string thirdUserIdentifier() const { DARABONBA_PTR_GET_DEFAULT(thirdUserIdentifier_, "") };
    inline LoginStateInfo& setThirdUserIdentifier(string thirdUserIdentifier) { DARABONBA_PTR_SET_VALUE(thirdUserIdentifier_, thirdUserIdentifier) };


    // thirdUserType Field Functions 
    bool hasThirdUserType() const { return this->thirdUserType_ != nullptr;};
    void deleteThirdUserType() { this->thirdUserType_ = nullptr;};
    inline string thirdUserType() const { DARABONBA_PTR_GET_DEFAULT(thirdUserType_, "") };
    inline LoginStateInfo& setThirdUserType(string thirdUserType) { DARABONBA_PTR_SET_VALUE(thirdUserType_, thirdUserType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline LoginStateInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> sceneCode_ = nullptr;
    std::shared_ptr<string> thirdUserIdentifier_ = nullptr;
    std::shared_ptr<string> thirdUserType_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
