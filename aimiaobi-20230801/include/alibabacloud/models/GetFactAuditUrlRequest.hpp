// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFACTAUDITURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFACTAUDITURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetFactAuditUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFactAuditUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFactAuditUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetFactAuditUrlRequest() = default ;
    GetFactAuditUrlRequest(const GetFactAuditUrlRequest &) = default ;
    GetFactAuditUrlRequest(GetFactAuditUrlRequest &&) = default ;
    GetFactAuditUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFactAuditUrlRequest() = default ;
    GetFactAuditUrlRequest& operator=(const GetFactAuditUrlRequest &) = default ;
    GetFactAuditUrlRequest& operator=(GetFactAuditUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workspaceId_ == nullptr; };
    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetFactAuditUrlRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
