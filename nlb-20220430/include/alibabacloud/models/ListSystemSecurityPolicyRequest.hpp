// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMSECURITYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMSECURITYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListSystemSecurityPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemSecurityPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemSecurityPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListSystemSecurityPolicyRequest() = default ;
    ListSystemSecurityPolicyRequest(const ListSystemSecurityPolicyRequest &) = default ;
    ListSystemSecurityPolicyRequest(ListSystemSecurityPolicyRequest &&) = default ;
    ListSystemSecurityPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemSecurityPolicyRequest() = default ;
    ListSystemSecurityPolicyRequest& operator=(const ListSystemSecurityPolicyRequest &) = default ;
    ListSystemSecurityPolicyRequest& operator=(ListSystemSecurityPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListSystemSecurityPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The region ID of the NLB instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
