// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDENTITYINTOMETACOLLECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDENTITYINTOMETACOLLECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class AddEntityIntoMetaCollectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddEntityIntoMetaCollectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MetaCollectionId, metaCollectionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, AddEntityIntoMetaCollectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MetaCollectionId, metaCollectionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    AddEntityIntoMetaCollectionRequest() = default ;
    AddEntityIntoMetaCollectionRequest(const AddEntityIntoMetaCollectionRequest &) = default ;
    AddEntityIntoMetaCollectionRequest(AddEntityIntoMetaCollectionRequest &&) = default ;
    AddEntityIntoMetaCollectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddEntityIntoMetaCollectionRequest() = default ;
    AddEntityIntoMetaCollectionRequest& operator=(const AddEntityIntoMetaCollectionRequest &) = default ;
    AddEntityIntoMetaCollectionRequest& operator=(AddEntityIntoMetaCollectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->metaCollectionId_ == nullptr && return this->remark_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline AddEntityIntoMetaCollectionRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // metaCollectionId Field Functions 
    bool hasMetaCollectionId() const { return this->metaCollectionId_ != nullptr;};
    void deleteMetaCollectionId() { this->metaCollectionId_ = nullptr;};
    inline string metaCollectionId() const { DARABONBA_PTR_GET_DEFAULT(metaCollectionId_, "") };
    inline AddEntityIntoMetaCollectionRequest& setMetaCollectionId(string metaCollectionId) { DARABONBA_PTR_SET_VALUE(metaCollectionId_, metaCollectionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AddEntityIntoMetaCollectionRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The entity ID. Currently, only table entities are supported. You can call the ListTables operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // The collection ID. You can refer to the return result of the ListMetaCollections operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> metaCollectionId_ = nullptr;
    // Remarks added when adding the entity to a collection. This parameter is currently valid only for album collections.
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
