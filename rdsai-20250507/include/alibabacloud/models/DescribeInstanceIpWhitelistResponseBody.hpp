// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEIPWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEIPWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeInstanceIpWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceIpWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IpWhiteListGroups, ipWhiteListGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceIpWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IpWhiteListGroups, ipWhiteListGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceIpWhitelistResponseBody() = default ;
    DescribeInstanceIpWhitelistResponseBody(const DescribeInstanceIpWhitelistResponseBody &) = default ;
    DescribeInstanceIpWhitelistResponseBody(DescribeInstanceIpWhitelistResponseBody &&) = default ;
    DescribeInstanceIpWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceIpWhitelistResponseBody() = default ;
    DescribeInstanceIpWhitelistResponseBody& operator=(const DescribeInstanceIpWhitelistResponseBody &) = default ;
    DescribeInstanceIpWhitelistResponseBody& operator=(DescribeInstanceIpWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceName_ == nullptr
        && return this->ipWhiteListGroups_ == nullptr && return this->requestId_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeInstanceIpWhitelistResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // ipWhiteListGroups Field Functions 
    bool hasIpWhiteListGroups() const { return this->ipWhiteListGroups_ != nullptr;};
    void deleteIpWhiteListGroups() { this->ipWhiteListGroups_ = nullptr;};
    inline const vector<DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups> & ipWhiteListGroups() const { DARABONBA_PTR_GET_CONST(ipWhiteListGroups_, vector<DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups>) };
    inline vector<DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups> ipWhiteListGroups() { DARABONBA_PTR_GET(ipWhiteListGroups_, vector<DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups>) };
    inline DescribeInstanceIpWhitelistResponseBody& setIpWhiteListGroups(const vector<DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups> & ipWhiteListGroups) { DARABONBA_PTR_SET_VALUE(ipWhiteListGroups_, ipWhiteListGroups) };
    inline DescribeInstanceIpWhitelistResponseBody& setIpWhiteListGroups(vector<DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups> && ipWhiteListGroups) { DARABONBA_PTR_SET_RVALUE(ipWhiteListGroups_, ipWhiteListGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceIpWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<vector<DescribeInstanceIpWhitelistResponseBodyIpWhiteListGroups>> ipWhiteListGroups_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
