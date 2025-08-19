// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERUSERKUBECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERUSERKUBECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterUserKubeconfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterUserKubeconfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(TemporaryDurationMinutes, temporaryDurationMinutes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterUserKubeconfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(TemporaryDurationMinutes, temporaryDurationMinutes_);
    };
    DescribeClusterUserKubeconfigRequest() = default ;
    DescribeClusterUserKubeconfigRequest(const DescribeClusterUserKubeconfigRequest &) = default ;
    DescribeClusterUserKubeconfigRequest(DescribeClusterUserKubeconfigRequest &&) = default ;
    DescribeClusterUserKubeconfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterUserKubeconfigRequest() = default ;
    DescribeClusterUserKubeconfigRequest& operator=(const DescribeClusterUserKubeconfigRequest &) = default ;
    DescribeClusterUserKubeconfigRequest& operator=(DescribeClusterUserKubeconfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->privateIpAddress_ != nullptr
        && this->temporaryDurationMinutes_ != nullptr; };
    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline bool privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, false) };
    inline DescribeClusterUserKubeconfigRequest& setPrivateIpAddress(bool privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // temporaryDurationMinutes Field Functions 
    bool hasTemporaryDurationMinutes() const { return this->temporaryDurationMinutes_ != nullptr;};
    void deleteTemporaryDurationMinutes() { this->temporaryDurationMinutes_ = nullptr;};
    inline int64_t temporaryDurationMinutes() const { DARABONBA_PTR_GET_DEFAULT(temporaryDurationMinutes_, 0L) };
    inline DescribeClusterUserKubeconfigRequest& setTemporaryDurationMinutes(int64_t temporaryDurationMinutes) { DARABONBA_PTR_SET_VALUE(temporaryDurationMinutes_, temporaryDurationMinutes) };


  protected:
    // Specifies whether to obtain the kubeconfig file that is used to connect to the cluster over the internal network. You can obtain the terminal ID by calling one of the following operations:
    // 
    // *   `true`: obtains the kubeconfig file that is used to connect to the master instance over the internal network.
    // *   `false`: obtains the kubeconfig file that is used to connect to the master instance over the Internet.
    // 
    // Default value: `false`
    std::shared_ptr<bool> privateIpAddress_ = nullptr;
    // The validity period of the temporary kubeconfig file. Unit: minutes. Valid values: 15 to 4320 (3 days).
    // 
    // **
    // 
    // **Usage notes** If you do not specify this parameter, the system specifies a longer validity period. The validity period is returned in the `expiration` parameter.
    std::shared_ptr<int64_t> temporaryDurationMinutes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
