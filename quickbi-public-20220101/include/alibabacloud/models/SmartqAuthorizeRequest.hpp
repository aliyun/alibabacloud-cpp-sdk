// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SMARTQAUTHORIZEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SMARTQAUTHORIZEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class SmartqAuthorizeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SmartqAuthorizeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CubeIds, cubeIds_);
      DARABONBA_PTR_TO_JSON(ExpireDay, expireDay_);
      DARABONBA_PTR_TO_JSON(LlmCubeThemes, llmCubeThemes_);
      DARABONBA_PTR_TO_JSON(LlmCubes, llmCubes_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(UserIds, userIds_);
    };
    friend void from_json(const Darabonba::Json& j, SmartqAuthorizeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CubeIds, cubeIds_);
      DARABONBA_PTR_FROM_JSON(ExpireDay, expireDay_);
      DARABONBA_PTR_FROM_JSON(LlmCubeThemes, llmCubeThemes_);
      DARABONBA_PTR_FROM_JSON(LlmCubes, llmCubes_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
    };
    SmartqAuthorizeRequest() = default ;
    SmartqAuthorizeRequest(const SmartqAuthorizeRequest &) = default ;
    SmartqAuthorizeRequest(SmartqAuthorizeRequest &&) = default ;
    SmartqAuthorizeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SmartqAuthorizeRequest() = default ;
    SmartqAuthorizeRequest& operator=(const SmartqAuthorizeRequest &) = default ;
    SmartqAuthorizeRequest& operator=(SmartqAuthorizeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cubeIds_ == nullptr
        && this->expireDay_ == nullptr && this->llmCubeThemes_ == nullptr && this->llmCubes_ == nullptr && this->operationType_ == nullptr && this->userIds_ == nullptr; };
    // cubeIds Field Functions 
    bool hasCubeIds() const { return this->cubeIds_ != nullptr;};
    void deleteCubeIds() { this->cubeIds_ = nullptr;};
    inline string getCubeIds() const { DARABONBA_PTR_GET_DEFAULT(cubeIds_, "") };
    inline SmartqAuthorizeRequest& setCubeIds(string cubeIds) { DARABONBA_PTR_SET_VALUE(cubeIds_, cubeIds) };


    // expireDay Field Functions 
    bool hasExpireDay() const { return this->expireDay_ != nullptr;};
    void deleteExpireDay() { this->expireDay_ = nullptr;};
    inline string getExpireDay() const { DARABONBA_PTR_GET_DEFAULT(expireDay_, "") };
    inline SmartqAuthorizeRequest& setExpireDay(string expireDay) { DARABONBA_PTR_SET_VALUE(expireDay_, expireDay) };


    // llmCubeThemes Field Functions 
    bool hasLlmCubeThemes() const { return this->llmCubeThemes_ != nullptr;};
    void deleteLlmCubeThemes() { this->llmCubeThemes_ = nullptr;};
    inline string getLlmCubeThemes() const { DARABONBA_PTR_GET_DEFAULT(llmCubeThemes_, "") };
    inline SmartqAuthorizeRequest& setLlmCubeThemes(string llmCubeThemes) { DARABONBA_PTR_SET_VALUE(llmCubeThemes_, llmCubeThemes) };


    // llmCubes Field Functions 
    bool hasLlmCubes() const { return this->llmCubes_ != nullptr;};
    void deleteLlmCubes() { this->llmCubes_ = nullptr;};
    inline string getLlmCubes() const { DARABONBA_PTR_GET_DEFAULT(llmCubes_, "") };
    inline SmartqAuthorizeRequest& setLlmCubes(string llmCubes) { DARABONBA_PTR_SET_VALUE(llmCubes_, llmCubes) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline int32_t getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, 0) };
    inline SmartqAuthorizeRequest& setOperationType(int32_t operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline string getUserIds() const { DARABONBA_PTR_GET_DEFAULT(userIds_, "") };
    inline SmartqAuthorizeRequest& setUserIds(string userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };


  protected:
    // Array of dataset IDs, separated by English commas. <notice>This parameter will be converted to the corresponding question resource ID for authorization. Therefore, if the input cubeId does not correspond to any question resource, an error indicating that the question resource does not exist will be reported. Please ensure the correctness of the cubeId.</notice>
    shared_ptr<string> cubeIds_ {};
    // Expiration time, with a default of seven days.
    // Format: 2099-12-31
    shared_ptr<string> expireDay_ {};
    // Array of analysis theme IDs, separated by English commas.
    shared_ptr<string> llmCubeThemes_ {};
    // Array of Q&A resource IDs, separated by English commas.
    shared_ptr<string> llmCubes_ {};
    // Operation type. The values are as follows:
    // - 0: Add authorization
    // - 1: Remove authorization
    // 
    // This parameter is required.
    shared_ptr<int32_t> operationType_ {};
    // Array of user IDs, separated by English commas.
    // >Notice: The number of user IDs per request * (number of Q&A resources + number of analysis themes) cannot exceed 100.
    // 
    // This parameter is required.
    shared_ptr<string> userIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
