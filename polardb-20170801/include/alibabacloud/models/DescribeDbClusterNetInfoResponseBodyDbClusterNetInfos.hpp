// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFORESPONSEBODYDBCLUSTERNETINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFORESPONSEBODYDBCLUSTERNETINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterNetInfoResponseBodyDBClusterNetInfosDBClusterNetInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterNetInfo, DBClusterNetInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterNetInfo, DBClusterNetInfo_);
    };
    DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos() = default ;
    DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos(const DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos &) = default ;
    DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos(DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos &&) = default ;
    DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos() = default ;
    DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos& operator=(const DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos &) = default ;
    DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos& operator=(DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterNetInfo_ == nullptr; };
    // DBClusterNetInfo Field Functions 
    bool hasDBClusterNetInfo() const { return this->DBClusterNetInfo_ != nullptr;};
    void deleteDBClusterNetInfo() { this->DBClusterNetInfo_ = nullptr;};
    inline const vector<Models::DescribeDBClusterNetInfoResponseBodyDBClusterNetInfosDBClusterNetInfo> & DBClusterNetInfo() const { DARABONBA_PTR_GET_CONST(DBClusterNetInfo_, vector<Models::DescribeDBClusterNetInfoResponseBodyDBClusterNetInfosDBClusterNetInfo>) };
    inline vector<Models::DescribeDBClusterNetInfoResponseBodyDBClusterNetInfosDBClusterNetInfo> DBClusterNetInfo() { DARABONBA_PTR_GET(DBClusterNetInfo_, vector<Models::DescribeDBClusterNetInfoResponseBodyDBClusterNetInfosDBClusterNetInfo>) };
    inline DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos& setDBClusterNetInfo(const vector<Models::DescribeDBClusterNetInfoResponseBodyDBClusterNetInfosDBClusterNetInfo> & DBClusterNetInfo) { DARABONBA_PTR_SET_VALUE(DBClusterNetInfo_, DBClusterNetInfo) };
    inline DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos& setDBClusterNetInfo(vector<Models::DescribeDBClusterNetInfoResponseBodyDBClusterNetInfosDBClusterNetInfo> && DBClusterNetInfo) { DARABONBA_PTR_SET_RVALUE(DBClusterNetInfo_, DBClusterNetInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClusterNetInfoResponseBodyDBClusterNetInfosDBClusterNetInfo>> DBClusterNetInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
