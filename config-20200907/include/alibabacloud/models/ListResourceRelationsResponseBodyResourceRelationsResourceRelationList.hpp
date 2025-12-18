// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCERELATIONSRESPONSEBODYRESOURCERELATIONSRESOURCERELATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCERELATIONSRESPONSEBODYRESOURCERELATIONSRESOURCERELATIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListResourceRelationsResponseBodyResourceRelationsResourceRelationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceRelationsResponseBodyResourceRelationsResourceRelationList& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(RelationType, relationType_);
      DARABONBA_PTR_TO_JSON(SourceResourceId, sourceResourceId_);
      DARABONBA_PTR_TO_JSON(SourceResourceRegionId, sourceResourceRegionId_);
      DARABONBA_PTR_TO_JSON(SourceResourceType, sourceResourceType_);
      DARABONBA_PTR_TO_JSON(TargetResourceId, targetResourceId_);
      DARABONBA_PTR_TO_JSON(TargetResourceType, targetResourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceRelationsResponseBodyResourceRelationsResourceRelationList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
      DARABONBA_PTR_FROM_JSON(SourceResourceId, sourceResourceId_);
      DARABONBA_PTR_FROM_JSON(SourceResourceRegionId, sourceResourceRegionId_);
      DARABONBA_PTR_FROM_JSON(SourceResourceType, sourceResourceType_);
      DARABONBA_PTR_FROM_JSON(TargetResourceId, targetResourceId_);
      DARABONBA_PTR_FROM_JSON(TargetResourceType, targetResourceType_);
    };
    ListResourceRelationsResponseBodyResourceRelationsResourceRelationList() = default ;
    ListResourceRelationsResponseBodyResourceRelationsResourceRelationList(const ListResourceRelationsResponseBodyResourceRelationsResourceRelationList &) = default ;
    ListResourceRelationsResponseBodyResourceRelationsResourceRelationList(ListResourceRelationsResponseBodyResourceRelationsResourceRelationList &&) = default ;
    ListResourceRelationsResponseBodyResourceRelationsResourceRelationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceRelationsResponseBodyResourceRelationsResourceRelationList() = default ;
    ListResourceRelationsResponseBodyResourceRelationsResourceRelationList& operator=(const ListResourceRelationsResponseBodyResourceRelationsResourceRelationList &) = default ;
    ListResourceRelationsResponseBodyResourceRelationsResourceRelationList& operator=(ListResourceRelationsResponseBodyResourceRelationsResourceRelationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->relationType_ == nullptr && return this->sourceResourceId_ == nullptr && return this->sourceResourceRegionId_ == nullptr && return this->sourceResourceType_ == nullptr && return this->targetResourceId_ == nullptr
        && return this->targetResourceType_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline ListResourceRelationsResponseBodyResourceRelationsResourceRelationList& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline string relationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
    inline ListResourceRelationsResponseBodyResourceRelationsResourceRelationList& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    // sourceResourceId Field Functions 
    bool hasSourceResourceId() const { return this->sourceResourceId_ != nullptr;};
    void deleteSourceResourceId() { this->sourceResourceId_ = nullptr;};
    inline string sourceResourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceResourceId_, "") };
    inline ListResourceRelationsResponseBodyResourceRelationsResourceRelationList& setSourceResourceId(string sourceResourceId) { DARABONBA_PTR_SET_VALUE(sourceResourceId_, sourceResourceId) };


    // sourceResourceRegionId Field Functions 
    bool hasSourceResourceRegionId() const { return this->sourceResourceRegionId_ != nullptr;};
    void deleteSourceResourceRegionId() { this->sourceResourceRegionId_ = nullptr;};
    inline string sourceResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceResourceRegionId_, "") };
    inline ListResourceRelationsResponseBodyResourceRelationsResourceRelationList& setSourceResourceRegionId(string sourceResourceRegionId) { DARABONBA_PTR_SET_VALUE(sourceResourceRegionId_, sourceResourceRegionId) };


    // sourceResourceType Field Functions 
    bool hasSourceResourceType() const { return this->sourceResourceType_ != nullptr;};
    void deleteSourceResourceType() { this->sourceResourceType_ = nullptr;};
    inline string sourceResourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceResourceType_, "") };
    inline ListResourceRelationsResponseBodyResourceRelationsResourceRelationList& setSourceResourceType(string sourceResourceType) { DARABONBA_PTR_SET_VALUE(sourceResourceType_, sourceResourceType) };


    // targetResourceId Field Functions 
    bool hasTargetResourceId() const { return this->targetResourceId_ != nullptr;};
    void deleteTargetResourceId() { this->targetResourceId_ = nullptr;};
    inline string targetResourceId() const { DARABONBA_PTR_GET_DEFAULT(targetResourceId_, "") };
    inline ListResourceRelationsResponseBodyResourceRelationsResourceRelationList& setTargetResourceId(string targetResourceId) { DARABONBA_PTR_SET_VALUE(targetResourceId_, targetResourceId) };


    // targetResourceType Field Functions 
    bool hasTargetResourceType() const { return this->targetResourceType_ != nullptr;};
    void deleteTargetResourceType() { this->targetResourceType_ = nullptr;};
    inline string targetResourceType() const { DARABONBA_PTR_GET_DEFAULT(targetResourceType_, "") };
    inline ListResourceRelationsResponseBodyResourceRelationsResourceRelationList& setTargetResourceType(string targetResourceType) { DARABONBA_PTR_SET_VALUE(targetResourceType_, targetResourceType) };


  protected:
    // The ID of the Alibaba Cloud account to which the resource belongs.
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The type of the relationship between the resource and the object.
    // 
    // Valid values:
    // 
    // *   IsContained: The object is included as part of the resource.
    // *   IsAttachedTo: The object is added to the resource.
    // *   IsAssociatedIn: The object is associated with the resource.
    // *   Contains: The object contains the resource.
    std::shared_ptr<string> relationType_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> sourceResourceId_ = nullptr;
    // The ID of the region in which the resource resides.
    std::shared_ptr<string> sourceResourceRegionId_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> sourceResourceType_ = nullptr;
    // The ID of the associated resource.
    std::shared_ptr<string> targetResourceId_ = nullptr;
    // The type of the associated resource.
    std::shared_ptr<string> targetResourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
