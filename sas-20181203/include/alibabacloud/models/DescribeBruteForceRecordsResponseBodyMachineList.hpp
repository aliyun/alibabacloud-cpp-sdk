// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBRUTEFORCERECORDSRESPONSEBODYMACHINELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBRUTEFORCERECORDSRESPONSEBODYMACHINELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBruteForceRecordsResponseBodyMachineList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBruteForceRecordsResponseBodyMachineList& obj) { 
      DARABONBA_PTR_TO_JSON(AliNetOnline, aliNetOnline_);
      DARABONBA_PTR_TO_JSON(BlockExpireDate, blockExpireDate_);
      DARABONBA_PTR_TO_JSON(BlockIp, blockIp_);
      DARABONBA_PTR_TO_JSON(BlockType, blockType_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBruteForceRecordsResponseBodyMachineList& obj) { 
      DARABONBA_PTR_FROM_JSON(AliNetOnline, aliNetOnline_);
      DARABONBA_PTR_FROM_JSON(BlockExpireDate, blockExpireDate_);
      DARABONBA_PTR_FROM_JSON(BlockIp, blockIp_);
      DARABONBA_PTR_FROM_JSON(BlockType, blockType_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeBruteForceRecordsResponseBodyMachineList() = default ;
    DescribeBruteForceRecordsResponseBodyMachineList(const DescribeBruteForceRecordsResponseBodyMachineList &) = default ;
    DescribeBruteForceRecordsResponseBodyMachineList(DescribeBruteForceRecordsResponseBodyMachineList &&) = default ;
    DescribeBruteForceRecordsResponseBodyMachineList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBruteForceRecordsResponseBodyMachineList() = default ;
    DescribeBruteForceRecordsResponseBodyMachineList& operator=(const DescribeBruteForceRecordsResponseBodyMachineList &) = default ;
    DescribeBruteForceRecordsResponseBodyMachineList& operator=(DescribeBruteForceRecordsResponseBodyMachineList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliNetOnline_ == nullptr
        && return this->blockExpireDate_ == nullptr && return this->blockIp_ == nullptr && return this->blockType_ == nullptr && return this->errorCode_ == nullptr && return this->id_ == nullptr
        && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->port_ == nullptr && return this->ruleName_ == nullptr
        && return this->source_ == nullptr && return this->status_ == nullptr && return this->uuid_ == nullptr; };
    // aliNetOnline Field Functions 
    bool hasAliNetOnline() const { return this->aliNetOnline_ != nullptr;};
    void deleteAliNetOnline() { this->aliNetOnline_ = nullptr;};
    inline bool aliNetOnline() const { DARABONBA_PTR_GET_DEFAULT(aliNetOnline_, false) };
    inline DescribeBruteForceRecordsResponseBodyMachineList& setAliNetOnline(bool aliNetOnline) { DARABONBA_PTR_SET_VALUE(aliNetOnline_, aliNetOnline) };


    // blockExpireDate Field Functions 
    bool hasBlockExpireDate() const { return this->blockExpireDate_ != nullptr;};
    void deleteBlockExpireDate() { this->blockExpireDate_ = nullptr;};
    inline int64_t blockExpireDate() const { DARABONBA_PTR_GET_DEFAULT(blockExpireDate_, 0L) };
    inline DescribeBruteForceRecordsResponseBodyMachineList& setBlockExpireDate(int64_t blockExpireDate) { DARABONBA_PTR_SET_VALUE(blockExpireDate_, blockExpireDate) };


    // blockIp Field Functions 
    bool hasBlockIp() const { return this->blockIp_ != nullptr;};
    void deleteBlockIp() { this->blockIp_ = nullptr;};
    inline string blockIp() const { DARABONBA_PTR_GET_DEFAULT(blockIp_, "") };
    inline DescribeBruteForceRecordsResponseBodyMachineList& setBlockIp(string blockIp) { DARABONBA_PTR_SET_VALUE(blockIp_, blockIp) };


    // blockType Field Functions 
    bool hasBlockType() const { return this->blockType_ != nullptr;};
    void deleteBlockType() { this->blockType_ = nullptr;};
    inline string blockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, "") };
    inline DescribeBruteForceRecordsResponseBodyMachineList& setBlockType(string blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeBruteForceRecordsResponseBodyMachineList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeBruteForceRecordsResponseBodyMachineList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeBruteForceRecordsResponseBodyMachineList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeBruteForceRecordsResponseBodyMachineList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeBruteForceRecordsResponseBodyMachineList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeBruteForceRecordsResponseBodyMachineList& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeBruteForceRecordsResponseBodyMachineList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeBruteForceRecordsResponseBodyMachineList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeBruteForceRecordsResponseBodyMachineList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeBruteForceRecordsResponseBodyMachineList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The status of the host network extension. Valid values:
    // 
    // *   **true**: online
    // *   **false**: offline
    std::shared_ptr<bool> aliNetOnline_ = nullptr;
    // The timestamp when the block action on the IP address becomes invalid.
    std::shared_ptr<int64_t> blockExpireDate_ = nullptr;
    // The IP address that is blocked.
    std::shared_ptr<string> blockIp_ = nullptr;
    // The blocking type. Valid values:
    // 
    // *   **group**: security group
    // *   **alinet**: host network extension
    std::shared_ptr<string> blockType_ = nullptr;
    // The error code returned when the defense rule fails to block the IP address.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The ID of the primary key that is recorded in the defense rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The instance name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The port that is attacked.
    std::shared_ptr<string> port_ = nullptr;
    // The name of the defense rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The type of the defense rule. Valid values:
    // 
    // *   **userRule**: custom rule
    // *   **blinkRule**: system rule
    std::shared_ptr<string> source_ = nullptr;
    // The status of the defense rule. Valid values:
    // 
    // *   **0**: invalid
    // *   **1**: enabled
    // *   **2**: failed
    std::shared_ptr<int32_t> status_ = nullptr;
    // The UUID of the server on which the defense rule takes effect.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
