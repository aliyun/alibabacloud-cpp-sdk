// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEIDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEIDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstanceIdsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceIdsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceIdsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DescribeInstanceIdsRequest() = default ;
    DescribeInstanceIdsRequest(const DescribeInstanceIdsRequest &) = default ;
    DescribeInstanceIdsRequest(DescribeInstanceIdsRequest &&) = default ;
    DescribeInstanceIdsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceIdsRequest() = default ;
    DescribeInstanceIdsRequest& operator=(const DescribeInstanceIdsRequest &) = default ;
    DescribeInstanceIdsRequest& operator=(DescribeInstanceIdsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edition_ == nullptr
        && this->instanceIds_ == nullptr && this->resourceGroupId_ == nullptr; };
    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline int32_t getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, 0) };
    inline DescribeInstanceIdsRequest& setEdition(int32_t edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeInstanceIdsRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeInstanceIdsRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeInstanceIdsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The edition of the Anti-DDoS Pro or Anti-DDoS Premium instance to query. Valid values:
    // 
    // - **0**: Anti-DDoS Pro or Anti-DDoS Premium (outside the Chinese mainland) Insurance Edition.
    // - **1**: Anti-DDoS Pro or Anti-DDoS Premium (outside the Chinese mainland) Unlimited Edition.
    // - **2**: Anti-DDoS Pro or Anti-DDoS Premium (outside the Chinese mainland) Acceleration Line.
    // - **3**: Anti-DDoS Pro or Anti-DDoS Premium (outside the Chinese mainland) Secure Acceleration Line.
    // - **9**: Anti-DDoS Pro or Anti-DDoS Premium (the Chinese mainland) Professional Edition.
    shared_ptr<int32_t> edition_ {};
    // The IDs of the Anti-DDoS Pro or Anti-DDoS Premium instances to query. Maximum value of N: 200.
    shared_ptr<vector<string>> instanceIds_ {};
    // The ID of the resource group to which the Anti-DDoS Pro or Anti-DDoS Premium instance belongs in Resource Management.
    // 
    // If you do not specify this parameter, the default resource group is used.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
