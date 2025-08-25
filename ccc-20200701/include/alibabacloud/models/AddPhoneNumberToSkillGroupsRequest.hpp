// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPHONENUMBERTOSKILLGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPHONENUMBERTOSKILLGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class AddPhoneNumberToSkillGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPhoneNumberToSkillGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(SkillGroupIdList, skillGroupIdList_);
    };
    friend void from_json(const Darabonba::Json& j, AddPhoneNumberToSkillGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(SkillGroupIdList, skillGroupIdList_);
    };
    AddPhoneNumberToSkillGroupsRequest() = default ;
    AddPhoneNumberToSkillGroupsRequest(const AddPhoneNumberToSkillGroupsRequest &) = default ;
    AddPhoneNumberToSkillGroupsRequest(AddPhoneNumberToSkillGroupsRequest &&) = default ;
    AddPhoneNumberToSkillGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPhoneNumberToSkillGroupsRequest() = default ;
    AddPhoneNumberToSkillGroupsRequest& operator=(const AddPhoneNumberToSkillGroupsRequest &) = default ;
    AddPhoneNumberToSkillGroupsRequest& operator=(AddPhoneNumberToSkillGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->number_ != nullptr && this->skillGroupIdList_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddPhoneNumberToSkillGroupsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline AddPhoneNumberToSkillGroupsRequest& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // skillGroupIdList Field Functions 
    bool hasSkillGroupIdList() const { return this->skillGroupIdList_ != nullptr;};
    void deleteSkillGroupIdList() { this->skillGroupIdList_ = nullptr;};
    inline string skillGroupIdList() const { DARABONBA_PTR_GET_DEFAULT(skillGroupIdList_, "") };
    inline AddPhoneNumberToSkillGroupsRequest& setSkillGroupIdList(string skillGroupIdList) { DARABONBA_PTR_SET_VALUE(skillGroupIdList_, skillGroupIdList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> number_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> skillGroupIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
