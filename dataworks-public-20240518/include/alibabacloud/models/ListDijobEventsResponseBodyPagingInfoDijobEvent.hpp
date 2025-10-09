// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIJOBEVENTSRESPONSEBODYPAGINGINFODIJOBEVENT_HPP_
#define ALIBABACLOUD_MODELS_LISTDIJOBEVENTSRESPONSEBODYPAGINGINFODIJOBEVENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIJobEventsResponseBodyPagingInfoDIJobEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIJobEventsResponseBodyPagingInfoDIJobEvent& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(DstSql, dstSql_);
      DARABONBA_PTR_TO_JSON(DstTable, dstTable_);
      DARABONBA_PTR_TO_JSON(FailoverMessage, failoverMessage_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(SrcSql, srcSql_);
      DARABONBA_PTR_TO_JSON(SrcTable, srcTable_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIJobEventsResponseBodyPagingInfoDIJobEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(DstSql, dstSql_);
      DARABONBA_PTR_FROM_JSON(DstTable, dstTable_);
      DARABONBA_PTR_FROM_JSON(FailoverMessage, failoverMessage_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(SrcSql, srcSql_);
      DARABONBA_PTR_FROM_JSON(SrcTable, srcTable_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListDIJobEventsResponseBodyPagingInfoDIJobEvent() = default ;
    ListDIJobEventsResponseBodyPagingInfoDIJobEvent(const ListDIJobEventsResponseBodyPagingInfoDIJobEvent &) = default ;
    ListDIJobEventsResponseBodyPagingInfoDIJobEvent(ListDIJobEventsResponseBodyPagingInfoDIJobEvent &&) = default ;
    ListDIJobEventsResponseBodyPagingInfoDIJobEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIJobEventsResponseBodyPagingInfoDIJobEvent() = default ;
    ListDIJobEventsResponseBodyPagingInfoDIJobEvent& operator=(const ListDIJobEventsResponseBodyPagingInfoDIJobEvent &) = default ;
    ListDIJobEventsResponseBodyPagingInfoDIJobEvent& operator=(ListDIJobEventsResponseBodyPagingInfoDIJobEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->channels_ != nullptr && this->createTime_ != nullptr && this->detail_ != nullptr && this->dstSql_ != nullptr && this->dstTable_ != nullptr
        && this->failoverMessage_ != nullptr && this->id_ != nullptr && this->severity_ != nullptr && this->srcSql_ != nullptr && this->srcTable_ != nullptr
        && this->status_ != nullptr && this->type_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ListDIJobEventsResponseBodyPagingInfoDIJobEvent& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline string channels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
    inline ListDIJobEventsResponseBodyPagingInfoDIJobEvent& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListDIJobEventsResponseBodyPagingInfoDIJobEvent& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline ListDIJobEventsResponseBodyPagingInfoDIJobEvent& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // dstSql Field Functions 
    bool hasDstSql() const { return this->dstSql_ != nullptr;};
    void deleteDstSql() { this->dstSql_ = nullptr;};
    inline string dstSql() const { DARABONBA_PTR_GET_DEFAULT(dstSql_, "") };
    inline ListDIJobEventsResponseBodyPagingInfoDIJobEvent& setDstSql(string dstSql) { DARABONBA_PTR_SET_VALUE(dstSql_, dstSql) };


    // dstTable Field Functions 
    bool hasDstTable() const { return this->dstTable_ != nullptr;};
    void deleteDstTable() { this->dstTable_ = nullptr;};
    inline string dstTable() const { DARABONBA_PTR_GET_DEFAULT(dstTable_, "") };
    inline ListDIJobEventsResponseBodyPagingInfoDIJobEvent& setDstTable(string dstTable) { DARABONBA_PTR_SET_VALUE(dstTable_, dstTable) };


    // failoverMessage Field Functions 
    bool hasFailoverMessage() const { return this->failoverMessage_ != nullptr;};
    void deleteFailoverMessage() { this->failoverMessage_ = nullptr;};
    inline string failoverMessage() const { DARABONBA_PTR_GET_DEFAULT(failoverMessage_, "") };
    inline ListDIJobEventsResponseBodyPagingInfoDIJobEvent& setFailoverMessage(string failoverMessage) { DARABONBA_PTR_SET_VALUE(failoverMessage_, failoverMessage) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListDIJobEventsResponseBodyPagingInfoDIJobEvent& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline ListDIJobEventsResponseBodyPagingInfoDIJobEvent& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // srcSql Field Functions 
    bool hasSrcSql() const { return this->srcSql_ != nullptr;};
    void deleteSrcSql() { this->srcSql_ = nullptr;};
    inline string srcSql() const { DARABONBA_PTR_GET_DEFAULT(srcSql_, "") };
    inline ListDIJobEventsResponseBodyPagingInfoDIJobEvent& setSrcSql(string srcSql) { DARABONBA_PTR_SET_VALUE(srcSql_, srcSql) };


    // srcTable Field Functions 
    bool hasSrcTable() const { return this->srcTable_ != nullptr;};
    void deleteSrcTable() { this->srcTable_ = nullptr;};
    inline string srcTable() const { DARABONBA_PTR_GET_DEFAULT(srcTable_, "") };
    inline ListDIJobEventsResponseBodyPagingInfoDIJobEvent& setSrcTable(string srcTable) { DARABONBA_PTR_SET_VALUE(srcTable_, srcTable) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDIJobEventsResponseBodyPagingInfoDIJobEvent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDIJobEventsResponseBodyPagingInfoDIJobEvent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The processing result of the DDL event. Valid values: Critical, Ignore, Normal, and Warning.
    std::shared_ptr<string> action_ = nullptr;
    // The alert notification method. Valid values: Phone, Mail, Sms, Ding, and Webhook.
    std::shared_ptr<string> channels_ = nullptr;
    // The time when the event was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The alert details.
    std::shared_ptr<string> detail_ = nullptr;
    // The DDL statement of the destination table.
    std::shared_ptr<string> dstSql_ = nullptr;
    // The name of the destination table.
    std::shared_ptr<string> dstTable_ = nullptr;
    // The error logs for failovers.
    std::shared_ptr<string> failoverMessage_ = nullptr;
    // The event ID.
    std::shared_ptr<string> id_ = nullptr;
    // The severity level of the alert. Valid values: Warning and Critical.
    std::shared_ptr<string> severity_ = nullptr;
    // The DDL statement of the source table.
    std::shared_ptr<string> srcSql_ = nullptr;
    // The name of the source table.
    std::shared_ptr<string> srcTable_ = nullptr;
    // The sending status of an alert notification. Valid values: Success, Fail, and Silence.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the alert event.
    // 
    // *   Heartbeat
    // *   Delay
    // *   FailoverCount
    // *   DdlReport
    // *   ResourceUtilization
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
