// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEOPENSEARCHPUBLICENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEOPENSEARCHPUBLICENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class EnableOpenSearchPublicEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableOpenSearchPublicEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableOpenSearchPublicEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    EnableOpenSearchPublicEndpointRequest() = default ;
    EnableOpenSearchPublicEndpointRequest(const EnableOpenSearchPublicEndpointRequest &) = default ;
    EnableOpenSearchPublicEndpointRequest(EnableOpenSearchPublicEndpointRequest &&) = default ;
    EnableOpenSearchPublicEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableOpenSearchPublicEndpointRequest() = default ;
    EnableOpenSearchPublicEndpointRequest& operator=(const EnableOpenSearchPublicEndpointRequest &) = default ;
    EnableOpenSearchPublicEndpointRequest& operator=(EnableOpenSearchPublicEndpointRequest &&) = default ;
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
    inline EnableOpenSearchPublicEndpointRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline EnableOpenSearchPublicEndpointRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableOpenSearchPublicEndpointRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The target node type. Valid values:
    // 
    // - **search**: data node. This is the default value.
    // - **dashboard**: dashboard node.
    shared_ptr<string> nodeType_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
