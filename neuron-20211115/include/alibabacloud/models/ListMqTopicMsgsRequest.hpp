// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMQTOPICMSGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMQTOPICMSGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListMqTopicMsgsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMqTopicMsgsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(msgId, msgId_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListMqTopicMsgsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(msgId, msgId_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    ListMqTopicMsgsRequest() = default ;
    ListMqTopicMsgsRequest(const ListMqTopicMsgsRequest &) = default ;
    ListMqTopicMsgsRequest(ListMqTopicMsgsRequest &&) = default ;
    ListMqTopicMsgsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMqTopicMsgsRequest() = default ;
    ListMqTopicMsgsRequest& operator=(const ListMqTopicMsgsRequest &) = default ;
    ListMqTopicMsgsRequest& operator=(ListMqTopicMsgsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->msgId_ == nullptr && this->orderBy_ == nullptr && this->orderDirection_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListMqTopicMsgsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // msgId Field Functions 
    bool hasMsgId() const { return this->msgId_ != nullptr;};
    void deleteMsgId() { this->msgId_ = nullptr;};
    inline string getMsgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
    inline ListMqTopicMsgsRequest& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListMqTopicMsgsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline ListMqTopicMsgsRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListMqTopicMsgsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMqTopicMsgsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListMqTopicMsgsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    shared_ptr<string> msgId_ {};
    shared_ptr<string> orderBy_ {};
    shared_ptr<string> orderDirection_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
