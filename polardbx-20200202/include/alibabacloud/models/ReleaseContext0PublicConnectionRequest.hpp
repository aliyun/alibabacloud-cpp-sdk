// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASECONTEXT0PUBLICCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASECONTEXT0PUBLICCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ReleaseContext0PublicConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseContext0PublicConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentConnectionString, currentConnectionString_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseContext0PublicConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentConnectionString, currentConnectionString_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ReleaseContext0PublicConnectionRequest() = default ;
    ReleaseContext0PublicConnectionRequest(const ReleaseContext0PublicConnectionRequest &) = default ;
    ReleaseContext0PublicConnectionRequest(ReleaseContext0PublicConnectionRequest &&) = default ;
    ReleaseContext0PublicConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseContext0PublicConnectionRequest() = default ;
    ReleaseContext0PublicConnectionRequest& operator=(const ReleaseContext0PublicConnectionRequest &) = default ;
    ReleaseContext0PublicConnectionRequest& operator=(ReleaseContext0PublicConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentConnectionString_ == nullptr
        && this->DBInstanceName_ == nullptr && this->nodeType_ == nullptr && this->regionId_ == nullptr; };
    // currentConnectionString Field Functions 
    bool hasCurrentConnectionString() const { return this->currentConnectionString_ != nullptr;};
    void deleteCurrentConnectionString() { this->currentConnectionString_ = nullptr;};
    inline string getCurrentConnectionString() const { DARABONBA_PTR_GET_DEFAULT(currentConnectionString_, "") };
    inline ReleaseContext0PublicConnectionRequest& setCurrentConnectionString(string currentConnectionString) { DARABONBA_PTR_SET_VALUE(currentConnectionString_, currentConnectionString) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ReleaseContext0PublicConnectionRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ReleaseContext0PublicConnectionRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ReleaseContext0PublicConnectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The public network connection string to release. If this parameter is not specified, the Mem0 public address is subject to automatic release.
    shared_ptr<string> currentConnectionString_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The target node type. Valid values:
    // - service
    // - dashboard
    shared_ptr<string> nodeType_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
