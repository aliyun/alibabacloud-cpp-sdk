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
    virtual bool empty() const override { return this->privateIpAddress_ == nullptr
        && this->temporaryDurationMinutes_ == nullptr; };
    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline bool getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, false) };
    inline DescribeClusterUserKubeconfigRequest& setPrivateIpAddress(bool privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // temporaryDurationMinutes Field Functions 
    bool hasTemporaryDurationMinutes() const { return this->temporaryDurationMinutes_ != nullptr;};
    void deleteTemporaryDurationMinutes() { this->temporaryDurationMinutes_ = nullptr;};
    inline int64_t getTemporaryDurationMinutes() const { DARABONBA_PTR_GET_DEFAULT(temporaryDurationMinutes_, 0L) };
    inline DescribeClusterUserKubeconfigRequest& setTemporaryDurationMinutes(int64_t temporaryDurationMinutes) { DARABONBA_PTR_SET_VALUE(temporaryDurationMinutes_, temporaryDurationMinutes) };


  protected:
    // Specifies whether to retrieve the internal network connection configuration. Valid values:
    // - `true`: Retrieves only the internal network connection credentials.
    // - `false`: Retrieves only the public network connection credentials. 
    // 
    // Default value: `false`.
    shared_ptr<bool> privateIpAddress_ {};
    // The validity period of the temporary kubeconfig file, in minutes. Valid values: 15 (15 minutes) to 4320 (3 days).
    // > If you do not specify this parameter, the system automatically determines a longer validity period. You can determine the specific expiration time based on the value of the `expiration` field in the response.
    shared_ptr<int64_t> temporaryDurationMinutes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
