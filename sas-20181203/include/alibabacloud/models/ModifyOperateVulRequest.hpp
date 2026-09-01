// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYOPERATEVULREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYOPERATEVULREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyOperateVulRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyOperateVulRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyOperateVulRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ModifyOperateVulRequest() = default ;
    ModifyOperateVulRequest(const ModifyOperateVulRequest &) = default ;
    ModifyOperateVulRequest(ModifyOperateVulRequest &&) = default ;
    ModifyOperateVulRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyOperateVulRequest() = default ;
    ModifyOperateVulRequest& operator=(const ModifyOperateVulRequest &) = default ;
    ModifyOperateVulRequest& operator=(ModifyOperateVulRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->from_ == nullptr && this->info_ == nullptr && this->operateType_ == nullptr && this->reason_ == nullptr && this->resourceDirectoryAccountId_ == nullptr
        && this->type_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyOperateVulRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline ModifyOperateVulRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline string getInfo() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
    inline ModifyOperateVulRequest& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline ModifyOperateVulRequest& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ModifyOperateVulRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline ModifyOperateVulRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyOperateVulRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The client token that is used to ensure the idempotence of the request. Use a different token for each request. The token supports only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The source identifier of the request. Set the value to **sas**.
    shared_ptr<string> from_ {};
    // The information about the vulnerability to handle. This parameter is in JSON format and contains the following fields:
    // 
    // - **name**: The name of the vulnerability.
    // - **uuid**: The UUID of the server on which the vulnerability is detected.
    // - **tag**: The tag of the vulnerability. Valid values:
    //     - **oval**: Linux software vulnerability.
    //     - **system**: Windows system vulnerability.
    //     - **cms**: Web-CMS vulnerability.
    // 
    // > For other vulnerability types, call the [DescribeVulList](~~DescribeVulList~~) operation to obtain vulnerability information.
    // 
    // - **isFront**: Specifies whether the Windows patch is a prerequisite patch. This parameter is required only when you handle Windows system vulnerabilities. You can ignore this parameter for other vulnerability types. Valid values:
    //     - **0**: No.
    //     - **1**: Yes.
    // 
    // > Batch processing of vulnerabilities is supported. Separate multiple vulnerability entries with commas (,). Call the [DescribeVulList](~~DescribeVulList~~) operation to obtain vulnerability information.
    // 
    // This parameter is required.
    shared_ptr<string> info_ {};
    // The operation to perform on the vulnerability. Valid values:
    // - **vul_fix**: fixes the vulnerability.
    // - **vul_verify**: verifies the vulnerability.
    // - **vul_ignore**: ignores the vulnerability.
    // - **vul_undo_ignore**: cancels ignoring the vulnerability.
    // - **vul_delete**: deletes the vulnerability.
    // 
    // This parameter is required.
    shared_ptr<string> operateType_ {};
    // The reason for ignoring the vulnerability.
    // > This parameter is required only when the operation type is **ignore** (OperateType is set to **vul_ignore**).
    shared_ptr<string> reason_ {};
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The type of the vulnerability to handle. Valid values:
    // - **cve**: Linux software vulnerability.
    // - **sys**: Windows system vulnerability.
    // - **cms**: Web-CMS vulnerability.
    // - **emg**: emergency vulnerability.
    // - **app**: application vulnerability.
    // - **sca**: software constituency parsing vulnerability.
    // 
    // > Emergency vulnerabilities (emg), application vulnerabilities (app), and software constituency parsing vulnerabilities (sca) do not support the execute vulnerability fix operation.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
