// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMETACOLLECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMETACOLLECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateMetaCollectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMetaCollectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CollectionType, collectionType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentQualifiedName, parentQualifiedName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMetaCollectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CollectionType, collectionType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentQualifiedName, parentQualifiedName_);
    };
    CreateMetaCollectionRequest() = default ;
    CreateMetaCollectionRequest(const CreateMetaCollectionRequest &) = default ;
    CreateMetaCollectionRequest(CreateMetaCollectionRequest &&) = default ;
    CreateMetaCollectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMetaCollectionRequest() = default ;
    CreateMetaCollectionRequest& operator=(const CreateMetaCollectionRequest &) = default ;
    CreateMetaCollectionRequest& operator=(CreateMetaCollectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->collectionType_ != nullptr
        && this->comment_ != nullptr && this->name_ != nullptr && this->parentQualifiedName_ != nullptr; };
    // collectionType Field Functions 
    bool hasCollectionType() const { return this->collectionType_ != nullptr;};
    void deleteCollectionType() { this->collectionType_ = nullptr;};
    inline string collectionType() const { DARABONBA_PTR_GET_DEFAULT(collectionType_, "") };
    inline CreateMetaCollectionRequest& setCollectionType(string collectionType) { DARABONBA_PTR_SET_VALUE(collectionType_, collectionType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateMetaCollectionRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMetaCollectionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentQualifiedName Field Functions 
    bool hasParentQualifiedName() const { return this->parentQualifiedName_ != nullptr;};
    void deleteParentQualifiedName() { this->parentQualifiedName_ = nullptr;};
    inline string parentQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(parentQualifiedName_, "") };
    inline CreateMetaCollectionRequest& setParentQualifiedName(string parentQualifiedName) { DARABONBA_PTR_SET_VALUE(parentQualifiedName_, parentQualifiedName) };


  protected:
    // The type of the collection.
    // 
    // This parameter is required.
    std::shared_ptr<string> collectionType_ = nullptr;
    // The comment of the collection. The comment must be 1 to 64 characters in length.
    std::shared_ptr<string> comment_ = nullptr;
    // The name of the collection. The name must be 1 to 32 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The unique identifier of the parent collection.
    std::shared_ptr<string> parentQualifiedName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
