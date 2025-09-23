// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPROXYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPROXYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterProxyResponseBodyChildInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterProxyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterProxyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChildInstances, childInstances_);
      DARABONBA_PTR_TO_JSON(DBProxyClusterId, DBProxyClusterId_);
      DARABONBA_PTR_TO_JSON(DBProxyClusterNum, DBProxyClusterNum_);
      DARABONBA_PTR_TO_JSON(DBProxyClusterStatus, DBProxyClusterStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterProxyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChildInstances, childInstances_);
      DARABONBA_PTR_FROM_JSON(DBProxyClusterId, DBProxyClusterId_);
      DARABONBA_PTR_FROM_JSON(DBProxyClusterNum, DBProxyClusterNum_);
      DARABONBA_PTR_FROM_JSON(DBProxyClusterStatus, DBProxyClusterStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterProxyResponseBody() = default ;
    DescribeDBClusterProxyResponseBody(const DescribeDBClusterProxyResponseBody &) = default ;
    DescribeDBClusterProxyResponseBody(DescribeDBClusterProxyResponseBody &&) = default ;
    DescribeDBClusterProxyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterProxyResponseBody() = default ;
    DescribeDBClusterProxyResponseBody& operator=(const DescribeDBClusterProxyResponseBody &) = default ;
    DescribeDBClusterProxyResponseBody& operator=(DescribeDBClusterProxyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->childInstances_ != nullptr
        && this->DBProxyClusterId_ != nullptr && this->DBProxyClusterNum_ != nullptr && this->DBProxyClusterStatus_ != nullptr && this->requestId_ != nullptr; };
    // childInstances Field Functions 
    bool hasChildInstances() const { return this->childInstances_ != nullptr;};
    void deleteChildInstances() { this->childInstances_ = nullptr;};
    inline const vector<DescribeDBClusterProxyResponseBodyChildInstances> & childInstances() const { DARABONBA_PTR_GET_CONST(childInstances_, vector<DescribeDBClusterProxyResponseBodyChildInstances>) };
    inline vector<DescribeDBClusterProxyResponseBodyChildInstances> childInstances() { DARABONBA_PTR_GET(childInstances_, vector<DescribeDBClusterProxyResponseBodyChildInstances>) };
    inline DescribeDBClusterProxyResponseBody& setChildInstances(const vector<DescribeDBClusterProxyResponseBodyChildInstances> & childInstances) { DARABONBA_PTR_SET_VALUE(childInstances_, childInstances) };
    inline DescribeDBClusterProxyResponseBody& setChildInstances(vector<DescribeDBClusterProxyResponseBodyChildInstances> && childInstances) { DARABONBA_PTR_SET_RVALUE(childInstances_, childInstances) };


    // DBProxyClusterId Field Functions 
    bool hasDBProxyClusterId() const { return this->DBProxyClusterId_ != nullptr;};
    void deleteDBProxyClusterId() { this->DBProxyClusterId_ = nullptr;};
    inline string DBProxyClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBProxyClusterId_, "") };
    inline DescribeDBClusterProxyResponseBody& setDBProxyClusterId(string DBProxyClusterId) { DARABONBA_PTR_SET_VALUE(DBProxyClusterId_, DBProxyClusterId) };


    // DBProxyClusterNum Field Functions 
    bool hasDBProxyClusterNum() const { return this->DBProxyClusterNum_ != nullptr;};
    void deleteDBProxyClusterNum() { this->DBProxyClusterNum_ = nullptr;};
    inline int64_t DBProxyClusterNum() const { DARABONBA_PTR_GET_DEFAULT(DBProxyClusterNum_, 0L) };
    inline DescribeDBClusterProxyResponseBody& setDBProxyClusterNum(int64_t DBProxyClusterNum) { DARABONBA_PTR_SET_VALUE(DBProxyClusterNum_, DBProxyClusterNum) };


    // DBProxyClusterStatus Field Functions 
    bool hasDBProxyClusterStatus() const { return this->DBProxyClusterStatus_ != nullptr;};
    void deleteDBProxyClusterStatus() { this->DBProxyClusterStatus_ = nullptr;};
    inline string DBProxyClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBProxyClusterStatus_, "") };
    inline DescribeDBClusterProxyResponseBody& setDBProxyClusterStatus(string DBProxyClusterStatus) { DARABONBA_PTR_SET_VALUE(DBProxyClusterStatus_, DBProxyClusterStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterProxyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeDBClusterProxyResponseBodyChildInstances>> childInstances_ = nullptr;
    std::shared_ptr<string> DBProxyClusterId_ = nullptr;
    std::shared_ptr<int64_t> DBProxyClusterNum_ = nullptr;
    std::shared_ptr<string> DBProxyClusterStatus_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
