// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPXFSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPXFSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreatePxfsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePxfsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePxfsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
    };
    CreatePxfsRequest() = default ;
    CreatePxfsRequest(const CreatePxfsRequest &) = default ;
    CreatePxfsRequest(CreatePxfsRequest &&) = default ;
    CreatePxfsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePxfsRequest() = default ;
    CreatePxfsRequest& operator=(const CreatePxfsRequest &) = default ;
    CreatePxfsRequest& operator=(CreatePxfsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classCode_ == nullptr
        && this->DBInstanceName_ == nullptr && this->nodeCount_ == nullptr && this->regionId_ == nullptr && this->securityIPList_ == nullptr && this->storageSize_ == nullptr; };
    // classCode Field Functions 
    bool hasClassCode() const { return this->classCode_ != nullptr;};
    void deleteClassCode() { this->classCode_ = nullptr;};
    inline string getClassCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
    inline CreatePxfsRequest& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreatePxfsRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int64_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0L) };
    inline CreatePxfsRequest& setNodeCount(int64_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePxfsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreatePxfsRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int64_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
    inline CreatePxfsRequest& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


  protected:
    // The node specifications.
    shared_ptr<string> classCode_ {};
    // The PolarDB-X instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The number of nodes.
    shared_ptr<int64_t> nodeCount_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The IP whitelist.
    shared_ptr<string> securityIPList_ {};
    // The storage capacity.
    shared_ptr<int64_t> storageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
