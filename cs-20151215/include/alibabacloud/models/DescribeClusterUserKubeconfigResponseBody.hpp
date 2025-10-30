// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERUSERKUBECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERUSERKUBECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterUserKubeconfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterUserKubeconfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(expiration, expiration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterUserKubeconfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(expiration, expiration_);
    };
    DescribeClusterUserKubeconfigResponseBody() = default ;
    DescribeClusterUserKubeconfigResponseBody(const DescribeClusterUserKubeconfigResponseBody &) = default ;
    DescribeClusterUserKubeconfigResponseBody(DescribeClusterUserKubeconfigResponseBody &&) = default ;
    DescribeClusterUserKubeconfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterUserKubeconfigResponseBody() = default ;
    DescribeClusterUserKubeconfigResponseBody& operator=(const DescribeClusterUserKubeconfigResponseBody &) = default ;
    DescribeClusterUserKubeconfigResponseBody& operator=(DescribeClusterUserKubeconfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->expiration_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeClusterUserKubeconfigResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string expiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline DescribeClusterUserKubeconfigResponseBody& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


  protected:
    // The kubeconfig file of the cluster.
    std::shared_ptr<string> config_ = nullptr;
    // The expiration time of the kubeconfig file. Format: the UTC time in the RFC3339 format.
    std::shared_ptr<string> expiration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
