// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMBLOCKINSTANCESRESPONSEBODYINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMBLOCKINSTANCESRESPONSEBODYINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCustomBlockInstancesResponseBodyInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomBlockInstancesResponseBodyInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(AliNetOnline, aliNetOnline_);
      DARABONBA_PTR_TO_JSON(BlockType, blockType_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SuccessInfo, successInfo_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomBlockInstancesResponseBodyInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(AliNetOnline, aliNetOnline_);
      DARABONBA_PTR_FROM_JSON(BlockType, blockType_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SuccessInfo, successInfo_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeCustomBlockInstancesResponseBodyInstanceList() = default ;
    DescribeCustomBlockInstancesResponseBodyInstanceList(const DescribeCustomBlockInstancesResponseBodyInstanceList &) = default ;
    DescribeCustomBlockInstancesResponseBodyInstanceList(DescribeCustomBlockInstancesResponseBodyInstanceList &&) = default ;
    DescribeCustomBlockInstancesResponseBodyInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomBlockInstancesResponseBodyInstanceList() = default ;
    DescribeCustomBlockInstancesResponseBodyInstanceList& operator=(const DescribeCustomBlockInstancesResponseBodyInstanceList &) = default ;
    DescribeCustomBlockInstancesResponseBodyInstanceList& operator=(DescribeCustomBlockInstancesResponseBodyInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliNetOnline_ != nullptr
        && this->blockType_ != nullptr && this->errorCode_ != nullptr && this->instanceName_ != nullptr && this->internetIp_ != nullptr && this->intranetIp_ != nullptr
        && this->status_ != nullptr && this->successInfo_ != nullptr && this->uuid_ != nullptr; };
    // aliNetOnline Field Functions 
    bool hasAliNetOnline() const { return this->aliNetOnline_ != nullptr;};
    void deleteAliNetOnline() { this->aliNetOnline_ = nullptr;};
    inline bool aliNetOnline() const { DARABONBA_PTR_GET_DEFAULT(aliNetOnline_, false) };
    inline DescribeCustomBlockInstancesResponseBodyInstanceList& setAliNetOnline(bool aliNetOnline) { DARABONBA_PTR_SET_VALUE(aliNetOnline_, aliNetOnline) };


    // blockType Field Functions 
    bool hasBlockType() const { return this->blockType_ != nullptr;};
    void deleteBlockType() { this->blockType_ = nullptr;};
    inline string blockType() const { DARABONBA_PTR_GET_DEFAULT(blockType_, "") };
    inline DescribeCustomBlockInstancesResponseBodyInstanceList& setBlockType(string blockType) { DARABONBA_PTR_SET_VALUE(blockType_, blockType) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeCustomBlockInstancesResponseBodyInstanceList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeCustomBlockInstancesResponseBodyInstanceList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeCustomBlockInstancesResponseBodyInstanceList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeCustomBlockInstancesResponseBodyInstanceList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCustomBlockInstancesResponseBodyInstanceList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // successInfo Field Functions 
    bool hasSuccessInfo() const { return this->successInfo_ != nullptr;};
    void deleteSuccessInfo() { this->successInfo_ = nullptr;};
    inline string successInfo() const { DARABONBA_PTR_GET_DEFAULT(successInfo_, "") };
    inline DescribeCustomBlockInstancesResponseBodyInstanceList& setSuccessInfo(string successInfo) { DARABONBA_PTR_SET_VALUE(successInfo_, successInfo) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeCustomBlockInstancesResponseBodyInstanceList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The status of the host network extension. Valid values:
    // 
    // *   **true**: online
    // *   **false**: offline
    std::shared_ptr<bool> aliNetOnline_ = nullptr;
    // The blocking type. Valid values:
    // 
    // *   **group**: security group
    // *   **alinet**: host network extension
    std::shared_ptr<string> blockType_ = nullptr;
    // The error code returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The name of the asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // Indicates whether the rule is enabled for the server.
    // 
    // *   **2**: enabling failed
    // *   **1**: enabled
    // *   **0**: disabled
    std::shared_ptr<int32_t> status_ = nullptr;
    // The information that is returned after brute-force attacks are blocked.
    std::shared_ptr<string> successInfo_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
