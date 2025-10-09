// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYSCANREQUESTRUNTIMERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYSCANREQUESTRUNTIMERESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityScanRequestRuntimeResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityScanRequestRuntimeResource& obj) { 
      DARABONBA_PTR_TO_JSON(Cu, cu_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Image, image_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityScanRequestRuntimeResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Cu, cu_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
    };
    CreateDataQualityScanRequestRuntimeResource() = default ;
    CreateDataQualityScanRequestRuntimeResource(const CreateDataQualityScanRequestRuntimeResource &) = default ;
    CreateDataQualityScanRequestRuntimeResource(CreateDataQualityScanRequestRuntimeResource &&) = default ;
    CreateDataQualityScanRequestRuntimeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityScanRequestRuntimeResource() = default ;
    CreateDataQualityScanRequestRuntimeResource& operator=(const CreateDataQualityScanRequestRuntimeResource &) = default ;
    CreateDataQualityScanRequestRuntimeResource& operator=(CreateDataQualityScanRequestRuntimeResource &&) = default ;
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
    inline CreateDataQualityScanRequestRuntimeResource& setCu(float cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateDataQualityScanRequestRuntimeResource& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline CreateDataQualityScanRequestRuntimeResource& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


  protected:
    // The default number of CUs configured for task running.
    std::shared_ptr<float> cu_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> id_ = nullptr;
    // The ID of the image configured for task running.
    std::shared_ptr<string> image_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
