// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPRECORDTEMPLATESREQUESTCONDITION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPRECORDTEMPLATESREQUESTCONDITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAppRecordTemplatesRequestCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppRecordTemplatesRequestCondition& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppRecordTemplatesRequestCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeAppRecordTemplatesRequestCondition() = default ;
    DescribeAppRecordTemplatesRequestCondition(const DescribeAppRecordTemplatesRequestCondition &) = default ;
    DescribeAppRecordTemplatesRequestCondition(DescribeAppRecordTemplatesRequestCondition &&) = default ;
    DescribeAppRecordTemplatesRequestCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppRecordTemplatesRequestCondition() = default ;
    DescribeAppRecordTemplatesRequestCondition& operator=(const DescribeAppRecordTemplatesRequestCondition &) = default ;
    DescribeAppRecordTemplatesRequestCondition& operator=(DescribeAppRecordTemplatesRequestCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->templateId_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAppRecordTemplatesRequestCondition& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeAppRecordTemplatesRequestCondition& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
