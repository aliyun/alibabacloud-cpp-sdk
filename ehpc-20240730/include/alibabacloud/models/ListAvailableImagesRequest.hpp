// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLEIMAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLEIMAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAvailableImagesRequestDirectoryService.hpp>
#include <alibabacloud/models/ListAvailableImagesRequestScheduler.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListAvailableImagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableImagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryService, directoryService_);
      DARABONBA_PTR_TO_JSON(EnableHT, enableHT_);
      DARABONBA_PTR_TO_JSON(HPCInterConnect, HPCInterConnect_);
      DARABONBA_PTR_TO_JSON(ImageOwnerAlias, imageOwnerAlias_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(IsPublic, isPublic_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableImagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryService, directoryService_);
      DARABONBA_PTR_FROM_JSON(EnableHT, enableHT_);
      DARABONBA_PTR_FROM_JSON(HPCInterConnect, HPCInterConnect_);
      DARABONBA_PTR_FROM_JSON(ImageOwnerAlias, imageOwnerAlias_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(IsPublic, isPublic_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
    };
    ListAvailableImagesRequest() = default ;
    ListAvailableImagesRequest(const ListAvailableImagesRequest &) = default ;
    ListAvailableImagesRequest(ListAvailableImagesRequest &&) = default ;
    ListAvailableImagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableImagesRequest() = default ;
    ListAvailableImagesRequest& operator=(const ListAvailableImagesRequest &) = default ;
    ListAvailableImagesRequest& operator=(ListAvailableImagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryService_ == nullptr
        && return this->enableHT_ == nullptr && return this->HPCInterConnect_ == nullptr && return this->imageOwnerAlias_ == nullptr && return this->instanceType_ == nullptr && return this->isPublic_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->scheduler_ == nullptr; };
    // directoryService Field Functions 
    bool hasDirectoryService() const { return this->directoryService_ != nullptr;};
    void deleteDirectoryService() { this->directoryService_ = nullptr;};
    inline const ListAvailableImagesRequestDirectoryService & directoryService() const { DARABONBA_PTR_GET_CONST(directoryService_, ListAvailableImagesRequestDirectoryService) };
    inline ListAvailableImagesRequestDirectoryService directoryService() { DARABONBA_PTR_GET(directoryService_, ListAvailableImagesRequestDirectoryService) };
    inline ListAvailableImagesRequest& setDirectoryService(const ListAvailableImagesRequestDirectoryService & directoryService) { DARABONBA_PTR_SET_VALUE(directoryService_, directoryService) };
    inline ListAvailableImagesRequest& setDirectoryService(ListAvailableImagesRequestDirectoryService && directoryService) { DARABONBA_PTR_SET_RVALUE(directoryService_, directoryService) };


    // enableHT Field Functions 
    bool hasEnableHT() const { return this->enableHT_ != nullptr;};
    void deleteEnableHT() { this->enableHT_ = nullptr;};
    inline bool enableHT() const { DARABONBA_PTR_GET_DEFAULT(enableHT_, false) };
    inline ListAvailableImagesRequest& setEnableHT(bool enableHT) { DARABONBA_PTR_SET_VALUE(enableHT_, enableHT) };


    // HPCInterConnect Field Functions 
    bool hasHPCInterConnect() const { return this->HPCInterConnect_ != nullptr;};
    void deleteHPCInterConnect() { this->HPCInterConnect_ = nullptr;};
    inline string HPCInterConnect() const { DARABONBA_PTR_GET_DEFAULT(HPCInterConnect_, "") };
    inline ListAvailableImagesRequest& setHPCInterConnect(string HPCInterConnect) { DARABONBA_PTR_SET_VALUE(HPCInterConnect_, HPCInterConnect) };


    // imageOwnerAlias Field Functions 
    bool hasImageOwnerAlias() const { return this->imageOwnerAlias_ != nullptr;};
    void deleteImageOwnerAlias() { this->imageOwnerAlias_ = nullptr;};
    inline string imageOwnerAlias() const { DARABONBA_PTR_GET_DEFAULT(imageOwnerAlias_, "") };
    inline ListAvailableImagesRequest& setImageOwnerAlias(string imageOwnerAlias) { DARABONBA_PTR_SET_VALUE(imageOwnerAlias_, imageOwnerAlias) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListAvailableImagesRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // isPublic Field Functions 
    bool hasIsPublic() const { return this->isPublic_ != nullptr;};
    void deleteIsPublic() { this->isPublic_ = nullptr;};
    inline bool isPublic() const { DARABONBA_PTR_GET_DEFAULT(isPublic_, false) };
    inline ListAvailableImagesRequest& setIsPublic(bool isPublic) { DARABONBA_PTR_SET_VALUE(isPublic_, isPublic) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAvailableImagesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAvailableImagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline const ListAvailableImagesRequestScheduler & scheduler() const { DARABONBA_PTR_GET_CONST(scheduler_, ListAvailableImagesRequestScheduler) };
    inline ListAvailableImagesRequestScheduler scheduler() { DARABONBA_PTR_GET(scheduler_, ListAvailableImagesRequestScheduler) };
    inline ListAvailableImagesRequest& setScheduler(const ListAvailableImagesRequestScheduler & scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };
    inline ListAvailableImagesRequest& setScheduler(ListAvailableImagesRequestScheduler && scheduler) { DARABONBA_PTR_SET_RVALUE(scheduler_, scheduler) };


  protected:
    // The information about the domain account service.
    std::shared_ptr<ListAvailableImagesRequestDirectoryService> directoryService_ = nullptr;
    // Specifies whether to return images in which hyper-threading is enabled.
    std::shared_ptr<bool> enableHT_ = nullptr;
    // The network type of the images that you want to query.
    std::shared_ptr<string> HPCInterConnect_ = nullptr;
    // The image source. Valid values:
    // 
    // *   system: system image.
    // *   self: custom image.
    // *   others: shared image.
    std::shared_ptr<string> imageOwnerAlias_ = nullptr;
    // The instance type.
    // 
    // >  By default, if you do not specify an instance type, the list of images that are supported by all instance types are queried. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
    std::shared_ptr<string> instanceType_ = nullptr;
    // Specifies whether to return published community images. Valid values:
    // 
    // *   true: returns published community images. If you set the value of this parameter to `true`, the `ImageOwnerAlias` parameter must be set to `others`.
    // *   false: returns non-community images. The value of the `ImageOwnerAlias` parameter prevails.
    // 
    // Default value: false.
    std::shared_ptr<bool> isPublic_ = nullptr;
    // The page number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 50. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The scheduler information about the images that you want to query.
    std::shared_ptr<ListAvailableImagesRequestScheduler> scheduler_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
