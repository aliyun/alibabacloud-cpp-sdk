// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETLOGSHIPPERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETLOGSHIPPERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ResetLogShipperRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetLogShipperRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotTtl, hotTtl_);
      DARABONBA_PTR_TO_JSON(LogMetaList, logMetaList_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, ResetLogShipperRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotTtl, hotTtl_);
      DARABONBA_PTR_FROM_JSON(LogMetaList, logMetaList_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    ResetLogShipperRequest() = default ;
    ResetLogShipperRequest(const ResetLogShipperRequest &) = default ;
    ResetLogShipperRequest(ResetLogShipperRequest &&) = default ;
    ResetLogShipperRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetLogShipperRequest() = default ;
    ResetLogShipperRequest& operator=(const ResetLogShipperRequest &) = default ;
    ResetLogShipperRequest& operator=(ResetLogShipperRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogMetaList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogMetaList& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigLogStore, configLogStore_);
        DARABONBA_PTR_TO_JSON(HotTtl, hotTtl_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      };
      friend void from_json(const Darabonba::Json& j, LogMetaList& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigLogStore, configLogStore_);
        DARABONBA_PTR_FROM_JSON(HotTtl, hotTtl_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      };
      LogMetaList() = default ;
      LogMetaList(const LogMetaList &) = default ;
      LogMetaList(LogMetaList &&) = default ;
      LogMetaList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogMetaList() = default ;
      LogMetaList& operator=(const LogMetaList &) = default ;
      LogMetaList& operator=(LogMetaList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configLogStore_ == nullptr
        && this->hotTtl_ == nullptr && this->status_ == nullptr && this->ttl_ == nullptr; };
      // configLogStore Field Functions 
      bool hasConfigLogStore() const { return this->configLogStore_ != nullptr;};
      void deleteConfigLogStore() { this->configLogStore_ = nullptr;};
      inline string getConfigLogStore() const { DARABONBA_PTR_GET_DEFAULT(configLogStore_, "") };
      inline LogMetaList& setConfigLogStore(string configLogStore) { DARABONBA_PTR_SET_VALUE(configLogStore_, configLogStore) };


      // hotTtl Field Functions 
      bool hasHotTtl() const { return this->hotTtl_ != nullptr;};
      void deleteHotTtl() { this->hotTtl_ = nullptr;};
      inline int32_t getHotTtl() const { DARABONBA_PTR_GET_DEFAULT(hotTtl_, 0) };
      inline LogMetaList& setHotTtl(int32_t hotTtl) { DARABONBA_PTR_SET_VALUE(hotTtl_, hotTtl) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline LogMetaList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // ttl Field Functions 
      bool hasTtl() const { return this->ttl_ != nullptr;};
      void deleteTtl() { this->ttl_ = nullptr;};
      inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
      inline LogMetaList& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    protected:
      // The Logstore that you want to configure.
      // 
      // >  You can call the [DescribeLogMeta](~~DescribeLogMeta~~) operation to query the Logstore.
      shared_ptr<string> configLogStore_ {};
      // The retention period of hot data in the Logstore.
      // 
      // >  The value of this parameter must be at least 7 and smaller than the log retention period. Unit: days. If you specify this parameter for the Logstore, the global retention period of hot data specified by the HotTtl parameter is overwritten.
      shared_ptr<int32_t> hotTtl_ {};
      // The status of the log analysis feature. Valid values:
      // 
      // *   **disabled**
      // *   **enabled**
      shared_ptr<string> status_ {};
      // The log retention period of the Logstore.
      // 
      // >  If you specify this parameter for the Logstore, the global log retention period specified by the Ttl parameter is overwritten.
      shared_ptr<int32_t> ttl_ {};
    };

    virtual bool empty() const override { return this->hotTtl_ == nullptr
        && this->logMetaList_ == nullptr && this->ttl_ == nullptr; };
    // hotTtl Field Functions 
    bool hasHotTtl() const { return this->hotTtl_ != nullptr;};
    void deleteHotTtl() { this->hotTtl_ = nullptr;};
    inline int32_t getHotTtl() const { DARABONBA_PTR_GET_DEFAULT(hotTtl_, 0) };
    inline ResetLogShipperRequest& setHotTtl(int32_t hotTtl) { DARABONBA_PTR_SET_VALUE(hotTtl_, hotTtl) };


    // logMetaList Field Functions 
    bool hasLogMetaList() const { return this->logMetaList_ != nullptr;};
    void deleteLogMetaList() { this->logMetaList_ = nullptr;};
    inline const vector<ResetLogShipperRequest::LogMetaList> & getLogMetaList() const { DARABONBA_PTR_GET_CONST(logMetaList_, vector<ResetLogShipperRequest::LogMetaList>) };
    inline vector<ResetLogShipperRequest::LogMetaList> getLogMetaList() { DARABONBA_PTR_GET(logMetaList_, vector<ResetLogShipperRequest::LogMetaList>) };
    inline ResetLogShipperRequest& setLogMetaList(const vector<ResetLogShipperRequest::LogMetaList> & logMetaList) { DARABONBA_PTR_SET_VALUE(logMetaList_, logMetaList) };
    inline ResetLogShipperRequest& setLogMetaList(vector<ResetLogShipperRequest::LogMetaList> && logMetaList) { DARABONBA_PTR_SET_RVALUE(logMetaList_, logMetaList) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline ResetLogShipperRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // The global retention period of hot data.
    // 
    // >  The value of this parameter must be at least 7 and smaller than the log retention period. Unit: days.
    shared_ptr<int32_t> hotTtl_ {};
    // The settings of the log analysis feature.
    shared_ptr<vector<ResetLogShipperRequest::LogMetaList>> logMetaList_ {};
    // The global log retention period.
    // 
    // >  This parameter is supported only when the log analysis feature uses the pay-as-you-go billing method.
    shared_ptr<int32_t> ttl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
