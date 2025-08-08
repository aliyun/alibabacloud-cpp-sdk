// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKSPEC_HPP_
#define ALIBABACLOUD_MODELS_TASKSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class TaskSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskSpec& obj) { 
      DARABONBA_PTR_TO_JSON(context, context_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, TaskSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(context, context_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
    };
    TaskSpec() = default ;
    TaskSpec(const TaskSpec &) = default ;
    TaskSpec(TaskSpec &&) = default ;
    TaskSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskSpec() = default ;
    TaskSpec& operator=(const TaskSpec &) = default ;
    TaskSpec& operator=(TaskSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->context_ != nullptr
        && this->templateName_ != nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const Context & context() const { DARABONBA_PTR_GET_CONST(context_, Context) };
    inline Context context() { DARABONBA_PTR_GET(context_, Context) };
    inline TaskSpec& setContext(const Context & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline TaskSpec& setContext(Context && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline TaskSpec& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    std::shared_ptr<Context> context_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
