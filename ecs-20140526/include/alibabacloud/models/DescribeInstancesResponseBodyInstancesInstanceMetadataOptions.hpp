// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEMETADATAOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEMETADATAOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceMetadataOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceMetadataOptions& obj) { 
      DARABONBA_PTR_TO_JSON(HttpEndpoint, httpEndpoint_);
      DARABONBA_PTR_TO_JSON(HttpPutResponseHopLimit, httpPutResponseHopLimit_);
      DARABONBA_PTR_TO_JSON(HttpTokens, httpTokens_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceMetadataOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpEndpoint, httpEndpoint_);
      DARABONBA_PTR_FROM_JSON(HttpPutResponseHopLimit, httpPutResponseHopLimit_);
      DARABONBA_PTR_FROM_JSON(HttpTokens, httpTokens_);
    };
    DescribeInstancesResponseBodyInstancesInstanceMetadataOptions() = default ;
    DescribeInstancesResponseBodyInstancesInstanceMetadataOptions(const DescribeInstancesResponseBodyInstancesInstanceMetadataOptions &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceMetadataOptions(DescribeInstancesResponseBodyInstancesInstanceMetadataOptions &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceMetadataOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceMetadataOptions() = default ;
    DescribeInstancesResponseBodyInstancesInstanceMetadataOptions& operator=(const DescribeInstancesResponseBodyInstancesInstanceMetadataOptions &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceMetadataOptions& operator=(DescribeInstancesResponseBodyInstancesInstanceMetadataOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->httpEndpoint_ != nullptr
        && this->httpPutResponseHopLimit_ != nullptr && this->httpTokens_ != nullptr; };
    // httpEndpoint Field Functions 
    bool hasHttpEndpoint() const { return this->httpEndpoint_ != nullptr;};
    void deleteHttpEndpoint() { this->httpEndpoint_ = nullptr;};
    inline string httpEndpoint() const { DARABONBA_PTR_GET_DEFAULT(httpEndpoint_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceMetadataOptions& setHttpEndpoint(string httpEndpoint) { DARABONBA_PTR_SET_VALUE(httpEndpoint_, httpEndpoint) };


    // httpPutResponseHopLimit Field Functions 
    bool hasHttpPutResponseHopLimit() const { return this->httpPutResponseHopLimit_ != nullptr;};
    void deleteHttpPutResponseHopLimit() { this->httpPutResponseHopLimit_ = nullptr;};
    inline int32_t httpPutResponseHopLimit() const { DARABONBA_PTR_GET_DEFAULT(httpPutResponseHopLimit_, 0) };
    inline DescribeInstancesResponseBodyInstancesInstanceMetadataOptions& setHttpPutResponseHopLimit(int32_t httpPutResponseHopLimit) { DARABONBA_PTR_SET_VALUE(httpPutResponseHopLimit_, httpPutResponseHopLimit) };


    // httpTokens Field Functions 
    bool hasHttpTokens() const { return this->httpTokens_ != nullptr;};
    void deleteHttpTokens() { this->httpTokens_ = nullptr;};
    inline string httpTokens() const { DARABONBA_PTR_GET_DEFAULT(httpTokens_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceMetadataOptions& setHttpTokens(string httpTokens) { DARABONBA_PTR_SET_VALUE(httpTokens_, httpTokens) };


  protected:
    // Indicates whether the access channel is enabled for instance metadata. Valid values:
    // 
    // *   enabled
    // *   disabled
    std::shared_ptr<string> httpEndpoint_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<int32_t> httpPutResponseHopLimit_ = nullptr;
    // Indicates whether the security hardening mode (IMDSv2) is forcefully used to access instance metadata. Valid values:
    // 
    // *   optional: The security hardening mode (IMDSv2) is not forcefully used.
    // *   required: The security hardening mode (IMDSv2) is forcefully used.
    std::shared_ptr<string> httpTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
