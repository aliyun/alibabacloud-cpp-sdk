// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGUARDSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGUARDSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetGuardStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGuardStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogScanStatus, logScanStatus_);
      DARABONBA_PTR_TO_JSON(ProtectionStatus, protectionStatus_);
      DARABONBA_PTR_TO_JSON(RealTimeStatus, realTimeStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGuardStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogScanStatus, logScanStatus_);
      DARABONBA_PTR_FROM_JSON(ProtectionStatus, protectionStatus_);
      DARABONBA_PTR_FROM_JSON(RealTimeStatus, realTimeStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetGuardStatusResponseBody() = default ;
    GetGuardStatusResponseBody(const GetGuardStatusResponseBody &) = default ;
    GetGuardStatusResponseBody(GetGuardStatusResponseBody &&) = default ;
    GetGuardStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGuardStatusResponseBody() = default ;
    GetGuardStatusResponseBody& operator=(const GetGuardStatusResponseBody &) = default ;
    GetGuardStatusResponseBody& operator=(GetGuardStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RealTimeStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RealTimeStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, RealTimeStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      RealTimeStatus() = default ;
      RealTimeStatus(const RealTimeStatus &) = default ;
      RealTimeStatus(RealTimeStatus &&) = default ;
      RealTimeStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RealTimeStatus() = default ;
      RealTimeStatus& operator=(const RealTimeStatus &) = default ;
      RealTimeStatus& operator=(RealTimeStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr
        && this->type_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RealTimeStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline RealTimeStatus& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The status. Valid values:
      // - enabled: Running.
      // - disabled: Not accessed.
      shared_ptr<string> status_ {};
      // The type.
      shared_ptr<string> type_ {};
    };

    class ProtectionStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProtectionStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ProtectionStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ProtectionStatus() = default ;
      ProtectionStatus(const ProtectionStatus &) = default ;
      ProtectionStatus(ProtectionStatus &&) = default ;
      ProtectionStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProtectionStatus() = default ;
      ProtectionStatus& operator=(const ProtectionStatus &) = default ;
      ProtectionStatus& operator=(ProtectionStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr
        && this->type_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ProtectionStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ProtectionStatus& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The status. Valid values:
      // - enabled: Running.
      // - disabled: Not accessed.
      shared_ptr<string> status_ {};
      // The type.
      shared_ptr<string> type_ {};
    };

    class LogScanStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogScanStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, LogScanStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      LogScanStatus() = default ;
      LogScanStatus(const LogScanStatus &) = default ;
      LogScanStatus(LogScanStatus &&) = default ;
      LogScanStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogScanStatus() = default ;
      LogScanStatus& operator=(const LogScanStatus &) = default ;
      LogScanStatus& operator=(LogScanStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr
        && this->type_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline LogScanStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline LogScanStatus& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The status. Valid values:
      // - enabled: Running.
      // - disabled: Not accessed.
      shared_ptr<string> status_ {};
      // The type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->logScanStatus_ == nullptr
        && this->protectionStatus_ == nullptr && this->realTimeStatus_ == nullptr && this->requestId_ == nullptr; };
    // logScanStatus Field Functions 
    bool hasLogScanStatus() const { return this->logScanStatus_ != nullptr;};
    void deleteLogScanStatus() { this->logScanStatus_ = nullptr;};
    inline const vector<GetGuardStatusResponseBody::LogScanStatus> & getLogScanStatus() const { DARABONBA_PTR_GET_CONST(logScanStatus_, vector<GetGuardStatusResponseBody::LogScanStatus>) };
    inline vector<GetGuardStatusResponseBody::LogScanStatus> getLogScanStatus() { DARABONBA_PTR_GET(logScanStatus_, vector<GetGuardStatusResponseBody::LogScanStatus>) };
    inline GetGuardStatusResponseBody& setLogScanStatus(const vector<GetGuardStatusResponseBody::LogScanStatus> & logScanStatus) { DARABONBA_PTR_SET_VALUE(logScanStatus_, logScanStatus) };
    inline GetGuardStatusResponseBody& setLogScanStatus(vector<GetGuardStatusResponseBody::LogScanStatus> && logScanStatus) { DARABONBA_PTR_SET_RVALUE(logScanStatus_, logScanStatus) };


    // protectionStatus Field Functions 
    bool hasProtectionStatus() const { return this->protectionStatus_ != nullptr;};
    void deleteProtectionStatus() { this->protectionStatus_ = nullptr;};
    inline const vector<GetGuardStatusResponseBody::ProtectionStatus> & getProtectionStatus() const { DARABONBA_PTR_GET_CONST(protectionStatus_, vector<GetGuardStatusResponseBody::ProtectionStatus>) };
    inline vector<GetGuardStatusResponseBody::ProtectionStatus> getProtectionStatus() { DARABONBA_PTR_GET(protectionStatus_, vector<GetGuardStatusResponseBody::ProtectionStatus>) };
    inline GetGuardStatusResponseBody& setProtectionStatus(const vector<GetGuardStatusResponseBody::ProtectionStatus> & protectionStatus) { DARABONBA_PTR_SET_VALUE(protectionStatus_, protectionStatus) };
    inline GetGuardStatusResponseBody& setProtectionStatus(vector<GetGuardStatusResponseBody::ProtectionStatus> && protectionStatus) { DARABONBA_PTR_SET_RVALUE(protectionStatus_, protectionStatus) };


    // realTimeStatus Field Functions 
    bool hasRealTimeStatus() const { return this->realTimeStatus_ != nullptr;};
    void deleteRealTimeStatus() { this->realTimeStatus_ = nullptr;};
    inline const vector<GetGuardStatusResponseBody::RealTimeStatus> & getRealTimeStatus() const { DARABONBA_PTR_GET_CONST(realTimeStatus_, vector<GetGuardStatusResponseBody::RealTimeStatus>) };
    inline vector<GetGuardStatusResponseBody::RealTimeStatus> getRealTimeStatus() { DARABONBA_PTR_GET(realTimeStatus_, vector<GetGuardStatusResponseBody::RealTimeStatus>) };
    inline GetGuardStatusResponseBody& setRealTimeStatus(const vector<GetGuardStatusResponseBody::RealTimeStatus> & realTimeStatus) { DARABONBA_PTR_SET_VALUE(realTimeStatus_, realTimeStatus) };
    inline GetGuardStatusResponseBody& setRealTimeStatus(vector<GetGuardStatusResponseBody::RealTimeStatus> && realTimeStatus) { DARABONBA_PTR_SET_RVALUE(realTimeStatus_, realTimeStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGuardStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of log scan statistics.
    shared_ptr<vector<GetGuardStatusResponseBody::LogScanStatus>> logScanStatus_ {};
    // The list of protection status statistics.
    shared_ptr<vector<GetGuardStatusResponseBody::ProtectionStatus>> protectionStatus_ {};
    // The list of real-time protection statistics.
    shared_ptr<vector<GetGuardStatusResponseBody::RealTimeStatus>> realTimeStatus_ {};
    // The ID assigned by the backend to uniquely identify a request. This ID can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
