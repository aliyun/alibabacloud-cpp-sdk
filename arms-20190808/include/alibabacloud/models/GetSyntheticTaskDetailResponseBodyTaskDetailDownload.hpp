// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODYTASKDETAILDOWNLOAD_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODYTASKDETAILDOWNLOAD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticTaskDetailResponseBodyTaskDetailDownload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticTaskDetailResponseBodyTaskDetailDownload& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionTimeout, connectionTimeout_);
      DARABONBA_PTR_TO_JSON(DownloadCustomHeaderContent, downloadCustomHeaderContent_);
      DARABONBA_PTR_TO_JSON(DownloadCustomHost, downloadCustomHost_);
      DARABONBA_PTR_TO_JSON(DownloadCustomHostIp, downloadCustomHostIp_);
      DARABONBA_PTR_TO_JSON(DownloadKernel, downloadKernel_);
      DARABONBA_PTR_TO_JSON(DownloadRedirect, downloadRedirect_);
      DARABONBA_PTR_TO_JSON(DownloadTransmissionSize, downloadTransmissionSize_);
      DARABONBA_PTR_TO_JSON(MonitorTimeout, monitorTimeout_);
      DARABONBA_PTR_TO_JSON(QuickProtocol, quickProtocol_);
      DARABONBA_PTR_TO_JSON(ValidateKeywords, validateKeywords_);
      DARABONBA_PTR_TO_JSON(VerifyWay, verifyWay_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticTaskDetailResponseBodyTaskDetailDownload& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionTimeout, connectionTimeout_);
      DARABONBA_PTR_FROM_JSON(DownloadCustomHeaderContent, downloadCustomHeaderContent_);
      DARABONBA_PTR_FROM_JSON(DownloadCustomHost, downloadCustomHost_);
      DARABONBA_PTR_FROM_JSON(DownloadCustomHostIp, downloadCustomHostIp_);
      DARABONBA_PTR_FROM_JSON(DownloadKernel, downloadKernel_);
      DARABONBA_PTR_FROM_JSON(DownloadRedirect, downloadRedirect_);
      DARABONBA_PTR_FROM_JSON(DownloadTransmissionSize, downloadTransmissionSize_);
      DARABONBA_PTR_FROM_JSON(MonitorTimeout, monitorTimeout_);
      DARABONBA_PTR_FROM_JSON(QuickProtocol, quickProtocol_);
      DARABONBA_PTR_FROM_JSON(ValidateKeywords, validateKeywords_);
      DARABONBA_PTR_FROM_JSON(VerifyWay, verifyWay_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    GetSyntheticTaskDetailResponseBodyTaskDetailDownload() = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailDownload(const GetSyntheticTaskDetailResponseBodyTaskDetailDownload &) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailDownload(GetSyntheticTaskDetailResponseBodyTaskDetailDownload &&) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailDownload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticTaskDetailResponseBodyTaskDetailDownload() = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailDownload& operator=(const GetSyntheticTaskDetailResponseBodyTaskDetailDownload &) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailDownload& operator=(GetSyntheticTaskDetailResponseBodyTaskDetailDownload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionTimeout_ != nullptr
        && this->downloadCustomHeaderContent_ != nullptr && this->downloadCustomHost_ != nullptr && this->downloadCustomHostIp_ != nullptr && this->downloadKernel_ != nullptr && this->downloadRedirect_ != nullptr
        && this->downloadTransmissionSize_ != nullptr && this->monitorTimeout_ != nullptr && this->quickProtocol_ != nullptr && this->validateKeywords_ != nullptr && this->verifyWay_ != nullptr
        && this->whiteList_ != nullptr; };
    // connectionTimeout Field Functions 
    bool hasConnectionTimeout() const { return this->connectionTimeout_ != nullptr;};
    void deleteConnectionTimeout() { this->connectionTimeout_ = nullptr;};
    inline int64_t connectionTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionTimeout_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailDownload& setConnectionTimeout(int64_t connectionTimeout) { DARABONBA_PTR_SET_VALUE(connectionTimeout_, connectionTimeout) };


    // downloadCustomHeaderContent Field Functions 
    bool hasDownloadCustomHeaderContent() const { return this->downloadCustomHeaderContent_ != nullptr;};
    void deleteDownloadCustomHeaderContent() { this->downloadCustomHeaderContent_ = nullptr;};
    inline string downloadCustomHeaderContent() const { DARABONBA_PTR_GET_DEFAULT(downloadCustomHeaderContent_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailDownload& setDownloadCustomHeaderContent(string downloadCustomHeaderContent) { DARABONBA_PTR_SET_VALUE(downloadCustomHeaderContent_, downloadCustomHeaderContent) };


    // downloadCustomHost Field Functions 
    bool hasDownloadCustomHost() const { return this->downloadCustomHost_ != nullptr;};
    void deleteDownloadCustomHost() { this->downloadCustomHost_ = nullptr;};
    inline int64_t downloadCustomHost() const { DARABONBA_PTR_GET_DEFAULT(downloadCustomHost_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailDownload& setDownloadCustomHost(int64_t downloadCustomHost) { DARABONBA_PTR_SET_VALUE(downloadCustomHost_, downloadCustomHost) };


    // downloadCustomHostIp Field Functions 
    bool hasDownloadCustomHostIp() const { return this->downloadCustomHostIp_ != nullptr;};
    void deleteDownloadCustomHostIp() { this->downloadCustomHostIp_ = nullptr;};
    inline string downloadCustomHostIp() const { DARABONBA_PTR_GET_DEFAULT(downloadCustomHostIp_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailDownload& setDownloadCustomHostIp(string downloadCustomHostIp) { DARABONBA_PTR_SET_VALUE(downloadCustomHostIp_, downloadCustomHostIp) };


    // downloadKernel Field Functions 
    bool hasDownloadKernel() const { return this->downloadKernel_ != nullptr;};
    void deleteDownloadKernel() { this->downloadKernel_ = nullptr;};
    inline int64_t downloadKernel() const { DARABONBA_PTR_GET_DEFAULT(downloadKernel_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailDownload& setDownloadKernel(int64_t downloadKernel) { DARABONBA_PTR_SET_VALUE(downloadKernel_, downloadKernel) };


    // downloadRedirect Field Functions 
    bool hasDownloadRedirect() const { return this->downloadRedirect_ != nullptr;};
    void deleteDownloadRedirect() { this->downloadRedirect_ = nullptr;};
    inline int64_t downloadRedirect() const { DARABONBA_PTR_GET_DEFAULT(downloadRedirect_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailDownload& setDownloadRedirect(int64_t downloadRedirect) { DARABONBA_PTR_SET_VALUE(downloadRedirect_, downloadRedirect) };


    // downloadTransmissionSize Field Functions 
    bool hasDownloadTransmissionSize() const { return this->downloadTransmissionSize_ != nullptr;};
    void deleteDownloadTransmissionSize() { this->downloadTransmissionSize_ = nullptr;};
    inline int64_t downloadTransmissionSize() const { DARABONBA_PTR_GET_DEFAULT(downloadTransmissionSize_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailDownload& setDownloadTransmissionSize(int64_t downloadTransmissionSize) { DARABONBA_PTR_SET_VALUE(downloadTransmissionSize_, downloadTransmissionSize) };


    // monitorTimeout Field Functions 
    bool hasMonitorTimeout() const { return this->monitorTimeout_ != nullptr;};
    void deleteMonitorTimeout() { this->monitorTimeout_ = nullptr;};
    inline int64_t monitorTimeout() const { DARABONBA_PTR_GET_DEFAULT(monitorTimeout_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailDownload& setMonitorTimeout(int64_t monitorTimeout) { DARABONBA_PTR_SET_VALUE(monitorTimeout_, monitorTimeout) };


    // quickProtocol Field Functions 
    bool hasQuickProtocol() const { return this->quickProtocol_ != nullptr;};
    void deleteQuickProtocol() { this->quickProtocol_ = nullptr;};
    inline string quickProtocol() const { DARABONBA_PTR_GET_DEFAULT(quickProtocol_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailDownload& setQuickProtocol(string quickProtocol) { DARABONBA_PTR_SET_VALUE(quickProtocol_, quickProtocol) };


    // validateKeywords Field Functions 
    bool hasValidateKeywords() const { return this->validateKeywords_ != nullptr;};
    void deleteValidateKeywords() { this->validateKeywords_ = nullptr;};
    inline string validateKeywords() const { DARABONBA_PTR_GET_DEFAULT(validateKeywords_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailDownload& setValidateKeywords(string validateKeywords) { DARABONBA_PTR_SET_VALUE(validateKeywords_, validateKeywords) };


    // verifyWay Field Functions 
    bool hasVerifyWay() const { return this->verifyWay_ != nullptr;};
    void deleteVerifyWay() { this->verifyWay_ = nullptr;};
    inline int64_t verifyWay() const { DARABONBA_PTR_GET_DEFAULT(verifyWay_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailDownload& setVerifyWay(int64_t verifyWay) { DARABONBA_PTR_SET_VALUE(verifyWay_, verifyWay) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline string whiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailDownload& setWhiteList(string whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


  protected:
    // The timeout period of the file download task.
    std::shared_ptr<int64_t> connectionTimeout_ = nullptr;
    // The items to be ignored in a certificate error. Multiple values are concatenated with vertical bars (|).
    std::shared_ptr<string> downloadCustomHeaderContent_ = nullptr;
    // The custom host. Valid values:
    // 
    // *   1: round robin
    // *   0: random
    std::shared_ptr<int64_t> downloadCustomHost_ = nullptr;
    // The custom IP address of the host. Multiple IP addresses are separated with commas (,).
    std::shared_ptr<string> downloadCustomHostIp_ = nullptr;
    // The kernel type. Valid values:
    // 
    // *   1: curl
    // *   0: WinInet
    std::shared_ptr<int64_t> downloadKernel_ = nullptr;
    // Indicates whether redirection is supported.
    std::shared_ptr<int64_t> downloadRedirect_ = nullptr;
    // The file size. Unit: KB.
    std::shared_ptr<int64_t> downloadTransmissionSize_ = nullptr;
    // The monitoring duration.
    std::shared_ptr<int64_t> monitorTimeout_ = nullptr;
    // The QUIC protocol type. Valid values:
    // 
    // *   1: HTTP/1
    // *   2: HTTP/2
    // *   3: http3
    std::shared_ptr<string> quickProtocol_ = nullptr;
    // The keyword that is used in verification.
    std::shared_ptr<string> validateKeywords_ = nullptr;
    // The method that is used to verify the response content. Valid values:
    // 
    // *   0: no verification.
    // *   1: exact match with the verification string.
    // *   2: partial match with the verification string.
    // *   3: MD5 verification.
    std::shared_ptr<int64_t> verifyWay_ = nullptr;
    // The whitelisted objects that are used to avoid DNS hijacking. Format: `<domain name>:<objects>`.
    // 
    // >  WAP networks do not support hijacking.
    std::shared_ptr<string> whiteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
