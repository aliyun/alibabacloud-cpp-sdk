// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEOPENSEARCHPUBLICENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEOPENSEARCHPUBLICENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DisableOpenSearchPublicEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableOpenSearchPublicEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableOpenSearchPublicEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DisableOpenSearchPublicEndpointRequest() = default ;
    DisableOpenSearchPublicEndpointRequest(const DisableOpenSearchPublicEndpointRequest &) = default ;
    DisableOpenSearchPublicEndpointRequest(DisableOpenSearchPublicEndpointRequest &&) = default ;
    DisableOpenSearchPublicEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableOpenSearchPublicEndpointRequest() = default ;
    DisableOpenSearchPublicEndpointRequest& operator=(const DisableOpenSearchPublicEndpointRequest &) = default ;
    DisableOpenSearchPublicEndpointRequest& operator=(DisableOpenSearchPublicEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->nodeType_ == nullptr && this->regionId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DisableOpenSearchPublicEndpointRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline DisableOpenSearchPublicEndpointRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DisableOpenSearchPublicEndpointRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The type of the target node. Valid values:
    // 
    // - **search**: data node. This is the default value.
    // - **dashboard**: dashboard node.
    shared_ptr<string> nodeType_ {};
    // The region in which the instance resides.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
