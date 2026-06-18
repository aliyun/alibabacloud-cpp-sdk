// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIPTIONSEATDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIPTIONSEATDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class GetSubscriptionSeatDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscriptionSeatDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallerUacAccountId, callerUacAccountId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryAssigned, queryAssigned_);
      DARABONBA_PTR_TO_JSON(SeatId, seatId_);
      DARABONBA_PTR_TO_JSON(SeatType, seatType_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
      DARABONBA_PTR_TO_JSON(StatusListStr, statusListStr_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscriptionSeatDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallerUacAccountId, callerUacAccountId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryAssigned, queryAssigned_);
      DARABONBA_PTR_FROM_JSON(SeatId, seatId_);
      DARABONBA_PTR_FROM_JSON(SeatType, seatType_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
      DARABONBA_PTR_FROM_JSON(StatusListStr, statusListStr_);
    };
    GetSubscriptionSeatDetailsRequest() = default ;
    GetSubscriptionSeatDetailsRequest(const GetSubscriptionSeatDetailsRequest &) = default ;
    GetSubscriptionSeatDetailsRequest(GetSubscriptionSeatDetailsRequest &&) = default ;
    GetSubscriptionSeatDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscriptionSeatDetailsRequest() = default ;
    GetSubscriptionSeatDetailsRequest& operator=(const GetSubscriptionSeatDetailsRequest &) = default ;
    GetSubscriptionSeatDetailsRequest& operator=(GetSubscriptionSeatDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callerUacAccountId_ == nullptr
        && this->namespaceId_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->queryAssigned_ == nullptr && this->seatId_ == nullptr
        && this->seatType_ == nullptr && this->statusList_ == nullptr && this->statusListStr_ == nullptr; };
    // callerUacAccountId Field Functions 
    bool hasCallerUacAccountId() const { return this->callerUacAccountId_ != nullptr;};
    void deleteCallerUacAccountId() { this->callerUacAccountId_ = nullptr;};
    inline string getCallerUacAccountId() const { DARABONBA_PTR_GET_DEFAULT(callerUacAccountId_, "") };
    inline GetSubscriptionSeatDetailsRequest& setCallerUacAccountId(string callerUacAccountId) { DARABONBA_PTR_SET_VALUE(callerUacAccountId_, callerUacAccountId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline GetSubscriptionSeatDetailsRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetSubscriptionSeatDetailsRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetSubscriptionSeatDetailsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryAssigned Field Functions 
    bool hasQueryAssigned() const { return this->queryAssigned_ != nullptr;};
    void deleteQueryAssigned() { this->queryAssigned_ = nullptr;};
    inline bool getQueryAssigned() const { DARABONBA_PTR_GET_DEFAULT(queryAssigned_, false) };
    inline GetSubscriptionSeatDetailsRequest& setQueryAssigned(bool queryAssigned) { DARABONBA_PTR_SET_VALUE(queryAssigned_, queryAssigned) };


    // seatId Field Functions 
    bool hasSeatId() const { return this->seatId_ != nullptr;};
    void deleteSeatId() { this->seatId_ = nullptr;};
    inline string getSeatId() const { DARABONBA_PTR_GET_DEFAULT(seatId_, "") };
    inline GetSubscriptionSeatDetailsRequest& setSeatId(string seatId) { DARABONBA_PTR_SET_VALUE(seatId_, seatId) };


    // seatType Field Functions 
    bool hasSeatType() const { return this->seatType_ != nullptr;};
    void deleteSeatType() { this->seatType_ = nullptr;};
    inline string getSeatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
    inline GetSubscriptionSeatDetailsRequest& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline GetSubscriptionSeatDetailsRequest& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline GetSubscriptionSeatDetailsRequest& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


    // statusListStr Field Functions 
    bool hasStatusListStr() const { return this->statusListStr_ != nullptr;};
    void deleteStatusListStr() { this->statusListStr_ = nullptr;};
    inline string getStatusListStr() const { DARABONBA_PTR_GET_DEFAULT(statusListStr_, "") };
    inline GetSubscriptionSeatDetailsRequest& setStatusListStr(string statusListStr) { DARABONBA_PTR_SET_VALUE(statusListStr_, statusListStr) };


  protected:
    // The ID of the caller account that initiates this call.
    shared_ptr<string> callerUacAccountId_ {};
    // The product namespace ID. For the TokenPlan product, this field is fixed to namespace-1.
    shared_ptr<string> namespaceId_ {};
    // The page number. Default value: 1. Valid values: positive integers.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The seat assignment status filter. Set to true for assigned seats, false for unassigned seats, or null for all seats.
    shared_ptr<bool> queryAssigned_ {};
    // The seat ID.
    shared_ptr<string> seatId_ {};
    // The seat type (specType). Valid values:
    // 
    // - standard
    // - pro
    // - max.
    shared_ptr<string> seatType_ {};
    // The list of seat statuses used for filtering.
    shared_ptr<vector<string>> statusList_ {};
    // The string form of StatusList.
    shared_ptr<string> statusListStr_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
