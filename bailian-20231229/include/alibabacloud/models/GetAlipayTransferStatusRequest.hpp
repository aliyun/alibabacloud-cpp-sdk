// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALIPAYTRANSFERSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALIPAYTRANSFERSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetAlipayTransferStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlipayTransferStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(workspace_id, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlipayTransferStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(workspace_id, workspaceId_);
    };
    GetAlipayTransferStatusRequest() = default ;
    GetAlipayTransferStatusRequest(const GetAlipayTransferStatusRequest &) = default ;
    GetAlipayTransferStatusRequest(GetAlipayTransferStatusRequest &&) = default ;
    GetAlipayTransferStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlipayTransferStatusRequest() = default ;
    GetAlipayTransferStatusRequest& operator=(const GetAlipayTransferStatusRequest &) = default ;
    GetAlipayTransferStatusRequest& operator=(GetAlipayTransferStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->workspaceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAlipayTransferStatusRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetAlipayTransferStatusRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
