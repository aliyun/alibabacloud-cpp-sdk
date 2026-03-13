// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ISVRULESAVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ISVRULESAVEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IsvRuleSaveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IsvRuleSaveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apply_need, applyNeed_);
      DARABONBA_PTR_TO_JSON(book_type, bookType_);
      DARABONBA_PTR_TO_JSON(bookuser_list, bookuserList_);
      DARABONBA_PTR_TO_JSON(rule_need, ruleNeed_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, IsvRuleSaveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_need, applyNeed_);
      DARABONBA_PTR_FROM_JSON(book_type, bookType_);
      DARABONBA_PTR_FROM_JSON(bookuser_list, bookuserList_);
      DARABONBA_PTR_FROM_JSON(rule_need, ruleNeed_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    IsvRuleSaveRequest() = default ;
    IsvRuleSaveRequest(const IsvRuleSaveRequest &) = default ;
    IsvRuleSaveRequest(IsvRuleSaveRequest &&) = default ;
    IsvRuleSaveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IsvRuleSaveRequest() = default ;
    IsvRuleSaveRequest& operator=(const IsvRuleSaveRequest &) = default ;
    IsvRuleSaveRequest& operator=(IsvRuleSaveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BookuserList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BookuserList& obj) { 
        DARABONBA_PTR_TO_JSON(entity_id, entityId_);
        DARABONBA_PTR_TO_JSON(entity_type, entityType_);
      };
      friend void from_json(const Darabonba::Json& j, BookuserList& obj) { 
        DARABONBA_PTR_FROM_JSON(entity_id, entityId_);
        DARABONBA_PTR_FROM_JSON(entity_type, entityType_);
      };
      BookuserList() = default ;
      BookuserList(const BookuserList &) = default ;
      BookuserList(BookuserList &&) = default ;
      BookuserList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BookuserList() = default ;
      BookuserList& operator=(const BookuserList &) = default ;
      BookuserList& operator=(BookuserList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->entityId_ == nullptr
        && this->entityType_ == nullptr; };
      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
      inline BookuserList& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline int32_t getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, 0) };
      inline BookuserList& setEntityType(int32_t entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    protected:
      // This parameter is required.
      shared_ptr<string> entityId_ {};
      // This parameter is required.
      shared_ptr<int32_t> entityType_ {};
    };

    virtual bool empty() const override { return this->applyNeed_ == nullptr
        && this->bookType_ == nullptr && this->bookuserList_ == nullptr && this->ruleNeed_ == nullptr && this->status_ == nullptr && this->userId_ == nullptr; };
    // applyNeed Field Functions 
    bool hasApplyNeed() const { return this->applyNeed_ != nullptr;};
    void deleteApplyNeed() { this->applyNeed_ = nullptr;};
    inline bool getApplyNeed() const { DARABONBA_PTR_GET_DEFAULT(applyNeed_, false) };
    inline IsvRuleSaveRequest& setApplyNeed(bool applyNeed) { DARABONBA_PTR_SET_VALUE(applyNeed_, applyNeed) };


    // bookType Field Functions 
    bool hasBookType() const { return this->bookType_ != nullptr;};
    void deleteBookType() { this->bookType_ = nullptr;};
    inline string getBookType() const { DARABONBA_PTR_GET_DEFAULT(bookType_, "") };
    inline IsvRuleSaveRequest& setBookType(string bookType) { DARABONBA_PTR_SET_VALUE(bookType_, bookType) };


    // bookuserList Field Functions 
    bool hasBookuserList() const { return this->bookuserList_ != nullptr;};
    void deleteBookuserList() { this->bookuserList_ = nullptr;};
    inline const vector<IsvRuleSaveRequest::BookuserList> & getBookuserList() const { DARABONBA_PTR_GET_CONST(bookuserList_, vector<IsvRuleSaveRequest::BookuserList>) };
    inline vector<IsvRuleSaveRequest::BookuserList> getBookuserList() { DARABONBA_PTR_GET(bookuserList_, vector<IsvRuleSaveRequest::BookuserList>) };
    inline IsvRuleSaveRequest& setBookuserList(const vector<IsvRuleSaveRequest::BookuserList> & bookuserList) { DARABONBA_PTR_SET_VALUE(bookuserList_, bookuserList) };
    inline IsvRuleSaveRequest& setBookuserList(vector<IsvRuleSaveRequest::BookuserList> && bookuserList) { DARABONBA_PTR_SET_RVALUE(bookuserList_, bookuserList) };


    // ruleNeed Field Functions 
    bool hasRuleNeed() const { return this->ruleNeed_ != nullptr;};
    void deleteRuleNeed() { this->ruleNeed_ = nullptr;};
    inline bool getRuleNeed() const { DARABONBA_PTR_GET_DEFAULT(ruleNeed_, false) };
    inline IsvRuleSaveRequest& setRuleNeed(bool ruleNeed) { DARABONBA_PTR_SET_VALUE(ruleNeed_, ruleNeed) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline IsvRuleSaveRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IsvRuleSaveRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<bool> applyNeed_ {};
    // This parameter is required.
    shared_ptr<string> bookType_ {};
    shared_ptr<vector<IsvRuleSaveRequest::BookuserList>> bookuserList_ {};
    shared_ptr<bool> ruleNeed_ {};
    // This parameter is required.
    shared_ptr<int32_t> status_ {};
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
