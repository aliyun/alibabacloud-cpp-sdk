// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICESTATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICESTATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryDeviceStatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDeviceStatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppDeviceStats, appDeviceStats_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDeviceStatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppDeviceStats, appDeviceStats_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryDeviceStatResponseBody() = default ;
    QueryDeviceStatResponseBody(const QueryDeviceStatResponseBody &) = default ;
    QueryDeviceStatResponseBody(QueryDeviceStatResponseBody &&) = default ;
    QueryDeviceStatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDeviceStatResponseBody() = default ;
    QueryDeviceStatResponseBody& operator=(const QueryDeviceStatResponseBody &) = default ;
    QueryDeviceStatResponseBody& operator=(QueryDeviceStatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppDeviceStats : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppDeviceStats& obj) { 
        DARABONBA_PTR_TO_JSON(AppDeviceStat, appDeviceStat_);
      };
      friend void from_json(const Darabonba::Json& j, AppDeviceStats& obj) { 
        DARABONBA_PTR_FROM_JSON(AppDeviceStat, appDeviceStat_);
      };
      AppDeviceStats() = default ;
      AppDeviceStats(const AppDeviceStats &) = default ;
      AppDeviceStats(AppDeviceStats &&) = default ;
      AppDeviceStats(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppDeviceStats() = default ;
      AppDeviceStats& operator=(const AppDeviceStats &) = default ;
      AppDeviceStats& operator=(AppDeviceStats &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AppDeviceStat : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppDeviceStat& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, AppDeviceStat& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        AppDeviceStat() = default ;
        AppDeviceStat(const AppDeviceStat &) = default ;
        AppDeviceStat(AppDeviceStat &&) = default ;
        AppDeviceStat(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppDeviceStat() = default ;
        AppDeviceStat& operator=(const AppDeviceStat &) = default ;
        AppDeviceStat& operator=(AppDeviceStat &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->deviceType_ == nullptr && this->time_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline AppDeviceStat& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // deviceType Field Functions 
        bool hasDeviceType() const { return this->deviceType_ != nullptr;};
        void deleteDeviceType() { this->deviceType_ = nullptr;};
        inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
        inline AppDeviceStat& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline AppDeviceStat& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        shared_ptr<int64_t> count_ {};
        shared_ptr<string> deviceType_ {};
        shared_ptr<string> time_ {};
      };

      virtual bool empty() const override { return this->appDeviceStat_ == nullptr; };
      // appDeviceStat Field Functions 
      bool hasAppDeviceStat() const { return this->appDeviceStat_ != nullptr;};
      void deleteAppDeviceStat() { this->appDeviceStat_ = nullptr;};
      inline const vector<AppDeviceStats::AppDeviceStat> & getAppDeviceStat() const { DARABONBA_PTR_GET_CONST(appDeviceStat_, vector<AppDeviceStats::AppDeviceStat>) };
      inline vector<AppDeviceStats::AppDeviceStat> getAppDeviceStat() { DARABONBA_PTR_GET(appDeviceStat_, vector<AppDeviceStats::AppDeviceStat>) };
      inline AppDeviceStats& setAppDeviceStat(const vector<AppDeviceStats::AppDeviceStat> & appDeviceStat) { DARABONBA_PTR_SET_VALUE(appDeviceStat_, appDeviceStat) };
      inline AppDeviceStats& setAppDeviceStat(vector<AppDeviceStats::AppDeviceStat> && appDeviceStat) { DARABONBA_PTR_SET_RVALUE(appDeviceStat_, appDeviceStat) };


    protected:
      shared_ptr<vector<AppDeviceStats::AppDeviceStat>> appDeviceStat_ {};
    };

    virtual bool empty() const override { return this->appDeviceStats_ == nullptr
        && this->requestId_ == nullptr; };
    // appDeviceStats Field Functions 
    bool hasAppDeviceStats() const { return this->appDeviceStats_ != nullptr;};
    void deleteAppDeviceStats() { this->appDeviceStats_ = nullptr;};
    inline const QueryDeviceStatResponseBody::AppDeviceStats & getAppDeviceStats() const { DARABONBA_PTR_GET_CONST(appDeviceStats_, QueryDeviceStatResponseBody::AppDeviceStats) };
    inline QueryDeviceStatResponseBody::AppDeviceStats getAppDeviceStats() { DARABONBA_PTR_GET(appDeviceStats_, QueryDeviceStatResponseBody::AppDeviceStats) };
    inline QueryDeviceStatResponseBody& setAppDeviceStats(const QueryDeviceStatResponseBody::AppDeviceStats & appDeviceStats) { DARABONBA_PTR_SET_VALUE(appDeviceStats_, appDeviceStats) };
    inline QueryDeviceStatResponseBody& setAppDeviceStats(QueryDeviceStatResponseBody::AppDeviceStats && appDeviceStats) { DARABONBA_PTR_SET_RVALUE(appDeviceStats_, appDeviceStats) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDeviceStatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryDeviceStatResponseBody::AppDeviceStats> appDeviceStats_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
