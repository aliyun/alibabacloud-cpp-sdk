// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECOSTCENTERSHARERULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVECOSTCENTERSHARERULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class SaveCostCenterShareRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveCostCenterShareRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateShareRuleList, createShareRuleListShrink_);
      DARABONBA_PTR_TO_JSON(ModifyShareRuleList, modifyShareRuleListShrink_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
      DARABONBA_PTR_TO_JSON(RemoveShareRuleList, removeShareRuleListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SaveCostCenterShareRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateShareRuleList, createShareRuleListShrink_);
      DARABONBA_PTR_FROM_JSON(ModifyShareRuleList, modifyShareRuleListShrink_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
      DARABONBA_PTR_FROM_JSON(RemoveShareRuleList, removeShareRuleListShrink_);
    };
    SaveCostCenterShareRuleShrinkRequest() = default ;
    SaveCostCenterShareRuleShrinkRequest(const SaveCostCenterShareRuleShrinkRequest &) = default ;
    SaveCostCenterShareRuleShrinkRequest(SaveCostCenterShareRuleShrinkRequest &&) = default ;
    SaveCostCenterShareRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveCostCenterShareRuleShrinkRequest() = default ;
    SaveCostCenterShareRuleShrinkRequest& operator=(const SaveCostCenterShareRuleShrinkRequest &) = default ;
    SaveCostCenterShareRuleShrinkRequest& operator=(SaveCostCenterShareRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createShareRuleListShrink_ == nullptr
        && this->modifyShareRuleListShrink_ == nullptr && this->nbid_ == nullptr && this->ownerAccountId_ == nullptr && this->removeShareRuleListShrink_ == nullptr; };
    // createShareRuleListShrink Field Functions 
    bool hasCreateShareRuleListShrink() const { return this->createShareRuleListShrink_ != nullptr;};
    void deleteCreateShareRuleListShrink() { this->createShareRuleListShrink_ = nullptr;};
    inline string getCreateShareRuleListShrink() const { DARABONBA_PTR_GET_DEFAULT(createShareRuleListShrink_, "") };
    inline SaveCostCenterShareRuleShrinkRequest& setCreateShareRuleListShrink(string createShareRuleListShrink) { DARABONBA_PTR_SET_VALUE(createShareRuleListShrink_, createShareRuleListShrink) };


    // modifyShareRuleListShrink Field Functions 
    bool hasModifyShareRuleListShrink() const { return this->modifyShareRuleListShrink_ != nullptr;};
    void deleteModifyShareRuleListShrink() { this->modifyShareRuleListShrink_ = nullptr;};
    inline string getModifyShareRuleListShrink() const { DARABONBA_PTR_GET_DEFAULT(modifyShareRuleListShrink_, "") };
    inline SaveCostCenterShareRuleShrinkRequest& setModifyShareRuleListShrink(string modifyShareRuleListShrink) { DARABONBA_PTR_SET_VALUE(modifyShareRuleListShrink_, modifyShareRuleListShrink) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline SaveCostCenterShareRuleShrinkRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // ownerAccountId Field Functions 
    bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
    void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
    inline int64_t getOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
    inline SaveCostCenterShareRuleShrinkRequest& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


    // removeShareRuleListShrink Field Functions 
    bool hasRemoveShareRuleListShrink() const { return this->removeShareRuleListShrink_ != nullptr;};
    void deleteRemoveShareRuleListShrink() { this->removeShareRuleListShrink_ = nullptr;};
    inline string getRemoveShareRuleListShrink() const { DARABONBA_PTR_GET_DEFAULT(removeShareRuleListShrink_, "") };
    inline SaveCostCenterShareRuleShrinkRequest& setRemoveShareRuleListShrink(string removeShareRuleListShrink) { DARABONBA_PTR_SET_VALUE(removeShareRuleListShrink_, removeShareRuleListShrink) };


  protected:
    shared_ptr<string> createShareRuleListShrink_ {};
    shared_ptr<string> modifyShareRuleListShrink_ {};
    shared_ptr<string> nbid_ {};
    shared_ptr<int64_t> ownerAccountId_ {};
    shared_ptr<string> removeShareRuleListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
