// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASESFORUSERGROUPRESPONSEBODYDATABASES_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASESFORUSERGROUPRESPONSEBODYDATABASES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListDatabasesForUserGroupResponseBodyDatabases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabasesForUserGroupResponseBodyDatabases& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveAddressType, activeAddressType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DatabaseAccountCount, databaseAccountCount_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(DatabasePort, databasePort_);
      DARABONBA_PTR_TO_JSON(DatabasePrivateAddress, databasePrivateAddress_);
      DARABONBA_PTR_TO_JSON(DatabasePublicAddress, databasePublicAddress_);
      DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_TO_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabasesForUserGroupResponseBodyDatabases& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveAddressType, activeAddressType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DatabaseAccountCount, databaseAccountCount_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(DatabasePort, databasePort_);
      DARABONBA_PTR_FROM_JSON(DatabasePrivateAddress, databasePrivateAddress_);
      DARABONBA_PTR_FROM_JSON(DatabasePublicAddress, databasePublicAddress_);
      DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
    };
    ListDatabasesForUserGroupResponseBodyDatabases() = default ;
    ListDatabasesForUserGroupResponseBodyDatabases(const ListDatabasesForUserGroupResponseBodyDatabases &) = default ;
    ListDatabasesForUserGroupResponseBodyDatabases(ListDatabasesForUserGroupResponseBodyDatabases &&) = default ;
    ListDatabasesForUserGroupResponseBodyDatabases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabasesForUserGroupResponseBodyDatabases() = default ;
    ListDatabasesForUserGroupResponseBodyDatabases& operator=(const ListDatabasesForUserGroupResponseBodyDatabases &) = default ;
    ListDatabasesForUserGroupResponseBodyDatabases& operator=(ListDatabasesForUserGroupResponseBodyDatabases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeAddressType_ == nullptr
        && return this->comment_ == nullptr && return this->databaseAccountCount_ == nullptr && return this->databaseId_ == nullptr && return this->databaseName_ == nullptr && return this->databasePort_ == nullptr
        && return this->databasePrivateAddress_ == nullptr && return this->databasePublicAddress_ == nullptr && return this->databaseType_ == nullptr && return this->networkDomainId_ == nullptr && return this->source_ == nullptr
        && return this->sourceInstanceId_ == nullptr; };
    // activeAddressType Field Functions 
    bool hasActiveAddressType() const { return this->activeAddressType_ != nullptr;};
    void deleteActiveAddressType() { this->activeAddressType_ = nullptr;};
    inline string activeAddressType() const { DARABONBA_PTR_GET_DEFAULT(activeAddressType_, "") };
    inline ListDatabasesForUserGroupResponseBodyDatabases& setActiveAddressType(string activeAddressType) { DARABONBA_PTR_SET_VALUE(activeAddressType_, activeAddressType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListDatabasesForUserGroupResponseBodyDatabases& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // databaseAccountCount Field Functions 
    bool hasDatabaseAccountCount() const { return this->databaseAccountCount_ != nullptr;};
    void deleteDatabaseAccountCount() { this->databaseAccountCount_ = nullptr;};
    inline int64_t databaseAccountCount() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountCount_, 0L) };
    inline ListDatabasesForUserGroupResponseBodyDatabases& setDatabaseAccountCount(int64_t databaseAccountCount) { DARABONBA_PTR_SET_VALUE(databaseAccountCount_, databaseAccountCount) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline ListDatabasesForUserGroupResponseBodyDatabases& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ListDatabasesForUserGroupResponseBodyDatabases& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // databasePort Field Functions 
    bool hasDatabasePort() const { return this->databasePort_ != nullptr;};
    void deleteDatabasePort() { this->databasePort_ = nullptr;};
    inline int64_t databasePort() const { DARABONBA_PTR_GET_DEFAULT(databasePort_, 0L) };
    inline ListDatabasesForUserGroupResponseBodyDatabases& setDatabasePort(int64_t databasePort) { DARABONBA_PTR_SET_VALUE(databasePort_, databasePort) };


    // databasePrivateAddress Field Functions 
    bool hasDatabasePrivateAddress() const { return this->databasePrivateAddress_ != nullptr;};
    void deleteDatabasePrivateAddress() { this->databasePrivateAddress_ = nullptr;};
    inline string databasePrivateAddress() const { DARABONBA_PTR_GET_DEFAULT(databasePrivateAddress_, "") };
    inline ListDatabasesForUserGroupResponseBodyDatabases& setDatabasePrivateAddress(string databasePrivateAddress) { DARABONBA_PTR_SET_VALUE(databasePrivateAddress_, databasePrivateAddress) };


    // databasePublicAddress Field Functions 
    bool hasDatabasePublicAddress() const { return this->databasePublicAddress_ != nullptr;};
    void deleteDatabasePublicAddress() { this->databasePublicAddress_ = nullptr;};
    inline string databasePublicAddress() const { DARABONBA_PTR_GET_DEFAULT(databasePublicAddress_, "") };
    inline ListDatabasesForUserGroupResponseBodyDatabases& setDatabasePublicAddress(string databasePublicAddress) { DARABONBA_PTR_SET_VALUE(databasePublicAddress_, databasePublicAddress) };


    // databaseType Field Functions 
    bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
    void deleteDatabaseType() { this->databaseType_ = nullptr;};
    inline string databaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
    inline ListDatabasesForUserGroupResponseBodyDatabases& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


    // networkDomainId Field Functions 
    bool hasNetworkDomainId() const { return this->networkDomainId_ != nullptr;};
    void deleteNetworkDomainId() { this->networkDomainId_ = nullptr;};
    inline string networkDomainId() const { DARABONBA_PTR_GET_DEFAULT(networkDomainId_, "") };
    inline ListDatabasesForUserGroupResponseBodyDatabases& setNetworkDomainId(string networkDomainId) { DARABONBA_PTR_SET_VALUE(networkDomainId_, networkDomainId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListDatabasesForUserGroupResponseBodyDatabases& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceInstanceId Field Functions 
    bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
    void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
    inline string sourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
    inline ListDatabasesForUserGroupResponseBodyDatabases& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


  protected:
    // The address type of the database. Valid values:
    // 
    // *   **Public**
    // *   **Private**
    std::shared_ptr<string> activeAddressType_ = nullptr;
    // The remarks of the database.
    std::shared_ptr<string> comment_ = nullptr;
    // The total number of database accounts returned.
    std::shared_ptr<int64_t> databaseAccountCount_ = nullptr;
    // The ID of the database to which the database account belongs.
    std::shared_ptr<string> databaseId_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The port of the database.
    std::shared_ptr<int64_t> databasePort_ = nullptr;
    // The internal address of the database. The value is a domain name or an IP address.
    std::shared_ptr<string> databasePrivateAddress_ = nullptr;
    // The public address of the database. The value is a domain name or an IP address.
    std::shared_ptr<string> databasePublicAddress_ = nullptr;
    // The database engine. Valid values:
    // 
    // *   **MySQL**
    // *   **Oracle**
    // *   **PostgreSQL**
    // *   **SQLServer**
    std::shared_ptr<string> databaseType_ = nullptr;
    // The ID of the network domain where the database resides.
    std::shared_ptr<string> networkDomainId_ = nullptr;
    // The type of the database. Valid values:
    // 
    // *   **Local**: on-premises database.
    // *   **Rds**: ApsaraDB RDS instance.
    // *   **PolarDB**: PolarDB cluster.
    std::shared_ptr<string> source_ = nullptr;
    // The ID of the ApsaraDB RDS instance or PolarDB cluster.
    // 
    // > No value is returned for this parameter if **Source** is set to **Local**.
    std::shared_ptr<string> sourceInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
