// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMETACOLLECTIONENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMETACOLLECTIONENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DeleteMetaCollectionEntityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMetaCollectionEntityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CollectionQualifiedName, collectionQualifiedName_);
      DARABONBA_PTR_TO_JSON(EntityQualifiedName, entityQualifiedName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMetaCollectionEntityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CollectionQualifiedName, collectionQualifiedName_);
      DARABONBA_PTR_FROM_JSON(EntityQualifiedName, entityQualifiedName_);
    };
    DeleteMetaCollectionEntityRequest() = default ;
    DeleteMetaCollectionEntityRequest(const DeleteMetaCollectionEntityRequest &) = default ;
    DeleteMetaCollectionEntityRequest(DeleteMetaCollectionEntityRequest &&) = default ;
    DeleteMetaCollectionEntityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMetaCollectionEntityRequest() = default ;
    DeleteMetaCollectionEntityRequest& operator=(const DeleteMetaCollectionEntityRequest &) = default ;
    DeleteMetaCollectionEntityRequest& operator=(DeleteMetaCollectionEntityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->collectionQualifiedName_ != nullptr
        && this->entityQualifiedName_ != nullptr; };
    // collectionQualifiedName Field Functions 
    bool hasCollectionQualifiedName() const { return this->collectionQualifiedName_ != nullptr;};
    void deleteCollectionQualifiedName() { this->collectionQualifiedName_ = nullptr;};
    inline string collectionQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(collectionQualifiedName_, "") };
    inline DeleteMetaCollectionEntityRequest& setCollectionQualifiedName(string collectionQualifiedName) { DARABONBA_PTR_SET_VALUE(collectionQualifiedName_, collectionQualifiedName) };


    // entityQualifiedName Field Functions 
    bool hasEntityQualifiedName() const { return this->entityQualifiedName_ != nullptr;};
    void deleteEntityQualifiedName() { this->entityQualifiedName_ = nullptr;};
    inline string entityQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(entityQualifiedName_, "") };
    inline DeleteMetaCollectionEntityRequest& setEntityQualifiedName(string entityQualifiedName) { DARABONBA_PTR_SET_VALUE(entityQualifiedName_, entityQualifiedName) };


  protected:
    // The unique identifier of the collection.
    // 
    // This parameter is required.
    std::shared_ptr<string> collectionQualifiedName_ = nullptr;
    // The unique identifier of the entity.
    // 
    // This parameter is required.
    std::shared_ptr<string> entityQualifiedName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
