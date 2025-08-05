// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHANADATABASESRESPONSEBODYHANADATABASESHANADATABASE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHANADATABASESRESPONSEBODYHANADATABASESHANADATABASE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveStatus, activeStatus_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(SqlPort, sqlPort_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveStatus, activeStatus_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(SqlPort, sqlPort_);
    };
    DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase() = default ;
    DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase(const DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase &) = default ;
    DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase(DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase &&) = default ;
    DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase() = default ;
    DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase& operator=(const DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase &) = default ;
    DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase& operator=(DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activeStatus_ != nullptr
        && this->databaseName_ != nullptr && this->detail_ != nullptr && this->host_ != nullptr && this->serviceName_ != nullptr && this->sqlPort_ != nullptr; };
    // activeStatus Field Functions 
    bool hasActiveStatus() const { return this->activeStatus_ != nullptr;};
    void deleteActiveStatus() { this->activeStatus_ = nullptr;};
    inline string activeStatus() const { DARABONBA_PTR_GET_DEFAULT(activeStatus_, "") };
    inline DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase& setActiveStatus(string activeStatus) { DARABONBA_PTR_SET_VALUE(activeStatus_, activeStatus) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // sqlPort Field Functions 
    bool hasSqlPort() const { return this->sqlPort_ != nullptr;};
    void deleteSqlPort() { this->sqlPort_ = nullptr;};
    inline int32_t sqlPort() const { DARABONBA_PTR_GET_DEFAULT(sqlPort_, 0) };
    inline DescribeHanaDatabasesResponseBodyHanaDatabasesHanaDatabase& setSqlPort(int32_t sqlPort) { DARABONBA_PTR_SET_VALUE(sqlPort_, sqlPort) };


  protected:
    // Indicates whether the database is started. Valid values:
    // 
    // *   **YES**: The database is started.
    // *   **NO**: The database is not started.
    std::shared_ptr<string> activeStatus_ = nullptr;
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The detailed information.
    std::shared_ptr<string> detail_ = nullptr;
    // The hostname.
    std::shared_ptr<string> host_ = nullptr;
    // The service name.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The port number.
    std::shared_ptr<int32_t> sqlPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
