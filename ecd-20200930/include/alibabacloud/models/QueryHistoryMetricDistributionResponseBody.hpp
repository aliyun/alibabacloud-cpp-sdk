// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHISTORYMETRICDISTRIBUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYHISTORYMETRICDISTRIBUTIONRESPONSEBODY_HPP_
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
  class QueryHistoryMetricDistributionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHistoryMetricDistributionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DistributionList, distributionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHistoryMetricDistributionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DistributionList, distributionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryHistoryMetricDistributionResponseBody() = default ;
    QueryHistoryMetricDistributionResponseBody(const QueryHistoryMetricDistributionResponseBody &) = default ;
    QueryHistoryMetricDistributionResponseBody(QueryHistoryMetricDistributionResponseBody &&) = default ;
    QueryHistoryMetricDistributionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHistoryMetricDistributionResponseBody() = default ;
    QueryHistoryMetricDistributionResponseBody& operator=(const QueryHistoryMetricDistributionResponseBody &) = default ;
    QueryHistoryMetricDistributionResponseBody& operator=(QueryHistoryMetricDistributionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DistributionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DistributionList& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(Max, max_);
        DARABONBA_PTR_TO_JSON(Min, min_);
      };
      friend void from_json(const Darabonba::Json& j, DistributionList& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(Max, max_);
        DARABONBA_PTR_FROM_JSON(Min, min_);
      };
      DistributionList() = default ;
      DistributionList(const DistributionList &) = default ;
      DistributionList(DistributionList &&) = default ;
      DistributionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DistributionList() = default ;
      DistributionList& operator=(const DistributionList &) = default ;
      DistributionList& operator=(DistributionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->label_ == nullptr && this->max_ == nullptr && this->min_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline DistributionList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline DistributionList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // max Field Functions 
      bool hasMax() const { return this->max_ != nullptr;};
      void deleteMax() { this->max_ = nullptr;};
      inline float getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0.0) };
      inline DistributionList& setMax(float max) { DARABONBA_PTR_SET_VALUE(max_, max) };


      // min Field Functions 
      bool hasMin() const { return this->min_ != nullptr;};
      void deleteMin() { this->min_ = nullptr;};
      inline float getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0.0) };
      inline DistributionList& setMin(float min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    protected:
      shared_ptr<int32_t> count_ {};
      shared_ptr<string> label_ {};
      shared_ptr<float> max_ {};
      shared_ptr<float> min_ {};
    };

    virtual bool empty() const override { return this->distributionList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // distributionList Field Functions 
    bool hasDistributionList() const { return this->distributionList_ != nullptr;};
    void deleteDistributionList() { this->distributionList_ = nullptr;};
    inline const vector<QueryHistoryMetricDistributionResponseBody::DistributionList> & getDistributionList() const { DARABONBA_PTR_GET_CONST(distributionList_, vector<QueryHistoryMetricDistributionResponseBody::DistributionList>) };
    inline vector<QueryHistoryMetricDistributionResponseBody::DistributionList> getDistributionList() { DARABONBA_PTR_GET(distributionList_, vector<QueryHistoryMetricDistributionResponseBody::DistributionList>) };
    inline QueryHistoryMetricDistributionResponseBody& setDistributionList(const vector<QueryHistoryMetricDistributionResponseBody::DistributionList> & distributionList) { DARABONBA_PTR_SET_VALUE(distributionList_, distributionList) };
    inline QueryHistoryMetricDistributionResponseBody& setDistributionList(vector<QueryHistoryMetricDistributionResponseBody::DistributionList> && distributionList) { DARABONBA_PTR_SET_RVALUE(distributionList_, distributionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryHistoryMetricDistributionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QueryHistoryMetricDistributionResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<QueryHistoryMetricDistributionResponseBody::DistributionList>> distributionList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
