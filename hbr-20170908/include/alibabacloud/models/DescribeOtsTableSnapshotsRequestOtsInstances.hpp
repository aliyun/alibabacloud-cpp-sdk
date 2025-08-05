// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOTSTABLESNAPSHOTSREQUESTOTSINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOTSTABLESNAPSHOTSREQUESTOTSINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeOtsTableSnapshotsRequestOtsInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOtsTableSnapshotsRequestOtsInstances& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOtsTableSnapshotsRequestOtsInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
    };
    DescribeOtsTableSnapshotsRequestOtsInstances() = default ;
    DescribeOtsTableSnapshotsRequestOtsInstances(const DescribeOtsTableSnapshotsRequestOtsInstances &) = default ;
    DescribeOtsTableSnapshotsRequestOtsInstances(DescribeOtsTableSnapshotsRequestOtsInstances &&) = default ;
    DescribeOtsTableSnapshotsRequestOtsInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOtsTableSnapshotsRequestOtsInstances() = default ;
    DescribeOtsTableSnapshotsRequestOtsInstances& operator=(const DescribeOtsTableSnapshotsRequestOtsInstances &) = default ;
    DescribeOtsTableSnapshotsRequestOtsInstances& operator=(DescribeOtsTableSnapshotsRequestOtsInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceName_ != nullptr
        && this->tableNames_ != nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeOtsTableSnapshotsRequestOtsInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // tableNames Field Functions 
    bool hasTableNames() const { return this->tableNames_ != nullptr;};
    void deleteTableNames() { this->tableNames_ = nullptr;};
    inline const vector<string> & tableNames() const { DARABONBA_PTR_GET_CONST(tableNames_, vector<string>) };
    inline vector<string> tableNames() { DARABONBA_PTR_GET(tableNames_, vector<string>) };
    inline DescribeOtsTableSnapshotsRequestOtsInstances& setTableNames(const vector<string> & tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };
    inline DescribeOtsTableSnapshotsRequestOtsInstances& setTableNames(vector<string> && tableNames) { DARABONBA_PTR_SET_RVALUE(tableNames_, tableNames) };


  protected:
    // The name of the Tablestore instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The names of the tables in the Tablestore instance.
    std::shared_ptr<vector<string>> tableNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
