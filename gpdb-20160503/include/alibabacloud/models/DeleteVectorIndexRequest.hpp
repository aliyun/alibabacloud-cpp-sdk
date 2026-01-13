// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVECTORINDEXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVECTORINDEXREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DeleteVectorIndexRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVectorIndexRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ManagerAccount, managerAccount_);
      DARABONBA_PTR_TO_JSON(ManagerAccountPassword, managerAccountPassword_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVectorIndexRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ManagerAccount, managerAccount_);
      DARABONBA_PTR_FROM_JSON(ManagerAccountPassword, managerAccountPassword_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DeleteVectorIndexRequest() = default ;
    DeleteVectorIndexRequest(const DeleteVectorIndexRequest &) = default ;
    DeleteVectorIndexRequest(DeleteVectorIndexRequest &&) = default ;
    DeleteVectorIndexRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVectorIndexRequest() = default ;
    DeleteVectorIndexRequest& operator=(const DeleteVectorIndexRequest &) = default ;
    DeleteVectorIndexRequest& operator=(DeleteVectorIndexRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collection_ == nullptr
        && this->DBInstanceId_ == nullptr && this->managerAccount_ == nullptr && this->managerAccountPassword_ == nullptr && this->namespace_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->type_ == nullptr; };
    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline DeleteVectorIndexRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DeleteVectorIndexRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // managerAccount Field Functions 
    bool hasManagerAccount() const { return this->managerAccount_ != nullptr;};
    void deleteManagerAccount() { this->managerAccount_ = nullptr;};
    inline string getManagerAccount() const { DARABONBA_PTR_GET_DEFAULT(managerAccount_, "") };
    inline DeleteVectorIndexRequest& setManagerAccount(string managerAccount) { DARABONBA_PTR_SET_VALUE(managerAccount_, managerAccount) };


    // managerAccountPassword Field Functions 
    bool hasManagerAccountPassword() const { return this->managerAccountPassword_ != nullptr;};
    void deleteManagerAccountPassword() { this->managerAccountPassword_ = nullptr;};
    inline string getManagerAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(managerAccountPassword_, "") };
    inline DeleteVectorIndexRequest& setManagerAccountPassword(string managerAccountPassword) { DARABONBA_PTR_SET_VALUE(managerAccountPassword_, managerAccountPassword) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DeleteVectorIndexRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteVectorIndexRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteVectorIndexRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DeleteVectorIndexRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the collection.
    // 
    // >  You can call the [ListCollections](https://help.aliyun.com/document_detail/2401503.html) operation to query a list of collections.
    // 
    // This parameter is required.
    shared_ptr<string> collection_ {};
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the manager account that has the rds_superuser permission.
    // 
    // >  You can create an account on the **Account Management** page of the AnalyticDB for PostgreSQL console or by calling the [CreateAccount](https://help.aliyun.com/document_detail/2361789.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> managerAccount_ {};
    // The password of the manager account.
    // 
    // This parameter is required.
    shared_ptr<string> managerAccountPassword_ {};
    // The name of the namespace. Default value: public.
    // 
    // >  You can call the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) operation to query a list of namespaces.
    shared_ptr<string> namespace_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The vector type. Valid values:
    // 
    // *   Dense (default)
    // *   Sparse
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
