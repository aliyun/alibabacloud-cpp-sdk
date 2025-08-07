// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSSLRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSSLRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterSSLResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterSSLResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DBEndpointId, DBEndpointId_);
      DARABONBA_PTR_TO_JSON(SSLAutoRotate, SSLAutoRotate_);
      DARABONBA_PTR_TO_JSON(SSLConnectionString, SSLConnectionString_);
      DARABONBA_PTR_TO_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_TO_JSON(SSLExpireTime, SSLExpireTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterSSLResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DBEndpointId, DBEndpointId_);
      DARABONBA_PTR_FROM_JSON(SSLAutoRotate, SSLAutoRotate_);
      DARABONBA_PTR_FROM_JSON(SSLConnectionString, SSLConnectionString_);
      DARABONBA_PTR_FROM_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_FROM_JSON(SSLExpireTime, SSLExpireTime_);
    };
    DescribeDBClusterSSLResponseBodyItems() = default ;
    DescribeDBClusterSSLResponseBodyItems(const DescribeDBClusterSSLResponseBodyItems &) = default ;
    DescribeDBClusterSSLResponseBodyItems(DescribeDBClusterSSLResponseBodyItems &&) = default ;
    DescribeDBClusterSSLResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterSSLResponseBodyItems() = default ;
    DescribeDBClusterSSLResponseBodyItems& operator=(const DescribeDBClusterSSLResponseBodyItems &) = default ;
    DescribeDBClusterSSLResponseBodyItems& operator=(DescribeDBClusterSSLResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBEndpointId_ != nullptr
        && this->SSLAutoRotate_ != nullptr && this->SSLConnectionString_ != nullptr && this->SSLEnabled_ != nullptr && this->SSLExpireTime_ != nullptr; };
    // DBEndpointId Field Functions 
    bool hasDBEndpointId() const { return this->DBEndpointId_ != nullptr;};
    void deleteDBEndpointId() { this->DBEndpointId_ = nullptr;};
    inline string DBEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointId_, "") };
    inline DescribeDBClusterSSLResponseBodyItems& setDBEndpointId(string DBEndpointId) { DARABONBA_PTR_SET_VALUE(DBEndpointId_, DBEndpointId) };


    // SSLAutoRotate Field Functions 
    bool hasSSLAutoRotate() const { return this->SSLAutoRotate_ != nullptr;};
    void deleteSSLAutoRotate() { this->SSLAutoRotate_ = nullptr;};
    inline string SSLAutoRotate() const { DARABONBA_PTR_GET_DEFAULT(SSLAutoRotate_, "") };
    inline DescribeDBClusterSSLResponseBodyItems& setSSLAutoRotate(string SSLAutoRotate) { DARABONBA_PTR_SET_VALUE(SSLAutoRotate_, SSLAutoRotate) };


    // SSLConnectionString Field Functions 
    bool hasSSLConnectionString() const { return this->SSLConnectionString_ != nullptr;};
    void deleteSSLConnectionString() { this->SSLConnectionString_ = nullptr;};
    inline string SSLConnectionString() const { DARABONBA_PTR_GET_DEFAULT(SSLConnectionString_, "") };
    inline DescribeDBClusterSSLResponseBodyItems& setSSLConnectionString(string SSLConnectionString) { DARABONBA_PTR_SET_VALUE(SSLConnectionString_, SSLConnectionString) };


    // SSLEnabled Field Functions 
    bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
    void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
    inline string SSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, "") };
    inline DescribeDBClusterSSLResponseBodyItems& setSSLEnabled(string SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


    // SSLExpireTime Field Functions 
    bool hasSSLExpireTime() const { return this->SSLExpireTime_ != nullptr;};
    void deleteSSLExpireTime() { this->SSLExpireTime_ = nullptr;};
    inline string SSLExpireTime() const { DARABONBA_PTR_GET_DEFAULT(SSLExpireTime_, "") };
    inline DescribeDBClusterSSLResponseBodyItems& setSSLExpireTime(string SSLExpireTime) { DARABONBA_PTR_SET_VALUE(SSLExpireTime_, SSLExpireTime) };


  protected:
    // The ID of the endpoint.
    std::shared_ptr<string> DBEndpointId_ = nullptr;
    std::shared_ptr<string> SSLAutoRotate_ = nullptr;
    // The SSL connection string.
    std::shared_ptr<string> SSLConnectionString_ = nullptr;
    // Indicates whether SSL encryption is enabled. Valid values:
    // 
    // *   **Enabled**: SSL is enabled.
    // *   **Disable**: SSL is disabled.
    std::shared_ptr<string> SSLEnabled_ = nullptr;
    // The time when the server certificate expires. The time is in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> SSLExpireTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
