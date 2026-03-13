// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROCESSSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROCESSSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeProcessStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProcessStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProcessStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeProcessStatisticsResponseBody() = default ;
    DescribeProcessStatisticsResponseBody(const DescribeProcessStatisticsResponseBody &) = default ;
    DescribeProcessStatisticsResponseBody(DescribeProcessStatisticsResponseBody &&) = default ;
    DescribeProcessStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProcessStatisticsResponseBody() = default ;
    DescribeProcessStatisticsResponseBody& operator=(const DescribeProcessStatisticsResponseBody &) = default ;
    DescribeProcessStatisticsResponseBody& operator=(DescribeProcessStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Metrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
        DARABONBA_PTR_TO_JSON(BanFileNum, banFileNum_);
        DARABONBA_PTR_TO_JSON(BanIpNum, banIpNum_);
        DARABONBA_PTR_TO_JSON(BanProcessNum, banProcessNum_);
        DARABONBA_PTR_TO_JSON(TaskNum, taskNum_);
      };
      friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
        DARABONBA_PTR_FROM_JSON(BanFileNum, banFileNum_);
        DARABONBA_PTR_FROM_JSON(BanIpNum, banIpNum_);
        DARABONBA_PTR_FROM_JSON(BanProcessNum, banProcessNum_);
        DARABONBA_PTR_FROM_JSON(TaskNum, taskNum_);
      };
      Metrics() = default ;
      Metrics(const Metrics &) = default ;
      Metrics(Metrics &&) = default ;
      Metrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Metrics() = default ;
      Metrics& operator=(const Metrics &) = default ;
      Metrics& operator=(Metrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->banFileNum_ == nullptr
        && this->banIpNum_ == nullptr && this->banProcessNum_ == nullptr && this->taskNum_ == nullptr; };
      // banFileNum Field Functions 
      bool hasBanFileNum() const { return this->banFileNum_ != nullptr;};
      void deleteBanFileNum() { this->banFileNum_ = nullptr;};
      inline int32_t getBanFileNum() const { DARABONBA_PTR_GET_DEFAULT(banFileNum_, 0) };
      inline Metrics& setBanFileNum(int32_t banFileNum) { DARABONBA_PTR_SET_VALUE(banFileNum_, banFileNum) };


      // banIpNum Field Functions 
      bool hasBanIpNum() const { return this->banIpNum_ != nullptr;};
      void deleteBanIpNum() { this->banIpNum_ = nullptr;};
      inline int32_t getBanIpNum() const { DARABONBA_PTR_GET_DEFAULT(banIpNum_, 0) };
      inline Metrics& setBanIpNum(int32_t banIpNum) { DARABONBA_PTR_SET_VALUE(banIpNum_, banIpNum) };


      // banProcessNum Field Functions 
      bool hasBanProcessNum() const { return this->banProcessNum_ != nullptr;};
      void deleteBanProcessNum() { this->banProcessNum_ = nullptr;};
      inline int32_t getBanProcessNum() const { DARABONBA_PTR_GET_DEFAULT(banProcessNum_, 0) };
      inline Metrics& setBanProcessNum(int32_t banProcessNum) { DARABONBA_PTR_SET_VALUE(banProcessNum_, banProcessNum) };


      // taskNum Field Functions 
      bool hasTaskNum() const { return this->taskNum_ != nullptr;};
      void deleteTaskNum() { this->taskNum_ = nullptr;};
      inline int32_t getTaskNum() const { DARABONBA_PTR_GET_DEFAULT(taskNum_, 0) };
      inline Metrics& setTaskNum(int32_t taskNum) { DARABONBA_PTR_SET_VALUE(taskNum_, taskNum) };


    protected:
      // The number of blocked files.
      shared_ptr<int32_t> banFileNum_ {};
      // The number of blocked IP addresses.
      shared_ptr<int32_t> banIpNum_ {};
      // The number of blocked processes.
      shared_ptr<int32_t> banProcessNum_ {};
      // The number of handling tasks.
      shared_ptr<int32_t> taskNum_ {};
    };

    virtual bool empty() const override { return this->metrics_ == nullptr
        && this->requestId_ == nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const DescribeProcessStatisticsResponseBody::Metrics & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, DescribeProcessStatisticsResponseBody::Metrics) };
    inline DescribeProcessStatisticsResponseBody::Metrics getMetrics() { DARABONBA_PTR_GET(metrics_, DescribeProcessStatisticsResponseBody::Metrics) };
    inline DescribeProcessStatisticsResponseBody& setMetrics(const DescribeProcessStatisticsResponseBody::Metrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline DescribeProcessStatisticsResponseBody& setMetrics(DescribeProcessStatisticsResponseBody::Metrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProcessStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<DescribeProcessStatisticsResponseBody::Metrics> metrics_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
