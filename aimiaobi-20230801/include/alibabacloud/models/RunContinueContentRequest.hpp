// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTINUECONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTINUECONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunContinueContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContinueContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunContinueContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunContinueContentRequest() = default ;
    RunContinueContentRequest(const RunContinueContentRequest &) = default ;
    RunContinueContentRequest(RunContinueContentRequest &&) = default ;
    RunContinueContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContinueContentRequest() = default ;
    RunContinueContentRequest& operator=(const RunContinueContentRequest &) = default ;
    RunContinueContentRequest& operator=(RunContinueContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->workspaceId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunContinueContentRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunContinueContentRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
