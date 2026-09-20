// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMULTIZONECLUSTERNODETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMULTIZONECLUSTERNODETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class ModifyMultiZoneClusterNodeTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyMultiZoneClusterNodeTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CoreInstanceType, coreInstanceType_);
      DARABONBA_PTR_TO_JSON(LogInstanceType, logInstanceType_);
      DARABONBA_PTR_TO_JSON(MasterInstanceType, masterInstanceType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyMultiZoneClusterNodeTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CoreInstanceType, coreInstanceType_);
      DARABONBA_PTR_FROM_JSON(LogInstanceType, logInstanceType_);
      DARABONBA_PTR_FROM_JSON(MasterInstanceType, masterInstanceType_);
    };
    ModifyMultiZoneClusterNodeTypeRequest() = default ;
    ModifyMultiZoneClusterNodeTypeRequest(const ModifyMultiZoneClusterNodeTypeRequest &) = default ;
    ModifyMultiZoneClusterNodeTypeRequest(ModifyMultiZoneClusterNodeTypeRequest &&) = default ;
    ModifyMultiZoneClusterNodeTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyMultiZoneClusterNodeTypeRequest() = default ;
    ModifyMultiZoneClusterNodeTypeRequest& operator=(const ModifyMultiZoneClusterNodeTypeRequest &) = default ;
    ModifyMultiZoneClusterNodeTypeRequest& operator=(ModifyMultiZoneClusterNodeTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->coreInstanceType_ == nullptr && this->logInstanceType_ == nullptr && this->masterInstanceType_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyMultiZoneClusterNodeTypeRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // coreInstanceType Field Functions 
    bool hasCoreInstanceType() const { return this->coreInstanceType_ != nullptr;};
    void deleteCoreInstanceType() { this->coreInstanceType_ = nullptr;};
    inline string getCoreInstanceType() const { DARABONBA_PTR_GET_DEFAULT(coreInstanceType_, "") };
    inline ModifyMultiZoneClusterNodeTypeRequest& setCoreInstanceType(string coreInstanceType) { DARABONBA_PTR_SET_VALUE(coreInstanceType_, coreInstanceType) };


    // logInstanceType Field Functions 
    bool hasLogInstanceType() const { return this->logInstanceType_ != nullptr;};
    void deleteLogInstanceType() { this->logInstanceType_ = nullptr;};
    inline string getLogInstanceType() const { DARABONBA_PTR_GET_DEFAULT(logInstanceType_, "") };
    inline ModifyMultiZoneClusterNodeTypeRequest& setLogInstanceType(string logInstanceType) { DARABONBA_PTR_SET_VALUE(logInstanceType_, logInstanceType) };


    // masterInstanceType Field Functions 
    bool hasMasterInstanceType() const { return this->masterInstanceType_ != nullptr;};
    void deleteMasterInstanceType() { this->masterInstanceType_ = nullptr;};
    inline string getMasterInstanceType() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceType_, "") };
    inline ModifyMultiZoneClusterNodeTypeRequest& setMasterInstanceType(string masterInstanceType) { DARABONBA_PTR_SET_VALUE(masterInstanceType_, masterInstanceType) };


  protected:
    // The ID of the multi-zone instance.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The node specifications of the core node. For valid values, refer to DescribeInstanceType.
    shared_ptr<string> coreInstanceType_ {};
    // The node specifications of the log node. For valid values, refer to DescribeInstanceType.
    shared_ptr<string> logInstanceType_ {};
    // The node specifications of the master node. For valid values, refer to DescribeInstanceType.
    shared_ptr<string> masterInstanceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
