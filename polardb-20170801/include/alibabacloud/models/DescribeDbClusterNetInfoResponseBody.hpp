// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos.hpp>
#include <alibabacloud/models/DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterNetInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterNetInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterNetworkType, clusterNetworkType_);
      DARABONBA_PTR_TO_JSON(DBClusterNetInfos, DBClusterNetInfos_);
      DARABONBA_PTR_TO_JSON(DBNodeNetInfos, DBNodeNetInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterNetInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterNetworkType, clusterNetworkType_);
      DARABONBA_PTR_FROM_JSON(DBClusterNetInfos, DBClusterNetInfos_);
      DARABONBA_PTR_FROM_JSON(DBNodeNetInfos, DBNodeNetInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterNetInfoResponseBody() = default ;
    DescribeDBClusterNetInfoResponseBody(const DescribeDBClusterNetInfoResponseBody &) = default ;
    DescribeDBClusterNetInfoResponseBody(DescribeDBClusterNetInfoResponseBody &&) = default ;
    DescribeDBClusterNetInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterNetInfoResponseBody() = default ;
    DescribeDBClusterNetInfoResponseBody& operator=(const DescribeDBClusterNetInfoResponseBody &) = default ;
    DescribeDBClusterNetInfoResponseBody& operator=(DescribeDBClusterNetInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterNetworkType_ == nullptr
        && return this->DBClusterNetInfos_ == nullptr && return this->DBNodeNetInfos_ == nullptr && return this->requestId_ == nullptr; };
    // clusterNetworkType Field Functions 
    bool hasClusterNetworkType() const { return this->clusterNetworkType_ != nullptr;};
    void deleteClusterNetworkType() { this->clusterNetworkType_ = nullptr;};
    inline string clusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(clusterNetworkType_, "") };
    inline DescribeDBClusterNetInfoResponseBody& setClusterNetworkType(string clusterNetworkType) { DARABONBA_PTR_SET_VALUE(clusterNetworkType_, clusterNetworkType) };


    // DBClusterNetInfos Field Functions 
    bool hasDBClusterNetInfos() const { return this->DBClusterNetInfos_ != nullptr;};
    void deleteDBClusterNetInfos() { this->DBClusterNetInfos_ = nullptr;};
    inline const DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos & DBClusterNetInfos() const { DARABONBA_PTR_GET_CONST(DBClusterNetInfos_, DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos) };
    inline DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos DBClusterNetInfos() { DARABONBA_PTR_GET(DBClusterNetInfos_, DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos) };
    inline DescribeDBClusterNetInfoResponseBody& setDBClusterNetInfos(const DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos & DBClusterNetInfos) { DARABONBA_PTR_SET_VALUE(DBClusterNetInfos_, DBClusterNetInfos) };
    inline DescribeDBClusterNetInfoResponseBody& setDBClusterNetInfos(DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos && DBClusterNetInfos) { DARABONBA_PTR_SET_RVALUE(DBClusterNetInfos_, DBClusterNetInfos) };


    // DBNodeNetInfos Field Functions 
    bool hasDBNodeNetInfos() const { return this->DBNodeNetInfos_ != nullptr;};
    void deleteDBNodeNetInfos() { this->DBNodeNetInfos_ = nullptr;};
    inline const DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos & DBNodeNetInfos() const { DARABONBA_PTR_GET_CONST(DBNodeNetInfos_, DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos) };
    inline DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos DBNodeNetInfos() { DARABONBA_PTR_GET(DBNodeNetInfos_, DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos) };
    inline DescribeDBClusterNetInfoResponseBody& setDBNodeNetInfos(const DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos & DBNodeNetInfos) { DARABONBA_PTR_SET_VALUE(DBNodeNetInfos_, DBNodeNetInfos) };
    inline DescribeDBClusterNetInfoResponseBody& setDBNodeNetInfos(DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos && DBNodeNetInfos) { DARABONBA_PTR_SET_RVALUE(DBNodeNetInfos_, DBNodeNetInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterNetInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> clusterNetworkType_ = nullptr;
    std::shared_ptr<DescribeDBClusterNetInfoResponseBodyDBClusterNetInfos> DBClusterNetInfos_ = nullptr;
    std::shared_ptr<DescribeDBClusterNetInfoResponseBodyDBNodeNetInfos> DBNodeNetInfos_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
