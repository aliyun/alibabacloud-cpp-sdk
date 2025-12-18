// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPPORTEDRESOURCERELATIONCONFIGRESPONSEBODYRESOURCERELATIONCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSUPPORTEDRESOURCERELATIONCONFIGRESPONSEBODYRESOURCERELATIONCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(RelationType, relationType_);
      DARABONBA_PTR_TO_JSON(TargetResourceType, targetResourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
      DARABONBA_PTR_FROM_JSON(TargetResourceType, targetResourceType_);
    };
    GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList() = default ;
    GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList(const GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList &) = default ;
    GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList(GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList &&) = default ;
    GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList() = default ;
    GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList& operator=(const GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList &) = default ;
    GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList& operator=(GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->relationType_ == nullptr
        && return this->targetResourceType_ == nullptr; };
    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline string relationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
    inline GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    // targetResourceType Field Functions 
    bool hasTargetResourceType() const { return this->targetResourceType_ != nullptr;};
    void deleteTargetResourceType() { this->targetResourceType_ = nullptr;};
    inline string targetResourceType() const { DARABONBA_PTR_GET_DEFAULT(targetResourceType_, "") };
    inline GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList& setTargetResourceType(string targetResourceType) { DARABONBA_PTR_SET_VALUE(targetResourceType_, targetResourceType) };


  protected:
    // The type of the relationship between the resource and the object. Valid values:
    // 
    // *   IsContained: The object is included as part of the resource.
    // *   IsAttachedTo: The object is added to the resource.
    // *   IsAssociatedIn: The object is associated with the resource.
    // *   Contains: The actual value contains the expected value.
    std::shared_ptr<string> relationType_ = nullptr;
    // The resource type.
    std::shared_ptr<string> targetResourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
