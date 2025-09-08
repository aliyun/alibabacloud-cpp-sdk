// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWAFSCOPERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWAFSCOPERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeWafScopeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWafScopeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWafScopeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DescribeWafScopeResponseBodyData() = default ;
    DescribeWafScopeResponseBodyData(const DescribeWafScopeResponseBodyData &) = default ;
    DescribeWafScopeResponseBodyData(DescribeWafScopeResponseBodyData &&) = default ;
    DescribeWafScopeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWafScopeResponseBodyData() = default ;
    DescribeWafScopeResponseBodyData& operator=(const DescribeWafScopeResponseBodyData &) = default ;
    DescribeWafScopeResponseBodyData& operator=(DescribeWafScopeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliuid_ != nullptr
        && this->domains_ != nullptr && this->instanceId_ != nullptr; };
    // aliuid Field Functions 
    bool hasAliuid() const { return this->aliuid_ != nullptr;};
    void deleteAliuid() { this->aliuid_ = nullptr;};
    inline int64_t aliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, 0L) };
    inline DescribeWafScopeResponseBodyData& setAliuid(int64_t aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<string> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
    inline vector<string> domains() { DARABONBA_PTR_GET(domains_, vector<string>) };
    inline DescribeWafScopeResponseBodyData& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribeWafScopeResponseBodyData& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeWafScopeResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the Alibaba Cloud account in SIEM.
    std::shared_ptr<int64_t> aliuid_ = nullptr;
    // The domain names that are protected by the WAF instance.
    std::shared_ptr<vector<string>> domains_ = nullptr;
    // The ID of the WAF instance.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
