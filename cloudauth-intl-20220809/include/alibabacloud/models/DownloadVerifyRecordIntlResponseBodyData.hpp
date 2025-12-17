// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADVERIFYRECORDINTLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADVERIFYRECORDINTLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class DownloadVerifyRecordIntlResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadVerifyRecordIntlResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadTaskId, downloadTaskId_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadVerifyRecordIntlResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadTaskId, downloadTaskId_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DownloadVerifyRecordIntlResponseBodyData() = default ;
    DownloadVerifyRecordIntlResponseBodyData(const DownloadVerifyRecordIntlResponseBodyData &) = default ;
    DownloadVerifyRecordIntlResponseBodyData(DownloadVerifyRecordIntlResponseBodyData &&) = default ;
    DownloadVerifyRecordIntlResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadVerifyRecordIntlResponseBodyData() = default ;
    DownloadVerifyRecordIntlResponseBodyData& operator=(const DownloadVerifyRecordIntlResponseBodyData &) = default ;
    DownloadVerifyRecordIntlResponseBodyData& operator=(DownloadVerifyRecordIntlResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadTaskId_ == nullptr
        && return this->url_ == nullptr; };
    // downloadTaskId Field Functions 
    bool hasDownloadTaskId() const { return this->downloadTaskId_ != nullptr;};
    void deleteDownloadTaskId() { this->downloadTaskId_ = nullptr;};
    inline string downloadTaskId() const { DARABONBA_PTR_GET_DEFAULT(downloadTaskId_, "") };
    inline DownloadVerifyRecordIntlResponseBodyData& setDownloadTaskId(string downloadTaskId) { DARABONBA_PTR_SET_VALUE(downloadTaskId_, downloadTaskId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DownloadVerifyRecordIntlResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // Task ID, returned in asynchronous mode, used later with QueryDownloadTaskIntl to download the exported file.
    std::shared_ptr<string> downloadTaskId_ = nullptr;
    // Exported file download link.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
