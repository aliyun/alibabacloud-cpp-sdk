// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDCDNWAFGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDCDNWAFGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class CreateDcdnWafGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDcdnWafGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Subscribe, subscribe_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDcdnWafGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Subscribe, subscribe_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    CreateDcdnWafGroupRequest() = default ;
    CreateDcdnWafGroupRequest(const CreateDcdnWafGroupRequest &) = default ;
    CreateDcdnWafGroupRequest(CreateDcdnWafGroupRequest &&) = default ;
    CreateDcdnWafGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDcdnWafGroupRequest() = default ;
    CreateDcdnWafGroupRequest& operator=(const CreateDcdnWafGroupRequest &) = default ;
    CreateDcdnWafGroupRequest& operator=(CreateDcdnWafGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->subscribe_ == nullptr && this->templateId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDcdnWafGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // subscribe Field Functions 
    bool hasSubscribe() const { return this->subscribe_ != nullptr;};
    void deleteSubscribe() { this->subscribe_ = nullptr;};
    inline string getSubscribe() const { DARABONBA_PTR_GET_DEFAULT(subscribe_, "") };
    inline CreateDcdnWafGroupRequest& setSubscribe(string subscribe) { DARABONBA_PTR_SET_VALUE(subscribe_, subscribe) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline CreateDcdnWafGroupRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The name of the WAF rule group. The name can be up to 128 characters in length. This parameter is required when you create a custom WAF rule group.
    shared_ptr<string> name_ {};
    // Specifies whether to enable subscription. Valid values:
    // 
    // *   **on**
    // *   **off**
    // 
    // When you replicate a custom rule group, do not specify this parameter.
    shared_ptr<string> subscribe_ {};
    // The ID of the rule group to be replicated. This parameter is required when you replicate a custom WAF rule group. You can call the [DescribeDcdnWafGroups](~~DescribeDcdnWafGroups~~) operation to query the ID of the rule group. If no template is used, set the value to 0 or do not specify this parameter.
    shared_ptr<int64_t> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
