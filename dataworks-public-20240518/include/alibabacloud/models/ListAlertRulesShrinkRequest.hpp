// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTRULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTRULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListAlertRulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertRulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Receiver, receiver_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIdsShrink_);
      DARABONBA_PTR_TO_JSON(Types, typesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertRulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Receiver, receiver_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Types, typesShrink_);
    };
    ListAlertRulesShrinkRequest() = default ;
    ListAlertRulesShrinkRequest(const ListAlertRulesShrinkRequest &) = default ;
    ListAlertRulesShrinkRequest(ListAlertRulesShrinkRequest &&) = default ;
    ListAlertRulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertRulesShrinkRequest() = default ;
    ListAlertRulesShrinkRequest& operator=(const ListAlertRulesShrinkRequest &) = default ;
    ListAlertRulesShrinkRequest& operator=(ListAlertRulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->owner_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->receiver_ == nullptr && this->taskIdsShrink_ == nullptr
        && this->typesShrink_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAlertRulesShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListAlertRulesShrinkRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAlertRulesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAlertRulesShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // receiver Field Functions 
    bool hasReceiver() const { return this->receiver_ != nullptr;};
    void deleteReceiver() { this->receiver_ = nullptr;};
    inline string getReceiver() const { DARABONBA_PTR_GET_DEFAULT(receiver_, "") };
    inline ListAlertRulesShrinkRequest& setReceiver(string receiver) { DARABONBA_PTR_SET_VALUE(receiver_, receiver) };


    // taskIdsShrink Field Functions 
    bool hasTaskIdsShrink() const { return this->taskIdsShrink_ != nullptr;};
    void deleteTaskIdsShrink() { this->taskIdsShrink_ = nullptr;};
    inline string getTaskIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(taskIdsShrink_, "") };
    inline ListAlertRulesShrinkRequest& setTaskIdsShrink(string taskIdsShrink) { DARABONBA_PTR_SET_VALUE(taskIdsShrink_, taskIdsShrink) };


    // typesShrink Field Functions 
    bool hasTypesShrink() const { return this->typesShrink_ != nullptr;};
    void deleteTypesShrink() { this->typesShrink_ = nullptr;};
    inline string getTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(typesShrink_, "") };
    inline ListAlertRulesShrinkRequest& setTypesShrink(string typesShrink) { DARABONBA_PTR_SET_VALUE(typesShrink_, typesShrink) };


  protected:
    // The name of the rule.
    shared_ptr<string> name_ {};
    // The ID of the Alibaba Cloud account used by the owner of the rule.
    shared_ptr<string> owner_ {};
    // The page number. Pages start from page 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Maximum value: 100.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the Alibaba Cloud account used by the alert recipient.
    shared_ptr<string> receiver_ {};
    // The IDs of the scheduling tasks.
    shared_ptr<string> taskIdsShrink_ {};
    // The alert triggering condition.
    shared_ptr<string> typesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
