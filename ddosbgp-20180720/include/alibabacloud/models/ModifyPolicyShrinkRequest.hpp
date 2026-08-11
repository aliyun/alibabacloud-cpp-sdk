// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class ModifyPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(Content, contentShrink_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PortVersion, portVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(Content, contentShrink_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PortVersion, portVersion_);
    };
    ModifyPolicyShrinkRequest() = default ;
    ModifyPolicyShrinkRequest(const ModifyPolicyShrinkRequest &) = default ;
    ModifyPolicyShrinkRequest(ModifyPolicyShrinkRequest &&) = default ;
    ModifyPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPolicyShrinkRequest() = default ;
    ModifyPolicyShrinkRequest& operator=(const ModifyPolicyShrinkRequest &) = default ;
    ModifyPolicyShrinkRequest& operator=(ModifyPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && this->contentShrink_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->portVersion_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline int32_t getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, 0) };
    inline ModifyPolicyShrinkRequest& setActionType(int32_t actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // contentShrink Field Functions 
    bool hasContentShrink() const { return this->contentShrink_ != nullptr;};
    void deleteContentShrink() { this->contentShrink_ = nullptr;};
    inline string getContentShrink() const { DARABONBA_PTR_GET_DEFAULT(contentShrink_, "") };
    inline ModifyPolicyShrinkRequest& setContentShrink(string contentShrink) { DARABONBA_PTR_SET_VALUE(contentShrink_, contentShrink) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModifyPolicyShrinkRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyPolicyShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // portVersion Field Functions 
    bool hasPortVersion() const { return this->portVersion_ != nullptr;};
    void deletePortVersion() { this->portVersion_ = nullptr;};
    inline string getPortVersion() const { DARABONBA_PTR_GET_DEFAULT(portVersion_, "") };
    inline ModifyPolicyShrinkRequest& setPortVersion(string portVersion) { DARABONBA_PTR_SET_VALUE(portVersion_, portVersion) };


  protected:
    // The action type.
    // 
    // This parameter is required.
    shared_ptr<int32_t> actionType_ {};
    // The policy content.
    shared_ptr<string> contentShrink_ {};
    // The policy ID.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
    // The policy name.
    shared_ptr<string> name_ {};
    // The version of the port-specific mitigation policy. Valid values:
    shared_ptr<string> portVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
