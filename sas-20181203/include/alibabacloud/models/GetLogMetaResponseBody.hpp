// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetLogMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogMeta, logMeta_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogMeta, logMeta_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLogMetaResponseBody() = default ;
    GetLogMetaResponseBody(const GetLogMetaResponseBody &) = default ;
    GetLogMetaResponseBody(GetLogMetaResponseBody &&) = default ;
    GetLogMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogMetaResponseBody() = default ;
    GetLogMetaResponseBody& operator=(const GetLogMetaResponseBody &) = default ;
    GetLogMetaResponseBody& operator=(GetLogMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogMeta : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogMeta& obj) { 
        DARABONBA_PTR_TO_JSON(LogStore, logStore_);
        DARABONBA_PTR_TO_JSON(Project, project_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, LogMeta& obj) { 
        DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
        DARABONBA_PTR_FROM_JSON(Project, project_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      LogMeta() = default ;
      LogMeta(const LogMeta &) = default ;
      LogMeta(LogMeta &&) = default ;
      LogMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogMeta() = default ;
      LogMeta& operator=(const LogMeta &) = default ;
      LogMeta& operator=(LogMeta &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->logStore_ == nullptr
        && this->project_ == nullptr && this->status_ == nullptr; };
      // logStore Field Functions 
      bool hasLogStore() const { return this->logStore_ != nullptr;};
      void deleteLogStore() { this->logStore_ = nullptr;};
      inline string getLogStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
      inline LogMeta& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline LogMeta& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline LogMeta& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The name of the dedicated Logstore in which logs are stored.
      shared_ptr<string> logStore_ {};
      // The Simple Log Service project.
      shared_ptr<string> project_ {};
      // The status of a data shipping task of a log. Valid values:
      // 
      // *   **enabled**
      // *   **disabled**
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->logMeta_ == nullptr
        && this->requestId_ == nullptr; };
    // logMeta Field Functions 
    bool hasLogMeta() const { return this->logMeta_ != nullptr;};
    void deleteLogMeta() { this->logMeta_ = nullptr;};
    inline const GetLogMetaResponseBody::LogMeta & getLogMeta() const { DARABONBA_PTR_GET_CONST(logMeta_, GetLogMetaResponseBody::LogMeta) };
    inline GetLogMetaResponseBody::LogMeta getLogMeta() { DARABONBA_PTR_GET(logMeta_, GetLogMetaResponseBody::LogMeta) };
    inline GetLogMetaResponseBody& setLogMeta(const GetLogMetaResponseBody::LogMeta & logMeta) { DARABONBA_PTR_SET_VALUE(logMeta_, logMeta) };
    inline GetLogMetaResponseBody& setLogMeta(GetLogMetaResponseBody::LogMeta && logMeta) { DARABONBA_PTR_SET_RVALUE(logMeta_, logMeta) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLogMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data of a data shipping task.
    shared_ptr<GetLogMetaResponseBody::LogMeta> logMeta_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
