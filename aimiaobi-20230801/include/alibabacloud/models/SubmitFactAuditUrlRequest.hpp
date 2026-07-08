// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITFACTAUDITURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITFACTAUDITURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitFactAuditUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitFactAuditUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitFactAuditUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitFactAuditUrlRequest() = default ;
    SubmitFactAuditUrlRequest(const SubmitFactAuditUrlRequest &) = default ;
    SubmitFactAuditUrlRequest(SubmitFactAuditUrlRequest &&) = default ;
    SubmitFactAuditUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitFactAuditUrlRequest() = default ;
    SubmitFactAuditUrlRequest& operator=(const SubmitFactAuditUrlRequest &) = default ;
    SubmitFactAuditUrlRequest& operator=(SubmitFactAuditUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->url_ == nullptr
        && this->workspaceId_ == nullptr; };
    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SubmitFactAuditUrlRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitFactAuditUrlRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The URL of the information source you want to use for factuality audit. After you add a source URL using this operation, MiaoBi retrieves audit information only from your configured list of URLs. If you do not add any URL, MiaoBi searches the entire web for audit information. You can configure up to 10 source URLs.
    // 
    // This parameter is required.
    shared_ptr<string> url_ {};
    // Unique identifier of the Alibaba Cloud Model Studio workspace. To get the workspace ID, see [Get the workspace ID](https://help.aliyun.com/document_detail/2782167.html).
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
