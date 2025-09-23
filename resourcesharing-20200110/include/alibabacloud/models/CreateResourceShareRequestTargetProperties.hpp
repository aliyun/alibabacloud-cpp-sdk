// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCESHAREREQUESTTARGETPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCESHAREREQUESTTARGETPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class CreateResourceShareRequestTargetProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceShareRequestTargetProperties& obj) { 
      DARABONBA_PTR_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceShareRequestTargetProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
    };
    CreateResourceShareRequestTargetProperties() = default ;
    CreateResourceShareRequestTargetProperties(const CreateResourceShareRequestTargetProperties &) = default ;
    CreateResourceShareRequestTargetProperties(CreateResourceShareRequestTargetProperties &&) = default ;
    CreateResourceShareRequestTargetProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceShareRequestTargetProperties() = default ;
    CreateResourceShareRequestTargetProperties& operator=(const CreateResourceShareRequestTargetProperties &) = default ;
    CreateResourceShareRequestTargetProperties& operator=(CreateResourceShareRequestTargetProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->property_ != nullptr
        && this->targetId_ != nullptr; };
    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline string property() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
    inline CreateResourceShareRequestTargetProperties& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline CreateResourceShareRequestTargetProperties& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


  protected:
    // The property parameter of the principal. For example, you can specify a parameter that indicates the time range for resource sharing. Valid values of `timeRangeType`:
    // 
    // *   timeRange: a specific time range
    // *   day: all day
    // 
    // >  `TargetProperties.N.TargetId` and `TargetProperties.N.Property` must be used in pairs.
    std::shared_ptr<string> property_ = nullptr;
    // The ID of the principal.
    // 
    // >  `TargetProperties.N.TargetId` and `TargetProperties.N.Property` must be used in pairs.
    std::shared_ptr<string> targetId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
