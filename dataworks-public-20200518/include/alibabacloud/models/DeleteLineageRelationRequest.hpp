// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELINEAGERELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELINEAGERELATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DeleteLineageRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLineageRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestEntityQualifiedName, destEntityQualifiedName_);
      DARABONBA_PTR_TO_JSON(RelationshipGuid, relationshipGuid_);
      DARABONBA_PTR_TO_JSON(RelationshipType, relationshipType_);
      DARABONBA_PTR_TO_JSON(SrcEntityQualifiedName, srcEntityQualifiedName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLineageRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestEntityQualifiedName, destEntityQualifiedName_);
      DARABONBA_PTR_FROM_JSON(RelationshipGuid, relationshipGuid_);
      DARABONBA_PTR_FROM_JSON(RelationshipType, relationshipType_);
      DARABONBA_PTR_FROM_JSON(SrcEntityQualifiedName, srcEntityQualifiedName_);
    };
    DeleteLineageRelationRequest() = default ;
    DeleteLineageRelationRequest(const DeleteLineageRelationRequest &) = default ;
    DeleteLineageRelationRequest(DeleteLineageRelationRequest &&) = default ;
    DeleteLineageRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLineageRelationRequest() = default ;
    DeleteLineageRelationRequest& operator=(const DeleteLineageRelationRequest &) = default ;
    DeleteLineageRelationRequest& operator=(DeleteLineageRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destEntityQualifiedName_ != nullptr
        && this->relationshipGuid_ != nullptr && this->relationshipType_ != nullptr && this->srcEntityQualifiedName_ != nullptr; };
    // destEntityQualifiedName Field Functions 
    bool hasDestEntityQualifiedName() const { return this->destEntityQualifiedName_ != nullptr;};
    void deleteDestEntityQualifiedName() { this->destEntityQualifiedName_ = nullptr;};
    inline string destEntityQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(destEntityQualifiedName_, "") };
    inline DeleteLineageRelationRequest& setDestEntityQualifiedName(string destEntityQualifiedName) { DARABONBA_PTR_SET_VALUE(destEntityQualifiedName_, destEntityQualifiedName) };


    // relationshipGuid Field Functions 
    bool hasRelationshipGuid() const { return this->relationshipGuid_ != nullptr;};
    void deleteRelationshipGuid() { this->relationshipGuid_ = nullptr;};
    inline string relationshipGuid() const { DARABONBA_PTR_GET_DEFAULT(relationshipGuid_, "") };
    inline DeleteLineageRelationRequest& setRelationshipGuid(string relationshipGuid) { DARABONBA_PTR_SET_VALUE(relationshipGuid_, relationshipGuid) };


    // relationshipType Field Functions 
    bool hasRelationshipType() const { return this->relationshipType_ != nullptr;};
    void deleteRelationshipType() { this->relationshipType_ = nullptr;};
    inline string relationshipType() const { DARABONBA_PTR_GET_DEFAULT(relationshipType_, "") };
    inline DeleteLineageRelationRequest& setRelationshipType(string relationshipType) { DARABONBA_PTR_SET_VALUE(relationshipType_, relationshipType) };


    // srcEntityQualifiedName Field Functions 
    bool hasSrcEntityQualifiedName() const { return this->srcEntityQualifiedName_ != nullptr;};
    void deleteSrcEntityQualifiedName() { this->srcEntityQualifiedName_ = nullptr;};
    inline string srcEntityQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(srcEntityQualifiedName_, "") };
    inline DeleteLineageRelationRequest& setSrcEntityQualifiedName(string srcEntityQualifiedName) { DARABONBA_PTR_SET_VALUE(srcEntityQualifiedName_, srcEntityQualifiedName) };


  protected:
    // Destination entity unique identifier
    // 
    // This parameter is required.
    std::shared_ptr<string> destEntityQualifiedName_ = nullptr;
    // Lineage relationship unique identifier
    std::shared_ptr<string> relationshipGuid_ = nullptr;
    // Relationship type
    std::shared_ptr<string> relationshipType_ = nullptr;
    // Source entity unique identifier
    // 
    // This parameter is required.
    std::shared_ptr<string> srcEntityQualifiedName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
