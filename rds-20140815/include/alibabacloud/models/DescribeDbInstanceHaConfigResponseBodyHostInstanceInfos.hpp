// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEHACONFIGRESPONSEBODYHOSTINSTANCEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEHACONFIGRESPONSEBODYHOSTINSTANCEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(NodeInfo, nodeInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeInfo, nodeInfo_);
    };
    DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos() = default ;
    DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos(const DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos &) = default ;
    DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos(DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos &&) = default ;
    DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos() = default ;
    DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos& operator=(const DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos &) = default ;
    DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos& operator=(DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeInfo_ == nullptr; };
    // nodeInfo Field Functions 
    bool hasNodeInfo() const { return this->nodeInfo_ != nullptr;};
    void deleteNodeInfo() { this->nodeInfo_ = nullptr;};
    inline const vector<Models::DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo> & nodeInfo() const { DARABONBA_PTR_GET_CONST(nodeInfo_, vector<Models::DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo>) };
    inline vector<Models::DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo> nodeInfo() { DARABONBA_PTR_GET(nodeInfo_, vector<Models::DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo>) };
    inline DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos& setNodeInfo(const vector<Models::DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo> & nodeInfo) { DARABONBA_PTR_SET_VALUE(nodeInfo_, nodeInfo) };
    inline DescribeDBInstanceHAConfigResponseBodyHostInstanceInfos& setNodeInfo(vector<Models::DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo> && nodeInfo) { DARABONBA_PTR_SET_RVALUE(nodeInfo_, nodeInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeDBInstanceHAConfigResponseBodyHostInstanceInfosNodeInfo>> nodeInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
