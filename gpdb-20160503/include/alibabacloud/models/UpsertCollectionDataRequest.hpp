// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPSERTCOLLECTIONDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPSERTCOLLECTIONDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class UpsertCollectionDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpsertCollectionDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Rows, rows_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpsertCollectionDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Rows, rows_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpsertCollectionDataRequest() = default ;
    UpsertCollectionDataRequest(const UpsertCollectionDataRequest &) = default ;
    UpsertCollectionDataRequest(UpsertCollectionDataRequest &&) = default ;
    UpsertCollectionDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpsertCollectionDataRequest() = default ;
    UpsertCollectionDataRequest& operator=(const UpsertCollectionDataRequest &) = default ;
    UpsertCollectionDataRequest& operator=(UpsertCollectionDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rows : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rows& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Metadata, metadata_);
        DARABONBA_PTR_TO_JSON(SparseVector, sparseVector_);
        DARABONBA_PTR_TO_JSON(Vector, vector_);
      };
      friend void from_json(const Darabonba::Json& j, Rows& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
        DARABONBA_PTR_FROM_JSON(SparseVector, sparseVector_);
        DARABONBA_PTR_FROM_JSON(Vector, vector_);
      };
      Rows() = default ;
      Rows(const Rows &) = default ;
      Rows(Rows &&) = default ;
      Rows(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rows() = default ;
      Rows& operator=(const Rows &) = default ;
      Rows& operator=(Rows &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SparseVector : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SparseVector& obj) { 
          DARABONBA_PTR_TO_JSON(Indices, indices_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, SparseVector& obj) { 
          DARABONBA_PTR_FROM_JSON(Indices, indices_);
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        SparseVector() = default ;
        SparseVector(const SparseVector &) = default ;
        SparseVector(SparseVector &&) = default ;
        SparseVector(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SparseVector() = default ;
        SparseVector& operator=(const SparseVector &) = default ;
        SparseVector& operator=(SparseVector &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->indices_ == nullptr
        && this->values_ == nullptr; };
        // indices Field Functions 
        bool hasIndices() const { return this->indices_ != nullptr;};
        void deleteIndices() { this->indices_ = nullptr;};
        inline const vector<int64_t> & getIndices() const { DARABONBA_PTR_GET_CONST(indices_, vector<int64_t>) };
        inline vector<int64_t> getIndices() { DARABONBA_PTR_GET(indices_, vector<int64_t>) };
        inline SparseVector& setIndices(const vector<int64_t> & indices) { DARABONBA_PTR_SET_VALUE(indices_, indices) };
        inline SparseVector& setIndices(vector<int64_t> && indices) { DARABONBA_PTR_SET_RVALUE(indices_, indices) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<double> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<double>) };
        inline vector<double> getValues() { DARABONBA_PTR_GET(values_, vector<double>) };
        inline SparseVector& setValues(const vector<double> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline SparseVector& setValues(vector<double> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        shared_ptr<vector<int64_t>> indices_ {};
        shared_ptr<vector<double>> values_ {};
      };

      virtual bool empty() const override { return this->id_ == nullptr
        && this->metadata_ == nullptr && this->sparseVector_ == nullptr && this->vector_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Rows& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // metadata Field Functions 
      bool hasMetadata() const { return this->metadata_ != nullptr;};
      void deleteMetadata() { this->metadata_ = nullptr;};
      inline const map<string, string> & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
      inline map<string, string> getMetadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
      inline Rows& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
      inline Rows& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


      // sparseVector Field Functions 
      bool hasSparseVector() const { return this->sparseVector_ != nullptr;};
      void deleteSparseVector() { this->sparseVector_ = nullptr;};
      inline const Rows::SparseVector & getSparseVector() const { DARABONBA_PTR_GET_CONST(sparseVector_, Rows::SparseVector) };
      inline Rows::SparseVector getSparseVector() { DARABONBA_PTR_GET(sparseVector_, Rows::SparseVector) };
      inline Rows& setSparseVector(const Rows::SparseVector & sparseVector) { DARABONBA_PTR_SET_VALUE(sparseVector_, sparseVector) };
      inline Rows& setSparseVector(Rows::SparseVector && sparseVector) { DARABONBA_PTR_SET_RVALUE(sparseVector_, sparseVector) };


      // vector Field Functions 
      bool hasVector() const { return this->vector_ != nullptr;};
      void deleteVector() { this->vector_ = nullptr;};
      inline const vector<double> & getVector() const { DARABONBA_PTR_GET_CONST(vector_, vector<double>) };
      inline vector<double> getVector() { DARABONBA_PTR_GET(vector_, vector<double>) };
      inline Rows& setVector(const vector<double> & _vector) { DARABONBA_PTR_SET_VALUE(vector_, _vector) };
      inline Rows& setVector(vector<double> && _vector) { DARABONBA_PTR_SET_RVALUE(vector_, _vector) };


    protected:
      shared_ptr<string> id_ {};
      shared_ptr<map<string, string>> metadata_ {};
      shared_ptr<Rows::SparseVector> sparseVector_ {};
      // This parameter is required.
      shared_ptr<vector<double>> vector_ {};
    };

    virtual bool empty() const override { return this->collection_ == nullptr
        && this->DBInstanceId_ == nullptr && this->namespace_ == nullptr && this->namespacePassword_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->rows_ == nullptr && this->workspaceId_ == nullptr; };
    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline UpsertCollectionDataRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UpsertCollectionDataRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpsertCollectionDataRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespacePassword Field Functions 
    bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
    void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
    inline string getNamespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
    inline UpsertCollectionDataRequest& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpsertCollectionDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpsertCollectionDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline const vector<UpsertCollectionDataRequest::Rows> & getRows() const { DARABONBA_PTR_GET_CONST(rows_, vector<UpsertCollectionDataRequest::Rows>) };
    inline vector<UpsertCollectionDataRequest::Rows> getRows() { DARABONBA_PTR_GET(rows_, vector<UpsertCollectionDataRequest::Rows>) };
    inline UpsertCollectionDataRequest& setRows(const vector<UpsertCollectionDataRequest::Rows> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
    inline UpsertCollectionDataRequest& setRows(vector<UpsertCollectionDataRequest::Rows> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpsertCollectionDataRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The name of the collection.
    // 
    // This parameter is required.
    shared_ptr<string> collection_ {};
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the namespace. Default value: public.
    // 
    // >  You can call the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation to create a namespace and call the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) operation to query a list of namespaces.
    shared_ptr<string> namespace_ {};
    // The password of the namespace.
    // 
    // This parameter is required.
    shared_ptr<string> namespacePassword_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the instance.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/86912.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<vector<UpsertCollectionDataRequest::Rows>> rows_ {};
    // The ID of the workspace that consists of multiple AnalyticDB for PostgreSQL instances. You must specify one of the WorkspaceId and DBInstanceId parameters. If you specify both parameters, the WorkspaceId parameter takes effect.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
