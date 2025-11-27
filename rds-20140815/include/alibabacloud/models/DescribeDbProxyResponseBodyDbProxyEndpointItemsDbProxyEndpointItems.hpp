// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYRESPONSEBODYDBPROXYENDPOINTITEMSDBPROXYENDPOINTITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYRESPONSEBODYDBPROXYENDPOINTITEMSDBPROXYENDPOINTITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems& obj) { 
      DARABONBA_PTR_TO_JSON(DbProxyEndpointAliases, dbProxyEndpointAliases_);
      DARABONBA_PTR_TO_JSON(DbProxyEndpointName, dbProxyEndpointName_);
      DARABONBA_PTR_TO_JSON(DbProxyEndpointType, dbProxyEndpointType_);
      DARABONBA_PTR_TO_JSON(DbProxyReadWriteMode, dbProxyReadWriteMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DbProxyEndpointAliases, dbProxyEndpointAliases_);
      DARABONBA_PTR_FROM_JSON(DbProxyEndpointName, dbProxyEndpointName_);
      DARABONBA_PTR_FROM_JSON(DbProxyEndpointType, dbProxyEndpointType_);
      DARABONBA_PTR_FROM_JSON(DbProxyReadWriteMode, dbProxyReadWriteMode_);
    };
    DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems() = default ;
    DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems(const DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems &) = default ;
    DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems(DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems &&) = default ;
    DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems() = default ;
    DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems& operator=(const DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems &) = default ;
    DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems& operator=(DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbProxyEndpointAliases_ == nullptr
        && return this->dbProxyEndpointName_ == nullptr && return this->dbProxyEndpointType_ == nullptr && return this->dbProxyReadWriteMode_ == nullptr; };
    // dbProxyEndpointAliases Field Functions 
    bool hasDbProxyEndpointAliases() const { return this->dbProxyEndpointAliases_ != nullptr;};
    void deleteDbProxyEndpointAliases() { this->dbProxyEndpointAliases_ = nullptr;};
    inline string dbProxyEndpointAliases() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointAliases_, "") };
    inline DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems& setDbProxyEndpointAliases(string dbProxyEndpointAliases) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointAliases_, dbProxyEndpointAliases) };


    // dbProxyEndpointName Field Functions 
    bool hasDbProxyEndpointName() const { return this->dbProxyEndpointName_ != nullptr;};
    void deleteDbProxyEndpointName() { this->dbProxyEndpointName_ = nullptr;};
    inline string dbProxyEndpointName() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointName_, "") };
    inline DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems& setDbProxyEndpointName(string dbProxyEndpointName) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointName_, dbProxyEndpointName) };


    // dbProxyEndpointType Field Functions 
    bool hasDbProxyEndpointType() const { return this->dbProxyEndpointType_ != nullptr;};
    void deleteDbProxyEndpointType() { this->dbProxyEndpointType_ = nullptr;};
    inline string dbProxyEndpointType() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointType_, "") };
    inline DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems& setDbProxyEndpointType(string dbProxyEndpointType) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointType_, dbProxyEndpointType) };


    // dbProxyReadWriteMode Field Functions 
    bool hasDbProxyReadWriteMode() const { return this->dbProxyReadWriteMode_ != nullptr;};
    void deleteDbProxyReadWriteMode() { this->dbProxyReadWriteMode_ = nullptr;};
    inline string dbProxyReadWriteMode() const { DARABONBA_PTR_GET_DEFAULT(dbProxyReadWriteMode_, "") };
    inline DescribeDBProxyResponseBodyDbProxyEndpointItemsDbProxyEndpointItems& setDbProxyReadWriteMode(string dbProxyReadWriteMode) { DARABONBA_PTR_SET_VALUE(dbProxyReadWriteMode_, dbProxyReadWriteMode) };


  protected:
    // The description of the database proxy endpoint.
    std::shared_ptr<string> dbProxyEndpointAliases_ = nullptr;
    // The ID of the database proxy endpoint.
    std::shared_ptr<string> dbProxyEndpointName_ = nullptr;
    // The type of the database proxy endpoint. Valid values:
    // 
    // *   Custom: custom database proxy endpoint
    // *   RWSplit: default database proxy endpoint
    std::shared_ptr<string> dbProxyEndpointType_ = nullptr;
    // The read and write attributes of the database proxy endpoint.
    // 
    // *   ReadOnly
    // *   ReadWrite
    std::shared_ptr<string> dbProxyReadWriteMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
