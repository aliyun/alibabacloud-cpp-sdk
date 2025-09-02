// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LINEAGEENTITYVO_HPP_
#define ALIBABACLOUD_MODELS_LINEAGEENTITYVO_HPP_
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
  class LineageEntityVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LineageEntityVO& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(DetailUrl, detailUrl_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ParentName, parentName_);
      DARABONBA_PTR_TO_JSON(QualifiedName, qualifiedName_);
    };
    friend void from_json(const Darabonba::Json& j, LineageEntityVO& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(DetailUrl, detailUrl_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ParentName, parentName_);
      DARABONBA_PTR_FROM_JSON(QualifiedName, qualifiedName_);
    };
    LineageEntityVO() = default ;
    LineageEntityVO(const LineageEntityVO &) = default ;
    LineageEntityVO(LineageEntityVO &&) = default ;
    LineageEntityVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LineageEntityVO() = default ;
    LineageEntityVO& operator=(const LineageEntityVO &) = default ;
    LineageEntityVO& operator=(LineageEntityVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributes_ != nullptr
        && this->detailUrl_ != nullptr && this->entityType_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr && this->parentName_ != nullptr
        && this->qualifiedName_ != nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const map<string, string> & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, map<string, string>) };
    inline map<string, string> attributes() { DARABONBA_PTR_GET(attributes_, map<string, string>) };
    inline LineageEntityVO& setAttributes(const map<string, string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline LineageEntityVO& setAttributes(map<string, string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // detailUrl Field Functions 
    bool hasDetailUrl() const { return this->detailUrl_ != nullptr;};
    void deleteDetailUrl() { this->detailUrl_ = nullptr;};
    inline string detailUrl() const { DARABONBA_PTR_GET_DEFAULT(detailUrl_, "") };
    inline LineageEntityVO& setDetailUrl(string detailUrl) { DARABONBA_PTR_SET_VALUE(detailUrl_, detailUrl) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline LineageEntityVO& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline LineageEntityVO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline LineageEntityVO& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parentName Field Functions 
    bool hasParentName() const { return this->parentName_ != nullptr;};
    void deleteParentName() { this->parentName_ = nullptr;};
    inline string parentName() const { DARABONBA_PTR_GET_DEFAULT(parentName_, "") };
    inline LineageEntityVO& setParentName(string parentName) { DARABONBA_PTR_SET_VALUE(parentName_, parentName) };


    // qualifiedName Field Functions 
    bool hasQualifiedName() const { return this->qualifiedName_ != nullptr;};
    void deleteQualifiedName() { this->qualifiedName_ = nullptr;};
    inline string qualifiedName() const { DARABONBA_PTR_GET_DEFAULT(qualifiedName_, "") };
    inline LineageEntityVO& setQualifiedName(string qualifiedName) { DARABONBA_PTR_SET_VALUE(qualifiedName_, qualifiedName) };


  protected:
    std::shared_ptr<map<string, string>> attributes_ = nullptr;
    std::shared_ptr<string> detailUrl_ = nullptr;
    std::shared_ptr<string> entityType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> parentName_ = nullptr;
    std::shared_ptr<string> qualifiedName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
