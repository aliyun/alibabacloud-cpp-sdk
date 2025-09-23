// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFORESPONSEBODYDBNODENETINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFORESPONSEBODYDBNODENETINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos& obj) { 
      DARABONBA_PTR_TO_JSON(DBNodeNetInfo, DBNodeNetInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNodeNetInfo, DBNodeNetInfo_);
    };
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos() = default ;
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos(const DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos &) = default ;
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos(DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos &&) = default ;
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos() = default ;
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos& operator=(const DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos &) = default ;
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos& operator=(DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBNodeNetInfo_ != nullptr; };
    // DBNodeNetInfo Field Functions 
    bool hasDBNodeNetInfo() const { return this->DBNodeNetInfo_ != nullptr;};
    void deleteDBNodeNetInfo() { this->DBNodeNetInfo_ = nullptr;};
    inline const vector<Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo> & DBNodeNetInfo() const { DARABONBA_PTR_GET_CONST(DBNodeNetInfo_, vector<Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo>) };
    inline vector<Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo> DBNodeNetInfo() { DARABONBA_PTR_GET(DBNodeNetInfo_, vector<Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo>) };
    inline DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos& setDBNodeNetInfo(const vector<Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo> & DBNodeNetInfo) { DARABONBA_PTR_SET_VALUE(DBNodeNetInfo_, DBNodeNetInfo) };
    inline DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos& setDBNodeNetInfo(vector<Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo> && DBNodeNetInfo) { DARABONBA_PTR_SET_RVALUE(DBNodeNetInfo_, DBNodeNetInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfo>> DBNodeNetInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
