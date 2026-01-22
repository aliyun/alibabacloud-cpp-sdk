// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRENDERINGDATAPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRENDERINGDATAPACKAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListRenderingDataPackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRenderingDataPackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataPackages, dataPackages_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRenderingDataPackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataPackages, dataPackages_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRenderingDataPackagesResponseBody() = default ;
    ListRenderingDataPackagesResponseBody(const ListRenderingDataPackagesResponseBody &) = default ;
    ListRenderingDataPackagesResponseBody(ListRenderingDataPackagesResponseBody &&) = default ;
    ListRenderingDataPackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRenderingDataPackagesResponseBody() = default ;
    ListRenderingDataPackagesResponseBody& operator=(const ListRenderingDataPackagesResponseBody &) = default ;
    ListRenderingDataPackagesResponseBody& operator=(ListRenderingDataPackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataPackages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataPackages& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DataPackageId, dataPackageId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, DataPackages& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DataPackageId, dataPackageId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      DataPackages() = default ;
      DataPackages(const DataPackages &) = default ;
      DataPackages(DataPackages &&) = default ;
      DataPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataPackages() = default ;
      DataPackages& operator=(const DataPackages &) = default ;
      DataPackages& operator=(DataPackages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->creationTime_ == nullptr && this->dataPackageId_ == nullptr && this->description_ == nullptr && this->renderingInstanceId_ == nullptr && this->size_ == nullptr
        && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline DataPackages& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline DataPackages& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // dataPackageId Field Functions 
      bool hasDataPackageId() const { return this->dataPackageId_ != nullptr;};
      void deleteDataPackageId() { this->dataPackageId_ = nullptr;};
      inline string getDataPackageId() const { DARABONBA_PTR_GET_DEFAULT(dataPackageId_, "") };
      inline DataPackages& setDataPackageId(string dataPackageId) { DARABONBA_PTR_SET_VALUE(dataPackageId_, dataPackageId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DataPackages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // renderingInstanceId Field Functions 
      bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
      void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
      inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
      inline DataPackages& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline DataPackages& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DataPackages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline DataPackages& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> category_ {};
      shared_ptr<string> creationTime_ {};
      shared_ptr<string> dataPackageId_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> renderingInstanceId_ {};
      shared_ptr<int32_t> size_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->dataPackages_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dataPackages Field Functions 
    bool hasDataPackages() const { return this->dataPackages_ != nullptr;};
    void deleteDataPackages() { this->dataPackages_ = nullptr;};
    inline const vector<ListRenderingDataPackagesResponseBody::DataPackages> & getDataPackages() const { DARABONBA_PTR_GET_CONST(dataPackages_, vector<ListRenderingDataPackagesResponseBody::DataPackages>) };
    inline vector<ListRenderingDataPackagesResponseBody::DataPackages> getDataPackages() { DARABONBA_PTR_GET(dataPackages_, vector<ListRenderingDataPackagesResponseBody::DataPackages>) };
    inline ListRenderingDataPackagesResponseBody& setDataPackages(const vector<ListRenderingDataPackagesResponseBody::DataPackages> & dataPackages) { DARABONBA_PTR_SET_VALUE(dataPackages_, dataPackages) };
    inline ListRenderingDataPackagesResponseBody& setDataPackages(vector<ListRenderingDataPackagesResponseBody::DataPackages> && dataPackages) { DARABONBA_PTR_SET_RVALUE(dataPackages_, dataPackages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRenderingDataPackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRenderingDataPackagesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListRenderingDataPackagesResponseBody::DataPackages>> dataPackages_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
