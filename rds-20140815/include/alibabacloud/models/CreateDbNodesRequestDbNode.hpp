// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBNODESREQUESTDBNODE_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBNODESREQUESTDBNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateDBNodesRequestDBNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBNodesRequestDBNode& obj) { 
      DARABONBA_PTR_TO_JSON(classCode, classCode_);
      DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBNodesRequestDBNode& obj) { 
      DARABONBA_PTR_FROM_JSON(classCode, classCode_);
      DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
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
    virtual bool empty() const override { return this->classCode_ == nullptr
        && return this->vswitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // classCode Field Functions 
    bool hasClassCode() const { return this->classCode_ != nullptr;};
    void deleteClassCode() { this->classCode_ = nullptr;};
    inline string classCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
    inline CreateDBNodesRequestDBNode& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline CreateDBNodesRequestDBNode& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDBNodesRequestDBNode& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The specification information of the node.
    // 
    // This parameter is required.
    std::shared_ptr<string> classCode_ = nullptr;
    // The vSwitch ID of the node.
    std::shared_ptr<string> vswitchId_ = nullptr;
    // The ID of the zone in which the node is deployed.
    // 
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
