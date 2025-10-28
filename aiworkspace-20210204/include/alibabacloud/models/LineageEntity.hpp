// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LINEAGEENTITY_HPP_
#define ALIBABACLOUD_MODELS_LINEAGEENTITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class LineageEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LineageEntity& obj) { 
      DARABONBA_ANY_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(QualifiedName, qualifiedName_);
    };
    friend void from_json(const Darabonba::Json& j, LineageEntity& obj) { 
      DARABONBA_ANY_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(QualifiedName, qualifiedName_);
    };
    LineageEntity() = default ;
    LineageEntity(const LineageEntity &) = default ;
    LineageEntity(LineageEntity &&) = default ;
    LineageEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LineageEntity() = default ;
    LineageEntity& operator=(const LineageEntity &) = default ;
    LineageEntity& operator=(LineageEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->entityType_ == nullptr && return this->name_ == nullptr && return this->qualifiedName_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline     const Darabonba::Json & attributes() const { DARABONBA_GET(attributes_) };
    Darabonba::Json & attributes() { DARABONBA_GET(attributes_) };
    inline LineageEntity& setAttributes(const Darabonba::Json & attributes) { DARABONBA_SET_VALUE(attributes_, attributes) };
    inline LineageEntity& setAttributes(Darabonba::Json & attributes) { DARABONBA_SET_RVALUE(attributes_, attributes) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline LineageEntity& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline LineageEntity& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // qualifiedName Field Functions 
    bool hasQualifiedName() const { return this->qualifiedName_ != nullptr;};
    void deleteQualifiedName() { this->qualifiedName_ = nullptr;};
    inline string qualifiedName() const { DARABONBA_PTR_GET_DEFAULT(qualifiedName_, "") };
    inline LineageEntity& setQualifiedName(string qualifiedName) { DARABONBA_PTR_SET_VALUE(qualifiedName_, qualifiedName) };


  protected:
    Darabonba::Json attributes_ = nullptr;
    std::shared_ptr<string> entityType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> qualifiedName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
