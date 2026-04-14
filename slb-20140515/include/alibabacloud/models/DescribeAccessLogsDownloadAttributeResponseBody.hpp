// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSLOGSDOWNLOADATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSLOGSDOWNLOADATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeAccessLogsDownloadAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessLogsDownloadAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogsDownloadAttributes, logsDownloadAttributes_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessLogsDownloadAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogsDownloadAttributes, logsDownloadAttributes_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAccessLogsDownloadAttributeResponseBody() = default ;
    DescribeAccessLogsDownloadAttributeResponseBody(const DescribeAccessLogsDownloadAttributeResponseBody &) = default ;
    DescribeAccessLogsDownloadAttributeResponseBody(DescribeAccessLogsDownloadAttributeResponseBody &&) = default ;
    DescribeAccessLogsDownloadAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessLogsDownloadAttributeResponseBody() = default ;
    DescribeAccessLogsDownloadAttributeResponseBody& operator=(const DescribeAccessLogsDownloadAttributeResponseBody &) = default ;
    DescribeAccessLogsDownloadAttributeResponseBody& operator=(DescribeAccessLogsDownloadAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogsDownloadAttributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogsDownloadAttributes& obj) { 
        DARABONBA_PTR_TO_JSON(LogsDownloadAttribute, logsDownloadAttribute_);
      };
      friend void from_json(const Darabonba::Json& j, LogsDownloadAttributes& obj) { 
        DARABONBA_PTR_FROM_JSON(LogsDownloadAttribute, logsDownloadAttribute_);
      };
      LogsDownloadAttributes() = default ;
      LogsDownloadAttributes(const LogsDownloadAttributes &) = default ;
      LogsDownloadAttributes(LogsDownloadAttributes &&) = default ;
      LogsDownloadAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogsDownloadAttributes() = default ;
      LogsDownloadAttributes& operator=(const LogsDownloadAttributes &) = default ;
      LogsDownloadAttributes& operator=(LogsDownloadAttributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LogsDownloadAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogsDownloadAttribute& obj) { 
          DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
          DARABONBA_PTR_TO_JSON(LogProject, logProject_);
          DARABONBA_PTR_TO_JSON(LogStore, logStore_);
          DARABONBA_PTR_TO_JSON(LogType, logType_);
          DARABONBA_PTR_TO_JSON(Region, region_);
        };
        friend void from_json(const Darabonba::Json& j, LogsDownloadAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
          DARABONBA_PTR_FROM_JSON(LogProject, logProject_);
          DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
          DARABONBA_PTR_FROM_JSON(LogType, logType_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
        };
        LogsDownloadAttribute() = default ;
        LogsDownloadAttribute(const LogsDownloadAttribute &) = default ;
        LogsDownloadAttribute(LogsDownloadAttribute &&) = default ;
        LogsDownloadAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LogsDownloadAttribute() = default ;
        LogsDownloadAttribute& operator=(const LogsDownloadAttribute &) = default ;
        LogsDownloadAttribute& operator=(LogsDownloadAttribute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->loadBalancerId_ == nullptr
        && this->logProject_ == nullptr && this->logStore_ == nullptr && this->logType_ == nullptr && this->region_ == nullptr; };
        // loadBalancerId Field Functions 
        bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
        void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
        inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
        inline LogsDownloadAttribute& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


        // logProject Field Functions 
        bool hasLogProject() const { return this->logProject_ != nullptr;};
        void deleteLogProject() { this->logProject_ = nullptr;};
        inline string getLogProject() const { DARABONBA_PTR_GET_DEFAULT(logProject_, "") };
        inline LogsDownloadAttribute& setLogProject(string logProject) { DARABONBA_PTR_SET_VALUE(logProject_, logProject) };


        // logStore Field Functions 
        bool hasLogStore() const { return this->logStore_ != nullptr;};
        void deleteLogStore() { this->logStore_ = nullptr;};
        inline string getLogStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
        inline LogsDownloadAttribute& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


        // logType Field Functions 
        bool hasLogType() const { return this->logType_ != nullptr;};
        void deleteLogType() { this->logType_ = nullptr;};
        inline string getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
        inline LogsDownloadAttribute& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline LogsDownloadAttribute& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      protected:
        shared_ptr<string> loadBalancerId_ {};
        shared_ptr<string> logProject_ {};
        shared_ptr<string> logStore_ {};
        shared_ptr<string> logType_ {};
        shared_ptr<string> region_ {};
      };

      virtual bool empty() const override { return this->logsDownloadAttribute_ == nullptr; };
      // logsDownloadAttribute Field Functions 
      bool hasLogsDownloadAttribute() const { return this->logsDownloadAttribute_ != nullptr;};
      void deleteLogsDownloadAttribute() { this->logsDownloadAttribute_ = nullptr;};
      inline const vector<LogsDownloadAttributes::LogsDownloadAttribute> & getLogsDownloadAttribute() const { DARABONBA_PTR_GET_CONST(logsDownloadAttribute_, vector<LogsDownloadAttributes::LogsDownloadAttribute>) };
      inline vector<LogsDownloadAttributes::LogsDownloadAttribute> getLogsDownloadAttribute() { DARABONBA_PTR_GET(logsDownloadAttribute_, vector<LogsDownloadAttributes::LogsDownloadAttribute>) };
      inline LogsDownloadAttributes& setLogsDownloadAttribute(const vector<LogsDownloadAttributes::LogsDownloadAttribute> & logsDownloadAttribute) { DARABONBA_PTR_SET_VALUE(logsDownloadAttribute_, logsDownloadAttribute) };
      inline LogsDownloadAttributes& setLogsDownloadAttribute(vector<LogsDownloadAttributes::LogsDownloadAttribute> && logsDownloadAttribute) { DARABONBA_PTR_SET_RVALUE(logsDownloadAttribute_, logsDownloadAttribute) };


    protected:
      shared_ptr<vector<LogsDownloadAttributes::LogsDownloadAttribute>> logsDownloadAttribute_ {};
    };

    virtual bool empty() const override { return this->logsDownloadAttributes_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // logsDownloadAttributes Field Functions 
    bool hasLogsDownloadAttributes() const { return this->logsDownloadAttributes_ != nullptr;};
    void deleteLogsDownloadAttributes() { this->logsDownloadAttributes_ = nullptr;};
    inline const DescribeAccessLogsDownloadAttributeResponseBody::LogsDownloadAttributes & getLogsDownloadAttributes() const { DARABONBA_PTR_GET_CONST(logsDownloadAttributes_, DescribeAccessLogsDownloadAttributeResponseBody::LogsDownloadAttributes) };
    inline DescribeAccessLogsDownloadAttributeResponseBody::LogsDownloadAttributes getLogsDownloadAttributes() { DARABONBA_PTR_GET(logsDownloadAttributes_, DescribeAccessLogsDownloadAttributeResponseBody::LogsDownloadAttributes) };
    inline DescribeAccessLogsDownloadAttributeResponseBody& setLogsDownloadAttributes(const DescribeAccessLogsDownloadAttributeResponseBody::LogsDownloadAttributes & logsDownloadAttributes) { DARABONBA_PTR_SET_VALUE(logsDownloadAttributes_, logsDownloadAttributes) };
    inline DescribeAccessLogsDownloadAttributeResponseBody& setLogsDownloadAttributes(DescribeAccessLogsDownloadAttributeResponseBody::LogsDownloadAttributes && logsDownloadAttributes) { DARABONBA_PTR_SET_RVALUE(logsDownloadAttributes_, logsDownloadAttributes) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAccessLogsDownloadAttributeResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAccessLogsDownloadAttributeResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessLogsDownloadAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAccessLogsDownloadAttributeResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeAccessLogsDownloadAttributeResponseBody::LogsDownloadAttributes> logsDownloadAttributes_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
