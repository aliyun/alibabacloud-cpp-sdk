// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBACCOUNTK8SCLUSTERUSERCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBACCOUNTK8SCLUSTERUSERCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeSubaccountK8sClusterUserConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubaccountK8sClusterUserConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(expiration, expiration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubaccountK8sClusterUserConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(expiration, expiration_);
    };
    DescribeSubaccountK8sClusterUserConfigResponseBody() = default ;
    DescribeSubaccountK8sClusterUserConfigResponseBody(const DescribeSubaccountK8sClusterUserConfigResponseBody &) = default ;
    DescribeSubaccountK8sClusterUserConfigResponseBody(DescribeSubaccountK8sClusterUserConfigResponseBody &&) = default ;
    DescribeSubaccountK8sClusterUserConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubaccountK8sClusterUserConfigResponseBody() = default ;
    DescribeSubaccountK8sClusterUserConfigResponseBody& operator=(const DescribeSubaccountK8sClusterUserConfigResponseBody &) = default ;
    DescribeSubaccountK8sClusterUserConfigResponseBody& operator=(DescribeSubaccountK8sClusterUserConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->expiration_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeSubaccountK8sClusterUserConfigResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline DescribeSubaccountK8sClusterUserConfigResponseBody& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


  protected:
    // The cluster kubeconfig file. For more information about how to view the kubeconfig file content, see [Configure cluster credentials](https://help.aliyun.com/document_detail/86494.html).
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // The expiration date of the kubeconfig file. The value is the UTC time displayed in RFC3339 format.
    shared_ptr<string> expiration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
