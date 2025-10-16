// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCFIREWALLTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCFIREWALLTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateVpcFirewallTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcFirewallTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcFirewallTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(TaskAction, taskAction_);
    };
    CreateVpcFirewallTaskRequest() = default ;
    CreateVpcFirewallTaskRequest(const CreateVpcFirewallTaskRequest &) = default ;
    CreateVpcFirewallTaskRequest(CreateVpcFirewallTaskRequest &&) = default ;
    CreateVpcFirewallTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcFirewallTaskRequest() = default ;
    CreateVpcFirewallTaskRequest& operator=(const CreateVpcFirewallTaskRequest &) = default ;
    CreateVpcFirewallTaskRequest& operator=(CreateVpcFirewallTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->lang_ == nullptr && return this->priority_ == nullptr && return this->taskAction_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateVpcFirewallTaskRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateVpcFirewallTaskRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline CreateVpcFirewallTaskRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // taskAction Field Functions 
    bool hasTaskAction() const { return this->taskAction_ != nullptr;};
    void deleteTaskAction() { this->taskAction_ = nullptr;};
    inline string taskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
    inline CreateVpcFirewallTaskRequest& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> priority_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskAction_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
