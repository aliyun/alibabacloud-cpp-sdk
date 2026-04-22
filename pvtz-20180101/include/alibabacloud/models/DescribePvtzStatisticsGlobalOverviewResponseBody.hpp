// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPVTZSTATISTICSGLOBALOVERVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPVTZSTATISTICSGLOBALOVERVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribePvtzStatisticsGlobalOverviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePvtzStatisticsGlobalOverviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePvtzStatisticsGlobalOverviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePvtzStatisticsGlobalOverviewResponseBody() = default ;
    DescribePvtzStatisticsGlobalOverviewResponseBody(const DescribePvtzStatisticsGlobalOverviewResponseBody &) = default ;
    DescribePvtzStatisticsGlobalOverviewResponseBody(DescribePvtzStatisticsGlobalOverviewResponseBody &&) = default ;
    DescribePvtzStatisticsGlobalOverviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePvtzStatisticsGlobalOverviewResponseBody() = default ;
    DescribePvtzStatisticsGlobalOverviewResponseBody& operator=(const DescribePvtzStatisticsGlobalOverviewResponseBody &) = default ;
    DescribePvtzStatisticsGlobalOverviewResponseBody& operator=(DescribePvtzStatisticsGlobalOverviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AvgResolveLatency, avgResolveLatency_);
        DARABONBA_PTR_TO_JSON(AvgResolveLatencyTrend, avgResolveLatencyTrend_);
        DARABONBA_PTR_TO_JSON(AvgSuccessRatio, avgSuccessRatio_);
        DARABONBA_PTR_TO_JSON(AvgSuccessRatioTrend, avgSuccessRatioTrend_);
        DARABONBA_PTR_TO_JSON(TotalResolveCount, totalResolveCount_);
        DARABONBA_PTR_TO_JSON(TotalResolveCountTrend, totalResolveCountTrend_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AvgResolveLatency, avgResolveLatency_);
        DARABONBA_PTR_FROM_JSON(AvgResolveLatencyTrend, avgResolveLatencyTrend_);
        DARABONBA_PTR_FROM_JSON(AvgSuccessRatio, avgSuccessRatio_);
        DARABONBA_PTR_FROM_JSON(AvgSuccessRatioTrend, avgSuccessRatioTrend_);
        DARABONBA_PTR_FROM_JSON(TotalResolveCount, totalResolveCount_);
        DARABONBA_PTR_FROM_JSON(TotalResolveCountTrend, totalResolveCountTrend_);
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
      virtual bool empty() const override { return this->avgResolveLatency_ == nullptr
        && this->avgResolveLatencyTrend_ == nullptr && this->avgSuccessRatio_ == nullptr && this->avgSuccessRatioTrend_ == nullptr && this->totalResolveCount_ == nullptr && this->totalResolveCountTrend_ == nullptr; };
      // avgResolveLatency Field Functions 
      bool hasAvgResolveLatency() const { return this->avgResolveLatency_ != nullptr;};
      void deleteAvgResolveLatency() { this->avgResolveLatency_ = nullptr;};
      inline int64_t getAvgResolveLatency() const { DARABONBA_PTR_GET_DEFAULT(avgResolveLatency_, 0L) };
      inline Data& setAvgResolveLatency(int64_t avgResolveLatency) { DARABONBA_PTR_SET_VALUE(avgResolveLatency_, avgResolveLatency) };


      // avgResolveLatencyTrend Field Functions 
      bool hasAvgResolveLatencyTrend() const { return this->avgResolveLatencyTrend_ != nullptr;};
      void deleteAvgResolveLatencyTrend() { this->avgResolveLatencyTrend_ = nullptr;};
      inline int64_t getAvgResolveLatencyTrend() const { DARABONBA_PTR_GET_DEFAULT(avgResolveLatencyTrend_, 0L) };
      inline Data& setAvgResolveLatencyTrend(int64_t avgResolveLatencyTrend) { DARABONBA_PTR_SET_VALUE(avgResolveLatencyTrend_, avgResolveLatencyTrend) };


      // avgSuccessRatio Field Functions 
      bool hasAvgSuccessRatio() const { return this->avgSuccessRatio_ != nullptr;};
      void deleteAvgSuccessRatio() { this->avgSuccessRatio_ = nullptr;};
      inline int64_t getAvgSuccessRatio() const { DARABONBA_PTR_GET_DEFAULT(avgSuccessRatio_, 0L) };
      inline Data& setAvgSuccessRatio(int64_t avgSuccessRatio) { DARABONBA_PTR_SET_VALUE(avgSuccessRatio_, avgSuccessRatio) };


      // avgSuccessRatioTrend Field Functions 
      bool hasAvgSuccessRatioTrend() const { return this->avgSuccessRatioTrend_ != nullptr;};
      void deleteAvgSuccessRatioTrend() { this->avgSuccessRatioTrend_ = nullptr;};
      inline int64_t getAvgSuccessRatioTrend() const { DARABONBA_PTR_GET_DEFAULT(avgSuccessRatioTrend_, 0L) };
      inline Data& setAvgSuccessRatioTrend(int64_t avgSuccessRatioTrend) { DARABONBA_PTR_SET_VALUE(avgSuccessRatioTrend_, avgSuccessRatioTrend) };


      // totalResolveCount Field Functions 
      bool hasTotalResolveCount() const { return this->totalResolveCount_ != nullptr;};
      void deleteTotalResolveCount() { this->totalResolveCount_ = nullptr;};
      inline int64_t getTotalResolveCount() const { DARABONBA_PTR_GET_DEFAULT(totalResolveCount_, 0L) };
      inline Data& setTotalResolveCount(int64_t totalResolveCount) { DARABONBA_PTR_SET_VALUE(totalResolveCount_, totalResolveCount) };


      // totalResolveCountTrend Field Functions 
      bool hasTotalResolveCountTrend() const { return this->totalResolveCountTrend_ != nullptr;};
      void deleteTotalResolveCountTrend() { this->totalResolveCountTrend_ = nullptr;};
      inline int64_t getTotalResolveCountTrend() const { DARABONBA_PTR_GET_DEFAULT(totalResolveCountTrend_, 0L) };
      inline Data& setTotalResolveCountTrend(int64_t totalResolveCountTrend) { DARABONBA_PTR_SET_VALUE(totalResolveCountTrend_, totalResolveCountTrend) };


    protected:
      shared_ptr<int64_t> avgResolveLatency_ {};
      shared_ptr<int64_t> avgResolveLatencyTrend_ {};
      shared_ptr<int64_t> avgSuccessRatio_ {};
      shared_ptr<int64_t> avgSuccessRatioTrend_ {};
      shared_ptr<int64_t> totalResolveCount_ {};
      shared_ptr<int64_t> totalResolveCountTrend_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribePvtzStatisticsGlobalOverviewResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribePvtzStatisticsGlobalOverviewResponseBody::Data) };
    inline DescribePvtzStatisticsGlobalOverviewResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribePvtzStatisticsGlobalOverviewResponseBody::Data) };
    inline DescribePvtzStatisticsGlobalOverviewResponseBody& setData(const DescribePvtzStatisticsGlobalOverviewResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribePvtzStatisticsGlobalOverviewResponseBody& setData(DescribePvtzStatisticsGlobalOverviewResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePvtzStatisticsGlobalOverviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribePvtzStatisticsGlobalOverviewResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
