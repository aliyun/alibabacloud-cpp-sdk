// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESKILLGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESKILLGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class DeleteSkillGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSkillGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OuterGroupId, outerGroupId_);
      DARABONBA_PTR_TO_JSON(OuterGroupType, outerGroupType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSkillGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OuterGroupId, outerGroupId_);
      DARABONBA_PTR_FROM_JSON(OuterGroupType, outerGroupType_);
    };
    DeleteSkillGroupRequest() = default ;
    DeleteSkillGroupRequest(const DeleteSkillGroupRequest &) = default ;
    DeleteSkillGroupRequest(DeleteSkillGroupRequest &&) = default ;
    DeleteSkillGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSkillGroupRequest() = default ;
    DeleteSkillGroupRequest& operator=(const DeleteSkillGroupRequest &) = default ;
    DeleteSkillGroupRequest& operator=(DeleteSkillGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outerGroupId_ == nullptr
        && this->outerGroupType_ == nullptr; };
    // outerGroupId Field Functions 
    bool hasOuterGroupId() const { return this->outerGroupId_ != nullptr;};
    void deleteOuterGroupId() { this->outerGroupId_ = nullptr;};
    inline string getOuterGroupId() const { DARABONBA_PTR_GET_DEFAULT(outerGroupId_, "") };
    inline DeleteSkillGroupRequest& setOuterGroupId(string outerGroupId) { DARABONBA_PTR_SET_VALUE(outerGroupId_, outerGroupId) };


    // outerGroupType Field Functions 
    bool hasOuterGroupType() const { return this->outerGroupType_ != nullptr;};
    void deleteOuterGroupType() { this->outerGroupType_ = nullptr;};
    inline string getOuterGroupType() const { DARABONBA_PTR_GET_DEFAULT(outerGroupType_, "") };
    inline DeleteSkillGroupRequest& setOuterGroupType(string outerGroupType) { DARABONBA_PTR_SET_VALUE(outerGroupType_, outerGroupType) };


  protected:
    shared_ptr<string> outerGroupId_ {};
    shared_ptr<string> outerGroupType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
