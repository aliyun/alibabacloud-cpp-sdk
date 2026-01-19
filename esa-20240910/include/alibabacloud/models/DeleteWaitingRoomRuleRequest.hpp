// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWAITINGROOMRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWAITINGROOMRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteWaitingRoomRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWaitingRoomRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(WaitingRoomRuleId, waitingRoomRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWaitingRoomRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomRuleId, waitingRoomRuleId_);
    };
    DeleteWaitingRoomRuleRequest() = default ;
    DeleteWaitingRoomRuleRequest(const DeleteWaitingRoomRuleRequest &) = default ;
    DeleteWaitingRoomRuleRequest(DeleteWaitingRoomRuleRequest &&) = default ;
    DeleteWaitingRoomRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWaitingRoomRuleRequest() = default ;
    DeleteWaitingRoomRuleRequest& operator=(const DeleteWaitingRoomRuleRequest &) = default ;
    DeleteWaitingRoomRuleRequest& operator=(DeleteWaitingRoomRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->siteId_ == nullptr
        && this->waitingRoomRuleId_ == nullptr; };
    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline DeleteWaitingRoomRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // waitingRoomRuleId Field Functions 
    bool hasWaitingRoomRuleId() const { return this->waitingRoomRuleId_ != nullptr;};
    void deleteWaitingRoomRuleId() { this->waitingRoomRuleId_ = nullptr;};
    inline int64_t getWaitingRoomRuleId() const { DARABONBA_PTR_GET_DEFAULT(waitingRoomRuleId_, 0L) };
    inline DeleteWaitingRoomRuleRequest& setWaitingRoomRuleId(int64_t waitingRoomRuleId) { DARABONBA_PTR_SET_VALUE(waitingRoomRuleId_, waitingRoomRuleId) };


  protected:
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The ID of the waiting room bypass rule.
    // 
    // This parameter is required.
    shared_ptr<int64_t> waitingRoomRuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
