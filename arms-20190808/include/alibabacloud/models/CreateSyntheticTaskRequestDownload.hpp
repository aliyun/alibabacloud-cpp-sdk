// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUESTDOWNLOAD_HPP_
#define ALIBABACLOUD_MODELS_CREATESYNTHETICTASKREQUESTDOWNLOAD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateSyntheticTaskRequestDownload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSyntheticTaskRequestDownload& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionTimeout, connectionTimeout_);
      DARABONBA_PTR_TO_JSON(DownloadCustomHeaderContent, downloadCustomHeaderContent_);
      DARABONBA_PTR_TO_JSON(DownloadCustomHost, downloadCustomHost_);
      DARABONBA_PTR_TO_JSON(DownloadCustomHostIp, downloadCustomHostIp_);
      DARABONBA_PTR_TO_JSON(DownloadIgnoreCertificateError, downloadIgnoreCertificateError_);
      DARABONBA_PTR_TO_JSON(DownloadKernel, downloadKernel_);
      DARABONBA_PTR_TO_JSON(DownloadRedirection, downloadRedirection_);
      DARABONBA_PTR_TO_JSON(DownloadTransmissionSize, downloadTransmissionSize_);
      DARABONBA_PTR_TO_JSON(MonitorTimeout, monitorTimeout_);
      DARABONBA_PTR_TO_JSON(QuickProtocol, quickProtocol_);
      DARABONBA_PTR_TO_JSON(ValidateKeywords, validateKeywords_);
      DARABONBA_PTR_TO_JSON(VerifyWay, verifyWay_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSyntheticTaskRequestDownload& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionTimeout, connectionTimeout_);
      DARABONBA_PTR_FROM_JSON(DownloadCustomHeaderContent, downloadCustomHeaderContent_);
      DARABONBA_PTR_FROM_JSON(DownloadCustomHost, downloadCustomHost_);
      DARABONBA_PTR_FROM_JSON(DownloadCustomHostIp, downloadCustomHostIp_);
      DARABONBA_PTR_FROM_JSON(DownloadIgnoreCertificateError, downloadIgnoreCertificateError_);
      DARABONBA_PTR_FROM_JSON(DownloadKernel, downloadKernel_);
      DARABONBA_PTR_FROM_JSON(DownloadRedirection, downloadRedirection_);
      DARABONBA_PTR_FROM_JSON(DownloadTransmissionSize, downloadTransmissionSize_);
      DARABONBA_PTR_FROM_JSON(MonitorTimeout, monitorTimeout_);
      DARABONBA_PTR_FROM_JSON(QuickProtocol, quickProtocol_);
      DARABONBA_PTR_FROM_JSON(ValidateKeywords, validateKeywords_);
      DARABONBA_PTR_FROM_JSON(VerifyWay, verifyWay_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    CreateSyntheticTaskRequestDownload() = default ;
    CreateSyntheticTaskRequestDownload(const CreateSyntheticTaskRequestDownload &) = default ;
    CreateSyntheticTaskRequestDownload(CreateSyntheticTaskRequestDownload &&) = default ;
    CreateSyntheticTaskRequestDownload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSyntheticTaskRequestDownload() = default ;
    CreateSyntheticTaskRequestDownload& operator=(const CreateSyntheticTaskRequestDownload &) = default ;
    CreateSyntheticTaskRequestDownload& operator=(CreateSyntheticTaskRequestDownload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionTimeout_ != nullptr
        && this->downloadCustomHeaderContent_ != nullptr && this->downloadCustomHost_ != nullptr && this->downloadCustomHostIp_ != nullptr && this->downloadIgnoreCertificateError_ != nullptr && this->downloadKernel_ != nullptr
        && this->downloadRedirection_ != nullptr && this->downloadTransmissionSize_ != nullptr && this->monitorTimeout_ != nullptr && this->quickProtocol_ != nullptr && this->validateKeywords_ != nullptr
        && this->verifyWay_ != nullptr && this->whiteList_ != nullptr; };
    // connectionTimeout Field Functions 
    bool hasConnectionTimeout() const { return this->connectionTimeout_ != nullptr;};
    void deleteConnectionTimeout() { this->connectionTimeout_ = nullptr;};
    inline double connectionTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionTimeout_, 0.0) };
    inline CreateSyntheticTaskRequestDownload& setConnectionTimeout(double connectionTimeout) { DARABONBA_PTR_SET_VALUE(connectionTimeout_, connectionTimeout) };


    // downloadCustomHeaderContent Field Functions 
    bool hasDownloadCustomHeaderContent() const { return this->downloadCustomHeaderContent_ != nullptr;};
    void deleteDownloadCustomHeaderContent() { this->downloadCustomHeaderContent_ = nullptr;};
    inline string downloadCustomHeaderContent() const { DARABONBA_PTR_GET_DEFAULT(downloadCustomHeaderContent_, "") };
    inline CreateSyntheticTaskRequestDownload& setDownloadCustomHeaderContent(string downloadCustomHeaderContent) { DARABONBA_PTR_SET_VALUE(downloadCustomHeaderContent_, downloadCustomHeaderContent) };


    // downloadCustomHost Field Functions 
    bool hasDownloadCustomHost() const { return this->downloadCustomHost_ != nullptr;};
    void deleteDownloadCustomHost() { this->downloadCustomHost_ = nullptr;};
    inline int64_t downloadCustomHost() const { DARABONBA_PTR_GET_DEFAULT(downloadCustomHost_, 0L) };
    inline CreateSyntheticTaskRequestDownload& setDownloadCustomHost(int64_t downloadCustomHost) { DARABONBA_PTR_SET_VALUE(downloadCustomHost_, downloadCustomHost) };


    // downloadCustomHostIp Field Functions 
    bool hasDownloadCustomHostIp() const { return this->downloadCustomHostIp_ != nullptr;};
    void deleteDownloadCustomHostIp() { this->downloadCustomHostIp_ = nullptr;};
    inline string downloadCustomHostIp() const { DARABONBA_PTR_GET_DEFAULT(downloadCustomHostIp_, "") };
    inline CreateSyntheticTaskRequestDownload& setDownloadCustomHostIp(string downloadCustomHostIp) { DARABONBA_PTR_SET_VALUE(downloadCustomHostIp_, downloadCustomHostIp) };


    // downloadIgnoreCertificateError Field Functions 
    bool hasDownloadIgnoreCertificateError() const { return this->downloadIgnoreCertificateError_ != nullptr;};
    void deleteDownloadIgnoreCertificateError() { this->downloadIgnoreCertificateError_ = nullptr;};
    inline string downloadIgnoreCertificateError() const { DARABONBA_PTR_GET_DEFAULT(downloadIgnoreCertificateError_, "") };
    inline CreateSyntheticTaskRequestDownload& setDownloadIgnoreCertificateError(string downloadIgnoreCertificateError) { DARABONBA_PTR_SET_VALUE(downloadIgnoreCertificateError_, downloadIgnoreCertificateError) };


    // downloadKernel Field Functions 
    bool hasDownloadKernel() const { return this->downloadKernel_ != nullptr;};
    void deleteDownloadKernel() { this->downloadKernel_ = nullptr;};
    inline int64_t downloadKernel() const { DARABONBA_PTR_GET_DEFAULT(downloadKernel_, 0L) };
    inline CreateSyntheticTaskRequestDownload& setDownloadKernel(int64_t downloadKernel) { DARABONBA_PTR_SET_VALUE(downloadKernel_, downloadKernel) };


    // downloadRedirection Field Functions 
    bool hasDownloadRedirection() const { return this->downloadRedirection_ != nullptr;};
    void deleteDownloadRedirection() { this->downloadRedirection_ = nullptr;};
    inline int64_t downloadRedirection() const { DARABONBA_PTR_GET_DEFAULT(downloadRedirection_, 0L) };
    inline CreateSyntheticTaskRequestDownload& setDownloadRedirection(int64_t downloadRedirection) { DARABONBA_PTR_SET_VALUE(downloadRedirection_, downloadRedirection) };


    // downloadTransmissionSize Field Functions 
    bool hasDownloadTransmissionSize() const { return this->downloadTransmissionSize_ != nullptr;};
    void deleteDownloadTransmissionSize() { this->downloadTransmissionSize_ = nullptr;};
    inline int64_t downloadTransmissionSize() const { DARABONBA_PTR_GET_DEFAULT(downloadTransmissionSize_, 0L) };
    inline CreateSyntheticTaskRequestDownload& setDownloadTransmissionSize(int64_t downloadTransmissionSize) { DARABONBA_PTR_SET_VALUE(downloadTransmissionSize_, downloadTransmissionSize) };


    // monitorTimeout Field Functions 
    bool hasMonitorTimeout() const { return this->monitorTimeout_ != nullptr;};
    void deleteMonitorTimeout() { this->monitorTimeout_ = nullptr;};
    inline int64_t monitorTimeout() const { DARABONBA_PTR_GET_DEFAULT(monitorTimeout_, 0L) };
    inline CreateSyntheticTaskRequestDownload& setMonitorTimeout(int64_t monitorTimeout) { DARABONBA_PTR_SET_VALUE(monitorTimeout_, monitorTimeout) };


    // quickProtocol Field Functions 
    bool hasQuickProtocol() const { return this->quickProtocol_ != nullptr;};
    void deleteQuickProtocol() { this->quickProtocol_ = nullptr;};
    inline string quickProtocol() const { DARABONBA_PTR_GET_DEFAULT(quickProtocol_, "") };
    inline CreateSyntheticTaskRequestDownload& setQuickProtocol(string quickProtocol) { DARABONBA_PTR_SET_VALUE(quickProtocol_, quickProtocol) };


    // validateKeywords Field Functions 
    bool hasValidateKeywords() const { return this->validateKeywords_ != nullptr;};
    void deleteValidateKeywords() { this->validateKeywords_ = nullptr;};
    inline string validateKeywords() const { DARABONBA_PTR_GET_DEFAULT(validateKeywords_, "") };
    inline CreateSyntheticTaskRequestDownload& setValidateKeywords(string validateKeywords) { DARABONBA_PTR_SET_VALUE(validateKeywords_, validateKeywords) };


    // verifyWay Field Functions 
    bool hasVerifyWay() const { return this->verifyWay_ != nullptr;};
    void deleteVerifyWay() { this->verifyWay_ = nullptr;};
    inline int64_t verifyWay() const { DARABONBA_PTR_GET_DEFAULT(verifyWay_, 0L) };
    inline CreateSyntheticTaskRequestDownload& setVerifyWay(int64_t verifyWay) { DARABONBA_PTR_SET_VALUE(verifyWay_, verifyWay) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline string whiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, "") };
    inline CreateSyntheticTaskRequestDownload& setWhiteList(string whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


  protected:
    // The connection timeout period.
    std::shared_ptr<double> connectionTimeout_ = nullptr;
    // The items to be ignored in a certificate error. Pass the values of the check boxes that are separated with vertical bars (|).
    std::shared_ptr<string> downloadCustomHeaderContent_ = nullptr;
    // The custom host mode.
    // 
    // *   1: round robin
    // *   0: random
    std::shared_ptr<int64_t> downloadCustomHost_ = nullptr;
    // The custom host IP address. You can enter multiple IP addresses. Separate the IP addresses with commas (,).
    std::shared_ptr<string> downloadCustomHostIp_ = nullptr;
    // The items to be ignored in a certificate error. Pass the values of the check boxes that are separated with vertical bars (|).
    std::shared_ptr<string> downloadIgnoreCertificateError_ = nullptr;
    // The kernel type.
    // 
    // *   1: curl
    // *   0: WinInet
    std::shared_ptr<int64_t> downloadKernel_ = nullptr;
    // Specifies whether to support redirection.
    std::shared_ptr<int64_t> downloadRedirection_ = nullptr;
    // The size of the download file. Unit: KB.
    std::shared_ptr<int64_t> downloadTransmissionSize_ = nullptr;
    // The monitoring duration.
    std::shared_ptr<int64_t> monitorTimeout_ = nullptr;
    // The QUIC protocol type.
    // 
    // *   1: http1
    // *   2: http2
    // *   3: http3
    std::shared_ptr<string> quickProtocol_ = nullptr;
    // The keyword that is used in verification.
    std::shared_ptr<string> validateKeywords_ = nullptr;
    // The verification method.
    // 
    // *   0: no verification
    // *   1: string verification
    // *   2: MD5 verification
    std::shared_ptr<int64_t> verifyWay_ = nullptr;
    // The whitelist for DNS hijacking.
    std::shared_ptr<string> whiteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
