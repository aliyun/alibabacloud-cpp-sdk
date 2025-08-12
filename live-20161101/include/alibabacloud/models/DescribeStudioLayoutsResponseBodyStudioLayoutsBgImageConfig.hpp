// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTUDIOLAYOUTSRESPONSEBODYSTUDIOLAYOUTSBGIMAGECONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTUDIOLAYOUTSRESPONSEBODYSTUDIOLAYOUTSBGIMAGECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(LocationId, locationId_);
      DARABONBA_PTR_TO_JSON(MaterialId, materialId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
      DARABONBA_PTR_FROM_JSON(MaterialId, materialId_);
    };
    DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig() = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig(const DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig &) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig(DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig &&) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig() = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig& operator=(const DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig &) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig& operator=(DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->imageUrl_ != nullptr && this->locationId_ != nullptr && this->materialId_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // locationId Field Functions 
    bool hasLocationId() const { return this->locationId_ != nullptr;};
    void deleteLocationId() { this->locationId_ = nullptr;};
    inline string locationId() const { DARABONBA_PTR_GET_DEFAULT(locationId_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig& setLocationId(string locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };


    // materialId Field Functions 
    bool hasMaterialId() const { return this->materialId_ != nullptr;};
    void deleteMaterialId() { this->materialId_ = nullptr;};
    inline string materialId() const { DARABONBA_PTR_GET_DEFAULT(materialId_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsBgImageConfig& setMaterialId(string materialId) { DARABONBA_PTR_SET_VALUE(materialId_, materialId) };


  protected:
    // The unique ID of the material.
    std::shared_ptr<string> id_ = nullptr;
    // The URL of the material.
    std::shared_ptr<string> imageUrl_ = nullptr;
    // The position ID.
    std::shared_ptr<string> locationId_ = nullptr;
    // The ID of the material in ApsaraVideo VOD.
    std::shared_ptr<string> materialId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
