// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSSLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSSLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DBEndpointId, DBEndpointId_);
        DARABONBA_PTR_TO_JSON(SSLAutoRotate, SSLAutoRotate_);
        DARABONBA_PTR_TO_JSON(SSLConnectionString, SSLConnectionString_);
        DARABONBA_PTR_TO_JSON(SSLEnabled, SSLEnabled_);
        DARABONBA_PTR_TO_JSON(SSLExpireTime, SSLExpireTime_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DBEndpointId, DBEndpointId_);
        DARABONBA_PTR_FROM_JSON(SSLAutoRotate, SSLAutoRotate_);
        DARABONBA_PTR_FROM_JSON(SSLConnectionString, SSLConnectionString_);
        DARABONBA_PTR_FROM_JSON(SSLEnabled, SSLEnabled_);
        DARABONBA_PTR_FROM_JSON(SSLExpireTime, SSLExpireTime_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBEndpointId_ == nullptr
        && this->SSLAutoRotate_ == nullptr && this->SSLConnectionString_ == nullptr && this->SSLEnabled_ == nullptr && this->SSLExpireTime_ == nullptr; };
      // DBEndpointId Field Functions 
      bool hasDBEndpointId() const { return this->DBEndpointId_ != nullptr;};
      void deleteDBEndpointId() { this->DBEndpointId_ = nullptr;};
      inline string getDBEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointId_, "") };
      inline Items& setDBEndpointId(string DBEndpointId) { DARABONBA_PTR_SET_VALUE(DBEndpointId_, DBEndpointId) };


      // SSLAutoRotate Field Functions 
      bool hasSSLAutoRotate() const { return this->SSLAutoRotate_ != nullptr;};
      void deleteSSLAutoRotate() { this->SSLAutoRotate_ = nullptr;};
      inline string getSSLAutoRotate() const { DARABONBA_PTR_GET_DEFAULT(SSLAutoRotate_, "") };
      inline Items& setSSLAutoRotate(string SSLAutoRotate) { DARABONBA_PTR_SET_VALUE(SSLAutoRotate_, SSLAutoRotate) };


      // SSLConnectionString Field Functions 
      bool hasSSLConnectionString() const { return this->SSLConnectionString_ != nullptr;};
      void deleteSSLConnectionString() { this->SSLConnectionString_ = nullptr;};
      inline string getSSLConnectionString() const { DARABONBA_PTR_GET_DEFAULT(SSLConnectionString_, "") };
      inline Items& setSSLConnectionString(string SSLConnectionString) { DARABONBA_PTR_SET_VALUE(SSLConnectionString_, SSLConnectionString) };


      // SSLEnabled Field Functions 
      bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
      void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
      inline string getSSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, "") };
      inline Items& setSSLEnabled(string SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


      // SSLExpireTime Field Functions 
      bool hasSSLExpireTime() const { return this->SSLExpireTime_ != nullptr;};
      void deleteSSLExpireTime() { this->SSLExpireTime_ = nullptr;};
      inline string getSSLExpireTime() const { DARABONBA_PTR_GET_DEFAULT(SSLExpireTime_, "") };
      inline Items& setSSLExpireTime(string SSLExpireTime) { DARABONBA_PTR_SET_VALUE(SSLExpireTime_, SSLExpireTime) };


    protected:
      // The ID of the endpoint.
      shared_ptr<string> DBEndpointId_ {};
      shared_ptr<string> SSLAutoRotate_ {};
      // The SSL connection string.
      shared_ptr<string> SSLConnectionString_ {};
      // Indicates whether SSL encryption is enabled. Valid values:
      // 
      // *   **Enabled**: SSL is enabled.
      // *   **Disable**: SSL is disabled.
      shared_ptr<string> SSLEnabled_ {};
      // The time when the server certificate expires. The time is in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
      shared_ptr<string> SSLExpireTime_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr && this->SSLAutoRotate_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDBClusterSSLResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDBClusterSSLResponseBody::Items>) };
    inline vector<DescribeDBClusterSSLResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeDBClusterSSLResponseBody::Items>) };
    inline DescribeDBClusterSSLResponseBody& setItems(const vector<DescribeDBClusterSSLResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBClusterSSLResponseBody& setItems(vector<DescribeDBClusterSSLResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterSSLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SSLAutoRotate Field Functions 
    bool hasSSLAutoRotate() const { return this->SSLAutoRotate_ != nullptr;};
    void deleteSSLAutoRotate() { this->SSLAutoRotate_ = nullptr;};
    inline string getSSLAutoRotate() const { DARABONBA_PTR_GET_DEFAULT(SSLAutoRotate_, "") };
    inline DescribeDBClusterSSLResponseBody& setSSLAutoRotate(string SSLAutoRotate) { DARABONBA_PTR_SET_VALUE(SSLAutoRotate_, SSLAutoRotate) };


  protected:
    // The list of SSL connections.
    shared_ptr<vector<DescribeDBClusterSSLResponseBody::Items>> items_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether automatic rotation of SSL certificates is enabled. Valid values:
    // 
    // *   **Enable**: The feature is enabled.
    // *   **Disable**: The feature is disabled.
    // 
    // > This parameter is valid only for a PolarDB for MySQL cluster.
    shared_ptr<string> SSLAutoRotate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
