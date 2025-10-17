// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADDIAGNOSISRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADDIAGNOSISRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DownloadDiagnosisRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadDiagnosisRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadId, downloadId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadDiagnosisRecordsResponseBody& obj) { 
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
    virtual bool empty() const override { return this->downloadId_ == nullptr
        && return this->requestId_ == nullptr; };
    // downloadId Field Functions 
    bool hasDownloadId() const { return this->downloadId_ != nullptr;};
    void deleteDownloadId() { this->downloadId_ = nullptr;};
    inline int32_t downloadId() const { DARABONBA_PTR_GET_DEFAULT(downloadId_, 0) };
    inline DownloadDiagnosisRecordsResponseBody& setDownloadId(int32_t downloadId) { DARABONBA_PTR_SET_VALUE(downloadId_, downloadId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DownloadDiagnosisRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The download ID.
    std::shared_ptr<int32_t> downloadId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
