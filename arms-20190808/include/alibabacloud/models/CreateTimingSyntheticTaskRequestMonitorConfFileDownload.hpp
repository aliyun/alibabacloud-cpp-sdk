// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUESTMONITORCONFFILEDOWNLOAD_HPP_
#define ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUESTMONITORCONFFILEDOWNLOAD_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateTimingSyntheticTaskRequestMonitorConfFileDownload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTimingSyntheticTaskRequestMonitorConfFileDownload& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionTimeout, connectionTimeout_);
      DARABONBA_PTR_TO_JSON(CustomHeaderContent, customHeaderContent_);
      DARABONBA_PTR_TO_JSON(DownloadKernel, downloadKernel_);
      DARABONBA_PTR_TO_JSON(IgnoreCertificateAuthError, ignoreCertificateAuthError_);
      DARABONBA_PTR_TO_JSON(IgnoreCertificateCanceledError, ignoreCertificateCanceledError_);
      DARABONBA_PTR_TO_JSON(IgnoreCertificateOutOfDateError, ignoreCertificateOutOfDateError_);
      DARABONBA_PTR_TO_JSON(IgnoreCertificateStatusError, ignoreCertificateStatusError_);
      DARABONBA_PTR_TO_JSON(IgnoreCertificateUntrustworthyError, ignoreCertificateUntrustworthyError_);
      DARABONBA_PTR_TO_JSON(IgnoreCertificateUsingError, ignoreCertificateUsingError_);
      DARABONBA_PTR_TO_JSON(IgnoreInvalidHostError, ignoreInvalidHostError_);
      DARABONBA_PTR_TO_JSON(MonitorTimeout, monitorTimeout_);
      DARABONBA_PTR_TO_JSON(QuickProtocol, quickProtocol_);
      DARABONBA_PTR_TO_JSON(Redirection, redirection_);
      DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_TO_JSON(TransmissionSize, transmissionSize_);
      DARABONBA_PTR_TO_JSON(ValidateKeywords, validateKeywords_);
      DARABONBA_PTR_TO_JSON(VerifyWay, verifyWay_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTimingSyntheticTaskRequestMonitorConfFileDownload& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionTimeout, connectionTimeout_);
      DARABONBA_PTR_FROM_JSON(CustomHeaderContent, customHeaderContent_);
      DARABONBA_PTR_FROM_JSON(DownloadKernel, downloadKernel_);
      DARABONBA_PTR_FROM_JSON(IgnoreCertificateAuthError, ignoreCertificateAuthError_);
      DARABONBA_PTR_FROM_JSON(IgnoreCertificateCanceledError, ignoreCertificateCanceledError_);
      DARABONBA_PTR_FROM_JSON(IgnoreCertificateOutOfDateError, ignoreCertificateOutOfDateError_);
      DARABONBA_PTR_FROM_JSON(IgnoreCertificateStatusError, ignoreCertificateStatusError_);
      DARABONBA_PTR_FROM_JSON(IgnoreCertificateUntrustworthyError, ignoreCertificateUntrustworthyError_);
      DARABONBA_PTR_FROM_JSON(IgnoreCertificateUsingError, ignoreCertificateUsingError_);
      DARABONBA_PTR_FROM_JSON(IgnoreInvalidHostError, ignoreInvalidHostError_);
      DARABONBA_PTR_FROM_JSON(MonitorTimeout, monitorTimeout_);
      DARABONBA_PTR_FROM_JSON(QuickProtocol, quickProtocol_);
      DARABONBA_PTR_FROM_JSON(Redirection, redirection_);
      DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_FROM_JSON(TransmissionSize, transmissionSize_);
      DARABONBA_PTR_FROM_JSON(ValidateKeywords, validateKeywords_);
      DARABONBA_PTR_FROM_JSON(VerifyWay, verifyWay_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    CreateTimingSyntheticTaskRequestMonitorConfFileDownload() = default ;
    CreateTimingSyntheticTaskRequestMonitorConfFileDownload(const CreateTimingSyntheticTaskRequestMonitorConfFileDownload &) = default ;
    CreateTimingSyntheticTaskRequestMonitorConfFileDownload(CreateTimingSyntheticTaskRequestMonitorConfFileDownload &&) = default ;
    CreateTimingSyntheticTaskRequestMonitorConfFileDownload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTimingSyntheticTaskRequestMonitorConfFileDownload() = default ;
    CreateTimingSyntheticTaskRequestMonitorConfFileDownload& operator=(const CreateTimingSyntheticTaskRequestMonitorConfFileDownload &) = default ;
    CreateTimingSyntheticTaskRequestMonitorConfFileDownload& operator=(CreateTimingSyntheticTaskRequestMonitorConfFileDownload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionTimeout_ != nullptr
        && this->customHeaderContent_ != nullptr && this->downloadKernel_ != nullptr && this->ignoreCertificateAuthError_ != nullptr && this->ignoreCertificateCanceledError_ != nullptr && this->ignoreCertificateOutOfDateError_ != nullptr
        && this->ignoreCertificateStatusError_ != nullptr && this->ignoreCertificateUntrustworthyError_ != nullptr && this->ignoreCertificateUsingError_ != nullptr && this->ignoreInvalidHostError_ != nullptr && this->monitorTimeout_ != nullptr
        && this->quickProtocol_ != nullptr && this->redirection_ != nullptr && this->targetUrl_ != nullptr && this->transmissionSize_ != nullptr && this->validateKeywords_ != nullptr
        && this->verifyWay_ != nullptr && this->whiteList_ != nullptr; };
    // connectionTimeout Field Functions 
    bool hasConnectionTimeout() const { return this->connectionTimeout_ != nullptr;};
    void deleteConnectionTimeout() { this->connectionTimeout_ = nullptr;};
    inline int64_t connectionTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionTimeout_, 0L) };
    inline CreateTimingSyntheticTaskRequestMonitorConfFileDownload& setConnectionTimeout(int64_t connectionTimeout) { DARABONBA_PTR_SET_VALUE(connectionTimeout_, connectionTimeout) };


    // customHeaderContent Field Functions 
    bool hasCustomHeaderContent() const { return this->customHeaderContent_ != nullptr;};
    void deleteCustomHeaderContent() { this->customHeaderContent_ = nullptr;};
    inline const map<string, string> & customHeaderContent() const { DARABONBA_PTR_GET_CONST(customHeaderContent_, map<string, string>) };
    inline map<string, string> customHeaderContent() { DARABONBA_PTR_GET(customHeaderContent_, map<string, string>) };
    inline CreateTimingSyntheticTaskRequestMonitorConfFileDownload& setCustomHeaderContent(const map<string, string> & customHeaderContent) { DARABONBA_PTR_SET_VALUE(customHeaderContent_, customHeaderContent) };
    inline CreateTimingSyntheticTaskRequestMonitorConfFileDownload& setCustomHeaderContent(map<string, string> && customHeaderContent) { DARABONBA_PTR_SET_RVALUE(customHeaderContent_, customHeaderContent) };


    // downloadKernel Field Functions 
    bool hasDownloadKernel() const { return this->downloadKernel_ != nullptr;};
    void deleteDownloadKernel() { this->downloadKernel_ = nullptr;};
    inline int32_t downloadKernel() const { DARABONBA_PTR_GET_DEFAULT(downloadKernel_, 0) };
    inline CreateTimingSyntheticTaskRequestMonitorConfFileDownload& setDownloadKernel(int32_t downloadKernel) { DARABONBA_PTR_SET_VALUE(downloadKernel_, downloadKernel) };


    // ignoreCertificateAuthError Field Functions 
    bool hasIgnoreCertificateAuthError() const { return this->ignoreCertificateAuthError_ != nullptr;};
    void deleteIgnoreCertificateAuthError() { this->ignoreCertificateAuthError_ = nullptr;};
    inline int32_t ignoreCertificateAuthError() const { DARABONBA_PTR_GET_DEFAULT(ignoreCertificateAuthError_, 0) };
    inline CreateTimingSyntheticTaskRequestMonitorConfFileDownload& setIgnoreCertificateAuthError(int32_t ignoreCertificateAuthError) { DARABONBA_PTR_SET_VALUE(ignoreCertificateAuthError_, ignoreCertificateAuthError) };


    // ignoreCertificateCanceledError Field Functions 
    bool hasIgnoreCertificateCanceledError() const { return this->ignoreCertificateCanceledError_ != nullptr;};
    void deleteIgnoreCertificateCanceledError() { this->ignoreCertificateCanceledError_ = nullptr;};
    inline int32_t ignoreCertificateCanceledError() const { DARABONBA_PTR_GET_DEFAULT(ignoreCertificateCanceledError_, 0) };
    inline CreateTimingSyntheticTaskRequestMonitorConfFileDownload& setIgnoreCertificateCanceledError(int32_t ignoreCertificateCanceledError) { DARABONBA_PTR_SET_VALUE(ignoreCertificateCanceledError_, ignoreCertificateCanceledError) };


    // ignoreCertificateOutOfDateError Field Functions 
    bool hasIgnoreCertificateOutOfDateError() const { return this->ignoreCertificateOutOfDateError_ != nullptr;};
    void deleteIgnoreCertificateOutOfDateError() { this->ignoreCertificateOutOfDateError_ = nullptr;};
    inline int32_t ignoreCertificateOutOfDateError() const { DARABONBA_PTR_GET_DEFAULT(ignoreCertificateOutOfDateError_, 0) };
    inline CreateTimingSyntheticTaskRequestMonitorConfFileDownload& setIgnoreCertificateOutOfDateError(int32_t ignoreCertificateOutOfDateError) { DARABONBA_PTR_SET_VALUE(ignoreCertificateOutOfDateError_, ignoreCertificateOutOfDateError) };


    // ignoreCertificateStatusError Field Functions 
    bool hasIgnoreCertificateStatusError() const { return this->ignoreCertificateStatusError_ != nullptr;};
    void deleteIgnoreCertificateStatusError() { this->ignoreCertificateStatusError_ = nullptr;};
    inline int32_t ignoreCertificateStatusError() const { DARABONBA_PTR_GET_DEFAULT(ignoreCertificateStatusError_, 0) };
    inline CreateTimingSyntheticTaskRequestMonitorConfFileDownload& setIgnoreCertificateStatusError(int32_t ignoreCertificateStatusError) { DARABONBA_PTR_SET_VALUE(ignoreCertificateStatusError_, ignoreCertificateStatusError) };


    // ignoreCertificateUntrustworthyError Field Functions 
    bool hasIgnoreCertificateUntrustworthyError() const { return this->ignoreCertificateUntrustworthyError_ != nullptr;};
    void deleteIgnoreCertificateUntrustworthyError() { this->ignoreCertificateUntrustworthyError_ = nullptr;};
    inline int32_t ignoreCertificateUntrustworthyError() const { DARABONBA_PTR_GET_DEFAULT(ignoreCertificateUntrustworthyError_, 0) };
    inline CreateTimingSyntheticTaskRequestMonitorConfFileDownload& setIgnoreCertificateUntrustworthyError(int32_t ignoreCertificateUntrustworthyError) { DARABONBA_PTR_SET_VALUE(ignoreCertificateUntrustworthyError_, ignoreCertificateUntrustworthyError) };


    // ignoreCertificateUsingError Field Functions 
    bool hasIgnoreCertificateUsingError() const { return this->ignoreCertificateUsingError_ != nullptr;};
    void deleteIgnoreCertificateUsingError() { this->ignoreCertificateUsingError_ = nullptr;};
    inline int32_t ignoreCertificateUsingError() const { DARABONBA_PTR_GET_DEFAULT(ignoreCertificateUsingError_, 0) };
    inline CreateTimingSyntheticTaskRequestMonitorConfFileDownload& setIgnoreCertificateUsingError(int32_t ignoreCertificateUsingError) { DARABONBA_PTR_SET_VALUE(ignoreCertificateUsingError_, ignoreCertificateUsingError) };


    // ignoreInvalidHostError Field Functions 
    bool hasIgnoreInvalidHostError() const { return this->ignoreInvalidHostError_ != nullptr;};
    void deleteIgnoreInvalidHostError() { this->ignoreInvalidHostError_ = nullptr;};
    inline int32_t ignoreInvalidHostError() const { DARABONBA_PTR_GET_DEFAULT(ignoreInvalidHostError_, 0) };
    inline CreateTimingSyntheticTaskRequestMonitorConfFileDownload& setIgnoreInvalidHostError(int32_t ignoreInvalidHostError) { DARABONBA_PTR_SET_VALUE(ignoreInvalidHostError_, ignoreInvalidHostError) };


    // monitorTimeout Field Functions 
    bool hasMonitorTimeout() const { return this->monitorTimeout_ != nullptr;};
    void deleteMonitorTimeout() { this->monitorTimeout_ = nullptr;};
    inline int64_t monitorTimeout() const { DARABONBA_PTR_GET_DEFAULT(monitorTimeout_, 0L) };
    inline CreateTimingSyntheticTaskRequestMonitorConfFileDownload& setMonitorTimeout(int64_t monitorTimeout) { DARABONBA_PTR_SET_VALUE(monitorTimeout_, monitorTimeout) };


    // quickProtocol Field Functions 
    bool hasQuickProtocol() const { return this->quickProtocol_ != nullptr;};
    void deleteQuickProtocol() { this->quickProtocol_ = nullptr;};
    inline int32_t quickProtocol() const { DARABONBA_PTR_GET_DEFAULT(quickProtocol_, 0) };
    inline CreateTimingSyntheticTaskRequestMonitorConfFileDownload& setQuickProtocol(int32_t quickProtocol) { DARABONBA_PTR_SET_VALUE(quickProtocol_, quickProtocol) };


    // redirection Field Functions 
    bool hasRedirection() const { return this->redirection_ != nullptr;};
    void deleteRedirection() { this->redirection_ = nullptr;};
    inline int32_t redirection() const { DARABONBA_PTR_GET_DEFAULT(redirection_, 0) };
    inline CreateTimingSyntheticTaskRequestMonitorConfFileDownload& setRedirection(int32_t redirection) { DARABONBA_PTR_SET_VALUE(redirection_, redirection) };


    // targetUrl Field Functions 
    bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
    void deleteTargetUrl() { this->targetUrl_ = nullptr;};
    inline string targetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
    inline CreateTimingSyntheticTaskRequestMonitorConfFileDownload& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


    // transmissionSize Field Functions 
    bool hasTransmissionSize() const { return this->transmissionSize_ != nullptr;};
    void deleteTransmissionSize() { this->transmissionSize_ = nullptr;};
    inline int64_t transmissionSize() const { DARABONBA_PTR_GET_DEFAULT(transmissionSize_, 0L) };
    inline CreateTimingSyntheticTaskRequestMonitorConfFileDownload& setTransmissionSize(int64_t transmissionSize) { DARABONBA_PTR_SET_VALUE(transmissionSize_, transmissionSize) };


    // validateKeywords Field Functions 
    bool hasValidateKeywords() const { return this->validateKeywords_ != nullptr;};
    void deleteValidateKeywords() { this->validateKeywords_ = nullptr;};
    inline string validateKeywords() const { DARABONBA_PTR_GET_DEFAULT(validateKeywords_, "") };
    inline CreateTimingSyntheticTaskRequestMonitorConfFileDownload& setValidateKeywords(string validateKeywords) { DARABONBA_PTR_SET_VALUE(validateKeywords_, validateKeywords) };


    // verifyWay Field Functions 
    bool hasVerifyWay() const { return this->verifyWay_ != nullptr;};
    void deleteVerifyWay() { this->verifyWay_ = nullptr;};
    inline int32_t verifyWay() const { DARABONBA_PTR_GET_DEFAULT(verifyWay_, 0) };
    inline CreateTimingSyntheticTaskRequestMonitorConfFileDownload& setVerifyWay(int32_t verifyWay) { DARABONBA_PTR_SET_VALUE(verifyWay_, verifyWay) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline string whiteList() const { DARABONBA_PTR_GET_DEFAULT(whiteList_, "") };
    inline CreateTimingSyntheticTaskRequestMonitorConfFileDownload& setWhiteList(string whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };


  protected:
    // Unit: milliseconds. Minimum value: 1000. Maximum value: 120000. Default value: 5000.
    std::shared_ptr<int64_t> connectionTimeout_ = nullptr;
    // The content of the custom request header.
    std::shared_ptr<map<string, string>> customHeaderContent_ = nullptr;
    // The kernel type. Valid values:
    // 
    // *   1: curl
    // *   0: WinInet
    // 
    // Default value: 1
    std::shared_ptr<int32_t> downloadKernel_ = nullptr;
    // Specifies whether to ignore CA certificate authentication errors. Valid values: 0: no. 1: yes. Default value: 1.
    std::shared_ptr<int32_t> ignoreCertificateAuthError_ = nullptr;
    // Specifies whether to ignore certificate revocation errors. Valid values: 0: no. 1: yes. Default value: 1.
    std::shared_ptr<int32_t> ignoreCertificateCanceledError_ = nullptr;
    // Specifies whether to ignore certificate invalidity. Valid values: 0: no. 1: yes. Default value: 1.
    std::shared_ptr<int32_t> ignoreCertificateOutOfDateError_ = nullptr;
    // Specifies whether to ignore certificate status errors. Valid values: 0: no. 1: yes. Default value: 1.
    std::shared_ptr<int32_t> ignoreCertificateStatusError_ = nullptr;
    // Specifies whether to ignore certificate incredibility. Valid values: 0: no. 1: yes. Default value: 1.
    std::shared_ptr<int32_t> ignoreCertificateUntrustworthyError_ = nullptr;
    // Specifies whether to ignore certificate usage errors. Valid values: 0: no. 1: yes. Default value: 1.
    std::shared_ptr<int32_t> ignoreCertificateUsingError_ = nullptr;
    // Specifies whether to ignore host invalidity. Valid values: 0: no. 1: yes. Default value: 1.
    std::shared_ptr<int32_t> ignoreInvalidHostError_ = nullptr;
    // The monitoring timeout period. Unit: milliseconds. Minimum value: 1000. Maximum value: 120000. Default value: 60000.
    std::shared_ptr<int64_t> monitorTimeout_ = nullptr;
    // The QUIC protocol type. Valid values:
    // 
    // *   1: HTTP/1
    // *   2: HTTP/2
    // *   3: HTTP/3
    // 
    // Default value: 1
    std::shared_ptr<int32_t> quickProtocol_ = nullptr;
    // Specifies whether to support redirection. Valid values: 0: no. 1: yes. Default value: 1.
    std::shared_ptr<int32_t> redirection_ = nullptr;
    // The URL that is used to download the file.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetUrl_ = nullptr;
    // The maximum file size of a single transfer. Unit: KB. Minimum value: 1. Maximum value: 20480. Valid values: 2048.
    std::shared_ptr<int64_t> transmissionSize_ = nullptr;
    // The keyword that is used in verification.
    std::shared_ptr<string> validateKeywords_ = nullptr;
    // The verification method. Valid values:
    // 
    // *   0: no verification
    // *   1: string verification
    // *   2: MD5 verification
    std::shared_ptr<int32_t> verifyWay_ = nullptr;
    // The whitelisted objects that are used to avoid DNS hijacking. The objects can be IP addresses, wildcard mask, subnet mask, or CNAME records. Separate multiple objects with vertical bars (|). Example: www.aliyun.com:203.0.3.55|203.3.44.67. It indicates that all IP addresses that belong to the www.aliyun.com domain name except 203.0.3.55 and 203.3.44.67 are hijacked.
    std::shared_ptr<string> whiteList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
