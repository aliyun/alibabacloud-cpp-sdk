// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class Template : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Template& obj) { 
      DARABONBA_PTR_TO_JSON(templateID, templateID_);
      DARABONBA_PTR_TO_JSON(templateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, Template& obj) { 
      DARABONBA_PTR_FROM_JSON(templateID, templateID_);
      DARABONBA_PTR_FROM_JSON(templateVersion, templateVersion_);
    };
    Template() = default ;
    Template(const Template &) = default ;
    Template(Template &&) = default ;
    Template(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Template() = default ;
    Template& operator=(const Template &) = default ;
    Template& operator=(Template &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateID_ == nullptr
        && return this->templateVersion_ == nullptr; };
    // templateID Field Functions 
    bool hasTemplateID() const { return this->templateID_ != nullptr;};
    void deleteTemplateID() { this->templateID_ = nullptr;};
    inline string templateID() const { DARABONBA_PTR_GET_DEFAULT(templateID_, "") };
    inline Template& setTemplateID(string templateID) { DARABONBA_PTR_SET_VALUE(templateID_, templateID) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline Template& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    std::shared_ptr<string> templateID_ = nullptr;
    std::shared_ptr<string> templateVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
