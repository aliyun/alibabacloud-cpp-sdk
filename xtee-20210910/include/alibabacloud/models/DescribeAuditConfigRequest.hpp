// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUDITCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUDITCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAuditConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuditConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(auditRelationType, auditRelationType_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuditConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(auditRelationType, auditRelationType_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribeAuditConfigRequest() = default ;
    DescribeAuditConfigRequest(const DescribeAuditConfigRequest &) = default ;
    DescribeAuditConfigRequest(DescribeAuditConfigRequest &&) = default ;
    DescribeAuditConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuditConfigRequest() = default ;
    DescribeAuditConfigRequest& operator=(const DescribeAuditConfigRequest &) = default ;
    DescribeAuditConfigRequest& operator=(DescribeAuditConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->auditRelationType_ != nullptr && this->regId_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAuditConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // auditRelationType Field Functions 
    bool hasAuditRelationType() const { return this->auditRelationType_ != nullptr;};
    void deleteAuditRelationType() { this->auditRelationType_ = nullptr;};
    inline string auditRelationType() const { DARABONBA_PTR_GET_DEFAULT(auditRelationType_, "") };
    inline DescribeAuditConfigRequest& setAuditRelationType(string auditRelationType) { DARABONBA_PTR_SET_VALUE(auditRelationType_, auditRelationType) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeAuditConfigRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Audit type
    std::shared_ptr<string> auditRelationType_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
