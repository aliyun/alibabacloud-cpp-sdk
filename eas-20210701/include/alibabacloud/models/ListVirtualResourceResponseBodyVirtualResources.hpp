// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRTUALRESOURCERESPONSEBODYVIRTUALRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRTUALRESOURCERESPONSEBODYVIRTUALRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListVirtualResourceResponseBodyVirtualResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirtualResourceResponseBodyVirtualResources& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ServiceCount, serviceCount_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VirtualResourceId, virtualResourceId_);
      DARABONBA_PTR_TO_JSON(VirtualResourceName, virtualResourceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirtualResourceResponseBodyVirtualResources& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ServiceCount, serviceCount_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VirtualResourceId, virtualResourceId_);
      DARABONBA_PTR_FROM_JSON(VirtualResourceName, virtualResourceName_);
    };
    ListVirtualResourceResponseBodyVirtualResources() = default ;
    ListVirtualResourceResponseBodyVirtualResources(const ListVirtualResourceResponseBodyVirtualResources &) = default ;
    ListVirtualResourceResponseBodyVirtualResources(ListVirtualResourceResponseBodyVirtualResources &&) = default ;
    ListVirtualResourceResponseBodyVirtualResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirtualResourceResponseBodyVirtualResources() = default ;
    ListVirtualResourceResponseBodyVirtualResources& operator=(const ListVirtualResourceResponseBodyVirtualResources &) = default ;
    ListVirtualResourceResponseBodyVirtualResources& operator=(ListVirtualResourceResponseBodyVirtualResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->serviceCount_ != nullptr && this->updateTime_ != nullptr && this->virtualResourceId_ != nullptr && this->virtualResourceName_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListVirtualResourceResponseBodyVirtualResources& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // serviceCount Field Functions 
    bool hasServiceCount() const { return this->serviceCount_ != nullptr;};
    void deleteServiceCount() { this->serviceCount_ = nullptr;};
    inline int32_t serviceCount() const { DARABONBA_PTR_GET_DEFAULT(serviceCount_, 0) };
    inline ListVirtualResourceResponseBodyVirtualResources& setServiceCount(int32_t serviceCount) { DARABONBA_PTR_SET_VALUE(serviceCount_, serviceCount) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListVirtualResourceResponseBodyVirtualResources& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // virtualResourceId Field Functions 
    bool hasVirtualResourceId() const { return this->virtualResourceId_ != nullptr;};
    void deleteVirtualResourceId() { this->virtualResourceId_ = nullptr;};
    inline string virtualResourceId() const { DARABONBA_PTR_GET_DEFAULT(virtualResourceId_, "") };
    inline ListVirtualResourceResponseBodyVirtualResources& setVirtualResourceId(string virtualResourceId) { DARABONBA_PTR_SET_VALUE(virtualResourceId_, virtualResourceId) };


    // virtualResourceName Field Functions 
    bool hasVirtualResourceName() const { return this->virtualResourceName_ != nullptr;};
    void deleteVirtualResourceName() { this->virtualResourceName_ = nullptr;};
    inline string virtualResourceName() const { DARABONBA_PTR_GET_DEFAULT(virtualResourceName_, "") };
    inline ListVirtualResourceResponseBodyVirtualResources& setVirtualResourceName(string virtualResourceName) { DARABONBA_PTR_SET_VALUE(virtualResourceName_, virtualResourceName) };


  protected:
    // The time when the virtual resource group was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The number of deployed services.
    std::shared_ptr<int32_t> serviceCount_ = nullptr;
    // The time when the virtual resource group was last updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The ID of the virtual resource group.
    std::shared_ptr<string> virtualResourceId_ = nullptr;
    // The name of the virtual resource group.
    std::shared_ptr<string> virtualResourceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
