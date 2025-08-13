// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUDITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class UpdateAuditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAuditRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(auditMsg, auditMsg_);
      DARABONBA_PTR_TO_JSON(auditRelationType, auditRelationType_);
      DARABONBA_PTR_TO_JSON(auditStatus, auditStatus_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAuditRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(auditMsg, auditMsg_);
      DARABONBA_PTR_FROM_JSON(auditRelationType, auditRelationType_);
      DARABONBA_PTR_FROM_JSON(auditStatus, auditStatus_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    UpdateAuditRequest() = default ;
    UpdateAuditRequest(const UpdateAuditRequest &) = default ;
    UpdateAuditRequest(UpdateAuditRequest &&) = default ;
    UpdateAuditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAuditRequest() = default ;
    UpdateAuditRequest& operator=(const UpdateAuditRequest &) = default ;
    UpdateAuditRequest& operator=(UpdateAuditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->auditMsg_ != nullptr && this->auditRelationType_ != nullptr && this->auditStatus_ != nullptr && this->id_ != nullptr && this->regId_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateAuditRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // auditMsg Field Functions 
    bool hasAuditMsg() const { return this->auditMsg_ != nullptr;};
    void deleteAuditMsg() { this->auditMsg_ = nullptr;};
    inline string auditMsg() const { DARABONBA_PTR_GET_DEFAULT(auditMsg_, "") };
    inline UpdateAuditRequest& setAuditMsg(string auditMsg) { DARABONBA_PTR_SET_VALUE(auditMsg_, auditMsg) };


    // auditRelationType Field Functions 
    bool hasAuditRelationType() const { return this->auditRelationType_ != nullptr;};
    void deleteAuditRelationType() { this->auditRelationType_ = nullptr;};
    inline string auditRelationType() const { DARABONBA_PTR_GET_DEFAULT(auditRelationType_, "") };
    inline UpdateAuditRequest& setAuditRelationType(string auditRelationType) { DARABONBA_PTR_SET_VALUE(auditRelationType_, auditRelationType) };


    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline string auditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
    inline UpdateAuditRequest& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateAuditRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline UpdateAuditRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Approval comments
    std::shared_ptr<string> auditMsg_ = nullptr;
    // Associated type
    std::shared_ptr<string> auditRelationType_ = nullptr;
    // Status
    std::shared_ptr<string> auditStatus_ = nullptr;
    // The ID of the approval to be updated.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
