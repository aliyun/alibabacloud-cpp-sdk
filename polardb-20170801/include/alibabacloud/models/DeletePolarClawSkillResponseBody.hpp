// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLARCLAWSKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLARCLAWSKILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeletePolarClawSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolarClawSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillName, skillName_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolarClawSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
    };
    DeletePolarClawSkillResponseBody() = default ;
    DeletePolarClawSkillResponseBody(const DeletePolarClawSkillResponseBody &) = default ;
    DeletePolarClawSkillResponseBody(DeletePolarClawSkillResponseBody &&) = default ;
    DeletePolarClawSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolarClawSkillResponseBody() = default ;
    DeletePolarClawSkillResponseBody& operator=(const DeletePolarClawSkillResponseBody &) = default ;
    DeletePolarClawSkillResponseBody& operator=(DeletePolarClawSkillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->skillName_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeletePolarClawSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline DeletePolarClawSkillResponseBody& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The name of the skill.
    shared_ptr<string> skillName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
