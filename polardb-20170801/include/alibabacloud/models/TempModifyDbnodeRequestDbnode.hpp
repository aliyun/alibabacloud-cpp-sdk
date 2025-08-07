// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPMODIFYDBNODEREQUESTDBNODE_HPP_
#define ALIBABACLOUD_MODELS_TEMPMODIFYDBNODEREQUESTDBNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class TempModifyDBNodeRequestDBNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TempModifyDBNodeRequestDBNode& obj) { 
      DARABONBA_PTR_TO_JSON(TargetClass, targetClass_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, TempModifyDBNodeRequestDBNode& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetClass, targetClass_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    TempModifyDBNodeRequestDBNode() = default ;
    TempModifyDBNodeRequestDBNode(const TempModifyDBNodeRequestDBNode &) = default ;
    TempModifyDBNodeRequestDBNode(TempModifyDBNodeRequestDBNode &&) = default ;
    TempModifyDBNodeRequestDBNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TempModifyDBNodeRequestDBNode() = default ;
    TempModifyDBNodeRequestDBNode& operator=(const TempModifyDBNodeRequestDBNode &) = default ;
    TempModifyDBNodeRequestDBNode& operator=(TempModifyDBNodeRequestDBNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->targetClass_ != nullptr
        && this->zoneId_ != nullptr; };
    // targetClass Field Functions 
    bool hasTargetClass() const { return this->targetClass_ != nullptr;};
    void deleteTargetClass() { this->targetClass_ = nullptr;};
    inline string targetClass() const { DARABONBA_PTR_GET_DEFAULT(targetClass_, "") };
    inline TempModifyDBNodeRequestDBNode& setTargetClass(string targetClass) { DARABONBA_PTR_SET_VALUE(targetClass_, targetClass) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline TempModifyDBNodeRequestDBNode& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The specifications of the scaled/added node.
    // 
    // > 
    // 
    // *   The specification of the new node must be consistent with the specifications of the original nodes.
    // 
    // *   You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to view the specifications of the original nodes.
    std::shared_ptr<string> targetClass_ = nullptr;
    // The ID of the zone in which the added node is deployed. It must be the same zone as the original nodes.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
