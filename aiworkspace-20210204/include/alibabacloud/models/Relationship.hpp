// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELATIONSHIP_HPP_
#define ALIBABACLOUD_MODELS_RELATIONSHIP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class Relationship : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Relationship& obj) { 
      DARABONBA_ANY_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(DataChannel, dataChannel_);
      DARABONBA_PTR_TO_JSON(RelationshipGuid, relationshipGuid_);
      DARABONBA_PTR_TO_JSON(RelationshipType, relationshipType_);
    };
    friend void from_json(const Darabonba::Json& j, Relationship& obj) { 
      DARABONBA_ANY_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(DataChannel, dataChannel_);
      DARABONBA_PTR_FROM_JSON(RelationshipGuid, relationshipGuid_);
      DARABONBA_PTR_FROM_JSON(RelationshipType, relationshipType_);
    };
    Relationship() = default ;
    Relationship(const Relationship &) = default ;
    Relationship(Relationship &&) = default ;
    Relationship(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Relationship() = default ;
    Relationship& operator=(const Relationship &) = default ;
    Relationship& operator=(Relationship &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->dataChannel_ == nullptr && return this->relationshipGuid_ == nullptr && return this->relationshipType_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline     const Darabonba::Json & attributes() const { DARABONBA_GET(attributes_) };
    Darabonba::Json & attributes() { DARABONBA_GET(attributes_) };
    inline Relationship& setAttributes(const Darabonba::Json & attributes) { DARABONBA_SET_VALUE(attributes_, attributes) };
    inline Relationship& setAttributes(Darabonba::Json & attributes) { DARABONBA_SET_RVALUE(attributes_, attributes) };


    // dataChannel Field Functions 
    bool hasDataChannel() const { return this->dataChannel_ != nullptr;};
    void deleteDataChannel() { this->dataChannel_ = nullptr;};
    inline string dataChannel() const { DARABONBA_PTR_GET_DEFAULT(dataChannel_, "") };
    inline Relationship& setDataChannel(string dataChannel) { DARABONBA_PTR_SET_VALUE(dataChannel_, dataChannel) };


    // relationshipGuid Field Functions 
    bool hasRelationshipGuid() const { return this->relationshipGuid_ != nullptr;};
    void deleteRelationshipGuid() { this->relationshipGuid_ = nullptr;};
    inline string relationshipGuid() const { DARABONBA_PTR_GET_DEFAULT(relationshipGuid_, "") };
    inline Relationship& setRelationshipGuid(string relationshipGuid) { DARABONBA_PTR_SET_VALUE(relationshipGuid_, relationshipGuid) };


    // relationshipType Field Functions 
    bool hasRelationshipType() const { return this->relationshipType_ != nullptr;};
    void deleteRelationshipType() { this->relationshipType_ = nullptr;};
    inline string relationshipType() const { DARABONBA_PTR_GET_DEFAULT(relationshipType_, "") };
    inline Relationship& setRelationshipType(string relationshipType) { DARABONBA_PTR_SET_VALUE(relationshipType_, relationshipType) };


  protected:
    Darabonba::Json attributes_ = nullptr;
    std::shared_ptr<string> dataChannel_ = nullptr;
    std::shared_ptr<string> relationshipGuid_ = nullptr;
    std::shared_ptr<string> relationshipType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
