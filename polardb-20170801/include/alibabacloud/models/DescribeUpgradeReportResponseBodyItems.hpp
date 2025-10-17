// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPGRADEREPORTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPGRADEREPORTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeUpgradeReportResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpgradeReportResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DDL, DDL_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpgradeReportResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DDL, DDL_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeUpgradeReportResponseBodyItems() = default ;
    DescribeUpgradeReportResponseBodyItems(const DescribeUpgradeReportResponseBodyItems &) = default ;
    DescribeUpgradeReportResponseBodyItems(DescribeUpgradeReportResponseBodyItems &&) = default ;
    DescribeUpgradeReportResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpgradeReportResponseBodyItems() = default ;
    DescribeUpgradeReportResponseBodyItems& operator=(const DescribeUpgradeReportResponseBodyItems &) = default ;
    DescribeUpgradeReportResponseBodyItems& operator=(DescribeUpgradeReportResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DDL_ == nullptr
        && return this->name_ == nullptr && return this->schema_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr; };
    // DDL Field Functions 
    bool hasDDL() const { return this->DDL_ != nullptr;};
    void deleteDDL() { this->DDL_ = nullptr;};
    inline string DDL() const { DARABONBA_PTR_GET_DEFAULT(DDL_, "") };
    inline DescribeUpgradeReportResponseBodyItems& setDDL(string DDL) { DARABONBA_PTR_SET_VALUE(DDL_, DDL) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeUpgradeReportResponseBodyItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline DescribeUpgradeReportResponseBodyItems& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeUpgradeReportResponseBodyItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeUpgradeReportResponseBodyItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> DDL_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> schema_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
