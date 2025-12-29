// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(with_addon_resources, withAddonResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(with_addon_resources, withAddonResources_);
    };
    DescribeClusterResourcesRequest() = default ;
    DescribeClusterResourcesRequest(const DescribeClusterResourcesRequest &) = default ;
    DescribeClusterResourcesRequest(DescribeClusterResourcesRequest &&) = default ;
    DescribeClusterResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterResourcesRequest() = default ;
    DescribeClusterResourcesRequest& operator=(const DescribeClusterResourcesRequest &) = default ;
    DescribeClusterResourcesRequest& operator=(DescribeClusterResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->withAddonResources_ == nullptr; };
    // withAddonResources Field Functions 
    bool hasWithAddonResources() const { return this->withAddonResources_ != nullptr;};
    void deleteWithAddonResources() { this->withAddonResources_ = nullptr;};
    inline bool getWithAddonResources() const { DARABONBA_PTR_GET_DEFAULT(withAddonResources_, false) };
    inline DescribeClusterResourcesRequest& setWithAddonResources(bool withAddonResources) { DARABONBA_PTR_SET_VALUE(withAddonResources_, withAddonResources) };


  protected:
    // Specifies whether to query the resources created by cluster components.
    shared_ptr<bool> withAddonResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
