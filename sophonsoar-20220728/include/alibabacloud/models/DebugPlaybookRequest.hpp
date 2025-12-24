// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEBUGPLAYBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEBUGPLAYBOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DebugPlaybookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DebugPlaybookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(Record, record_);
      DARABONBA_PTR_TO_JSON(Taskflow, taskflow_);
    };
    friend void from_json(const Darabonba::Json& j, DebugPlaybookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(Record, record_);
      DARABONBA_PTR_FROM_JSON(Taskflow, taskflow_);
    };
    DebugPlaybookRequest() = default ;
    DebugPlaybookRequest(const DebugPlaybookRequest &) = default ;
    DebugPlaybookRequest(DebugPlaybookRequest &&) = default ;
    DebugPlaybookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DebugPlaybookRequest() = default ;
    DebugPlaybookRequest& operator=(const DebugPlaybookRequest &) = default ;
    DebugPlaybookRequest& operator=(DebugPlaybookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->playbookUuid_ == nullptr && return this->record_ == nullptr && return this->taskflow_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DebugPlaybookRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline DebugPlaybookRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // record Field Functions 
    bool hasRecord() const { return this->record_ != nullptr;};
    void deleteRecord() { this->record_ = nullptr;};
    inline string record() const { DARABONBA_PTR_GET_DEFAULT(record_, "") };
    inline DebugPlaybookRequest& setRecord(string record) { DARABONBA_PTR_SET_VALUE(record_, record) };


    // taskflow Field Functions 
    bool hasTaskflow() const { return this->taskflow_ != nullptr;};
    void deleteTaskflow() { this->taskflow_ = nullptr;};
    inline string taskflow() const { DARABONBA_PTR_GET_DEFAULT(taskflow_, "") };
    inline DebugPlaybookRequest& setTaskflow(string taskflow) { DARABONBA_PTR_SET_VALUE(taskflow_, taskflow) };


  protected:
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The playbook UUID.
    // 
    // >  You can call the [DescribePlaybooks](~~DescribePlaybooks~~)operation to query the playbook UUID.
    // 
    // This parameter is required.
    std::shared_ptr<string> playbookUuid_ = nullptr;
    // The input parameters that you use to debug the playbook. You can define the parameters based on your business requirements.
    std::shared_ptr<string> record_ = nullptr;
    // The XML configuration of the playbook.
    // 
    // >  You can call the [DescribePlaybook](~~DescribePlaybook~~) operation to query the XML configuration of the playbook.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskflow_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
