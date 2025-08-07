// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSSLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSSLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterSSLResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterSSLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterSSLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SSLAutoRotate, SSLAutoRotate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterSSLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SSLAutoRotate, SSLAutoRotate_);
    };
    DescribeDBClusterSSLResponseBody() = default ;
    DescribeDBClusterSSLResponseBody(const DescribeDBClusterSSLResponseBody &) = default ;
    DescribeDBClusterSSLResponseBody(DescribeDBClusterSSLResponseBody &&) = default ;
    DescribeDBClusterSSLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterSSLResponseBody() = default ;
    DescribeDBClusterSSLResponseBody& operator=(const DescribeDBClusterSSLResponseBody &) = default ;
    DescribeDBClusterSSLResponseBody& operator=(DescribeDBClusterSSLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->requestId_ != nullptr && this->SSLAutoRotate_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDBClusterSSLResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDBClusterSSLResponseBodyItems>) };
    inline vector<DescribeDBClusterSSLResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeDBClusterSSLResponseBodyItems>) };
    inline DescribeDBClusterSSLResponseBody& setItems(const vector<DescribeDBClusterSSLResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBClusterSSLResponseBody& setItems(vector<DescribeDBClusterSSLResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterSSLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SSLAutoRotate Field Functions 
    bool hasSSLAutoRotate() const { return this->SSLAutoRotate_ != nullptr;};
    void deleteSSLAutoRotate() { this->SSLAutoRotate_ = nullptr;};
    inline string SSLAutoRotate() const { DARABONBA_PTR_GET_DEFAULT(SSLAutoRotate_, "") };
    inline DescribeDBClusterSSLResponseBody& setSSLAutoRotate(string SSLAutoRotate) { DARABONBA_PTR_SET_VALUE(SSLAutoRotate_, SSLAutoRotate) };


  protected:
    // The list of SSL connections.
    std::shared_ptr<vector<DescribeDBClusterSSLResponseBodyItems>> items_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether automatic rotation of SSL certificates is enabled. Valid values:
    // 
    // *   **Enable**: The feature is enabled.
    // *   **Disable**: The feature is disabled.
    // 
    // > This parameter is valid only for a PolarDB for MySQL cluster.
    std::shared_ptr<string> SSLAutoRotate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
