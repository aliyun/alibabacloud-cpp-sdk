// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACKNOWLEDGETASKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACKNOWLEDGETASKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class AcknowledgeTaskResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AcknowledgeTaskResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(TaskDetailNo, taskDetailNo_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, AcknowledgeTaskResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(TaskDetailNo, taskDetailNo_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    AcknowledgeTaskResultRequest() = default ;
    AcknowledgeTaskResultRequest(const AcknowledgeTaskResultRequest &) = default ;
    AcknowledgeTaskResultRequest(AcknowledgeTaskResultRequest &&) = default ;
    AcknowledgeTaskResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AcknowledgeTaskResultRequest() = default ;
    AcknowledgeTaskResultRequest& operator=(const AcknowledgeTaskResultRequest &) = default ;
    AcknowledgeTaskResultRequest& operator=(AcknowledgeTaskResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->taskDetailNo_ == nullptr && this->userClientIp_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AcknowledgeTaskResultRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // taskDetailNo Field Functions 
    bool hasTaskDetailNo() const { return this->taskDetailNo_ != nullptr;};
    void deleteTaskDetailNo() { this->taskDetailNo_ = nullptr;};
    inline const vector<string> & getTaskDetailNo() const { DARABONBA_PTR_GET_CONST(taskDetailNo_, vector<string>) };
    inline vector<string> getTaskDetailNo() { DARABONBA_PTR_GET(taskDetailNo_, vector<string>) };
    inline AcknowledgeTaskResultRequest& setTaskDetailNo(const vector<string> & taskDetailNo) { DARABONBA_PTR_SET_VALUE(taskDetailNo_, taskDetailNo) };
    inline AcknowledgeTaskResultRequest& setTaskDetailNo(vector<string> && taskDetailNo) { DARABONBA_PTR_SET_RVALUE(taskDetailNo_, taskDetailNo) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline AcknowledgeTaskResultRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    shared_ptr<string> lang_ {};
    // This parameter is required.
    shared_ptr<vector<string>> taskDetailNo_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
