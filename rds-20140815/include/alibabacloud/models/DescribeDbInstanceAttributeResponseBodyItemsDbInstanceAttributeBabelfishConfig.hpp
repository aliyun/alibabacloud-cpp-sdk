// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMSDBINSTANCEATTRIBUTEBABELFISHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYITEMSDBINSTANCEATTRIBUTEBABELFISHCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BabelfishEnabled, babelfishEnabled_);
      DARABONBA_PTR_TO_JSON(MigrationMode, migrationMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BabelfishEnabled, babelfishEnabled_);
      DARABONBA_PTR_FROM_JSON(MigrationMode, migrationMode_);
    };
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig() = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig(const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig &) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig(DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig &&) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig() = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig& operator=(const DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig &) = default ;
    DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig& operator=(DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->babelfishEnabled_ == nullptr
        && return this->migrationMode_ == nullptr; };
    // babelfishEnabled Field Functions 
    bool hasBabelfishEnabled() const { return this->babelfishEnabled_ != nullptr;};
    void deleteBabelfishEnabled() { this->babelfishEnabled_ = nullptr;};
    inline string babelfishEnabled() const { DARABONBA_PTR_GET_DEFAULT(babelfishEnabled_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig& setBabelfishEnabled(string babelfishEnabled) { DARABONBA_PTR_SET_VALUE(babelfishEnabled_, babelfishEnabled) };


    // migrationMode Field Functions 
    bool hasMigrationMode() const { return this->migrationMode_ != nullptr;};
    void deleteMigrationMode() { this->migrationMode_ = nullptr;};
    inline string migrationMode() const { DARABONBA_PTR_GET_DEFAULT(migrationMode_, "") };
    inline DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeBabelfishConfig& setMigrationMode(string migrationMode) { DARABONBA_PTR_SET_VALUE(migrationMode_, migrationMode) };


  protected:
    // Indicates whether Babelfish is enabled.
    // 
    // >  If Babelfish is enabled when you purchase an ApsaraDB RDS for PostgreSQL instance, this parameter is fixed as **true**.
    std::shared_ptr<string> babelfishEnabled_ = nullptr;
    // The migration mode for Babelfish. Valid values:
    // 
    // *   **single-db**
    // *   **multi-db**
    // 
    // >  For more information about migration modes for Babelfish, see [Migration modes](https://help.aliyun.com/document_detail/428613.html).
    std::shared_ptr<string> migrationMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
