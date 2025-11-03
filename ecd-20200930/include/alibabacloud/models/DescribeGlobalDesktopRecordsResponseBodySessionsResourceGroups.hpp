// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPRECORDSRESPONSEBODYSESSIONSRESOURCEGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPRECORDSRESPONSEBODYSESSIONSRESOURCEGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
    };
    DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups() = default ;
    DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups(const DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups &) = default ;
    DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups(DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups &&) = default ;
    DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups() = default ;
    DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups& operator=(const DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups &) = default ;
    DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups& operator=(DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceGroupId_ == nullptr
        && return this->resourceGroupName_ == nullptr; };
    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline DescribeGlobalDesktopRecordsResponseBodySessionsResourceGroups& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


  protected:
    // The ID of the enterprise resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The queried resource group name.
    std::shared_ptr<string> resourceGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
