// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERLINEAGERELATIONRESPONSEBODYLINEAGERELATION_HPP_
#define ALIBABACLOUD_MODELS_REGISTERLINEAGERELATIONRESPONSEBODYLINEAGERELATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class RegisterLineageRelationResponseBodyLineageRelation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterLineageRelationResponseBodyLineageRelation& obj) { 
      DARABONBA_PTR_TO_JSON(DestEntityQualifiedName, destEntityQualifiedName_);
      DARABONBA_PTR_TO_JSON(RelationshipGuid, relationshipGuid_);
      DARABONBA_PTR_TO_JSON(SrcEntityQualifiedName, srcEntityQualifiedName_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterLineageRelationResponseBodyLineageRelation& obj) { 
      DARABONBA_PTR_FROM_JSON(DestEntityQualifiedName, destEntityQualifiedName_);
      DARABONBA_PTR_FROM_JSON(RelationshipGuid, relationshipGuid_);
      DARABONBA_PTR_FROM_JSON(SrcEntityQualifiedName, srcEntityQualifiedName_);
    };
    RegisterLineageRelationResponseBodyLineageRelation() = default ;
    RegisterLineageRelationResponseBodyLineageRelation(const RegisterLineageRelationResponseBodyLineageRelation &) = default ;
    RegisterLineageRelationResponseBodyLineageRelation(RegisterLineageRelationResponseBodyLineageRelation &&) = default ;
    RegisterLineageRelationResponseBodyLineageRelation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterLineageRelationResponseBodyLineageRelation() = default ;
    RegisterLineageRelationResponseBodyLineageRelation& operator=(const RegisterLineageRelationResponseBodyLineageRelation &) = default ;
    RegisterLineageRelationResponseBodyLineageRelation& operator=(RegisterLineageRelationResponseBodyLineageRelation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destEntityQualifiedName_ != nullptr
        && this->relationshipGuid_ != nullptr && this->srcEntityQualifiedName_ != nullptr; };
    // destEntityQualifiedName Field Functions 
    bool hasDestEntityQualifiedName() const { return this->destEntityQualifiedName_ != nullptr;};
    void deleteDestEntityQualifiedName() { this->destEntityQualifiedName_ = nullptr;};
    inline string destEntityQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(destEntityQualifiedName_, "") };
    inline RegisterLineageRelationResponseBodyLineageRelation& setDestEntityQualifiedName(string destEntityQualifiedName) { DARABONBA_PTR_SET_VALUE(destEntityQualifiedName_, destEntityQualifiedName) };


    // relationshipGuid Field Functions 
    bool hasRelationshipGuid() const { return this->relationshipGuid_ != nullptr;};
    void deleteRelationshipGuid() { this->relationshipGuid_ = nullptr;};
    inline string relationshipGuid() const { DARABONBA_PTR_GET_DEFAULT(relationshipGuid_, "") };
    inline RegisterLineageRelationResponseBodyLineageRelation& setRelationshipGuid(string relationshipGuid) { DARABONBA_PTR_SET_VALUE(relationshipGuid_, relationshipGuid) };


    // srcEntityQualifiedName Field Functions 
    bool hasSrcEntityQualifiedName() const { return this->srcEntityQualifiedName_ != nullptr;};
    void deleteSrcEntityQualifiedName() { this->srcEntityQualifiedName_ = nullptr;};
    inline string srcEntityQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(srcEntityQualifiedName_, "") };
    inline RegisterLineageRelationResponseBodyLineageRelation& setSrcEntityQualifiedName(string srcEntityQualifiedName) { DARABONBA_PTR_SET_VALUE(srcEntityQualifiedName_, srcEntityQualifiedName) };


  protected:
    // The unique identifier of the destination entity.
    std::shared_ptr<string> destEntityQualifiedName_ = nullptr;
    // The ID of the lineage between entities.
    std::shared_ptr<string> relationshipGuid_ = nullptr;
    // The unique identifier of the source entity.
    std::shared_ptr<string> srcEntityQualifiedName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
