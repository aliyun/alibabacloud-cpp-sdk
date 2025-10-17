// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBNODESREQUESTDBNODE_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBNODESREQUESTDBNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateDBNodesRequestDBNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBNodesRequestDBNode& obj) { 
      DARABONBA_PTR_TO_JSON(TargetClass, targetClass_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBNodesRequestDBNode& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetClass, targetClass_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateDBNodesRequestDBNode() = default ;
    CreateDBNodesRequestDBNode(const CreateDBNodesRequestDBNode &) = default ;
    CreateDBNodesRequestDBNode(CreateDBNodesRequestDBNode &&) = default ;
    CreateDBNodesRequestDBNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBNodesRequestDBNode() = default ;
    CreateDBNodesRequestDBNode& operator=(const CreateDBNodesRequestDBNode &) = default ;
    CreateDBNodesRequestDBNode& operator=(CreateDBNodesRequestDBNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->targetClass_ == nullptr
        && return this->zoneId_ == nullptr; };
    // targetClass Field Functions 
    bool hasTargetClass() const { return this->targetClass_ != nullptr;};
    void deleteTargetClass() { this->targetClass_ = nullptr;};
    inline string targetClass() const { DARABONBA_PTR_GET_DEFAULT(targetClass_, "") };
    inline CreateDBNodesRequestDBNode& setTargetClass(string targetClass) { DARABONBA_PTR_SET_VALUE(targetClass_, targetClass) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDBNodesRequestDBNode& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The specifications of the read-only node that you want to add, which must be the same as the specifications of the existing nodes. For more information, see the following topics:
    // 
    // *   PolarDB for MySQL: [Specifications of compute nodes](https://help.aliyun.com/document_detail/102542.html)
    // *   PolarDB for PostgreSQL (Compatible with Oracle): [Specifications of compute nodes](https://help.aliyun.com/document_detail/207921.html)
    // *   PolarDB for PostgreSQL: [Specifications of compute nodes](https://help.aliyun.com/document_detail/209380.html)
    // 
    // >- You need to specify either DBNode.N.ZoneId or DBNode.N.TargetClass. N is an integer that starts from 1. The maximum value of N is equal to 16 minus the number of existing nodes.
    // >- You can add multiple read-only nodes at the same time only to PolarDB for MySQL clusters, which can contain up to of 15 read-only nodes.
    // >- This parameter is required for PolarDB for PostgreSQL (Compatible with Oracle) clusters or PolarDB for PostgreSQL clusters. This parameter is optional for PolarDB for MySQL clusters.
    std::shared_ptr<string> targetClass_ = nullptr;
    // The zone ID of the node that you want to add, which must be the same as the zone ID of existing nodes. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query the IDs of zones.
    // 
    // >- You need to specify either DBNode.N.ZoneId or DBNode.N.TargetClass. N is an integer that starts from 1. The maximum value of N is equal to 16 minus the number of existing nodes.
    // >- You can add multiple read-only nodes at the same time only to PolarDB for MySQL clusters, which can contain up to of 15 read-only nodes.
    // >- This parameter is required for PolarDB for PostgreSQL (Compatible with Oracle) clusters or PolarDB for PostgreSQL clusters. This parameter is optional for PolarDB for MySQL clusters.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
