// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSKILLGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSKILLGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class AddSkillGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSkillGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OuterDepartmentId, outerDepartmentId_);
      DARABONBA_PTR_TO_JSON(OuterDepartmentType, outerDepartmentType_);
      DARABONBA_PTR_TO_JSON(OuterGroupId, outerGroupId_);
      DARABONBA_PTR_TO_JSON(OuterGroupName, outerGroupName_);
      DARABONBA_PTR_TO_JSON(OuterGroupType, outerGroupType_);
    };
    friend void from_json(const Darabonba::Json& j, AddSkillGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OuterDepartmentId, outerDepartmentId_);
      DARABONBA_PTR_FROM_JSON(OuterDepartmentType, outerDepartmentType_);
      DARABONBA_PTR_FROM_JSON(OuterGroupId, outerGroupId_);
      DARABONBA_PTR_FROM_JSON(OuterGroupName, outerGroupName_);
      DARABONBA_PTR_FROM_JSON(OuterGroupType, outerGroupType_);
    };
    AddSkillGroupRequest() = default ;
    AddSkillGroupRequest(const AddSkillGroupRequest &) = default ;
    AddSkillGroupRequest(AddSkillGroupRequest &&) = default ;
    AddSkillGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSkillGroupRequest() = default ;
    AddSkillGroupRequest& operator=(const AddSkillGroupRequest &) = default ;
    AddSkillGroupRequest& operator=(AddSkillGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outerDepartmentId_ != nullptr
        && this->outerDepartmentType_ != nullptr && this->outerGroupId_ != nullptr && this->outerGroupName_ != nullptr && this->outerGroupType_ != nullptr; };
    // outerDepartmentId Field Functions 
    bool hasOuterDepartmentId() const { return this->outerDepartmentId_ != nullptr;};
    void deleteOuterDepartmentId() { this->outerDepartmentId_ = nullptr;};
    inline string outerDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(outerDepartmentId_, "") };
    inline AddSkillGroupRequest& setOuterDepartmentId(string outerDepartmentId) { DARABONBA_PTR_SET_VALUE(outerDepartmentId_, outerDepartmentId) };


    // outerDepartmentType Field Functions 
    bool hasOuterDepartmentType() const { return this->outerDepartmentType_ != nullptr;};
    void deleteOuterDepartmentType() { this->outerDepartmentType_ = nullptr;};
    inline string outerDepartmentType() const { DARABONBA_PTR_GET_DEFAULT(outerDepartmentType_, "") };
    inline AddSkillGroupRequest& setOuterDepartmentType(string outerDepartmentType) { DARABONBA_PTR_SET_VALUE(outerDepartmentType_, outerDepartmentType) };


    // outerGroupId Field Functions 
    bool hasOuterGroupId() const { return this->outerGroupId_ != nullptr;};
    void deleteOuterGroupId() { this->outerGroupId_ = nullptr;};
    inline string outerGroupId() const { DARABONBA_PTR_GET_DEFAULT(outerGroupId_, "") };
    inline AddSkillGroupRequest& setOuterGroupId(string outerGroupId) { DARABONBA_PTR_SET_VALUE(outerGroupId_, outerGroupId) };


    // outerGroupName Field Functions 
    bool hasOuterGroupName() const { return this->outerGroupName_ != nullptr;};
    void deleteOuterGroupName() { this->outerGroupName_ = nullptr;};
    inline string outerGroupName() const { DARABONBA_PTR_GET_DEFAULT(outerGroupName_, "") };
    inline AddSkillGroupRequest& setOuterGroupName(string outerGroupName) { DARABONBA_PTR_SET_VALUE(outerGroupName_, outerGroupName) };


    // outerGroupType Field Functions 
    bool hasOuterGroupType() const { return this->outerGroupType_ != nullptr;};
    void deleteOuterGroupType() { this->outerGroupType_ = nullptr;};
    inline string outerGroupType() const { DARABONBA_PTR_GET_DEFAULT(outerGroupType_, "") };
    inline AddSkillGroupRequest& setOuterGroupType(string outerGroupType) { DARABONBA_PTR_SET_VALUE(outerGroupType_, outerGroupType) };


  protected:
    std::shared_ptr<string> outerDepartmentId_ = nullptr;
    std::shared_ptr<string> outerDepartmentType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outerGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outerGroupName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outerGroupType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
