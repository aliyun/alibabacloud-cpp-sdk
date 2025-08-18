// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAITINGROOMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWAITINGROOMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWaitingRoomsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWaitingRoomsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(WaitingRoomId, waitingRoomId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWaitingRoomsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomId, waitingRoomId_);
    };
    ListWaitingRoomsRequest() = default ;
    ListWaitingRoomsRequest(const ListWaitingRoomsRequest &) = default ;
    ListWaitingRoomsRequest(ListWaitingRoomsRequest &&) = default ;
    ListWaitingRoomsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWaitingRoomsRequest() = default ;
    ListWaitingRoomsRequest& operator=(const ListWaitingRoomsRequest &) = default ;
    ListWaitingRoomsRequest& operator=(ListWaitingRoomsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->siteId_ != nullptr
        && this->waitingRoomId_ != nullptr; };
    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListWaitingRoomsRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // waitingRoomId Field Functions 
    bool hasWaitingRoomId() const { return this->waitingRoomId_ != nullptr;};
    void deleteWaitingRoomId() { this->waitingRoomId_ = nullptr;};
    inline string waitingRoomId() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomId_, "") };
    inline ListWaitingRoomsRequest& setWaitingRoomId(string waitingRoomId) { DARABONBA_PTR_SET_VALUE(waitingRoomId_, waitingRoomId) };


  protected:
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The ID of the waiting room. Specify this parameter to query the information about a specific waiting room.
    std::shared_ptr<string> waitingRoomId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
