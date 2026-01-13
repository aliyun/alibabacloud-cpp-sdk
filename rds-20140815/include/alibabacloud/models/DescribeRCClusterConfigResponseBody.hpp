// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCCLUSTERCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCCLUSTERCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCClusterConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCClusterConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCClusterConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRCClusterConfigResponseBody() = default ;
    DescribeRCClusterConfigResponseBody(const DescribeRCClusterConfigResponseBody &) = default ;
    DescribeRCClusterConfigResponseBody(DescribeRCClusterConfigResponseBody &&) = default ;
    DescribeRCClusterConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCClusterConfigResponseBody() = default ;
    DescribeRCClusterConfigResponseBody& operator=(const DescribeRCClusterConfigResponseBody &) = default ;
    DescribeRCClusterConfigResponseBody& operator=(DescribeRCClusterConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->expiration_ == nullptr && this->requestId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeRCClusterConfigResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline DescribeRCClusterConfigResponseBody& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCClusterConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The kubeconfig file of the cluster.
    shared_ptr<string> config_ {};
    // The expiration time of the kubeconfig file. Format: the UTC time in the RFC3339 format.
    shared_ptr<string> expiration_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
