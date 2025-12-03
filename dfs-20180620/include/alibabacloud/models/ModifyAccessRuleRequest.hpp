// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCESSRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCESSRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ModifyAccessRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccessRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupId, accessGroupId_);
      DARABONBA_PTR_TO_JSON(AccessRuleId, accessRuleId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RWAccessType, RWAccessType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccessRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupId, accessGroupId_);
      DARABONBA_PTR_FROM_JSON(AccessRuleId, accessRuleId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RWAccessType, RWAccessType_);
    };
    ModifyAccessRuleRequest() = default ;
    ModifyAccessRuleRequest(const ModifyAccessRuleRequest &) = default ;
    ModifyAccessRuleRequest(ModifyAccessRuleRequest &&) = default ;
    ModifyAccessRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccessRuleRequest() = default ;
    ModifyAccessRuleRequest& operator=(const ModifyAccessRuleRequest &) = default ;
    ModifyAccessRuleRequest& operator=(ModifyAccessRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroupId_ == nullptr
        && return this->accessRuleId_ == nullptr && return this->description_ == nullptr && return this->inputRegionId_ == nullptr && return this->priority_ == nullptr && return this->RWAccessType_ == nullptr; };
    // accessGroupId Field Functions 
    bool hasAccessGroupId() const { return this->accessGroupId_ != nullptr;};
    void deleteAccessGroupId() { this->accessGroupId_ = nullptr;};
    inline string accessGroupId() const { DARABONBA_PTR_GET_DEFAULT(accessGroupId_, "") };
    inline ModifyAccessRuleRequest& setAccessGroupId(string accessGroupId) { DARABONBA_PTR_SET_VALUE(accessGroupId_, accessGroupId) };


    // accessRuleId Field Functions 
    bool hasAccessRuleId() const { return this->accessRuleId_ != nullptr;};
    void deleteAccessRuleId() { this->accessRuleId_ = nullptr;};
    inline string accessRuleId() const { DARABONBA_PTR_GET_DEFAULT(accessRuleId_, "") };
    inline ModifyAccessRuleRequest& setAccessRuleId(string accessRuleId) { DARABONBA_PTR_SET_VALUE(accessRuleId_, accessRuleId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyAccessRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline ModifyAccessRuleRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ModifyAccessRuleRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // RWAccessType Field Functions 
    bool hasRWAccessType() const { return this->RWAccessType_ != nullptr;};
    void deleteRWAccessType() { this->RWAccessType_ = nullptr;};
    inline string RWAccessType() const { DARABONBA_PTR_GET_DEFAULT(RWAccessType_, "") };
    inline ModifyAccessRuleRequest& setRWAccessType(string RWAccessType) { DARABONBA_PTR_SET_VALUE(RWAccessType_, RWAccessType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> accessGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> accessRuleId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> RWAccessType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
