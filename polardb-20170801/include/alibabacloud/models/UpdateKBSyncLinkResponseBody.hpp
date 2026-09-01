// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKBSYNCLINKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKBSYNCLINKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpdateKBSyncLinkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKBSyncLinkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LinkId, linkId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SyncSchedule, syncSchedule_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKBSyncLinkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LinkId, linkId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SyncSchedule, syncSchedule_);
    };
    UpdateKBSyncLinkResponseBody() = default ;
    UpdateKBSyncLinkResponseBody(const UpdateKBSyncLinkResponseBody &) = default ;
    UpdateKBSyncLinkResponseBody(UpdateKBSyncLinkResponseBody &&) = default ;
    UpdateKBSyncLinkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKBSyncLinkResponseBody() = default ;
    UpdateKBSyncLinkResponseBody& operator=(const UpdateKBSyncLinkResponseBody &) = default ;
    UpdateKBSyncLinkResponseBody& operator=(UpdateKBSyncLinkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->linkId_ == nullptr
        && this->requestId_ == nullptr && this->syncSchedule_ == nullptr; };
    // linkId Field Functions 
    bool hasLinkId() const { return this->linkId_ != nullptr;};
    void deleteLinkId() { this->linkId_ = nullptr;};
    inline string getLinkId() const { DARABONBA_PTR_GET_DEFAULT(linkId_, "") };
    inline UpdateKBSyncLinkResponseBody& setLinkId(string linkId) { DARABONBA_PTR_SET_VALUE(linkId_, linkId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateKBSyncLinkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // syncSchedule Field Functions 
    bool hasSyncSchedule() const { return this->syncSchedule_ != nullptr;};
    void deleteSyncSchedule() { this->syncSchedule_ = nullptr;};
    inline string getSyncSchedule() const { DARABONBA_PTR_GET_DEFAULT(syncSchedule_, "") };
    inline UpdateKBSyncLinkResponseBody& setSyncSchedule(string syncSchedule) { DARABONBA_PTR_SET_VALUE(syncSchedule_, syncSchedule) };


  protected:
    shared_ptr<string> linkId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> syncSchedule_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
