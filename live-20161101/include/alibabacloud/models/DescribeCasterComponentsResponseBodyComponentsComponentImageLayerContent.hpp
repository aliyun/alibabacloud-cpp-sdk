// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCOMPONENTSRESPONSEBODYCOMPONENTSCOMPONENTIMAGELAYERCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCOMPONENTSRESPONSEBODYCOMPONENTSCOMPONENTIMAGELAYERCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent& obj) { 
      DARABONBA_PTR_TO_JSON(MaterialId, materialId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent& obj) { 
      DARABONBA_PTR_FROM_JSON(MaterialId, materialId_);
    };
    DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent() = default ;
    DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent(const DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent &) = default ;
    DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent(DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent &&) = default ;
    DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent() = default ;
    DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent& operator=(const DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent &) = default ;
    DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent& operator=(DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->materialId_ != nullptr; };
    // materialId Field Functions 
    bool hasMaterialId() const { return this->materialId_ != nullptr;};
    void deleteMaterialId() { this->materialId_ = nullptr;};
    inline string materialId() const { DARABONBA_PTR_GET_DEFAULT(materialId_, "") };
    inline DescribeCasterComponentsResponseBodyComponentsComponentImageLayerContent& setMaterialId(string materialId) { DARABONBA_PTR_SET_VALUE(materialId_, materialId) };


  protected:
    // The ID of the material from the media library.
    std::shared_ptr<string> materialId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
