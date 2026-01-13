// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADDIAGNOSISRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADDIAGNOSISRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DownloadDiagnosisRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadDiagnosisRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DownloadId, downloadId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadDiagnosisRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DownloadId, downloadId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DownloadDiagnosisRecordsResponseBody() = default ;
    DownloadDiagnosisRecordsResponseBody(const DownloadDiagnosisRecordsResponseBody &) = default ;
    DownloadDiagnosisRecordsResponseBody(DownloadDiagnosisRecordsResponseBody &&) = default ;
    DownloadDiagnosisRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadDiagnosisRecordsResponseBody() = default ;
    DownloadDiagnosisRecordsResponseBody& operator=(const DownloadDiagnosisRecordsResponseBody &) = default ;
    DownloadDiagnosisRecordsResponseBody& operator=(DownloadDiagnosisRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->downloadId_ == nullptr && this->requestId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DownloadDiagnosisRecordsResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // downloadId Field Functions 
    bool hasDownloadId() const { return this->downloadId_ != nullptr;};
    void deleteDownloadId() { this->downloadId_ = nullptr;};
    inline string getDownloadId() const { DARABONBA_PTR_GET_DEFAULT(downloadId_, "") };
    inline DownloadDiagnosisRecordsResponseBody& setDownloadId(string downloadId) { DARABONBA_PTR_SET_VALUE(downloadId_, downloadId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DownloadDiagnosisRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the instance.
    shared_ptr<string> DBInstanceId_ {};
    // The ID of the download task.
    shared_ptr<string> downloadId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
