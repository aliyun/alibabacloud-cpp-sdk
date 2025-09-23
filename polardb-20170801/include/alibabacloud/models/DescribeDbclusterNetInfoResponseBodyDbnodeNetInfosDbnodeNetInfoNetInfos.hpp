// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFORESPONSEBODYDBNODENETINFOSDBNODENETINFONETINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFORESPONSEBODYDBNODENETINFOSDBNODENETINFONETINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos& obj) { 
      DARABONBA_PTR_TO_JSON(NetInfo, netInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(NetInfo, netInfo_);
    };
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos() = default ;
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos(const DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos &) = default ;
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos(DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos &&) = default ;
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos() = default ;
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos& operator=(const DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos &) = default ;
    DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos& operator=(DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->netInfo_ != nullptr; };
    // netInfo Field Functions 
    bool hasNetInfo() const { return this->netInfo_ != nullptr;};
    void deleteNetInfo() { this->netInfo_ = nullptr;};
    inline const vector<Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo> & netInfo() const { DARABONBA_PTR_GET_CONST(netInfo_, vector<Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo>) };
    inline vector<Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo> netInfo() { DARABONBA_PTR_GET(netInfo_, vector<Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo>) };
    inline DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos& setNetInfo(const vector<Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo> & netInfo) { DARABONBA_PTR_SET_VALUE(netInfo_, netInfo) };
    inline DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfos& setNetInfo(vector<Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo> && netInfo) { DARABONBA_PTR_SET_RVALUE(netInfo_, netInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBClusterNetInfoResponseBodyDBNodeNetInfosDBNodeNetInfoNetInfosNetInfo>> netInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
