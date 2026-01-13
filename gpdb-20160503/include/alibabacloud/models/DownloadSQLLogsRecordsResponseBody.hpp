// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADSQLLOGSRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADSQLLOGSRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DownloadSQLLogsRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadSQLLogsRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadId, downloadId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadSQLLogsRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadId, downloadId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DownloadSQLLogsRecordsResponseBody() = default ;
    DownloadSQLLogsRecordsResponseBody(const DownloadSQLLogsRecordsResponseBody &) = default ;
    DownloadSQLLogsRecordsResponseBody(DownloadSQLLogsRecordsResponseBody &&) = default ;
    DownloadSQLLogsRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadSQLLogsRecordsResponseBody() = default ;
    DownloadSQLLogsRecordsResponseBody& operator=(const DownloadSQLLogsRecordsResponseBody &) = default ;
    DownloadSQLLogsRecordsResponseBody& operator=(DownloadSQLLogsRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadId_ == nullptr
        && this->requestId_ == nullptr; };
    // downloadId Field Functions 
    bool hasDownloadId() const { return this->downloadId_ != nullptr;};
    void deleteDownloadId() { this->downloadId_ = nullptr;};
    inline int64_t getDownloadId() const { DARABONBA_PTR_GET_DEFAULT(downloadId_, 0L) };
    inline DownloadSQLLogsRecordsResponseBody& setDownloadId(int64_t downloadId) { DARABONBA_PTR_SET_VALUE(downloadId_, downloadId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DownloadSQLLogsRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the download task.
    shared_ptr<int64_t> downloadId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
