// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADAPICALLDAILYDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADAPICALLDAILYDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class DownloadApiCallDailyDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadApiCallDailyDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadApiCallDailyDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    DownloadApiCallDailyDetailResponseBody() = default ;
    DownloadApiCallDailyDetailResponseBody(const DownloadApiCallDailyDetailResponseBody &) = default ;
    DownloadApiCallDailyDetailResponseBody(DownloadApiCallDailyDetailResponseBody &&) = default ;
    DownloadApiCallDailyDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadApiCallDailyDetailResponseBody() = default ;
    DownloadApiCallDailyDetailResponseBody& operator=(const DownloadApiCallDailyDetailResponseBody &) = default ;
    DownloadApiCallDailyDetailResponseBody& operator=(DownloadApiCallDailyDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->requestId_ == nullptr; };
    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline DownloadApiCallDailyDetailResponseBody& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DownloadApiCallDailyDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> downloadUrl_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
