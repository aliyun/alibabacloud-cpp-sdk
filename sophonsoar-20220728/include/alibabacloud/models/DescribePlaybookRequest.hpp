// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePlaybookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlaybookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DebugFlag, debugFlag_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_TO_JSON(TaskflowMd5, taskflowMd5_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlaybookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DebugFlag, debugFlag_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
      DARABONBA_PTR_FROM_JSON(TaskflowMd5, taskflowMd5_);
    };
    DescribePlaybookRequest() = default ;
    DescribePlaybookRequest(const DescribePlaybookRequest &) = default ;
    DescribePlaybookRequest(DescribePlaybookRequest &&) = default ;
    DescribePlaybookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlaybookRequest() = default ;
    DescribePlaybookRequest& operator=(const DescribePlaybookRequest &) = default ;
    DescribePlaybookRequest& operator=(DescribePlaybookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->debugFlag_ == nullptr
        && return this->lang_ == nullptr && return this->playbookUuid_ == nullptr && return this->taskflowMd5_ == nullptr; };
    // debugFlag Field Functions 
    bool hasDebugFlag() const { return this->debugFlag_ != nullptr;};
    void deleteDebugFlag() { this->debugFlag_ = nullptr;};
    inline int32_t debugFlag() const { DARABONBA_PTR_GET_DEFAULT(debugFlag_, 0) };
    inline DescribePlaybookRequest& setDebugFlag(int32_t debugFlag) { DARABONBA_PTR_SET_VALUE(debugFlag_, debugFlag) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribePlaybookRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline DescribePlaybookRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    // taskflowMd5 Field Functions 
    bool hasTaskflowMd5() const { return this->taskflowMd5_ != nullptr;};
    void deleteTaskflowMd5() { this->taskflowMd5_ = nullptr;};
    inline string taskflowMd5() const { DARABONBA_PTR_GET_DEFAULT(taskflowMd5_, "") };
    inline DescribePlaybookRequest& setTaskflowMd5(string taskflowMd5) { DARABONBA_PTR_SET_VALUE(taskflowMd5_, taskflowMd5) };


  protected:
    // The flag that indicates whether the playbook is of the debugging or published version. Valid values:
    // 
    // *   **1**: playbook of the debugging version
    // *   **0**: playbook of the published version
    std::shared_ptr<int32_t> debugFlag_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The UUID of the playbook.
    // 
    // >  You can call the [DescribePlaybooks](~~DescribePlaybooks~~)operation to query the UUIDs of playbooks.
    // 
    // This parameter is required.
    std::shared_ptr<string> playbookUuid_ = nullptr;
    // The MD5 hash value of the playbook.
    std::shared_ptr<string> taskflowMd5_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
