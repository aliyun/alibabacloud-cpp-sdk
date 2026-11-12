// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Develop, develop_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Develop, develop_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateServiceRequest() = default ;
    CreateServiceRequest(const CreateServiceRequest &) = default ;
    CreateServiceRequest(CreateServiceRequest &&) = default ;
    CreateServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceRequest() = default ;
    CreateServiceRequest& operator=(const CreateServiceRequest &) = default ;
    CreateServiceRequest& operator=(CreateServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->develop_ == nullptr && this->dryRun_ == nullptr && this->labels_ == nullptr && this->workspaceId_ == nullptr && this->body_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateServiceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // develop Field Functions 
    bool hasDevelop() const { return this->develop_ != nullptr;};
    void deleteDevelop() { this->develop_ = nullptr;};
    inline string getDevelop() const { DARABONBA_PTR_GET_DEFAULT(develop_, "") };
    inline CreateServiceRequest& setDevelop(string develop) { DARABONBA_PTR_SET_VALUE(develop_, develop) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateServiceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> getLabels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline CreateServiceRequest& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateServiceRequest& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateServiceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline CreateServiceRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to enter development mode.
    shared_ptr<string> develop_ {};
    // Specifies whether to only perform a dry run for this request.
    // 
    // - true: A check request is sent, and no actual operation is performed. If the check fails, the corresponding error is returned. If the check succeeds, the error code DryRunOperation is returned.
    // 
    // - false (default): A normal request is sent.
    shared_ptr<bool> dryRun_ {};
    // The user-defined labels.
    shared_ptr<map<string, string>> labels_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
    // The request body. For instructions on key request parameter settings, see **Table 1. Request body parameters** and **Table 2. Metadata parameters** below. For more details about parameter settings, see [All related metric description for service models](https://help.aliyun.com/document_detail/450525.html).
    shared_ptr<string> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
