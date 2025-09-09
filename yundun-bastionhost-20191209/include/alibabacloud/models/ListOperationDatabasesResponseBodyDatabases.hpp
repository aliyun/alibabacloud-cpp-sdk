// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONDATABASESRESPONSEBODYDATABASES_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONDATABASESRESPONSEBODYDATABASES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListOperationDatabasesResponseBodyDatabases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationDatabasesResponseBodyDatabases& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveAddressType, activeAddressType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(DatabasePort, databasePort_);
      DARABONBA_PTR_TO_JSON(DatabasePrivateAddress, databasePrivateAddress_);
      DARABONBA_PTR_TO_JSON(DatabasePublicAddress, databasePublicAddress_);
      DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
      DARABONBA_PTR_TO_JSON(SourceInstanceRegionId, sourceInstanceRegionId_);
      DARABONBA_PTR_TO_JSON(SourceInstanceState, sourceInstanceState_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationDatabasesResponseBodyDatabases& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveAddressType, activeAddressType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(DatabasePort, databasePort_);
      DARABONBA_PTR_FROM_JSON(DatabasePrivateAddress, databasePrivateAddress_);
      DARABONBA_PTR_FROM_JSON(DatabasePublicAddress, databasePublicAddress_);
      DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceRegionId, sourceInstanceRegionId_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceState, sourceInstanceState_);
    };
    ListOperationDatabasesResponseBodyDatabases() = default ;
    ListOperationDatabasesResponseBodyDatabases(const ListOperationDatabasesResponseBodyDatabases &) = default ;
    ListOperationDatabasesResponseBodyDatabases(ListOperationDatabasesResponseBodyDatabases &&) = default ;
    ListOperationDatabasesResponseBodyDatabases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationDatabasesResponseBodyDatabases() = default ;
    ListOperationDatabasesResponseBodyDatabases& operator=(const ListOperationDatabasesResponseBodyDatabases &) = default ;
    ListOperationDatabasesResponseBodyDatabases& operator=(ListOperationDatabasesResponseBodyDatabases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activeAddressType_ != nullptr
        && this->comment_ != nullptr && this->databaseId_ != nullptr && this->databaseName_ != nullptr && this->databasePort_ != nullptr && this->databasePrivateAddress_ != nullptr
        && this->databasePublicAddress_ != nullptr && this->databaseType_ != nullptr && this->source_ != nullptr && this->sourceInstanceId_ != nullptr && this->sourceInstanceRegionId_ != nullptr
        && this->sourceInstanceState_ != nullptr; };
    // activeAddressType Field Functions 
    bool hasActiveAddressType() const { return this->activeAddressType_ != nullptr;};
    void deleteActiveAddressType() { this->activeAddressType_ = nullptr;};
    inline string activeAddressType() const { DARABONBA_PTR_GET_DEFAULT(activeAddressType_, "") };
    inline ListOperationDatabasesResponseBodyDatabases& setActiveAddressType(string activeAddressType) { DARABONBA_PTR_SET_VALUE(activeAddressType_, activeAddressType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListOperationDatabasesResponseBodyDatabases& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline ListOperationDatabasesResponseBodyDatabases& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ListOperationDatabasesResponseBodyDatabases& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // databasePort Field Functions 
    bool hasDatabasePort() const { return this->databasePort_ != nullptr;};
    void deleteDatabasePort() { this->databasePort_ = nullptr;};
    inline int64_t databasePort() const { DARABONBA_PTR_GET_DEFAULT(databasePort_, 0L) };
    inline ListOperationDatabasesResponseBodyDatabases& setDatabasePort(int64_t databasePort) { DARABONBA_PTR_SET_VALUE(databasePort_, databasePort) };


    // databasePrivateAddress Field Functions 
    bool hasDatabasePrivateAddress() const { return this->databasePrivateAddress_ != nullptr;};
    void deleteDatabasePrivateAddress() { this->databasePrivateAddress_ = nullptr;};
    inline string databasePrivateAddress() const { DARABONBA_PTR_GET_DEFAULT(databasePrivateAddress_, "") };
    inline ListOperationDatabasesResponseBodyDatabases& setDatabasePrivateAddress(string databasePrivateAddress) { DARABONBA_PTR_SET_VALUE(databasePrivateAddress_, databasePrivateAddress) };


    // databasePublicAddress Field Functions 
    bool hasDatabasePublicAddress() const { return this->databasePublicAddress_ != nullptr;};
    void deleteDatabasePublicAddress() { this->databasePublicAddress_ = nullptr;};
    inline string databasePublicAddress() const { DARABONBA_PTR_GET_DEFAULT(databasePublicAddress_, "") };
    inline ListOperationDatabasesResponseBodyDatabases& setDatabasePublicAddress(string databasePublicAddress) { DARABONBA_PTR_SET_VALUE(databasePublicAddress_, databasePublicAddress) };


    // databaseType Field Functions 
    bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
    void deleteDatabaseType() { this->databaseType_ = nullptr;};
    inline string databaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
    inline ListOperationDatabasesResponseBodyDatabases& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListOperationDatabasesResponseBodyDatabases& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceInstanceId Field Functions 
    bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
    void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
    inline string sourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
    inline ListOperationDatabasesResponseBodyDatabases& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


    // sourceInstanceRegionId Field Functions 
    bool hasSourceInstanceRegionId() const { return this->sourceInstanceRegionId_ != nullptr;};
    void deleteSourceInstanceRegionId() { this->sourceInstanceRegionId_ = nullptr;};
    inline string sourceInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceRegionId_, "") };
    inline ListOperationDatabasesResponseBodyDatabases& setSourceInstanceRegionId(string sourceInstanceRegionId) { DARABONBA_PTR_SET_VALUE(sourceInstanceRegionId_, sourceInstanceRegionId) };


    // sourceInstanceState Field Functions 
    bool hasSourceInstanceState() const { return this->sourceInstanceState_ != nullptr;};
    void deleteSourceInstanceState() { this->sourceInstanceState_ = nullptr;};
    inline string sourceInstanceState() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceState_, "") };
    inline ListOperationDatabasesResponseBodyDatabases& setSourceInstanceState(string sourceInstanceState) { DARABONBA_PTR_SET_VALUE(sourceInstanceState_, sourceInstanceState) };


  protected:
    // The address type of the database. Valid values:
    // 
    // *   **Public**
    // *   **Private**
    std::shared_ptr<string> activeAddressType_ = nullptr;
    // The remarks of the database.
    std::shared_ptr<string> comment_ = nullptr;
    // The database ID.
    std::shared_ptr<string> databaseId_ = nullptr;
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The port of the database.
    std::shared_ptr<int64_t> databasePort_ = nullptr;
    // The private address of the database.
    std::shared_ptr<string> databasePrivateAddress_ = nullptr;
    // The public address of the database.
    std::shared_ptr<string> databasePublicAddress_ = nullptr;
    // The database engine. Valid values:
    // 
    // *   **MySQL**
    // *   **PostgreSQL**
    // *   **Oracle**
    // *   **SQLServer**
    std::shared_ptr<string> databaseType_ = nullptr;
    // The database type. Valid values:
    // 
    // *   **Local**: on-premises database.
    // *   **Rds**: ApsaraDB RDS instance.
    // *   **PolarDB**: PolarDB cluster.
    std::shared_ptr<string> source_ = nullptr;
    // The ID of the ApsaraDB RDS instance.
    std::shared_ptr<string> sourceInstanceId_ = nullptr;
    // The region ID of the ApsaraDB RDS instance.
    std::shared_ptr<string> sourceInstanceRegionId_ = nullptr;
    // The database status. Valid values:
    // 
    // *   **Normal**
    // *   **Release**
    std::shared_ptr<string> sourceInstanceState_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
