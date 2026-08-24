// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVIRUSFILESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVIRUSFILESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateVirusFileStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVirusFileStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DevTag, devTag_);
      DARABONBA_PTR_TO_JSON(FileMd5, fileMd5_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(VirusType, virusType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVirusFileStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
      DARABONBA_PTR_FROM_JSON(FileMd5, fileMd5_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(VirusType, virusType_);
    };
    UpdateVirusFileStatusRequest() = default ;
    UpdateVirusFileStatusRequest(const UpdateVirusFileStatusRequest &) = default ;
    UpdateVirusFileStatusRequest(UpdateVirusFileStatusRequest &&) = default ;
    UpdateVirusFileStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVirusFileStatusRequest() = default ;
    UpdateVirusFileStatusRequest& operator=(const UpdateVirusFileStatusRequest &) = default ;
    UpdateVirusFileStatusRequest& operator=(UpdateVirusFileStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->devTag_ == nullptr
        && this->fileMd5_ == nullptr && this->filePath_ == nullptr && this->operation_ == nullptr && this->virusType_ == nullptr; };
    // devTag Field Functions 
    bool hasDevTag() const { return this->devTag_ != nullptr;};
    void deleteDevTag() { this->devTag_ = nullptr;};
    inline string getDevTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
    inline UpdateVirusFileStatusRequest& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


    // fileMd5 Field Functions 
    bool hasFileMd5() const { return this->fileMd5_ != nullptr;};
    void deleteFileMd5() { this->fileMd5_ = nullptr;};
    inline string getFileMd5() const { DARABONBA_PTR_GET_DEFAULT(fileMd5_, "") };
    inline UpdateVirusFileStatusRequest& setFileMd5(string fileMd5) { DARABONBA_PTR_SET_VALUE(fileMd5_, fileMd5) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline UpdateVirusFileStatusRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline UpdateVirusFileStatusRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // virusType Field Functions 
    bool hasVirusType() const { return this->virusType_ != nullptr;};
    void deleteVirusType() { this->virusType_ = nullptr;};
    inline string getVirusType() const { DARABONBA_PTR_GET_DEFAULT(virusType_, "") };
    inline UpdateVirusFileStatusRequest& setVirusType(string virusType) { DARABONBA_PTR_SET_VALUE(virusType_, virusType) };


  protected:
    // The unique identifier of the user terminal device where the virus file is located. The value can be up to 64 characters in length. You can obtain the value from the following operation:
    // - [ListVirusFileStatuses](~~ListVirusFileStatuses~~): lists virus file statuses.
    // 
    // This parameter is required.
    shared_ptr<string> devTag_ {};
    // The MD5 value of the virus file. The value must be a 32-character hexadecimal string. You can obtain the value from the following operation:
    // - [ListVirusFileStatuses](~~ListVirusFileStatuses~~): lists virus file statuses.
    // 
    // This parameter is required.
    shared_ptr<string> fileMd5_ {};
    // The absolute path of the virus file on the user terminal device. You can obtain the value from the following operation:
    // - [ListVirusFileStatuses](~~ListVirusFileStatuses~~): lists virus file statuses.
    // 
    // This parameter is required.
    shared_ptr<string> filePath_ {};
    // The disposal action. Valid values:
    // - **AdminQuarantine**: quarantines the virus file. The server creates a disposal task and returns a TaskId. The user terminal device pulls and executes the quarantine.
    // - **AdminTrust**: trusts the virus file. Only the disposal status is updated. No disposal task is created, and TaskId returns an empty string.
    // 
    // This parameter is required.
    shared_ptr<string> operation_ {};
    // The virus type. This parameter is used for synchronization to update the virus type of the file. Valid values:
    // - **Backdoor**: backdoor program.
    // - **DDoS**: DDoS Trojan.
    // - **Downloader**: downloader Trojan.
    // - **Engtest**: DPI engine test program.
    // - **Hacktool**: hacker tool.
    // - **Trojan**: self-mutating Trojan.
    // - **Malbaseware**: contaminated base software.
    // - **MalScript**: malicious script.
    // - **Malware**: malicious program.
    // - **Miner**: mining programs.
    // - **Proxytool**: proxy tool.
    // - **RansomWare**: ransomware.
    // - **RiskWare**: riskware.
    // - **Rootkit**: kernel-hidden program.
    // - **Stealer**: credential stealer.
    // - **Scanner**: scanner.
    // - **Suspicious**: suspicious program.
    // - **Virus**: file-infecting virus.
    // - **WebShell**: webshell.
    // - **Worm**: worms.
    // - **BlackList**: file that hit a blacklist entry.
    // - **Exp**: vulnerability exploits program.
    // - **Patcher**: cracking program.
    // - **Gametool**: private server tool.
    // - **AdWare**: adware.
    // - **Maldoc**: malicious document.
    shared_ptr<string> virusType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
