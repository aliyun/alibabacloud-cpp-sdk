// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLWHITELISTTEMPLATERESPONSEBODYDATATEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLWHITELISTTEMPLATERESPONSEBODYDATATEMPLATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAllWhitelistTemplateResponseBodyDataTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllWhitelistTemplateResponseBodyDataTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllWhitelistTemplateResponseBodyDataTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeAllWhitelistTemplateResponseBodyDataTemplates() = default ;
    DescribeAllWhitelistTemplateResponseBodyDataTemplates(const DescribeAllWhitelistTemplateResponseBodyDataTemplates &) = default ;
    DescribeAllWhitelistTemplateResponseBodyDataTemplates(DescribeAllWhitelistTemplateResponseBodyDataTemplates &&) = default ;
    DescribeAllWhitelistTemplateResponseBodyDataTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllWhitelistTemplateResponseBodyDataTemplates() = default ;
    DescribeAllWhitelistTemplateResponseBodyDataTemplates& operator=(const DescribeAllWhitelistTemplateResponseBodyDataTemplates &) = default ;
    DescribeAllWhitelistTemplateResponseBodyDataTemplates& operator=(DescribeAllWhitelistTemplateResponseBodyDataTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->ips_ == nullptr && return this->templateId_ == nullptr && return this->templateName_ == nullptr && return this->userId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DescribeAllWhitelistTemplateResponseBodyDataTemplates& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline string ips() const { DARABONBA_PTR_GET_DEFAULT(ips_, "") };
    inline DescribeAllWhitelistTemplateResponseBodyDataTemplates& setIps(string ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int32_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0) };
    inline DescribeAllWhitelistTemplateResponseBodyDataTemplates& setTemplateId(int32_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DescribeAllWhitelistTemplateResponseBodyDataTemplates& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int32_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0) };
    inline DescribeAllWhitelistTemplateResponseBodyDataTemplates& setUserId(int32_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The primary key of the data table.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The IP addresses.
    std::shared_ptr<string> ips_ = nullptr;
    // The ID of the whitelist template.
    std::shared_ptr<int32_t> templateId_ = nullptr;
    // The name of the whitelist template.
    std::shared_ptr<string> templateName_ = nullptr;
    // The user ID.
    std::shared_ptr<int32_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
