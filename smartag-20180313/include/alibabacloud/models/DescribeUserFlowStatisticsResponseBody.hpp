// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERFLOWSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERFLOWSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeUserFlowStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserFlowStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SagStatistics, sagStatistics_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserFlowStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SagStatistics, sagStatistics_);
    };
    DescribeUserFlowStatisticsResponseBody() = default ;
    DescribeUserFlowStatisticsResponseBody(const DescribeUserFlowStatisticsResponseBody &) = default ;
    DescribeUserFlowStatisticsResponseBody(DescribeUserFlowStatisticsResponseBody &&) = default ;
    DescribeUserFlowStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserFlowStatisticsResponseBody() = default ;
    DescribeUserFlowStatisticsResponseBody& operator=(const DescribeUserFlowStatisticsResponseBody &) = default ;
    DescribeUserFlowStatisticsResponseBody& operator=(DescribeUserFlowStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SagStatistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SagStatistics& obj) { 
        DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      };
      friend void from_json(const Darabonba::Json& j, SagStatistics& obj) { 
        DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      };
      SagStatistics() = default ;
      SagStatistics(const SagStatistics &) = default ;
      SagStatistics(SagStatistics &&) = default ;
      SagStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SagStatistics() = default ;
      SagStatistics& operator=(const SagStatistics &) = default ;
      SagStatistics& operator=(SagStatistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Statistics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Statistics& obj) { 
          DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
          DARABONBA_PTR_TO_JSON(TotalLeaveBytes, totalLeaveBytes_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, Statistics& obj) { 
          DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
          DARABONBA_PTR_FROM_JSON(TotalLeaveBytes, totalLeaveBytes_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
        };
        Statistics() = default ;
        Statistics(const Statistics &) = default ;
        Statistics(Statistics &&) = default ;
        Statistics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Statistics() = default ;
        Statistics& operator=(const Statistics &) = default ;
        Statistics& operator=(Statistics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->totalBytes_ == nullptr
        && this->totalLeaveBytes_ == nullptr && this->userName_ == nullptr; };
        // totalBytes Field Functions 
        bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
        void deleteTotalBytes() { this->totalBytes_ = nullptr;};
        inline string getTotalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, "") };
        inline Statistics& setTotalBytes(string totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


        // totalLeaveBytes Field Functions 
        bool hasTotalLeaveBytes() const { return this->totalLeaveBytes_ != nullptr;};
        void deleteTotalLeaveBytes() { this->totalLeaveBytes_ = nullptr;};
        inline string getTotalLeaveBytes() const { DARABONBA_PTR_GET_DEFAULT(totalLeaveBytes_, "") };
        inline Statistics& setTotalLeaveBytes(string totalLeaveBytes) { DARABONBA_PTR_SET_VALUE(totalLeaveBytes_, totalLeaveBytes) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline Statistics& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        shared_ptr<string> totalBytes_ {};
        shared_ptr<string> totalLeaveBytes_ {};
        shared_ptr<string> userName_ {};
      };

      virtual bool empty() const override { return this->statistics_ == nullptr; };
      // statistics Field Functions 
      bool hasStatistics() const { return this->statistics_ != nullptr;};
      void deleteStatistics() { this->statistics_ = nullptr;};
      inline const vector<SagStatistics::Statistics> & getStatistics() const { DARABONBA_PTR_GET_CONST(statistics_, vector<SagStatistics::Statistics>) };
      inline vector<SagStatistics::Statistics> getStatistics() { DARABONBA_PTR_GET(statistics_, vector<SagStatistics::Statistics>) };
      inline SagStatistics& setStatistics(const vector<SagStatistics::Statistics> & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
      inline SagStatistics& setStatistics(vector<SagStatistics::Statistics> && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


    protected:
      shared_ptr<vector<SagStatistics::Statistics>> statistics_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sagStatistics_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserFlowStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sagStatistics Field Functions 
    bool hasSagStatistics() const { return this->sagStatistics_ != nullptr;};
    void deleteSagStatistics() { this->sagStatistics_ = nullptr;};
    inline const DescribeUserFlowStatisticsResponseBody::SagStatistics & getSagStatistics() const { DARABONBA_PTR_GET_CONST(sagStatistics_, DescribeUserFlowStatisticsResponseBody::SagStatistics) };
    inline DescribeUserFlowStatisticsResponseBody::SagStatistics getSagStatistics() { DARABONBA_PTR_GET(sagStatistics_, DescribeUserFlowStatisticsResponseBody::SagStatistics) };
    inline DescribeUserFlowStatisticsResponseBody& setSagStatistics(const DescribeUserFlowStatisticsResponseBody::SagStatistics & sagStatistics) { DARABONBA_PTR_SET_VALUE(sagStatistics_, sagStatistics) };
    inline DescribeUserFlowStatisticsResponseBody& setSagStatistics(DescribeUserFlowStatisticsResponseBody::SagStatistics && sagStatistics) { DARABONBA_PTR_SET_RVALUE(sagStatistics_, sagStatistics) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeUserFlowStatisticsResponseBody::SagStatistics> sagStatistics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
