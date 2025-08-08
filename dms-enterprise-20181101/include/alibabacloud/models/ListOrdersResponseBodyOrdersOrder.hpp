// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORDERSRESPONSEBODYORDERSORDER_HPP_
#define ALIBABACLOUD_MODELS_LISTORDERSRESPONSEBODYORDERSORDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListOrdersResponseBodyOrdersOrder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrdersResponseBodyOrdersOrder& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Committer, committer_);
      DARABONBA_PTR_TO_JSON(CommitterId, committerId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(PluginType, pluginType_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrdersResponseBodyOrdersOrder& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Committer, committer_);
      DARABONBA_PTR_FROM_JSON(CommitterId, committerId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(PluginType, pluginType_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
    };
    ListOrdersResponseBodyOrdersOrder() = default ;
    ListOrdersResponseBodyOrdersOrder(const ListOrdersResponseBodyOrdersOrder &) = default ;
    ListOrdersResponseBodyOrdersOrder(ListOrdersResponseBodyOrdersOrder &&) = default ;
    ListOrdersResponseBodyOrdersOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrdersResponseBodyOrdersOrder() = default ;
    ListOrdersResponseBodyOrdersOrder& operator=(const ListOrdersResponseBodyOrdersOrder &) = default ;
    ListOrdersResponseBodyOrdersOrder& operator=(ListOrdersResponseBodyOrdersOrder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->committer_ != nullptr && this->committerId_ != nullptr && this->createTime_ != nullptr && this->lastModifyTime_ != nullptr && this->orderId_ != nullptr
        && this->pluginType_ != nullptr && this->statusCode_ != nullptr && this->statusDesc_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListOrdersResponseBodyOrdersOrder& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // committer Field Functions 
    bool hasCommitter() const { return this->committer_ != nullptr;};
    void deleteCommitter() { this->committer_ = nullptr;};
    inline string committer() const { DARABONBA_PTR_GET_DEFAULT(committer_, "") };
    inline ListOrdersResponseBodyOrdersOrder& setCommitter(string committer) { DARABONBA_PTR_SET_VALUE(committer_, committer) };


    // committerId Field Functions 
    bool hasCommitterId() const { return this->committerId_ != nullptr;};
    void deleteCommitterId() { this->committerId_ = nullptr;};
    inline int64_t committerId() const { DARABONBA_PTR_GET_DEFAULT(committerId_, 0L) };
    inline ListOrdersResponseBodyOrdersOrder& setCommitterId(int64_t committerId) { DARABONBA_PTR_SET_VALUE(committerId_, committerId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListOrdersResponseBodyOrdersOrder& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // lastModifyTime Field Functions 
    bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
    void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
    inline string lastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, "") };
    inline ListOrdersResponseBodyOrdersOrder& setLastModifyTime(string lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ListOrdersResponseBodyOrdersOrder& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // pluginType Field Functions 
    bool hasPluginType() const { return this->pluginType_ != nullptr;};
    void deletePluginType() { this->pluginType_ = nullptr;};
    inline string pluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
    inline ListOrdersResponseBodyOrdersOrder& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline string statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
    inline ListOrdersResponseBodyOrdersOrder& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline ListOrdersResponseBodyOrdersOrder& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


  protected:
    // The remarks of the ticket.
    std::shared_ptr<string> comment_ = nullptr;
    // The user who submitted the ticket.
    std::shared_ptr<string> committer_ = nullptr;
    // The ID of the user who submitted the ticket.
    std::shared_ptr<int64_t> committerId_ = nullptr;
    // The time when the ticket was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the ticket was last modified.
    std::shared_ptr<string> lastModifyTime_ = nullptr;
    // The ID of the ticket.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The type of the ticket.
    std::shared_ptr<string> pluginType_ = nullptr;
    // The status code of the ticket. Valid values:
    // 
    // *   **fail**: The ticket fails to be executed.
    // *   **toaudit**: The ticket is waiting for approval.
    // *   **cancel**: The ticket is cancelled.
    // *   **processing**: The ticket is being executed.
    // *   **approved**: The ticket is approved.
    // *   **reject**: The ticket is rejected.
    // *   **success**: The ticket is executed.
    // *   **closed**: The ticket is closed.
    std::shared_ptr<string> statusCode_ = nullptr;
    // The status description of the ticket.
    std::shared_ptr<string> statusDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
