// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMETACOLLECTIONENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMETACOLLECTIONENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class AddMetaCollectionEntityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMetaCollectionEntityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CollectionQualifiedName, collectionQualifiedName_);
      DARABONBA_PTR_TO_JSON(EntityQualifiedName, entityQualifiedName_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, AddMetaCollectionEntityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CollectionQualifiedName, collectionQualifiedName_);
      DARABONBA_PTR_FROM_JSON(EntityQualifiedName, entityQualifiedName_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    AddMetaCollectionEntityRequest() = default ;
    AddMetaCollectionEntityRequest(const AddMetaCollectionEntityRequest &) = default ;
    AddMetaCollectionEntityRequest(AddMetaCollectionEntityRequest &&) = default ;
    AddMetaCollectionEntityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMetaCollectionEntityRequest() = default ;
    AddMetaCollectionEntityRequest& operator=(const AddMetaCollectionEntityRequest &) = default ;
    AddMetaCollectionEntityRequest& operator=(AddMetaCollectionEntityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->collectionQualifiedName_ != nullptr
        && this->entityQualifiedName_ != nullptr && this->remark_ != nullptr; };
    // collectionQualifiedName Field Functions 
    bool hasCollectionQualifiedName() const { return this->collectionQualifiedName_ != nullptr;};
    void deleteCollectionQualifiedName() { this->collectionQualifiedName_ = nullptr;};
    inline string collectionQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(collectionQualifiedName_, "") };
    inline AddMetaCollectionEntityRequest& setCollectionQualifiedName(string collectionQualifiedName) { DARABONBA_PTR_SET_VALUE(collectionQualifiedName_, collectionQualifiedName) };


    // entityQualifiedName Field Functions 
    bool hasEntityQualifiedName() const { return this->entityQualifiedName_ != nullptr;};
    void deleteEntityQualifiedName() { this->entityQualifiedName_ = nullptr;};
    inline string entityQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(entityQualifiedName_, "") };
    inline AddMetaCollectionEntityRequest& setEntityQualifiedName(string entityQualifiedName) { DARABONBA_PTR_SET_VALUE(entityQualifiedName_, entityQualifiedName) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AddMetaCollectionEntityRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The unique identifier of the collection.
    // 
    // This parameter is required.
    std::shared_ptr<string> collectionQualifiedName_ = nullptr;
    // The unique identifier of the entity. Example: maxcompute-table.projectA.tableA.
    // 
    // This parameter is required.
    std::shared_ptr<string> entityQualifiedName_ = nullptr;
    // The remarks of the entity. Example: latest product table.
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
