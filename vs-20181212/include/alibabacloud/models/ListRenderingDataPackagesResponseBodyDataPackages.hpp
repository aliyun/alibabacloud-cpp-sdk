// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRENDERINGDATAPACKAGESRESPONSEBODYDATAPACKAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTRENDERINGDATAPACKAGESRESPONSEBODYDATAPACKAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListRenderingDataPackagesResponseBodyDataPackages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRenderingDataPackagesResponseBodyDataPackages& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DataPackageId, dataPackageId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListRenderingDataPackagesResponseBodyDataPackages& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DataPackageId, dataPackageId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListRenderingDataPackagesResponseBodyDataPackages() = default ;
    ListRenderingDataPackagesResponseBodyDataPackages(const ListRenderingDataPackagesResponseBodyDataPackages &) = default ;
    ListRenderingDataPackagesResponseBodyDataPackages(ListRenderingDataPackagesResponseBodyDataPackages &&) = default ;
    ListRenderingDataPackagesResponseBodyDataPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRenderingDataPackagesResponseBodyDataPackages() = default ;
    ListRenderingDataPackagesResponseBodyDataPackages& operator=(const ListRenderingDataPackagesResponseBodyDataPackages &) = default ;
    ListRenderingDataPackagesResponseBodyDataPackages& operator=(ListRenderingDataPackagesResponseBodyDataPackages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->creationTime_ != nullptr && this->dataPackageId_ != nullptr && this->description_ != nullptr && this->renderingInstanceId_ != nullptr && this->size_ != nullptr
        && this->status_ != nullptr && this->updateTime_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListRenderingDataPackagesResponseBodyDataPackages& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListRenderingDataPackagesResponseBodyDataPackages& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // dataPackageId Field Functions 
    bool hasDataPackageId() const { return this->dataPackageId_ != nullptr;};
    void deleteDataPackageId() { this->dataPackageId_ = nullptr;};
    inline string dataPackageId() const { DARABONBA_PTR_GET_DEFAULT(dataPackageId_, "") };
    inline ListRenderingDataPackagesResponseBodyDataPackages& setDataPackageId(string dataPackageId) { DARABONBA_PTR_SET_VALUE(dataPackageId_, dataPackageId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListRenderingDataPackagesResponseBodyDataPackages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline ListRenderingDataPackagesResponseBodyDataPackages& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListRenderingDataPackagesResponseBodyDataPackages& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListRenderingDataPackagesResponseBodyDataPackages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListRenderingDataPackagesResponseBodyDataPackages& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> dataPackageId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
