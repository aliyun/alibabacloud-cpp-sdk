// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUDITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class CreateAuditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAuditRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditContent, auditContent_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAuditRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditContent, auditContent_);
    };
    CreateAuditRequest() = default ;
    CreateAuditRequest(const CreateAuditRequest &) = default ;
    CreateAuditRequest(CreateAuditRequest &&) = default ;
    CreateAuditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAuditRequest() = default ;
    CreateAuditRequest& operator=(const CreateAuditRequest &) = default ;
    CreateAuditRequest& operator=(CreateAuditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditContent_ == nullptr; };
    // auditContent Field Functions 
    bool hasAuditContent() const { return this->auditContent_ != nullptr;};
    void deleteAuditContent() { this->auditContent_ = nullptr;};
    inline string getAuditContent() const { DARABONBA_PTR_GET_DEFAULT(auditContent_, "") };
    inline CreateAuditRequest& setAuditContent(string auditContent) { DARABONBA_PTR_SET_VALUE(auditContent_, auditContent) };


  protected:
    // The review content. You can specify up to **100** audio or video files in a request. The value must be converted to a string.\\
    // For more information about this parameter, see the **AuditContent** section of this topic.
    // 
    // This parameter is required.
    shared_ptr<string> auditContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
