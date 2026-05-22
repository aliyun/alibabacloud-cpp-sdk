// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAITINGROOMEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWAITINGROOMEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWaitingRoomEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWaitingRoomEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(WaitingRoomEventId, waitingRoomEventId_);
      DARABONBA_PTR_TO_JSON(WaitingRoomId, waitingRoomId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWaitingRoomEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomEventId, waitingRoomEventId_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomId, waitingRoomId_);
    };
    ListWaitingRoomEventsRequest() = default ;
    ListWaitingRoomEventsRequest(const ListWaitingRoomEventsRequest &) = default ;
    ListWaitingRoomEventsRequest(ListWaitingRoomEventsRequest &&) = default ;
    ListWaitingRoomEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWaitingRoomEventsRequest() = default ;
    ListWaitingRoomEventsRequest& operator=(const ListWaitingRoomEventsRequest &) = default ;
    ListWaitingRoomEventsRequest& operator=(ListWaitingRoomEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->siteId_ == nullptr
        && this->waitingRoomEventId_ == nullptr && this->waitingRoomId_ == nullptr; };
    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListWaitingRoomEventsRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // waitingRoomEventId Field Functions 
    bool hasWaitingRoomEventId() const { return this->waitingRoomEventId_ != nullptr;};
    void deleteWaitingRoomEventId() { this->waitingRoomEventId_ = nullptr;};
    inline int64_t getWaitingRoomEventId() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomEventId_, 0L) };
    inline ListWaitingRoomEventsRequest& setWaitingRoomEventId(int64_t waitingRoomEventId) { DARABONBA_PTR_SET_VALUE(waitingRoomEventId_, waitingRoomEventId) };


    // waitingRoomId Field Functions 
    bool hasWaitingRoomId() const { return this->waitingRoomId_ != nullptr;};
    void deleteWaitingRoomId() { this->waitingRoomId_ = nullptr;};
    inline string getWaitingRoomId() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomId_, "") };
    inline ListWaitingRoomEventsRequest& setWaitingRoomId(string waitingRoomId) { DARABONBA_PTR_SET_VALUE(waitingRoomId_, waitingRoomId) };


  protected:
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The ID of the waiting room event. This parameter is optional. You can specify this parameter to query a specific waiting room event.
    shared_ptr<int64_t> waitingRoomEventId_ {};
    // The unique ID of the waiting room, which can be obtained by calling the [ListWaitingRooms](https://help.aliyun.com/document_detail/2850279.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> waitingRoomId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
