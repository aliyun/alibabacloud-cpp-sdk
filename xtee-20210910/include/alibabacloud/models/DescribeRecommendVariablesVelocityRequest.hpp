// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOMMENDVARIABLESVELOCITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOMMENDVARIABLESVELOCITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRecommendVariablesVelocityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecommendVariablesVelocityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(variableIdsStr, variableIdsStr_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecommendVariablesVelocityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(variableIdsStr, variableIdsStr_);
    };
    DescribeRecommendVariablesVelocityRequest() = default ;
    DescribeRecommendVariablesVelocityRequest(const DescribeRecommendVariablesVelocityRequest &) = default ;
    DescribeRecommendVariablesVelocityRequest(DescribeRecommendVariablesVelocityRequest &&) = default ;
    DescribeRecommendVariablesVelocityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecommendVariablesVelocityRequest() = default ;
    DescribeRecommendVariablesVelocityRequest& operator=(const DescribeRecommendVariablesVelocityRequest &) = default ;
    DescribeRecommendVariablesVelocityRequest& operator=(DescribeRecommendVariablesVelocityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->regId_ == nullptr && this->taskId_ == nullptr && this->variableIdsStr_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeRecommendVariablesVelocityRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeRecommendVariablesVelocityRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline DescribeRecommendVariablesVelocityRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // variableIdsStr Field Functions 
    bool hasVariableIdsStr() const { return this->variableIdsStr_ != nullptr;};
    void deleteVariableIdsStr() { this->variableIdsStr_ = nullptr;};
    inline string getVariableIdsStr() const { DARABONBA_PTR_GET_DEFAULT(variableIdsStr_, "") };
    inline DescribeRecommendVariablesVelocityRequest& setVariableIdsStr(string variableIdsStr) { DARABONBA_PTR_SET_VALUE(variableIdsStr_, variableIdsStr) };


  protected:
    // Set the language type for request and response, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Region Code
    shared_ptr<string> regId_ {};
    // Task ID
    // 
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
    // Variable IDs
    shared_ptr<string> variableIdsStr_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
