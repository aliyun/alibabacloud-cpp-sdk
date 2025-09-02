// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELATIONSHIPVO_HPP_
#define ALIBABACLOUD_MODELS_RELATIONSHIPVO_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class RelationshipVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RelationshipVO& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(RelationshipGuid, relationshipGuid_);
      DARABONBA_PTR_TO_JSON(RelationshipType, relationshipType_);
    };
    friend void from_json(const Darabonba::Json& j, RelationshipVO& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(RelationshipGuid, relationshipGuid_);
      DARABONBA_PTR_FROM_JSON(RelationshipType, relationshipType_);
    };
    RelationshipVO() = default ;
    RelationshipVO(const RelationshipVO &) = default ;
    RelationshipVO(RelationshipVO &&) = default ;
    RelationshipVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RelationshipVO() = default ;
    RelationshipVO& operator=(const RelationshipVO &) = default ;
    RelationshipVO& operator=(RelationshipVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributes_ != nullptr
        && this->relationshipGuid_ != nullptr && this->relationshipType_ != nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const map<string, string> & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, map<string, string>) };
    inline map<string, string> attributes() { DARABONBA_PTR_GET(attributes_, map<string, string>) };
    inline RelationshipVO& setAttributes(const map<string, string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline RelationshipVO& setAttributes(map<string, string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // relationshipGuid Field Functions 
    bool hasRelationshipGuid() const { return this->relationshipGuid_ != nullptr;};
    void deleteRelationshipGuid() { this->relationshipGuid_ = nullptr;};
    inline string relationshipGuid() const { DARABONBA_PTR_GET_DEFAULT(relationshipGuid_, "") };
    inline RelationshipVO& setRelationshipGuid(string relationshipGuid) { DARABONBA_PTR_SET_VALUE(relationshipGuid_, relationshipGuid) };


    // relationshipType Field Functions 
    bool hasRelationshipType() const { return this->relationshipType_ != nullptr;};
    void deleteRelationshipType() { this->relationshipType_ = nullptr;};
    inline string relationshipType() const { DARABONBA_PTR_GET_DEFAULT(relationshipType_, "") };
    inline RelationshipVO& setRelationshipType(string relationshipType) { DARABONBA_PTR_SET_VALUE(relationshipType_, relationshipType) };


  protected:
    std::shared_ptr<map<string, string>> attributes_ = nullptr;
    std::shared_ptr<string> relationshipGuid_ = nullptr;
    std::shared_ptr<string> relationshipType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
