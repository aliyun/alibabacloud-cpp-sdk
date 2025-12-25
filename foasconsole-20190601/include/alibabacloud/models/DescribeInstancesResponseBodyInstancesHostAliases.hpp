// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESHOSTALIASES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESHOSTALIASES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesHostAliases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesHostAliases& obj) { 
      DARABONBA_PTR_TO_JSON(HostNames, hostNames_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesHostAliases& obj) { 
      DARABONBA_PTR_FROM_JSON(HostNames, hostNames_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
    };
    DescribeInstancesResponseBodyInstancesHostAliases() = default ;
    DescribeInstancesResponseBodyInstancesHostAliases(const DescribeInstancesResponseBodyInstancesHostAliases &) = default ;
    DescribeInstancesResponseBodyInstancesHostAliases(DescribeInstancesResponseBodyInstancesHostAliases &&) = default ;
    DescribeInstancesResponseBodyInstancesHostAliases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesHostAliases() = default ;
    DescribeInstancesResponseBodyInstancesHostAliases& operator=(const DescribeInstancesResponseBodyInstancesHostAliases &) = default ;
    DescribeInstancesResponseBodyInstancesHostAliases& operator=(DescribeInstancesResponseBodyInstancesHostAliases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostNames_ == nullptr
        && return this->ip_ == nullptr; };
    // hostNames Field Functions 
    bool hasHostNames() const { return this->hostNames_ != nullptr;};
    void deleteHostNames() { this->hostNames_ = nullptr;};
    inline const vector<string> & hostNames() const { DARABONBA_PTR_GET_CONST(hostNames_, vector<string>) };
    inline vector<string> hostNames() { DARABONBA_PTR_GET(hostNames_, vector<string>) };
    inline DescribeInstancesResponseBodyInstancesHostAliases& setHostNames(const vector<string> & hostNames) { DARABONBA_PTR_SET_VALUE(hostNames_, hostNames) };
    inline DescribeInstancesResponseBodyInstancesHostAliases& setHostNames(vector<string> && hostNames) { DARABONBA_PTR_SET_RVALUE(hostNames_, hostNames) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeInstancesResponseBodyInstancesHostAliases& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> hostNames_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
