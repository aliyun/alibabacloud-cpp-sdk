// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERAUTHSTATISTICSGLOBALOVERVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERAUTHSTATISTICSGLOBALOVERVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeInterAuthStatisticsGlobalOverviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInterAuthStatisticsGlobalOverviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInterAuthStatisticsGlobalOverviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInterAuthStatisticsGlobalOverviewResponseBody() = default ;
    DescribeInterAuthStatisticsGlobalOverviewResponseBody(const DescribeInterAuthStatisticsGlobalOverviewResponseBody &) = default ;
    DescribeInterAuthStatisticsGlobalOverviewResponseBody(DescribeInterAuthStatisticsGlobalOverviewResponseBody &&) = default ;
    DescribeInterAuthStatisticsGlobalOverviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInterAuthStatisticsGlobalOverviewResponseBody() = default ;
    DescribeInterAuthStatisticsGlobalOverviewResponseBody& operator=(const DescribeInterAuthStatisticsGlobalOverviewResponseBody &) = default ;
    DescribeInterAuthStatisticsGlobalOverviewResponseBody& operator=(DescribeInterAuthStatisticsGlobalOverviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AvgSuccessRatio, avgSuccessRatio_);
        DARABONBA_PTR_TO_JSON(AvgSuccessRatioTrend, avgSuccessRatioTrend_);
        DARABONBA_PTR_TO_JSON(TotalResolveCount, totalResolveCount_);
        DARABONBA_PTR_TO_JSON(TotalResolveCountTrend, totalResolveCountTrend_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      virtual bool empty() const override { return this->avgSuccessRatio_ == nullptr
        && this->avgSuccessRatioTrend_ == nullptr && this->totalResolveCount_ == nullptr && this->totalResolveCountTrend_ == nullptr; };
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
    inline const DescribeInterAuthStatisticsGlobalOverviewResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeInterAuthStatisticsGlobalOverviewResponseBody::Data) };
    inline DescribeInterAuthStatisticsGlobalOverviewResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeInterAuthStatisticsGlobalOverviewResponseBody::Data) };
    inline DescribeInterAuthStatisticsGlobalOverviewResponseBody& setData(const DescribeInterAuthStatisticsGlobalOverviewResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeInterAuthStatisticsGlobalOverviewResponseBody& setData(DescribeInterAuthStatisticsGlobalOverviewResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInterAuthStatisticsGlobalOverviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeInterAuthStatisticsGlobalOverviewResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
