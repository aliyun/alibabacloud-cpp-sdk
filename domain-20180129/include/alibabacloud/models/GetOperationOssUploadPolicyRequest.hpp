// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPERATIONOSSUPLOADPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOPERATIONOSSUPLOADPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class GetOperationOssUploadPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOperationOssUploadPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditType, auditType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, GetOperationOssUploadPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditType, auditType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    GetOperationOssUploadPolicyRequest() = default ;
    GetOperationOssUploadPolicyRequest(const GetOperationOssUploadPolicyRequest &) = default ;
    GetOperationOssUploadPolicyRequest(GetOperationOssUploadPolicyRequest &&) = default ;
    GetOperationOssUploadPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOperationOssUploadPolicyRequest() = default ;
    GetOperationOssUploadPolicyRequest& operator=(const GetOperationOssUploadPolicyRequest &) = default ;
    GetOperationOssUploadPolicyRequest& operator=(GetOperationOssUploadPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditType_ == nullptr
        && return this->lang_ == nullptr; };
    // auditType Field Functions 
    bool hasAuditType() const { return this->auditType_ != nullptr;};
    void deleteAuditType() { this->auditType_ = nullptr;};
    inline int32_t auditType() const { DARABONBA_PTR_GET_DEFAULT(auditType_, 0) };
    inline GetOperationOssUploadPolicyRequest& setAuditType(int32_t auditType) { DARABONBA_PTR_SET_VALUE(auditType_, auditType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetOperationOssUploadPolicyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> auditType_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
