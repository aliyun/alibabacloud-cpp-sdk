// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLEIMAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLEIMAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class Scheduler : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Scheduler& obj) { 
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Scheduler& obj) { 
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Scheduler() = default ;
      Scheduler(const Scheduler &) = default ;
      Scheduler(Scheduler &&) = default ;
      Scheduler(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Scheduler() = default ;
      Scheduler& operator=(const Scheduler &) = default ;
      Scheduler& operator=(Scheduler &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr
        && this->version_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Scheduler& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Scheduler& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The scheduler type.
      shared_ptr<string> type_ {};
      // The scheduler version.
      shared_ptr<string> version_ {};
    };

    class DirectoryService : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DirectoryService& obj) { 
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, DirectoryService& obj) { 
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      DirectoryService() = default ;
      DirectoryService(const DirectoryService &) = default ;
      DirectoryService(DirectoryService &&) = default ;
      DirectoryService(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DirectoryService() = default ;
      DirectoryService& operator=(const DirectoryService &) = default ;
      DirectoryService& operator=(DirectoryService &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr
        && this->version_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline DirectoryService& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline DirectoryService& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The type of the domain account.
      shared_ptr<string> type_ {};
      // The version of the domain account service.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->directoryService_ == nullptr
        && this->enableHT_ == nullptr && this->HPCInterConnect_ == nullptr && this->imageOwnerAlias_ == nullptr && this->instanceType_ == nullptr && this->isPublic_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->scheduler_ == nullptr; };
    // directoryService Field Functions 
    bool hasDirectoryService() const { return this->directoryService_ != nullptr;};
    void deleteDirectoryService() { this->directoryService_ = nullptr;};
    inline const ListAvailableImagesRequest::DirectoryService & getDirectoryService() const { DARABONBA_PTR_GET_CONST(directoryService_, ListAvailableImagesRequest::DirectoryService) };
    inline ListAvailableImagesRequest::DirectoryService getDirectoryService() { DARABONBA_PTR_GET(directoryService_, ListAvailableImagesRequest::DirectoryService) };
    inline ListAvailableImagesRequest& setDirectoryService(const ListAvailableImagesRequest::DirectoryService & directoryService) { DARABONBA_PTR_SET_VALUE(directoryService_, directoryService) };
    inline ListAvailableImagesRequest& setDirectoryService(ListAvailableImagesRequest::DirectoryService && directoryService) { DARABONBA_PTR_SET_RVALUE(directoryService_, directoryService) };


    // enableHT Field Functions 
    bool hasEnableHT() const { return this->enableHT_ != nullptr;};
    void deleteEnableHT() { this->enableHT_ = nullptr;};
    inline bool getEnableHT() const { DARABONBA_PTR_GET_DEFAULT(enableHT_, false) };
    inline ListAvailableImagesRequest& setEnableHT(bool enableHT) { DARABONBA_PTR_SET_VALUE(enableHT_, enableHT) };


    // HPCInterConnect Field Functions 
    bool hasHPCInterConnect() const { return this->HPCInterConnect_ != nullptr;};
    void deleteHPCInterConnect() { this->HPCInterConnect_ = nullptr;};
    inline string getHPCInterConnect() const { DARABONBA_PTR_GET_DEFAULT(HPCInterConnect_, "") };
    inline ListAvailableImagesRequest& setHPCInterConnect(string HPCInterConnect) { DARABONBA_PTR_SET_VALUE(HPCInterConnect_, HPCInterConnect) };


    // imageOwnerAlias Field Functions 
    bool hasImageOwnerAlias() const { return this->imageOwnerAlias_ != nullptr;};
    void deleteImageOwnerAlias() { this->imageOwnerAlias_ = nullptr;};
    inline string getImageOwnerAlias() const { DARABONBA_PTR_GET_DEFAULT(imageOwnerAlias_, "") };
    inline ListAvailableImagesRequest& setImageOwnerAlias(string imageOwnerAlias) { DARABONBA_PTR_SET_VALUE(imageOwnerAlias_, imageOwnerAlias) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListAvailableImagesRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // isPublic Field Functions 
    bool hasIsPublic() const { return this->isPublic_ != nullptr;};
    void deleteIsPublic() { this->isPublic_ = nullptr;};
    inline bool getIsPublic() const { DARABONBA_PTR_GET_DEFAULT(isPublic_, false) };
    inline ListAvailableImagesRequest& setIsPublic(bool isPublic) { DARABONBA_PTR_SET_VALUE(isPublic_, isPublic) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAvailableImagesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAvailableImagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline const ListAvailableImagesRequest::Scheduler & getScheduler() const { DARABONBA_PTR_GET_CONST(scheduler_, ListAvailableImagesRequest::Scheduler) };
    inline ListAvailableImagesRequest::Scheduler getScheduler() { DARABONBA_PTR_GET(scheduler_, ListAvailableImagesRequest::Scheduler) };
    inline ListAvailableImagesRequest& setScheduler(const ListAvailableImagesRequest::Scheduler & scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };
    inline ListAvailableImagesRequest& setScheduler(ListAvailableImagesRequest::Scheduler && scheduler) { DARABONBA_PTR_SET_RVALUE(scheduler_, scheduler) };


  protected:
    // The information about the domain account service.
    shared_ptr<ListAvailableImagesRequest::DirectoryService> directoryService_ {};
    // Specifies whether to return images in which hyper-threading is enabled.
    shared_ptr<bool> enableHT_ {};
    // The network type of the images that you want to query.
    shared_ptr<string> HPCInterConnect_ {};
    // The image source. Valid values:
    // 
    // *   system: system image.
    // *   self: custom image.
    // *   others: shared image.
    shared_ptr<string> imageOwnerAlias_ {};
    // The instance type.
    // 
    // >  By default, if you do not specify an instance type, the list of images that are supported by all instance types are queried. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
    shared_ptr<string> instanceType_ {};
    // Specifies whether to return published community images. Valid values:
    // 
    // *   true: returns published community images. If you set the value of this parameter to `true`, the `ImageOwnerAlias` parameter must be set to `others`.
    // *   false: returns non-community images. The value of the `ImageOwnerAlias` parameter prevails.
    // 
    // Default value: false.
    shared_ptr<bool> isPublic_ {};
    // The page number of the page to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 50. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The scheduler information about the images that you want to query.
    shared_ptr<ListAvailableImagesRequest::Scheduler> scheduler_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
