// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListDatabasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Databases, databases_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Databases, databases_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDatabasesResponseBody() = default ;
    ListDatabasesResponseBody(const ListDatabasesResponseBody &) = default ;
    ListDatabasesResponseBody(ListDatabasesResponseBody &&) = default ;
    ListDatabasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabasesResponseBody() = default ;
    ListDatabasesResponseBody& operator=(const ListDatabasesResponseBody &) = default ;
    ListDatabasesResponseBody& operator=(ListDatabasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Databases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Databases& obj) { 
        DARABONBA_PTR_TO_JSON(ActiveAddressType, activeAddressType_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
        DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_TO_JSON(DatabasePort, databasePort_);
        DARABONBA_PTR_TO_JSON(DatabasePrivateAddress, databasePrivateAddress_);
        DARABONBA_PTR_TO_JSON(DatabasePublicAddress, databasePublicAddress_);
        DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
        DARABONBA_PTR_TO_JSON(NetworkDomainId, networkDomainId_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
        DARABONBA_PTR_TO_JSON(SourceInstanceRegionId, sourceInstanceRegionId_);
        DARABONBA_PTR_TO_JSON(SourceInstanceState, sourceInstanceState_);
      };
      friend void from_json(const Darabonba::Json& j, Databases& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiveAddressType, activeAddressType_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
        DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_FROM_JSON(DatabasePort, databasePort_);
        DARABONBA_PTR_FROM_JSON(DatabasePrivateAddress, databasePrivateAddress_);
        DARABONBA_PTR_FROM_JSON(DatabasePublicAddress, databasePublicAddress_);
        DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
        DARABONBA_PTR_FROM_JSON(NetworkDomainId, networkDomainId_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
        DARABONBA_PTR_FROM_JSON(SourceInstanceRegionId, sourceInstanceRegionId_);
        DARABONBA_PTR_FROM_JSON(SourceInstanceState, sourceInstanceState_);
      };
      Databases() = default ;
      Databases(const Databases &) = default ;
      Databases(Databases &&) = default ;
      Databases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Databases() = default ;
      Databases& operator=(const Databases &) = default ;
      Databases& operator=(Databases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activeAddressType_ == nullptr
        && this->comment_ == nullptr && this->databaseId_ == nullptr && this->databaseName_ == nullptr && this->databasePort_ == nullptr && this->databasePrivateAddress_ == nullptr
        && this->databasePublicAddress_ == nullptr && this->databaseType_ == nullptr && this->networkDomainId_ == nullptr && this->source_ == nullptr && this->sourceInstanceId_ == nullptr
        && this->sourceInstanceRegionId_ == nullptr && this->sourceInstanceState_ == nullptr; };
      // activeAddressType Field Functions 
      bool hasActiveAddressType() const { return this->activeAddressType_ != nullptr;};
      void deleteActiveAddressType() { this->activeAddressType_ = nullptr;};
      inline string getActiveAddressType() const { DARABONBA_PTR_GET_DEFAULT(activeAddressType_, "") };
      inline Databases& setActiveAddressType(string activeAddressType) { DARABONBA_PTR_SET_VALUE(activeAddressType_, activeAddressType) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Databases& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // databaseId Field Functions 
      bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
      void deleteDatabaseId() { this->databaseId_ = nullptr;};
      inline string getDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
      inline Databases& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


      // databaseName Field Functions 
      bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
      void deleteDatabaseName() { this->databaseName_ = nullptr;};
      inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
      inline Databases& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


      // databasePort Field Functions 
      bool hasDatabasePort() const { return this->databasePort_ != nullptr;};
      void deleteDatabasePort() { this->databasePort_ = nullptr;};
      inline int32_t getDatabasePort() const { DARABONBA_PTR_GET_DEFAULT(databasePort_, 0) };
      inline Databases& setDatabasePort(int32_t databasePort) { DARABONBA_PTR_SET_VALUE(databasePort_, databasePort) };


      // databasePrivateAddress Field Functions 
      bool hasDatabasePrivateAddress() const { return this->databasePrivateAddress_ != nullptr;};
      void deleteDatabasePrivateAddress() { this->databasePrivateAddress_ = nullptr;};
      inline string getDatabasePrivateAddress() const { DARABONBA_PTR_GET_DEFAULT(databasePrivateAddress_, "") };
      inline Databases& setDatabasePrivateAddress(string databasePrivateAddress) { DARABONBA_PTR_SET_VALUE(databasePrivateAddress_, databasePrivateAddress) };


      // databasePublicAddress Field Functions 
      bool hasDatabasePublicAddress() const { return this->databasePublicAddress_ != nullptr;};
      void deleteDatabasePublicAddress() { this->databasePublicAddress_ = nullptr;};
      inline string getDatabasePublicAddress() const { DARABONBA_PTR_GET_DEFAULT(databasePublicAddress_, "") };
      inline Databases& setDatabasePublicAddress(string databasePublicAddress) { DARABONBA_PTR_SET_VALUE(databasePublicAddress_, databasePublicAddress) };


      // databaseType Field Functions 
      bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
      void deleteDatabaseType() { this->databaseType_ = nullptr;};
      inline string getDatabaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
      inline Databases& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


      // networkDomainId Field Functions 
      bool hasNetworkDomainId() const { return this->networkDomainId_ != nullptr;};
      void deleteNetworkDomainId() { this->networkDomainId_ = nullptr;};
      inline string getNetworkDomainId() const { DARABONBA_PTR_GET_DEFAULT(networkDomainId_, "") };
      inline Databases& setNetworkDomainId(string networkDomainId) { DARABONBA_PTR_SET_VALUE(networkDomainId_, networkDomainId) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Databases& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // sourceInstanceId Field Functions 
      bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
      void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
      inline string getSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
      inline Databases& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


      // sourceInstanceRegionId Field Functions 
      bool hasSourceInstanceRegionId() const { return this->sourceInstanceRegionId_ != nullptr;};
      void deleteSourceInstanceRegionId() { this->sourceInstanceRegionId_ = nullptr;};
      inline string getSourceInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceRegionId_, "") };
      inline Databases& setSourceInstanceRegionId(string sourceInstanceRegionId) { DARABONBA_PTR_SET_VALUE(sourceInstanceRegionId_, sourceInstanceRegionId) };


      // sourceInstanceState Field Functions 
      bool hasSourceInstanceState() const { return this->sourceInstanceState_ != nullptr;};
      void deleteSourceInstanceState() { this->sourceInstanceState_ = nullptr;};
      inline string getSourceInstanceState() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceState_, "") };
      inline Databases& setSourceInstanceState(string sourceInstanceState) { DARABONBA_PTR_SET_VALUE(sourceInstanceState_, sourceInstanceState) };


    protected:
      // The address type of the database. Valid values:
      // 
      // * **Public**
      // * **Private**
      shared_ptr<string> activeAddressType_ {};
      // The remarks of the database.
      shared_ptr<string> comment_ {};
      // The database ID.
      shared_ptr<string> databaseId_ {};
      // The name of the database.
      shared_ptr<string> databaseName_ {};
      // The port of the database.
      shared_ptr<int32_t> databasePort_ {};
      // The internal address of the database. The value is a domain name or an IP address.
      shared_ptr<string> databasePrivateAddress_ {};
      // The public address of the database. The value is a domain name or an IP address.
      shared_ptr<string> databasePublicAddress_ {};
      // The database engine. Valid values:
      // *   **MySQL**
      // *   **Oracle**
      // *   **PostgreSQL**
      // *   **SQLServer**
      shared_ptr<string> databaseType_ {};
      // The ID of the network domain where the database resides.
      shared_ptr<string> networkDomainId_ {};
      // The type of the database. Valid values:
      // 
      // * **Local**: on-premises database.
      // * **Rds**: ApsaraDB for RDS instance.
      // * **PolarDB**: PolarDB cluster
      shared_ptr<string> source_ {};
      // The ID of the ApsaraDB for RDS instance or PolarDB cluster.
      // > No value is returned for this parameter if **Source** is set to **Local**.
      shared_ptr<string> sourceInstanceId_ {};
      // The region ID of the ApsaraDB for RDS instance or PolarDB cluster.
      shared_ptr<string> sourceInstanceRegionId_ {};
      // The status of the database. Valid values:
      // 
      // * **Normal**
      // * **Release**
      shared_ptr<string> sourceInstanceState_ {};
    };

    virtual bool empty() const override { return this->databases_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // databases Field Functions 
    bool hasDatabases() const { return this->databases_ != nullptr;};
    void deleteDatabases() { this->databases_ = nullptr;};
    inline const vector<ListDatabasesResponseBody::Databases> & getDatabases() const { DARABONBA_PTR_GET_CONST(databases_, vector<ListDatabasesResponseBody::Databases>) };
    inline vector<ListDatabasesResponseBody::Databases> getDatabases() { DARABONBA_PTR_GET(databases_, vector<ListDatabasesResponseBody::Databases>) };
    inline ListDatabasesResponseBody& setDatabases(const vector<ListDatabasesResponseBody::Databases> & databases) { DARABONBA_PTR_SET_VALUE(databases_, databases) };
    inline ListDatabasesResponseBody& setDatabases(vector<ListDatabasesResponseBody::Databases> && databases) { DARABONBA_PTR_SET_RVALUE(databases_, databases) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatabasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDatabasesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The databases returned.
    shared_ptr<vector<ListDatabasesResponseBody::Databases>> databases_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of databases returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
