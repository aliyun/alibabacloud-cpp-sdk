// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLARCLAWSKILLTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLARCLAWSKILLTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreatePolarClawSkillTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolarClawSkillTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillTemplateId, skillTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolarClawSkillTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillTemplateId, skillTemplateId_);
    };
    CreatePolarClawSkillTemplateResponseBody() = default ;
    CreatePolarClawSkillTemplateResponseBody(const CreatePolarClawSkillTemplateResponseBody &) = default ;
    CreatePolarClawSkillTemplateResponseBody(CreatePolarClawSkillTemplateResponseBody &&) = default ;
    CreatePolarClawSkillTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolarClawSkillTemplateResponseBody() = default ;
    CreatePolarClawSkillTemplateResponseBody& operator=(const CreatePolarClawSkillTemplateResponseBody &) = default ;
    CreatePolarClawSkillTemplateResponseBody& operator=(CreatePolarClawSkillTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->skillTemplateId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePolarClawSkillTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillTemplateId Field Functions 
    bool hasSkillTemplateId() const { return this->skillTemplateId_ != nullptr;};
    void deleteSkillTemplateId() { this->skillTemplateId_ = nullptr;};
    inline string getSkillTemplateId() const { DARABONBA_PTR_GET_DEFAULT(skillTemplateId_, "") };
    inline CreatePolarClawSkillTemplateResponseBody& setSkillTemplateId(string skillTemplateId) { DARABONBA_PTR_SET_VALUE(skillTemplateId_, skillTemplateId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The skill template ID.
    shared_ptr<string> skillTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
