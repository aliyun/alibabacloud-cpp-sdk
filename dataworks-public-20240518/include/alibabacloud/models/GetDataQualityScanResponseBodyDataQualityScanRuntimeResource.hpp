// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRESPONSEBODYDATAQUALITYSCANRUNTIMERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRESPONSEBODYDATAQUALITYSCANRUNTIMERESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityScanResponseBodyDataQualityScanRuntimeResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityScanResponseBodyDataQualityScanRuntimeResource& obj) { 
      DARABONBA_PTR_TO_JSON(Cu, cu_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Image, image_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityScanResponseBodyDataQualityScanRuntimeResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Cu, cu_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
    };
    GetDataQualityScanResponseBodyDataQualityScanRuntimeResource() = default ;
    GetDataQualityScanResponseBodyDataQualityScanRuntimeResource(const GetDataQualityScanResponseBodyDataQualityScanRuntimeResource &) = default ;
    GetDataQualityScanResponseBodyDataQualityScanRuntimeResource(GetDataQualityScanResponseBodyDataQualityScanRuntimeResource &&) = default ;
    GetDataQualityScanResponseBodyDataQualityScanRuntimeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityScanResponseBodyDataQualityScanRuntimeResource() = default ;
    GetDataQualityScanResponseBodyDataQualityScanRuntimeResource& operator=(const GetDataQualityScanResponseBodyDataQualityScanRuntimeResource &) = default ;
    GetDataQualityScanResponseBodyDataQualityScanRuntimeResource& operator=(GetDataQualityScanResponseBodyDataQualityScanRuntimeResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cu_ == nullptr
        && return this->id_ == nullptr && return this->image_ == nullptr; };
    // cu Field Functions 
    bool hasCu() const { return this->cu_ != nullptr;};
    void deleteCu() { this->cu_ = nullptr;};
    inline float cu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0.0) };
    inline GetDataQualityScanResponseBodyDataQualityScanRuntimeResource& setCu(float cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetDataQualityScanResponseBodyDataQualityScanRuntimeResource& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline GetDataQualityScanResponseBodyDataQualityScanRuntimeResource& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


  protected:
    // Reserved compute units (CU) for the resource group.
    std::shared_ptr<float> cu_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> id_ = nullptr;
    // The image ID used in the runtime configuration.
    std::shared_ptr<string> image_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
