// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRENDERINGINSTANCESRESPONSEBODYRENDERINGINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTRENDERINGINSTANCESRESPONSEBODYRENDERINGINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListRenderingInstancesResponseBodyRenderingInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRenderingInstancesResponseBodyRenderingInstances& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(RenderingSpec, renderingSpec_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListRenderingInstancesResponseBodyRenderingInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(RenderingSpec, renderingSpec_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
    };
    ListRenderingInstancesResponseBodyRenderingInstances() = default ;
    ListRenderingInstancesResponseBodyRenderingInstances(const ListRenderingInstancesResponseBodyRenderingInstances &) = default ;
    ListRenderingInstancesResponseBodyRenderingInstances(ListRenderingInstancesResponseBodyRenderingInstances &&) = default ;
    ListRenderingInstancesResponseBodyRenderingInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRenderingInstancesResponseBodyRenderingInstances() = default ;
    ListRenderingInstancesResponseBodyRenderingInstances& operator=(const ListRenderingInstancesResponseBodyRenderingInstances &) = default ;
    ListRenderingInstancesResponseBodyRenderingInstances& operator=(ListRenderingInstancesResponseBodyRenderingInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->renderingInstanceId_ == nullptr && return this->renderingSpec_ == nullptr && return this->storageSize_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListRenderingInstancesResponseBodyRenderingInstances& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline ListRenderingInstancesResponseBodyRenderingInstances& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // renderingSpec Field Functions 
    bool hasRenderingSpec() const { return this->renderingSpec_ != nullptr;};
    void deleteRenderingSpec() { this->renderingSpec_ = nullptr;};
    inline string renderingSpec() const { DARABONBA_PTR_GET_DEFAULT(renderingSpec_, "") };
    inline ListRenderingInstancesResponseBodyRenderingInstances& setRenderingSpec(string renderingSpec) { DARABONBA_PTR_SET_VALUE(renderingSpec_, renderingSpec) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int32_t storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
    inline ListRenderingInstancesResponseBodyRenderingInstances& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


  protected:
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
    std::shared_ptr<string> renderingSpec_ = nullptr;
    std::shared_ptr<int32_t> storageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
