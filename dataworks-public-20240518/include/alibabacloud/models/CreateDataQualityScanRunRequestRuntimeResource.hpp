// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYSCANRUNREQUESTRUNTIMERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYSCANRUNREQUESTRUNTIMERESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityScanRunRequestRuntimeResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityScanRunRequestRuntimeResource& obj) { 
      DARABONBA_PTR_TO_JSON(Cu, cu_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Image, image_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityScanRunRequestRuntimeResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Cu, cu_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
    };
    CreateDataQualityScanRunRequestRuntimeResource() = default ;
    CreateDataQualityScanRunRequestRuntimeResource(const CreateDataQualityScanRunRequestRuntimeResource &) = default ;
    CreateDataQualityScanRunRequestRuntimeResource(CreateDataQualityScanRunRequestRuntimeResource &&) = default ;
    CreateDataQualityScanRunRequestRuntimeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityScanRunRequestRuntimeResource() = default ;
    CreateDataQualityScanRunRequestRuntimeResource& operator=(const CreateDataQualityScanRunRequestRuntimeResource &) = default ;
    CreateDataQualityScanRunRequestRuntimeResource& operator=(CreateDataQualityScanRunRequestRuntimeResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cu_ != nullptr
        && this->id_ != nullptr && this->image_ != nullptr; };
    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline float cu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0.0) };
    inline CreateDataQualityScanRunRequestRuntimeResource& setCu(float cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateDataQualityScanRunRequestRuntimeResource& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline CreateDataQualityScanRunRequestRuntimeResource& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


  protected:
    // The Compute Resources (CUs) reserved for running the data quality monitor in the resource group.
    std::shared_ptr<float> cu_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> id_ = nullptr;
    // The image settings used when running the data quality monitor in the resource group.
    std::shared_ptr<string> image_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
