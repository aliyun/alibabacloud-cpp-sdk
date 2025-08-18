// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWAITINGROOMEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWAITINGROOMEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteWaitingRoomEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWaitingRoomEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(WaitingRoomEventId, waitingRoomEventId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWaitingRoomEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomEventId, waitingRoomEventId_);
    };
    DeleteWaitingRoomEventRequest() = default ;
    DeleteWaitingRoomEventRequest(const DeleteWaitingRoomEventRequest &) = default ;
    DeleteWaitingRoomEventRequest(DeleteWaitingRoomEventRequest &&) = default ;
    DeleteWaitingRoomEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWaitingRoomEventRequest() = default ;
    DeleteWaitingRoomEventRequest& operator=(const DeleteWaitingRoomEventRequest &) = default ;
    DeleteWaitingRoomEventRequest& operator=(DeleteWaitingRoomEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->siteId_ != nullptr
        && this->waitingRoomEventId_ != nullptr; };
    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline DeleteWaitingRoomEventRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // waitingRoomEventId Field Functions 
    bool hasWaitingRoomEventId() const { return this->waitingRoomEventId_ != nullptr;};
    void deleteWaitingRoomEventId() { this->waitingRoomEventId_ = nullptr;};
    inline int64_t waitingRoomEventId() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomEventId_, 0L) };
    inline DeleteWaitingRoomEventRequest& setWaitingRoomEventId(int64_t waitingRoomEventId) { DARABONBA_PTR_SET_VALUE(waitingRoomEventId_, waitingRoomEventId) };


  protected:
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The ID of the waiting room event.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> waitingRoomEventId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
