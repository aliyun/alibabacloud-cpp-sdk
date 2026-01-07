// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRTUALRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRTUALRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListVirtualResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirtualResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VirtualResources, virtualResources_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirtualResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VirtualResources, virtualResources_);
    };
    ListVirtualResourceResponseBody() = default ;
    ListVirtualResourceResponseBody(const ListVirtualResourceResponseBody &) = default ;
    ListVirtualResourceResponseBody(ListVirtualResourceResponseBody &&) = default ;
    ListVirtualResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirtualResourceResponseBody() = default ;
    ListVirtualResourceResponseBody& operator=(const ListVirtualResourceResponseBody &) = default ;
    ListVirtualResourceResponseBody& operator=(ListVirtualResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VirtualResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VirtualResources& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ServiceCount, serviceCount_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(VirtualResourceId, virtualResourceId_);
        DARABONBA_PTR_TO_JSON(VirtualResourceName, virtualResourceName_);
      };
      friend void from_json(const Darabonba::Json& j, VirtualResources& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ServiceCount, serviceCount_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(VirtualResourceId, virtualResourceId_);
        DARABONBA_PTR_FROM_JSON(VirtualResourceName, virtualResourceName_);
      };
      VirtualResources() = default ;
      VirtualResources(const VirtualResources &) = default ;
      VirtualResources(VirtualResources &&) = default ;
      VirtualResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VirtualResources() = default ;
      VirtualResources& operator=(const VirtualResources &) = default ;
      VirtualResources& operator=(VirtualResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->serviceCount_ == nullptr && this->updateTime_ == nullptr && this->virtualResourceId_ == nullptr && this->virtualResourceName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline VirtualResources& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // serviceCount Field Functions 
      bool hasServiceCount() const { return this->serviceCount_ != nullptr;};
      void deleteServiceCount() { this->serviceCount_ = nullptr;};
      inline int32_t getServiceCount() const { DARABONBA_PTR_GET_DEFAULT(serviceCount_, 0) };
      inline VirtualResources& setServiceCount(int32_t serviceCount) { DARABONBA_PTR_SET_VALUE(serviceCount_, serviceCount) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline VirtualResources& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // virtualResourceId Field Functions 
      bool hasVirtualResourceId() const { return this->virtualResourceId_ != nullptr;};
      void deleteVirtualResourceId() { this->virtualResourceId_ = nullptr;};
      inline string getVirtualResourceId() const { DARABONBA_PTR_GET_DEFAULT(virtualResourceId_, "") };
      inline VirtualResources& setVirtualResourceId(string virtualResourceId) { DARABONBA_PTR_SET_VALUE(virtualResourceId_, virtualResourceId) };


      // virtualResourceName Field Functions 
      bool hasVirtualResourceName() const { return this->virtualResourceName_ != nullptr;};
      void deleteVirtualResourceName() { this->virtualResourceName_ = nullptr;};
      inline string getVirtualResourceName() const { DARABONBA_PTR_GET_DEFAULT(virtualResourceName_, "") };
      inline VirtualResources& setVirtualResourceName(string virtualResourceName) { DARABONBA_PTR_SET_VALUE(virtualResourceName_, virtualResourceName) };


    protected:
      // The time when the virtual resource group was created.
      shared_ptr<string> createTime_ {};
      // The number of deployed services.
      shared_ptr<int32_t> serviceCount_ {};
      // The time when the virtual resource group was last updated.
      shared_ptr<string> updateTime_ {};
      // The ID of the virtual resource group.
      shared_ptr<string> virtualResourceId_ {};
      // The name of the virtual resource group.
      shared_ptr<string> virtualResourceName_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->virtualResources_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListVirtualResourceResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListVirtualResourceResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVirtualResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListVirtualResourceResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // virtualResources Field Functions 
    bool hasVirtualResources() const { return this->virtualResources_ != nullptr;};
    void deleteVirtualResources() { this->virtualResources_ = nullptr;};
    inline const vector<ListVirtualResourceResponseBody::VirtualResources> & getVirtualResources() const { DARABONBA_PTR_GET_CONST(virtualResources_, vector<ListVirtualResourceResponseBody::VirtualResources>) };
    inline vector<ListVirtualResourceResponseBody::VirtualResources> getVirtualResources() { DARABONBA_PTR_GET(virtualResources_, vector<ListVirtualResourceResponseBody::VirtualResources>) };
    inline ListVirtualResourceResponseBody& setVirtualResources(const vector<ListVirtualResourceResponseBody::VirtualResources> & virtualResources) { DARABONBA_PTR_SET_VALUE(virtualResources_, virtualResources) };
    inline ListVirtualResourceResponseBody& setVirtualResources(vector<ListVirtualResourceResponseBody::VirtualResources> && virtualResources) { DARABONBA_PTR_SET_RVALUE(virtualResources_, virtualResources) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The virtual resource groups.
    shared_ptr<vector<ListVirtualResourceResponseBody::VirtualResources>> virtualResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
