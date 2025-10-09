// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEENTITYFROMMETACOLLECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEENTITYFROMMETACOLLECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class RemoveEntityFromMetaCollectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveEntityFromMetaCollectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MetaCollectionId, metaCollectionId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveEntityFromMetaCollectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MetaCollectionId, metaCollectionId_);
    };
    RemoveEntityFromMetaCollectionRequest() = default ;
    RemoveEntityFromMetaCollectionRequest(const RemoveEntityFromMetaCollectionRequest &) = default ;
    RemoveEntityFromMetaCollectionRequest(RemoveEntityFromMetaCollectionRequest &&) = default ;
    RemoveEntityFromMetaCollectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveEntityFromMetaCollectionRequest() = default ;
    RemoveEntityFromMetaCollectionRequest& operator=(const RemoveEntityFromMetaCollectionRequest &) = default ;
    RemoveEntityFromMetaCollectionRequest& operator=(RemoveEntityFromMetaCollectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->metaCollectionId_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline RemoveEntityFromMetaCollectionRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // metaCollectionId Field Functions 
    bool hasMetaCollectionId() const { return this->metaCollectionId_ != nullptr;};
    void deleteMetaCollectionId() { this->metaCollectionId_ = nullptr;};
    inline string metaCollectionId() const { DARABONBA_PTR_GET_DEFAULT(metaCollectionId_, "") };
    inline RemoveEntityFromMetaCollectionRequest& setMetaCollectionId(string metaCollectionId) { DARABONBA_PTR_SET_VALUE(metaCollectionId_, metaCollectionId) };


  protected:
    // The entity ID. Currently, entities can only be tables. You can call the ListTables operation to query the ID.
    std::shared_ptr<string> id_ = nullptr;
    // The collection ID. You can call the ListMetaCollections operation to query the ID.
    std::shared_ptr<string> metaCollectionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
