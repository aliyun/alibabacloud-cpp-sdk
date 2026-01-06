// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LINEAGERELATION_HPP_
#define ALIBABACLOUD_MODELS_LINEAGERELATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class LineageRelation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LineageRelation& obj) { 
      DARABONBA_PTR_TO_JSON(DestEntityQualifiedName, destEntityQualifiedName_);
      DARABONBA_PTR_TO_JSON(RelationshipGuid, relationshipGuid_);
      DARABONBA_PTR_TO_JSON(SrcEntityQualifiedName, srcEntityQualifiedName_);
    };
    friend void from_json(const Darabonba::Json& j, LineageRelation& obj) { 
      DARABONBA_PTR_FROM_JSON(DestEntityQualifiedName, destEntityQualifiedName_);
      DARABONBA_PTR_FROM_JSON(RelationshipGuid, relationshipGuid_);
      DARABONBA_PTR_FROM_JSON(SrcEntityQualifiedName, srcEntityQualifiedName_);
    };
    LineageRelation() = default ;
    LineageRelation(const LineageRelation &) = default ;
    LineageRelation(LineageRelation &&) = default ;
    LineageRelation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LineageRelation() = default ;
    LineageRelation& operator=(const LineageRelation &) = default ;
    LineageRelation& operator=(LineageRelation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destEntityQualifiedName_ == nullptr
        && this->relationshipGuid_ == nullptr && this->srcEntityQualifiedName_ == nullptr; };
    // destEntityQualifiedName Field Functions 
    bool hasDestEntityQualifiedName() const { return this->destEntityQualifiedName_ != nullptr;};
    void deleteDestEntityQualifiedName() { this->destEntityQualifiedName_ = nullptr;};
    inline string getDestEntityQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(destEntityQualifiedName_, "") };
    inline LineageRelation& setDestEntityQualifiedName(string destEntityQualifiedName) { DARABONBA_PTR_SET_VALUE(destEntityQualifiedName_, destEntityQualifiedName) };


    // relationshipGuid Field Functions 
    bool hasRelationshipGuid() const { return this->relationshipGuid_ != nullptr;};
    void deleteRelationshipGuid() { this->relationshipGuid_ = nullptr;};
    inline string getRelationshipGuid() const { DARABONBA_PTR_GET_DEFAULT(relationshipGuid_, "") };
    inline LineageRelation& setRelationshipGuid(string relationshipGuid) { DARABONBA_PTR_SET_VALUE(relationshipGuid_, relationshipGuid) };


    // srcEntityQualifiedName Field Functions 
    bool hasSrcEntityQualifiedName() const { return this->srcEntityQualifiedName_ != nullptr;};
    void deleteSrcEntityQualifiedName() { this->srcEntityQualifiedName_ = nullptr;};
    inline string getSrcEntityQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(srcEntityQualifiedName_, "") };
    inline LineageRelation& setSrcEntityQualifiedName(string srcEntityQualifiedName) { DARABONBA_PTR_SET_VALUE(srcEntityQualifiedName_, srcEntityQualifiedName) };


  protected:
    shared_ptr<string> destEntityQualifiedName_ {};
    shared_ptr<string> relationshipGuid_ {};
    shared_ptr<string> srcEntityQualifiedName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
