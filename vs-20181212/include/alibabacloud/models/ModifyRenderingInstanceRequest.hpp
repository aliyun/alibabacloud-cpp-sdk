// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRENDERINGINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRENDERINGINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ModifyRenderingInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRenderingInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(RenderingSpec, renderingSpec_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRenderingInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(RenderingSpec, renderingSpec_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
    };
    ModifyRenderingInstanceRequest() = default ;
    ModifyRenderingInstanceRequest(const ModifyRenderingInstanceRequest &) = default ;
    ModifyRenderingInstanceRequest(ModifyRenderingInstanceRequest &&) = default ;
    ModifyRenderingInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRenderingInstanceRequest() = default ;
    ModifyRenderingInstanceRequest& operator=(const ModifyRenderingInstanceRequest &) = default ;
    ModifyRenderingInstanceRequest& operator=(ModifyRenderingInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->renderingInstanceId_ == nullptr
        && this->renderingSpec_ == nullptr && this->storageSize_ == nullptr; };
    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline ModifyRenderingInstanceRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // renderingSpec Field Functions 
    bool hasRenderingSpec() const { return this->renderingSpec_ != nullptr;};
    void deleteRenderingSpec() { this->renderingSpec_ = nullptr;};
    inline string getRenderingSpec() const { DARABONBA_PTR_GET_DEFAULT(renderingSpec_, "") };
    inline ModifyRenderingInstanceRequest& setRenderingSpec(string renderingSpec) { DARABONBA_PTR_SET_VALUE(renderingSpec_, renderingSpec) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline string getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, "") };
    inline ModifyRenderingInstanceRequest& setStorageSize(string storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


  protected:
    // This parameter is required.
    shared_ptr<string> renderingInstanceId_ {};
    shared_ptr<string> renderingSpec_ {};
    shared_ptr<string> storageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
