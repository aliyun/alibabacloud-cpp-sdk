// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POCCREATETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_POCCREATETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class PocCreateTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PocCreateTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DateFormat, dateFormat_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, PocCreateTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DateFormat, dateFormat_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    PocCreateTaskRequest() = default ;
    PocCreateTaskRequest(const PocCreateTaskRequest &) = default ;
    PocCreateTaskRequest(PocCreateTaskRequest &&) = default ;
    PocCreateTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PocCreateTaskRequest() = default ;
    PocCreateTaskRequest& operator=(const PocCreateTaskRequest &) = default ;
    PocCreateTaskRequest& operator=(PocCreateTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dateFormat_ != nullptr
        && this->lang_ != nullptr && this->regId_ != nullptr && this->taskName_ != nullptr && this->token_ != nullptr; };
    // dateFormat Field Functions 
    bool hasDateFormat() const { return this->dateFormat_ != nullptr;};
    void deleteDateFormat() { this->dateFormat_ = nullptr;};
    inline string dateFormat() const { DARABONBA_PTR_GET_DEFAULT(dateFormat_, "") };
    inline PocCreateTaskRequest& setDateFormat(string dateFormat) { DARABONBA_PTR_SET_VALUE(dateFormat_, dateFormat) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline PocCreateTaskRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline PocCreateTaskRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline PocCreateTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline PocCreateTaskRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // Date format
    std::shared_ptr<string> dateFormat_ = nullptr;
    // Set the language type for request and response messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Region code.
    std::shared_ptr<string> regId_ = nullptr;
    // Task name.
    std::shared_ptr<string> taskName_ = nullptr;
    // Task token.
    // 
    // This parameter is required.
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
