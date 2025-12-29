// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUBACCOUNTK8SCLUSTERUSERCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUBACCOUNTK8SCLUSTERUSERCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeSubaccountK8sClusterUserConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSubaccountK8sClusterUserConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(TemporaryDurationMinutes, temporaryDurationMinutes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSubaccountK8sClusterUserConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(TemporaryDurationMinutes, temporaryDurationMinutes_);
    };
    DescribeSubaccountK8sClusterUserConfigRequest() = default ;
    DescribeSubaccountK8sClusterUserConfigRequest(const DescribeSubaccountK8sClusterUserConfigRequest &) = default ;
    DescribeSubaccountK8sClusterUserConfigRequest(DescribeSubaccountK8sClusterUserConfigRequest &&) = default ;
    DescribeSubaccountK8sClusterUserConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSubaccountK8sClusterUserConfigRequest() = default ;
    DescribeSubaccountK8sClusterUserConfigRequest& operator=(const DescribeSubaccountK8sClusterUserConfigRequest &) = default ;
    DescribeSubaccountK8sClusterUserConfigRequest& operator=(DescribeSubaccountK8sClusterUserConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->privateIpAddress_ == nullptr
        && this->temporaryDurationMinutes_ == nullptr; };
    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline bool getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, false) };
    inline DescribeSubaccountK8sClusterUserConfigRequest& setPrivateIpAddress(bool privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // temporaryDurationMinutes Field Functions 
    bool hasTemporaryDurationMinutes() const { return this->temporaryDurationMinutes_ != nullptr;};
    void deleteTemporaryDurationMinutes() { this->temporaryDurationMinutes_ = nullptr;};
    inline int64_t getTemporaryDurationMinutes() const { DARABONBA_PTR_GET_DEFAULT(temporaryDurationMinutes_, 0L) };
    inline DescribeSubaccountK8sClusterUserConfigRequest& setTemporaryDurationMinutes(int64_t temporaryDurationMinutes) { DARABONBA_PTR_SET_VALUE(temporaryDurationMinutes_, temporaryDurationMinutes) };


  protected:
    // Specifies whether to obtain the kubeconfig file used to connect to the cluster over the internal network. Valid values:
    // 
    // *   `true`: Obtain the kubeconfig file used to connect to the cluster over the internal network.
    // *   `false`: Obtain the kubeconfig file used to connect to the cluster over the Internet.
    // 
    // Default value: `false`.
    shared_ptr<bool> privateIpAddress_ {};
    // The validity period of the temporary kubeconfig file. Unit: minutes.
    // 
    // Valid values: 15 to 4320 (three days).
    // 
    // > If you leave this parameter empty, the system sets a longer validity period and returns the value in the expiration parameter of the response.
    shared_ptr<int64_t> temporaryDurationMinutes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
