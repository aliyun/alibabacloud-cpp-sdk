// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDNUMBERSTOSKILLGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDNUMBERSTOSKILLGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class AddNumbersToSkillGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddNumbersToSkillGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstNumberGroupIdList, instNumberGroupIdList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NumberList, numberList_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AddNumbersToSkillGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstNumberGroupIdList, instNumberGroupIdList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NumberList, numberList_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
    };
    AddNumbersToSkillGroupRequest() = default ;
    AddNumbersToSkillGroupRequest(const AddNumbersToSkillGroupRequest &) = default ;
    AddNumbersToSkillGroupRequest(AddNumbersToSkillGroupRequest &&) = default ;
    AddNumbersToSkillGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddNumbersToSkillGroupRequest() = default ;
    AddNumbersToSkillGroupRequest& operator=(const AddNumbersToSkillGroupRequest &) = default ;
    AddNumbersToSkillGroupRequest& operator=(AddNumbersToSkillGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instNumberGroupIdList_ != nullptr
        && this->instanceId_ != nullptr && this->numberList_ != nullptr && this->skillGroupId_ != nullptr; };
    // instNumberGroupIdList Field Functions 
    bool hasInstNumberGroupIdList() const { return this->instNumberGroupIdList_ != nullptr;};
    void deleteInstNumberGroupIdList() { this->instNumberGroupIdList_ = nullptr;};
    inline string instNumberGroupIdList() const { DARABONBA_PTR_GET_DEFAULT(instNumberGroupIdList_, "") };
    inline AddNumbersToSkillGroupRequest& setInstNumberGroupIdList(string instNumberGroupIdList) { DARABONBA_PTR_SET_VALUE(instNumberGroupIdList_, instNumberGroupIdList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddNumbersToSkillGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // numberList Field Functions 
    bool hasNumberList() const { return this->numberList_ != nullptr;};
    void deleteNumberList() { this->numberList_ = nullptr;};
    inline string numberList() const { DARABONBA_PTR_GET_DEFAULT(numberList_, "") };
    inline AddNumbersToSkillGroupRequest& setNumberList(string numberList) { DARABONBA_PTR_SET_VALUE(numberList_, numberList) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline AddNumbersToSkillGroupRequest& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


  protected:
    std::shared_ptr<string> instNumberGroupIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> numberList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> skillGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
