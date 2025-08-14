// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUDITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
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
    virtual bool empty() const override { this->auditContent_ != nullptr; };
    // auditContent Field Functions 
    bool hasAuditContent() const { return this->auditContent_ != nullptr;};
    void deleteAuditContent() { this->auditContent_ = nullptr;};
    inline string auditContent() const { DARABONBA_PTR_GET_DEFAULT(auditContent_, "") };
    inline CreateAuditRequest& setAuditContent(string auditContent) { DARABONBA_PTR_SET_VALUE(auditContent_, auditContent) };


  protected:
    // The review results. You can specify the results for a maximum of 20 videos at a time. The value must be converted to a string. For more information about the parameters in AuditContent, see the "AuditContent" section of this topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> auditContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
