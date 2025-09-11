// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHTMLTRANSLATETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHTMLTRANSLATETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class GetHtmlTranslateTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHtmlTranslateTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHtmlTranslateTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    GetHtmlTranslateTaskRequest() = default ;
    GetHtmlTranslateTaskRequest(const GetHtmlTranslateTaskRequest &) = default ;
    GetHtmlTranslateTaskRequest(GetHtmlTranslateTaskRequest &&) = default ;
    GetHtmlTranslateTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHtmlTranslateTaskRequest() = default ;
    GetHtmlTranslateTaskRequest& operator=(const GetHtmlTranslateTaskRequest &) = default ;
    GetHtmlTranslateTaskRequest& operator=(GetHtmlTranslateTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr
        && this->workspaceId_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetHtmlTranslateTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetHtmlTranslateTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
