// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODYDBCLUSTERSECURITYGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERACCESSWHITELISTRESPONSEBODYDBCLUSTERSECURITYGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroupsDBClusterSecurityGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterSecurityGroup, DBClusterSecurityGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterSecurityGroup, DBClusterSecurityGroup_);
    };
    DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups() = default ;
    DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups(const DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups &) = default ;
    DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups(DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups &&) = default ;
    DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups() = default ;
    DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups& operator=(const DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups &) = default ;
    DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups& operator=(DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterSecurityGroup_ != nullptr; };
    // DBClusterSecurityGroup Field Functions 
    bool hasDBClusterSecurityGroup() const { return this->DBClusterSecurityGroup_ != nullptr;};
    void deleteDBClusterSecurityGroup() { this->DBClusterSecurityGroup_ = nullptr;};
    inline const vector<Models::DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroupsDBClusterSecurityGroup> & DBClusterSecurityGroup() const { DARABONBA_PTR_GET_CONST(DBClusterSecurityGroup_, vector<Models::DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroupsDBClusterSecurityGroup>) };
    inline vector<Models::DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroupsDBClusterSecurityGroup> DBClusterSecurityGroup() { DARABONBA_PTR_GET(DBClusterSecurityGroup_, vector<Models::DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroupsDBClusterSecurityGroup>) };
    inline DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups& setDBClusterSecurityGroup(const vector<Models::DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroupsDBClusterSecurityGroup> & DBClusterSecurityGroup) { DARABONBA_PTR_SET_VALUE(DBClusterSecurityGroup_, DBClusterSecurityGroup) };
    inline DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroups& setDBClusterSecurityGroup(vector<Models::DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroupsDBClusterSecurityGroup> && DBClusterSecurityGroup) { DARABONBA_PTR_SET_RVALUE(DBClusterSecurityGroup_, DBClusterSecurityGroup) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClusterAccessWhitelistResponseBodyDBClusterSecurityGroupsDBClusterSecurityGroup>> DBClusterSecurityGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
