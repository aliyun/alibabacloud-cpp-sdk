// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYOPERATIONAUDITINFODETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYOPERATIONAUDITINFODETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryOperationAuditInfoDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOperationAuditInfoDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditRecordId, auditRecordId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOperationAuditInfoDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditRecordId, auditRecordId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    QueryOperationAuditInfoDetailRequest() = default ;
    QueryOperationAuditInfoDetailRequest(const QueryOperationAuditInfoDetailRequest &) = default ;
    QueryOperationAuditInfoDetailRequest(QueryOperationAuditInfoDetailRequest &&) = default ;
    QueryOperationAuditInfoDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOperationAuditInfoDetailRequest() = default ;
    QueryOperationAuditInfoDetailRequest& operator=(const QueryOperationAuditInfoDetailRequest &) = default ;
    QueryOperationAuditInfoDetailRequest& operator=(QueryOperationAuditInfoDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditRecordId_ == nullptr
        && this->lang_ == nullptr; };
    // auditRecordId Field Functions 
    bool hasAuditRecordId() const { return this->auditRecordId_ != nullptr;};
    void deleteAuditRecordId() { this->auditRecordId_ = nullptr;};
    inline int64_t getAuditRecordId() const { DARABONBA_PTR_GET_DEFAULT(auditRecordId_, 0L) };
    inline QueryOperationAuditInfoDetailRequest& setAuditRecordId(int64_t auditRecordId) { DARABONBA_PTR_SET_VALUE(auditRecordId_, auditRecordId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryOperationAuditInfoDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> auditRecordId_ {};
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
