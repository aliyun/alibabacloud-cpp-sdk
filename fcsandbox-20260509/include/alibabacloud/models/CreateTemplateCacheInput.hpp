// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATECACHEINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATECACHEINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class CreateTemplateCacheInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateCacheInput& obj) { 
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(templateID, templateID_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateCacheInput& obj) { 
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(templateID, templateID_);
    };
    CreateTemplateCacheInput() = default ;
    CreateTemplateCacheInput(const CreateTemplateCacheInput &) = default ;
    CreateTemplateCacheInput(CreateTemplateCacheInput &&) = default ;
    CreateTemplateCacheInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateCacheInput() = default ;
    CreateTemplateCacheInput& operator=(const CreateTemplateCacheInput &) = default ;
    CreateTemplateCacheInput& operator=(CreateTemplateCacheInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->teamID_ == nullptr
        && this->templateID_ == nullptr; };
    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline CreateTemplateCacheInput& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // templateID Field Functions 
    bool hasTemplateID() const { return this->templateID_ != nullptr;};
    void deleteTemplateID() { this->templateID_ = nullptr;};
    inline string getTemplateID() const { DARABONBA_PTR_GET_DEFAULT(templateID_, "") };
    inline CreateTemplateCacheInput& setTemplateID(string templateID) { DARABONBA_PTR_SET_VALUE(templateID_, templateID) };


  protected:
    // The team ID.
    shared_ptr<string> teamID_ {};
    // The unique identifier of the template.
    shared_ptr<string> templateID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
