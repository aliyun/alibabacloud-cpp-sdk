// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTENSORBOARDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTENSORBOARDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetTensorboardRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTensorboardRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JodId, jodId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTensorboardRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JodId, jodId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetTensorboardRequest() = default ;
    GetTensorboardRequest(const GetTensorboardRequest &) = default ;
    GetTensorboardRequest(GetTensorboardRequest &&) = default ;
    GetTensorboardRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTensorboardRequest() = default ;
    GetTensorboardRequest& operator=(const GetTensorboardRequest &) = default ;
    GetTensorboardRequest& operator=(GetTensorboardRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jodId_ == nullptr
        && this->token_ == nullptr && this->workspaceId_ == nullptr; };
    // jodId Field Functions 
    bool hasJodId() const { return this->jodId_ != nullptr;};
    void deleteJodId() { this->jodId_ = nullptr;};
    inline string getJodId() const { DARABONBA_PTR_GET_DEFAULT(jodId_, "") };
    inline GetTensorboardRequest& setJodId(string jodId) { DARABONBA_PTR_SET_VALUE(jodId_, jodId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetTensorboardRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetTensorboardRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The job ID. For more information about how to query the job ID, see [ListJob](https://help.aliyun.com/document_detail/459676.html).
    shared_ptr<string> jodId_ {};
    // The information about the shared token. You can specify this parameter to obtain the permission to view a TensorBoard job based on the shared token information. You can execute [GetTensorboardSharedUrl](https://help.aliyun.com/document_detail/2557813.html) and extract the shared token from the obtained information.
    shared_ptr<string> token_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
