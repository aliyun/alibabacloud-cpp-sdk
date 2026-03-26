// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSIGHTSEVENTSCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSIGHTSEVENTSCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetInsightsEventsCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInsightsEventsCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInsightsEventsCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInsightsEventsCountResponseBody() = default ;
    GetInsightsEventsCountResponseBody(const GetInsightsEventsCountResponseBody &) = default ;
    GetInsightsEventsCountResponseBody(GetInsightsEventsCountResponseBody &&) = default ;
    GetInsightsEventsCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInsightsEventsCountResponseBody() = default ;
    GetInsightsEventsCountResponseBody& operator=(const GetInsightsEventsCountResponseBody &) = default ;
    GetInsightsEventsCountResponseBody& operator=(GetInsightsEventsCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(InsightType, insightType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(InsightType, insightType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->insightType_ == nullptr && this->regionId_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Data& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // insightType Field Functions 
      bool hasInsightType() const { return this->insightType_ != nullptr;};
      void deleteInsightType() { this->insightType_ = nullptr;};
      inline string getInsightType() const { DARABONBA_PTR_GET_DEFAULT(insightType_, "") };
      inline Data& setInsightType(string insightType) { DARABONBA_PTR_SET_VALUE(insightType_, insightType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      shared_ptr<int32_t> count_ {};
      shared_ptr<string> insightType_ {};
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetInsightsEventsCountResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetInsightsEventsCountResponseBody::Data>) };
    inline vector<GetInsightsEventsCountResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetInsightsEventsCountResponseBody::Data>) };
    inline GetInsightsEventsCountResponseBody& setData(const vector<GetInsightsEventsCountResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInsightsEventsCountResponseBody& setData(vector<GetInsightsEventsCountResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetInsightsEventsCountResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInsightsEventsCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<GetInsightsEventsCountResponseBody::Data>> data_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
