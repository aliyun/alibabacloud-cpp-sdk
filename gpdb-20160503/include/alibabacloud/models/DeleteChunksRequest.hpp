// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECHUNKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECHUNKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DeleteChunksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteChunksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChunkIds, chunkIds_);
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteChunksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChunkIds, chunkIds_);
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteChunksRequest() = default ;
    DeleteChunksRequest(const DeleteChunksRequest &) = default ;
    DeleteChunksRequest(DeleteChunksRequest &&) = default ;
    DeleteChunksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteChunksRequest() = default ;
    DeleteChunksRequest& operator=(const DeleteChunksRequest &) = default ;
    DeleteChunksRequest& operator=(DeleteChunksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chunkIds_ == nullptr
        && this->collection_ == nullptr && this->DBInstanceId_ == nullptr && this->namespace_ == nullptr && this->namespacePassword_ == nullptr && this->regionId_ == nullptr; };
    // chunkIds Field Functions 
    bool hasChunkIds() const { return this->chunkIds_ != nullptr;};
    void deleteChunkIds() { this->chunkIds_ = nullptr;};
    inline const vector<string> & getChunkIds() const { DARABONBA_PTR_GET_CONST(chunkIds_, vector<string>) };
    inline vector<string> getChunkIds() { DARABONBA_PTR_GET(chunkIds_, vector<string>) };
    inline DeleteChunksRequest& setChunkIds(const vector<string> & chunkIds) { DARABONBA_PTR_SET_VALUE(chunkIds_, chunkIds) };
    inline DeleteChunksRequest& setChunkIds(vector<string> && chunkIds) { DARABONBA_PTR_SET_RVALUE(chunkIds_, chunkIds) };


    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline DeleteChunksRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DeleteChunksRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DeleteChunksRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespacePassword Field Functions 
    bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
    void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
    inline string getNamespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
    inline DeleteChunksRequest& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteChunksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> chunkIds_ {};
    // This parameter is required.
    shared_ptr<string> collection_ {};
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<string> namespace_ {};
    // This parameter is required.
    shared_ptr<string> namespacePassword_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
