// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSSLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSSLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClusterSSLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterSSLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SSLEnabled, SSLEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterSSLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SSLEnabled, SSLEnabled_);
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
    virtual bool empty() const override { this->connectionString_ != nullptr
        && this->expireTime_ != nullptr && this->requestId_ != nullptr && this->SSLEnabled_ != nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBClusterSSLResponseBody& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDBClusterSSLResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterSSLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SSLEnabled Field Functions 
    bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
    void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
    inline bool SSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, false) };
    inline DescribeDBClusterSSLResponseBody& setSSLEnabled(bool SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


  protected:
    std::shared_ptr<string> connectionString_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> SSLEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
