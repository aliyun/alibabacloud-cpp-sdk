// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERV2USERKUBECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERV2USERKUBECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterV2UserKubeconfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterV2UserKubeconfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(TemporaryDurationMinutes, temporaryDurationMinutes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterV2UserKubeconfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(TemporaryDurationMinutes, temporaryDurationMinutes_);
    };
    DescribeClusterV2UserKubeconfigRequest() = default ;
    DescribeClusterV2UserKubeconfigRequest(const DescribeClusterV2UserKubeconfigRequest &) = default ;
    DescribeClusterV2UserKubeconfigRequest(DescribeClusterV2UserKubeconfigRequest &&) = default ;
    DescribeClusterV2UserKubeconfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterV2UserKubeconfigRequest() = default ;
    DescribeClusterV2UserKubeconfigRequest& operator=(const DescribeClusterV2UserKubeconfigRequest &) = default ;
    DescribeClusterV2UserKubeconfigRequest& operator=(DescribeClusterV2UserKubeconfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->privateIpAddress_ == nullptr
        && return this->temporaryDurationMinutes_ == nullptr; };
    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline bool privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, false) };
    inline DescribeClusterV2UserKubeconfigRequest& setPrivateIpAddress(bool privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // temporaryDurationMinutes Field Functions 
    bool hasTemporaryDurationMinutes() const { return this->temporaryDurationMinutes_ != nullptr;};
    void deleteTemporaryDurationMinutes() { this->temporaryDurationMinutes_ = nullptr;};
    inline int64_t temporaryDurationMinutes() const { DARABONBA_PTR_GET_DEFAULT(temporaryDurationMinutes_, 0L) };
    inline DescribeClusterV2UserKubeconfigRequest& setTemporaryDurationMinutes(int64_t temporaryDurationMinutes) { DARABONBA_PTR_SET_VALUE(temporaryDurationMinutes_, temporaryDurationMinutes) };


  protected:
    std::shared_ptr<bool> privateIpAddress_ = nullptr;
    std::shared_ptr<int64_t> temporaryDurationMinutes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
