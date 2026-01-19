// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeLogConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogInfos, logInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLogConfigResponseBody() = default ;
    DescribeLogConfigResponseBody(const DescribeLogConfigResponseBody &) = default ;
    DescribeLogConfigResponseBody(DescribeLogConfigResponseBody &&) = default ;
    DescribeLogConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogConfigResponseBody() = default ;
    DescribeLogConfigResponseBody& operator=(const DescribeLogConfigResponseBody &) = default ;
    DescribeLogConfigResponseBody& operator=(DescribeLogConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogInfos& obj) { 
        DARABONBA_PTR_TO_JSON(LogInfo, logInfo_);
      };
      friend void from_json(const Darabonba::Json& j, LogInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(LogInfo, logInfo_);
      };
      LogInfos() = default ;
      LogInfos(const LogInfos &) = default ;
      LogInfos(LogInfos &&) = default ;
      LogInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogInfos() = default ;
      LogInfos& operator=(const LogInfos &) = default ;
      LogInfos& operator=(LogInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LogInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogInfo& obj) { 
          DARABONBA_PTR_TO_JSON(LogType, logType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SlsLogStore, slsLogStore_);
          DARABONBA_PTR_TO_JSON(SlsProject, slsProject_);
        };
        friend void from_json(const Darabonba::Json& j, LogInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(LogType, logType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SlsLogStore, slsLogStore_);
          DARABONBA_PTR_FROM_JSON(SlsProject, slsProject_);
        };
        LogInfo() = default ;
        LogInfo(const LogInfo &) = default ;
        LogInfo(LogInfo &&) = default ;
        LogInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LogInfo() = default ;
        LogInfo& operator=(const LogInfo &) = default ;
        LogInfo& operator=(LogInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->logType_ == nullptr
        && this->regionId_ == nullptr && this->slsLogStore_ == nullptr && this->slsProject_ == nullptr; };
        // logType Field Functions 
        bool hasLogType() const { return this->logType_ != nullptr;};
        void deleteLogType() { this->logType_ = nullptr;};
        inline string getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
        inline LogInfo& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline LogInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // slsLogStore Field Functions 
        bool hasSlsLogStore() const { return this->slsLogStore_ != nullptr;};
        void deleteSlsLogStore() { this->slsLogStore_ = nullptr;};
        inline string getSlsLogStore() const { DARABONBA_PTR_GET_DEFAULT(slsLogStore_, "") };
        inline LogInfo& setSlsLogStore(string slsLogStore) { DARABONBA_PTR_SET_VALUE(slsLogStore_, slsLogStore) };


        // slsProject Field Functions 
        bool hasSlsProject() const { return this->slsProject_ != nullptr;};
        void deleteSlsProject() { this->slsProject_ = nullptr;};
        inline string getSlsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
        inline LogInfo& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


      protected:
        // The log type.
        shared_ptr<string> logType_ {};
        // The region ID of the Logstore.
        shared_ptr<string> regionId_ {};
        // The name of the Logstore in Log Service.
        shared_ptr<string> slsLogStore_ {};
        // The name of the Log Service project.
        shared_ptr<string> slsProject_ {};
      };

      virtual bool empty() const override { return this->logInfo_ == nullptr; };
      // logInfo Field Functions 
      bool hasLogInfo() const { return this->logInfo_ != nullptr;};
      void deleteLogInfo() { this->logInfo_ = nullptr;};
      inline const vector<LogInfos::LogInfo> & getLogInfo() const { DARABONBA_PTR_GET_CONST(logInfo_, vector<LogInfos::LogInfo>) };
      inline vector<LogInfos::LogInfo> getLogInfo() { DARABONBA_PTR_GET(logInfo_, vector<LogInfos::LogInfo>) };
      inline LogInfos& setLogInfo(const vector<LogInfos::LogInfo> & logInfo) { DARABONBA_PTR_SET_VALUE(logInfo_, logInfo) };
      inline LogInfos& setLogInfo(vector<LogInfos::LogInfo> && logInfo) { DARABONBA_PTR_SET_RVALUE(logInfo_, logInfo) };


    protected:
      shared_ptr<vector<LogInfos::LogInfo>> logInfo_ {};
    };

    virtual bool empty() const override { return this->logInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // logInfos Field Functions 
    bool hasLogInfos() const { return this->logInfos_ != nullptr;};
    void deleteLogInfos() { this->logInfos_ = nullptr;};
    inline const DescribeLogConfigResponseBody::LogInfos & getLogInfos() const { DARABONBA_PTR_GET_CONST(logInfos_, DescribeLogConfigResponseBody::LogInfos) };
    inline DescribeLogConfigResponseBody::LogInfos getLogInfos() { DARABONBA_PTR_GET(logInfos_, DescribeLogConfigResponseBody::LogInfos) };
    inline DescribeLogConfigResponseBody& setLogInfos(const DescribeLogConfigResponseBody::LogInfos & logInfos) { DARABONBA_PTR_SET_VALUE(logInfos_, logInfos) };
    inline DescribeLogConfigResponseBody& setLogInfos(DescribeLogConfigResponseBody::LogInfos && logInfos) { DARABONBA_PTR_SET_RVALUE(logInfos_, logInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Info of the log config.
    shared_ptr<DescribeLogConfigResponseBody::LogInfos> logInfos_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
