// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHISTORYUSAGEDURATIONRANKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYHISTORYUSAGEDURATIONRANKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class QueryHistoryUsageDurationRankResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHistoryUsageDurationRankResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UsageDurationList, usageDurationList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHistoryUsageDurationRankResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UsageDurationList, usageDurationList_);
    };
    QueryHistoryUsageDurationRankResponseBody() = default ;
    QueryHistoryUsageDurationRankResponseBody(const QueryHistoryUsageDurationRankResponseBody &) = default ;
    QueryHistoryUsageDurationRankResponseBody(QueryHistoryUsageDurationRankResponseBody &&) = default ;
    QueryHistoryUsageDurationRankResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHistoryUsageDurationRankResponseBody() = default ;
    QueryHistoryUsageDurationRankResponseBody& operator=(const QueryHistoryUsageDurationRankResponseBody &) = default ;
    QueryHistoryUsageDurationRankResponseBody& operator=(QueryHistoryUsageDurationRankResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UsageDurationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UsageDurationList& obj) { 
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(UsageDuration, usageDuration_);
      };
      friend void from_json(const Darabonba::Json& j, UsageDurationList& obj) { 
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(UsageDuration, usageDuration_);
      };
      UsageDurationList() = default ;
      UsageDurationList(const UsageDurationList &) = default ;
      UsageDurationList(UsageDurationList &&) = default ;
      UsageDurationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UsageDurationList() = default ;
      UsageDurationList& operator=(const UsageDurationList &) = default ;
      UsageDurationList& operator=(UsageDurationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->desktopId_ == nullptr && this->desktopName_ == nullptr && this->endUserId_ == nullptr && this->regionId_ == nullptr && this->usageDuration_ == nullptr; };
      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline UsageDurationList& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline UsageDurationList& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline UsageDurationList& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline UsageDurationList& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline UsageDurationList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // usageDuration Field Functions 
      bool hasUsageDuration() const { return this->usageDuration_ != nullptr;};
      void deleteUsageDuration() { this->usageDuration_ = nullptr;};
      inline int64_t getUsageDuration() const { DARABONBA_PTR_GET_DEFAULT(usageDuration_, 0L) };
      inline UsageDurationList& setUsageDuration(int64_t usageDuration) { DARABONBA_PTR_SET_VALUE(usageDuration_, usageDuration) };


    protected:
      // The **charge type**. Valid values: `POST_PAID` (post-paid), `PRE_PAID` (pre-paid), `MONTH_PACKAGE` (monthly subscription), and `DURATION` (duration package).
      shared_ptr<string> chargeType_ {};
      // **The ID of the cloud desktop.**
      shared_ptr<string> desktopId_ {};
      // **The name of the cloud desktop.**
      shared_ptr<string> desktopName_ {};
      // **The end user ID.**
      shared_ptr<string> endUserId_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The **usage duration**, in seconds. Note: This is a `Long` value. Ensure your client can handle the precision.
      shared_ptr<int64_t> usageDuration_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->usageDurationList_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryHistoryUsageDurationRankResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryHistoryUsageDurationRankResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryHistoryUsageDurationRankResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // usageDurationList Field Functions 
    bool hasUsageDurationList() const { return this->usageDurationList_ != nullptr;};
    void deleteUsageDurationList() { this->usageDurationList_ = nullptr;};
    inline const vector<QueryHistoryUsageDurationRankResponseBody::UsageDurationList> & getUsageDurationList() const { DARABONBA_PTR_GET_CONST(usageDurationList_, vector<QueryHistoryUsageDurationRankResponseBody::UsageDurationList>) };
    inline vector<QueryHistoryUsageDurationRankResponseBody::UsageDurationList> getUsageDurationList() { DARABONBA_PTR_GET(usageDurationList_, vector<QueryHistoryUsageDurationRankResponseBody::UsageDurationList>) };
    inline QueryHistoryUsageDurationRankResponseBody& setUsageDurationList(const vector<QueryHistoryUsageDurationRankResponseBody::UsageDurationList> & usageDurationList) { DARABONBA_PTR_SET_VALUE(usageDurationList_, usageDurationList) };
    inline QueryHistoryUsageDurationRankResponseBody& setUsageDurationList(vector<QueryHistoryUsageDurationRankResponseBody::UsageDurationList> && usageDurationList) { DARABONBA_PTR_SET_RVALUE(usageDurationList_, usageDurationList) };


  protected:
    // The token used to retrieve the next page of results. If this parameter is not returned, there are no more results.
    shared_ptr<string> nextToken_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of matching entries.
    shared_ptr<int32_t> totalCount_ {};
    // A list of usage duration metrics.
    shared_ptr<vector<QueryHistoryUsageDurationRankResponseBody::UsageDurationList>> usageDurationList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
