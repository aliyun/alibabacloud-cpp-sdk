// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeHealthCheckListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthCheckListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkRules, networkRules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthCheckListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkRules, networkRules_);
    };
    DescribeHealthCheckListRequest() = default ;
    DescribeHealthCheckListRequest(const DescribeHealthCheckListRequest &) = default ;
    DescribeHealthCheckListRequest(DescribeHealthCheckListRequest &&) = default ;
    DescribeHealthCheckListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthCheckListRequest() = default ;
    DescribeHealthCheckListRequest& operator=(const DescribeHealthCheckListRequest &) = default ;
    DescribeHealthCheckListRequest& operator=(DescribeHealthCheckListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkRules_ == nullptr; };
    // networkRules Field Functions 
    bool hasNetworkRules() const { return this->networkRules_ != nullptr;};
    void deleteNetworkRules() { this->networkRules_ = nullptr;};
    inline string getNetworkRules() const { DARABONBA_PTR_GET_DEFAULT(networkRules_, "") };
    inline DescribeHealthCheckListRequest& setNetworkRules(string networkRules) { DARABONBA_PTR_SET_VALUE(networkRules_, networkRules) };


  protected:
    // The information about the port forwarding rule. This parameter is a JSON string. The string contains the following fields:
    // 
    // *   **InstanceId**: the ID of the instance. This field is required and must be of the STRING type.
    // *   **Protocol**: the forwarding protocol. This field is required and must be of the STRING type. Valid values: **tcp** and **udp**.
    // *   **FrontendPort**: the forwarding port. This field is required and must be of the INTEGER type.
    // 
    // This parameter is required.
    shared_ptr<string> networkRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
