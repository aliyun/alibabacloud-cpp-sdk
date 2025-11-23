// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAEXPORTDOWNLOADURLRESPONSEBODYDOWNLOADURLRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETDATAEXPORTDOWNLOADURLRESPONSEBODYDOWNLOADURLRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataExportDownloadURLResponseBodyDownloadURLResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataExportDownloadURLResponseBodyDownloadURLResult& obj) { 
      DARABONBA_PTR_TO_JSON(HasResult, hasResult_);
      DARABONBA_PTR_TO_JSON(TipMessage, tipMessage_);
      DARABONBA_PTR_TO_JSON(URL, URL_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataExportDownloadURLResponseBodyDownloadURLResult& obj) { 
      DARABONBA_PTR_FROM_JSON(HasResult, hasResult_);
      DARABONBA_PTR_FROM_JSON(TipMessage, tipMessage_);
      DARABONBA_PTR_FROM_JSON(URL, URL_);
    };
    GetDataExportDownloadURLResponseBodyDownloadURLResult() = default ;
    GetDataExportDownloadURLResponseBodyDownloadURLResult(const GetDataExportDownloadURLResponseBodyDownloadURLResult &) = default ;
    GetDataExportDownloadURLResponseBodyDownloadURLResult(GetDataExportDownloadURLResponseBodyDownloadURLResult &&) = default ;
    GetDataExportDownloadURLResponseBodyDownloadURLResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataExportDownloadURLResponseBodyDownloadURLResult() = default ;
    GetDataExportDownloadURLResponseBodyDownloadURLResult& operator=(const GetDataExportDownloadURLResponseBodyDownloadURLResult &) = default ;
    GetDataExportDownloadURLResponseBodyDownloadURLResult& operator=(GetDataExportDownloadURLResponseBodyDownloadURLResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hasResult_ == nullptr
        && return this->tipMessage_ == nullptr && return this->URL_ == nullptr; };
    // hasResult Field Functions 
    bool hasHasResult() const { return this->hasResult_ != nullptr;};
    void deleteHasResult() { this->hasResult_ = nullptr;};
    inline bool hasResult() const { DARABONBA_PTR_GET_DEFAULT(hasResult_, false) };
    inline GetDataExportDownloadURLResponseBodyDownloadURLResult& setHasResult(bool hasResult) { DARABONBA_PTR_SET_VALUE(hasResult_, hasResult) };


    // tipMessage Field Functions 
    bool hasTipMessage() const { return this->tipMessage_ != nullptr;};
    void deleteTipMessage() { this->tipMessage_ = nullptr;};
    inline string tipMessage() const { DARABONBA_PTR_GET_DEFAULT(tipMessage_, "") };
    inline GetDataExportDownloadURLResponseBodyDownloadURLResult& setTipMessage(string tipMessage) { DARABONBA_PTR_SET_VALUE(tipMessage_, tipMessage) };


    // URL Field Functions 
    bool hasURL() const { return this->URL_ != nullptr;};
    void deleteURL() { this->URL_ = nullptr;};
    inline string URL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
    inline GetDataExportDownloadURLResponseBodyDownloadURLResult& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


  protected:
    // Indicates whether export results are available for download. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> hasResult_ = nullptr;
    // The message that indicates an exception.
    std::shared_ptr<string> tipMessage_ = nullptr;
    // The download URL of the file that records the export results for the ticket.
    std::shared_ptr<string> URL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
