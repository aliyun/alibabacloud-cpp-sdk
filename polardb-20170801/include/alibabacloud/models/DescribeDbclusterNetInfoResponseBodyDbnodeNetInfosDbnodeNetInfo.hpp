// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFORESPONSEBODYDBNODENETINFOSDBNODENETINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFORESPONSEBODYDBNODENETINFOSDBNODENETINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBNodeRole, DBNodeRole_);
      DARABONBA_PTR_TO_JSON(NetInfos, netInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBNodeRole, DBNodeRole_);
      DARABONBA_PTR_FROM_JSON(NetInfos, netInfos_);
    };
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo() = default ;
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo(const DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo &) = default ;
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo(DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo &&) = default ;
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo() = default ;
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo& operator=(const DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo &) = default ;
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo& operator=(DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->DBNodeRole_ != nullptr && this->netInfos_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBNodeRole Field Functions 
    bool hasDBNodeRole() const { return this->DBNodeRole_ != nullptr;};
    void deleteDBNodeRole() { this->DBNodeRole_ = nullptr;};
    inline string DBNodeRole() const { DARABONBA_PTR_GET_DEFAULT(DBNodeRole_, "") };
    inline DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo& setDBNodeRole(string DBNodeRole) { DARABONBA_PTR_SET_VALUE(DBNodeRole_, DBNodeRole) };


    // netInfos Field Functions 
    bool hasNetInfos() const { return this->netInfos_ != nullptr;};
    void deleteNetInfos() { this->netInfos_ = nullptr;};
    inline const Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos & netInfos() const { DARABONBA_PTR_GET_CONST(netInfos_, Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos) };
    inline Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos netInfos() { DARABONBA_PTR_GET(netInfos_, Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos) };
    inline DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo& setNetInfos(const Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos & netInfos) { DARABONBA_PTR_SET_VALUE(netInfos_, netInfos) };
    inline DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo& setNetInfos(Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos && netInfos) { DARABONBA_PTR_SET_RVALUE(netInfos_, netInfos) };


  protected:
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<string> DBNodeRole_ = nullptr;
    std::shared_ptr<Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos> netInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
