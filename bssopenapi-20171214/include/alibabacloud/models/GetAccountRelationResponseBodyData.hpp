// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTRELATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTRELATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetAccountRelationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountRelationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChildUserId, childUserId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ParentUserId, parentUserId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountRelationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChildUserId, childUserId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ParentUserId, parentUserId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetAccountRelationResponseBodyData() = default ;
    GetAccountRelationResponseBodyData(const GetAccountRelationResponseBodyData &) = default ;
    GetAccountRelationResponseBodyData(GetAccountRelationResponseBodyData &&) = default ;
    GetAccountRelationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountRelationResponseBodyData() = default ;
    GetAccountRelationResponseBodyData& operator=(const GetAccountRelationResponseBodyData &) = default ;
    GetAccountRelationResponseBodyData& operator=(GetAccountRelationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->childUserId_ != nullptr
        && this->endTime_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->parentUserId_ != nullptr && this->startTime_ != nullptr
        && this->status_ != nullptr && this->type_ != nullptr; };
    // childUserId Field Functions 
    bool hasChildUserId() const { return this->childUserId_ != nullptr;};
    void deleteChildUserId() { this->childUserId_ = nullptr;};
    inline int64_t childUserId() const { DARABONBA_PTR_GET_DEFAULT(childUserId_, 0L) };
    inline GetAccountRelationResponseBodyData& setChildUserId(int64_t childUserId) { DARABONBA_PTR_SET_VALUE(childUserId_, childUserId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetAccountRelationResponseBodyData& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline GetAccountRelationResponseBodyData& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetAccountRelationResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // parentUserId Field Functions 
    bool hasParentUserId() const { return this->parentUserId_ != nullptr;};
    void deleteParentUserId() { this->parentUserId_ = nullptr;};
    inline int64_t parentUserId() const { DARABONBA_PTR_GET_DEFAULT(parentUserId_, 0L) };
    inline GetAccountRelationResponseBodyData& setParentUserId(int64_t parentUserId) { DARABONBA_PTR_SET_VALUE(parentUserId_, parentUserId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetAccountRelationResponseBodyData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAccountRelationResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAccountRelationResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the Alibaba Cloud account that is used as a member.
    std::shared_ptr<int64_t> childUserId_ = nullptr;
    // The time when the financial relationship between the management account and the member was terminated.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The time when the financial relationship between the management account and the member was modified.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The ID of the financial relationship.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ID of the Alibaba Cloud account that is used as the management account.
    std::shared_ptr<int64_t> parentUserId_ = nullptr;
    // The time when the financial relationship between the management account and the member was established.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the financial relationship between the management account and the member.
    // 
    // - RELATED [Association established]
    // - CONFIRMING [To be confirmed by the other party]
    // - REJECTED [Refused by the other party]
    // - CONNECTION_CANCELED [Financial sub-account cancel request]
    // - CONNECTION_MASTER_CANCEL [Financial master account cancel invitation]
    // - CHANGE_CONFIRMING [Relationship change to be confirmed]
    // - INITIAL [Initial new relationship status]
    std::shared_ptr<string> status_ = nullptr;
    // The type of the financial relationship.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
