// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLARCLAWSKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLARCLAWSKILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreatePolarClawSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolarClawSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsUpdate, isUpdate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillName, skillName_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolarClawSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsUpdate, isUpdate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
    };
    CreatePolarClawSkillResponseBody() = default ;
    CreatePolarClawSkillResponseBody(const CreatePolarClawSkillResponseBody &) = default ;
    CreatePolarClawSkillResponseBody(CreatePolarClawSkillResponseBody &&) = default ;
    CreatePolarClawSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolarClawSkillResponseBody() = default ;
    CreatePolarClawSkillResponseBody& operator=(const CreatePolarClawSkillResponseBody &) = default ;
    CreatePolarClawSkillResponseBody& operator=(CreatePolarClawSkillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isUpdate_ == nullptr
        && this->requestId_ == nullptr && this->skillName_ == nullptr; };
    // isUpdate Field Functions 
    bool hasIsUpdate() const { return this->isUpdate_ != nullptr;};
    void deleteIsUpdate() { this->isUpdate_ = nullptr;};
    inline string getIsUpdate() const { DARABONBA_PTR_GET_DEFAULT(isUpdate_, "") };
    inline CreatePolarClawSkillResponseBody& setIsUpdate(string isUpdate) { DARABONBA_PTR_SET_VALUE(isUpdate_, isUpdate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePolarClawSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline CreatePolarClawSkillResponseBody& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


  protected:
    shared_ptr<string> isUpdate_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> skillName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
