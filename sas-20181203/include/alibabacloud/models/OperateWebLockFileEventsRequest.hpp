// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEWEBLOCKFILEEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEWEBLOCKFILEEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperateWebLockFileEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateWebLockFileEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DealAll, dealAll_);
      DARABONBA_PTR_TO_JSON(EventIds, eventIds_);
      DARABONBA_PTR_TO_JSON(OperationCode, operationCode_);
    };
    friend void from_json(const Darabonba::Json& j, OperateWebLockFileEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DealAll, dealAll_);
      DARABONBA_PTR_FROM_JSON(EventIds, eventIds_);
      DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
    };
    OperateWebLockFileEventsRequest() = default ;
    OperateWebLockFileEventsRequest(const OperateWebLockFileEventsRequest &) = default ;
    OperateWebLockFileEventsRequest(OperateWebLockFileEventsRequest &&) = default ;
    OperateWebLockFileEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateWebLockFileEventsRequest() = default ;
    OperateWebLockFileEventsRequest& operator=(const OperateWebLockFileEventsRequest &) = default ;
    OperateWebLockFileEventsRequest& operator=(OperateWebLockFileEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dealAll_ == nullptr
        && this->eventIds_ == nullptr && this->operationCode_ == nullptr; };
    // dealAll Field Functions 
    bool hasDealAll() const { return this->dealAll_ != nullptr;};
    void deleteDealAll() { this->dealAll_ = nullptr;};
    inline int32_t getDealAll() const { DARABONBA_PTR_GET_DEFAULT(dealAll_, 0) };
    inline OperateWebLockFileEventsRequest& setDealAll(int32_t dealAll) { DARABONBA_PTR_SET_VALUE(dealAll_, dealAll) };


    // eventIds Field Functions 
    bool hasEventIds() const { return this->eventIds_ != nullptr;};
    void deleteEventIds() { this->eventIds_ = nullptr;};
    inline const vector<int64_t> & getEventIds() const { DARABONBA_PTR_GET_CONST(eventIds_, vector<int64_t>) };
    inline vector<int64_t> getEventIds() { DARABONBA_PTR_GET(eventIds_, vector<int64_t>) };
    inline OperateWebLockFileEventsRequest& setEventIds(const vector<int64_t> & eventIds) { DARABONBA_PTR_SET_VALUE(eventIds_, eventIds) };
    inline OperateWebLockFileEventsRequest& setEventIds(vector<int64_t> && eventIds) { DARABONBA_PTR_SET_RVALUE(eventIds_, eventIds) };


    // operationCode Field Functions 
    bool hasOperationCode() const { return this->operationCode_ != nullptr;};
    void deleteOperationCode() { this->operationCode_ = nullptr;};
    inline string getOperationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
    inline OperateWebLockFileEventsRequest& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


  protected:
    // Specifies whether to handle all alert events. Valid values:
    // - **1**: yes
    // - **0**: no.
    // 
    // This parameter is required.
    shared_ptr<int32_t> dealAll_ {};
    // The list of alert event IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> eventIds_ {};
    // The method to handle the alert event. Valid values:
    // 
    // - **mark_mis_info**: marks the alert as a false positive
    // - **rm_mark_mis_info**: unmarks the false positive
    // - **offline_handled**: handled offline
    // - **whitelist**: adds to the whitelist
    // - **rm_whitelist**: removes from the whitelist.
    // 
    // This parameter is required.
    shared_ptr<string> operationCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
