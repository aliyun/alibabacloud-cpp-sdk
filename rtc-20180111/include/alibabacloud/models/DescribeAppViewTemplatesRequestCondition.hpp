// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPVIEWTEMPLATESREQUESTCONDITION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPVIEWTEMPLATESREQUESTCONDITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAppViewTemplatesRequestCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppViewTemplatesRequestCondition& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppViewTemplatesRequestCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeAppViewTemplatesRequestCondition() = default ;
    DescribeAppViewTemplatesRequestCondition(const DescribeAppViewTemplatesRequestCondition &) = default ;
    DescribeAppViewTemplatesRequestCondition(DescribeAppViewTemplatesRequestCondition &&) = default ;
    DescribeAppViewTemplatesRequestCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppViewTemplatesRequestCondition() = default ;
    DescribeAppViewTemplatesRequestCondition& operator=(const DescribeAppViewTemplatesRequestCondition &) = default ;
    DescribeAppViewTemplatesRequestCondition& operator=(DescribeAppViewTemplatesRequestCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->templateId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAppViewTemplatesRequestCondition& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeAppViewTemplatesRequestCondition& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
