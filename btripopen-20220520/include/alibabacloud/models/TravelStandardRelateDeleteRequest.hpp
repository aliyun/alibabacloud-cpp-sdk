// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDRELATEDELETEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDRELATEDELETEREQUEST_HPP_
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
  class TravelStandardRelateDeleteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardRelateDeleteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(from_group, fromGroup_);
      DARABONBA_PTR_TO_JSON(remove_list, removeList_);
      DARABONBA_PTR_TO_JSON(rule_id, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardRelateDeleteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(from_group, fromGroup_);
      DARABONBA_PTR_FROM_JSON(remove_list, removeList_);
      DARABONBA_PTR_FROM_JSON(rule_id, ruleId_);
    };
    TravelStandardRelateDeleteRequest() = default ;
    TravelStandardRelateDeleteRequest(const TravelStandardRelateDeleteRequest &) = default ;
    TravelStandardRelateDeleteRequest(TravelStandardRelateDeleteRequest &&) = default ;
    TravelStandardRelateDeleteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardRelateDeleteRequest() = default ;
    TravelStandardRelateDeleteRequest& operator=(const TravelStandardRelateDeleteRequest &) = default ;
    TravelStandardRelateDeleteRequest& operator=(TravelStandardRelateDeleteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RemoveList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemoveList& obj) { 
        DARABONBA_PTR_TO_JSON(entity_id, entityId_);
        DARABONBA_PTR_TO_JSON(entity_type, entityType_);
      };
      friend void from_json(const Darabonba::Json& j, RemoveList& obj) { 
        DARABONBA_PTR_FROM_JSON(entity_id, entityId_);
        DARABONBA_PTR_FROM_JSON(entity_type, entityType_);
      };
      RemoveList() = default ;
      RemoveList(const RemoveList &) = default ;
      RemoveList(RemoveList &&) = default ;
      RemoveList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemoveList() = default ;
      RemoveList& operator=(const RemoveList &) = default ;
      RemoveList& operator=(RemoveList &&) = default ;
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
      inline RemoveList& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
      inline RemoveList& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    protected:
      // This parameter is required.
      shared_ptr<string> entityId_ {};
      // This parameter is required.
      shared_ptr<string> entityType_ {};
    };

    virtual bool empty() const override { return this->fromGroup_ == nullptr
        && this->removeList_ == nullptr && this->ruleId_ == nullptr; };
    // fromGroup Field Functions 
    bool hasFromGroup() const { return this->fromGroup_ != nullptr;};
    void deleteFromGroup() { this->fromGroup_ = nullptr;};
    inline bool getFromGroup() const { DARABONBA_PTR_GET_DEFAULT(fromGroup_, false) };
    inline TravelStandardRelateDeleteRequest& setFromGroup(bool fromGroup) { DARABONBA_PTR_SET_VALUE(fromGroup_, fromGroup) };


    // removeList Field Functions 
    bool hasRemoveList() const { return this->removeList_ != nullptr;};
    void deleteRemoveList() { this->removeList_ = nullptr;};
    inline const vector<TravelStandardRelateDeleteRequest::RemoveList> & getRemoveList() const { DARABONBA_PTR_GET_CONST(removeList_, vector<TravelStandardRelateDeleteRequest::RemoveList>) };
    inline vector<TravelStandardRelateDeleteRequest::RemoveList> getRemoveList() { DARABONBA_PTR_GET(removeList_, vector<TravelStandardRelateDeleteRequest::RemoveList>) };
    inline TravelStandardRelateDeleteRequest& setRemoveList(const vector<TravelStandardRelateDeleteRequest::RemoveList> & removeList) { DARABONBA_PTR_SET_VALUE(removeList_, removeList) };
    inline TravelStandardRelateDeleteRequest& setRemoveList(vector<TravelStandardRelateDeleteRequest::RemoveList> && removeList) { DARABONBA_PTR_SET_RVALUE(removeList_, removeList) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline TravelStandardRelateDeleteRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    shared_ptr<bool> fromGroup_ {};
    shared_ptr<vector<TravelStandardRelateDeleteRequest::RemoveList>> removeList_ {};
    // This parameter is required.
    shared_ptr<int64_t> ruleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
