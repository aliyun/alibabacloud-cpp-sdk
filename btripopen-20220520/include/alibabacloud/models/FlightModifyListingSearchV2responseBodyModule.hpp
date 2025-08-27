// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2RESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYLISTINGSEARCHV2RESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightModifyListingSearchV2ResponseBodyModuleDirectFlightList.hpp>
#include <alibabacloud/models/FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyListingSearchV2ResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyListingSearchV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(direct_flight_list, directFlightList_);
      DARABONBA_PTR_TO_JSON(next_req_wait_time, nextReqWaitTime_);
      DARABONBA_PTR_TO_JSON(retry, retry_);
      DARABONBA_PTR_TO_JSON(search_retry_token, searchRetryToken_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(transfer_flight_list, transferFlightList_);
      DARABONBA_PTR_TO_JSON(transfer_title, transferTitle_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyListingSearchV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(direct_flight_list, directFlightList_);
      DARABONBA_PTR_FROM_JSON(next_req_wait_time, nextReqWaitTime_);
      DARABONBA_PTR_FROM_JSON(retry, retry_);
      DARABONBA_PTR_FROM_JSON(search_retry_token, searchRetryToken_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(transfer_flight_list, transferFlightList_);
      DARABONBA_PTR_FROM_JSON(transfer_title, transferTitle_);
    };
    FlightModifyListingSearchV2ResponseBodyModule() = default ;
    FlightModifyListingSearchV2ResponseBodyModule(const FlightModifyListingSearchV2ResponseBodyModule &) = default ;
    FlightModifyListingSearchV2ResponseBodyModule(FlightModifyListingSearchV2ResponseBodyModule &&) = default ;
    FlightModifyListingSearchV2ResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyListingSearchV2ResponseBodyModule() = default ;
    FlightModifyListingSearchV2ResponseBodyModule& operator=(const FlightModifyListingSearchV2ResponseBodyModule &) = default ;
    FlightModifyListingSearchV2ResponseBodyModule& operator=(FlightModifyListingSearchV2ResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->directFlightList_ != nullptr
        && this->nextReqWaitTime_ != nullptr && this->retry_ != nullptr && this->searchRetryToken_ != nullptr && this->sessionId_ != nullptr && this->transferFlightList_ != nullptr
        && this->transferTitle_ != nullptr; };
    // directFlightList Field Functions 
    bool hasDirectFlightList() const { return this->directFlightList_ != nullptr;};
    void deleteDirectFlightList() { this->directFlightList_ = nullptr;};
    inline const vector<Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightList> & directFlightList() const { DARABONBA_PTR_GET_CONST(directFlightList_, vector<Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightList>) };
    inline vector<Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightList> directFlightList() { DARABONBA_PTR_GET(directFlightList_, vector<Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightList>) };
    inline FlightModifyListingSearchV2ResponseBodyModule& setDirectFlightList(const vector<Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightList> & directFlightList) { DARABONBA_PTR_SET_VALUE(directFlightList_, directFlightList) };
    inline FlightModifyListingSearchV2ResponseBodyModule& setDirectFlightList(vector<Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightList> && directFlightList) { DARABONBA_PTR_SET_RVALUE(directFlightList_, directFlightList) };


    // nextReqWaitTime Field Functions 
    bool hasNextReqWaitTime() const { return this->nextReqWaitTime_ != nullptr;};
    void deleteNextReqWaitTime() { this->nextReqWaitTime_ = nullptr;};
    inline int64_t nextReqWaitTime() const { DARABONBA_PTR_GET_DEFAULT(nextReqWaitTime_, 0L) };
    inline FlightModifyListingSearchV2ResponseBodyModule& setNextReqWaitTime(int64_t nextReqWaitTime) { DARABONBA_PTR_SET_VALUE(nextReqWaitTime_, nextReqWaitTime) };


    // retry Field Functions 
    bool hasRetry() const { return this->retry_ != nullptr;};
    void deleteRetry() { this->retry_ = nullptr;};
    inline bool retry() const { DARABONBA_PTR_GET_DEFAULT(retry_, false) };
    inline FlightModifyListingSearchV2ResponseBodyModule& setRetry(bool retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


    // searchRetryToken Field Functions 
    bool hasSearchRetryToken() const { return this->searchRetryToken_ != nullptr;};
    void deleteSearchRetryToken() { this->searchRetryToken_ = nullptr;};
    inline string searchRetryToken() const { DARABONBA_PTR_GET_DEFAULT(searchRetryToken_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModule& setSearchRetryToken(string searchRetryToken) { DARABONBA_PTR_SET_VALUE(searchRetryToken_, searchRetryToken) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModule& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // transferFlightList Field Functions 
    bool hasTransferFlightList() const { return this->transferFlightList_ != nullptr;};
    void deleteTransferFlightList() { this->transferFlightList_ = nullptr;};
    inline const vector<Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList> & transferFlightList() const { DARABONBA_PTR_GET_CONST(transferFlightList_, vector<Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList>) };
    inline vector<Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList> transferFlightList() { DARABONBA_PTR_GET(transferFlightList_, vector<Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList>) };
    inline FlightModifyListingSearchV2ResponseBodyModule& setTransferFlightList(const vector<Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList> & transferFlightList) { DARABONBA_PTR_SET_VALUE(transferFlightList_, transferFlightList) };
    inline FlightModifyListingSearchV2ResponseBodyModule& setTransferFlightList(vector<Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList> && transferFlightList) { DARABONBA_PTR_SET_RVALUE(transferFlightList_, transferFlightList) };


    // transferTitle Field Functions 
    bool hasTransferTitle() const { return this->transferTitle_ != nullptr;};
    void deleteTransferTitle() { this->transferTitle_ = nullptr;};
    inline string transferTitle() const { DARABONBA_PTR_GET_DEFAULT(transferTitle_, "") };
    inline FlightModifyListingSearchV2ResponseBodyModule& setTransferTitle(string transferTitle) { DARABONBA_PTR_SET_VALUE(transferTitle_, transferTitle) };


  protected:
    std::shared_ptr<vector<Models::FlightModifyListingSearchV2ResponseBodyModuleDirectFlightList>> directFlightList_ = nullptr;
    std::shared_ptr<int64_t> nextReqWaitTime_ = nullptr;
    std::shared_ptr<bool> retry_ = nullptr;
    std::shared_ptr<string> searchRetryToken_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<vector<Models::FlightModifyListingSearchV2ResponseBodyModuleTransferFlightList>> transferFlightList_ = nullptr;
    std::shared_ptr<string> transferTitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
