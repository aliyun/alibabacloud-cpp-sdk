// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SMARTQQUERYABILITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SMARTQQUERYABILITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class SmartqQueryAbilityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SmartqQueryAbilityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserQuestion, userQuestion_);
    };
    friend void from_json(const Darabonba::Json& j, SmartqQueryAbilityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserQuestion, userQuestion_);
    };
    SmartqQueryAbilityRequest() = default ;
    SmartqQueryAbilityRequest(const SmartqQueryAbilityRequest &) = default ;
    SmartqQueryAbilityRequest(SmartqQueryAbilityRequest &&) = default ;
    SmartqQueryAbilityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SmartqQueryAbilityRequest() = default ;
    SmartqQueryAbilityRequest& operator=(const SmartqQueryAbilityRequest &) = default ;
    SmartqQueryAbilityRequest& operator=(SmartqQueryAbilityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cubeId_ != nullptr
        && this->userId_ != nullptr && this->userQuestion_ != nullptr; };
    // cubeId Field Functions 
    bool hasCubeId() const { return this->cubeId_ != nullptr;};
    void deleteCubeId() { this->cubeId_ = nullptr;};
    inline string cubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
    inline SmartqQueryAbilityRequest& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SmartqQueryAbilityRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userQuestion Field Functions 
    bool hasUserQuestion() const { return this->userQuestion_ != nullptr;};
    void deleteUserQuestion() { this->userQuestion_ = nullptr;};
    inline string userQuestion() const { DARABONBA_PTR_GET_DEFAULT(userQuestion_, "") };
    inline SmartqQueryAbilityRequest& setUserQuestion(string userQuestion) { DARABONBA_PTR_SET_VALUE(userQuestion_, userQuestion) };


  protected:
    // Dataset ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> cubeId_ = nullptr;
    // User ID.
    // >Notice: If this field is not filled, the data will be queried by default as the organization owner.
    std::shared_ptr<string> userId_ = nullptr;
    // Question text.
    // 
    // This parameter is required.
    std::shared_ptr<string> userQuestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
