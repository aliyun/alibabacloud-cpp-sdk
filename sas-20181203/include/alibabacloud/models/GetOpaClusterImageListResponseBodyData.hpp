// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPACLUSTERIMAGELISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETOPACLUSTERIMAGELISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOpaClusterImageListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpaClusterImageListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpaClusterImageListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
    };
    GetOpaClusterImageListResponseBodyData() = default ;
    GetOpaClusterImageListResponseBodyData(const GetOpaClusterImageListResponseBodyData &) = default ;
    GetOpaClusterImageListResponseBodyData(GetOpaClusterImageListResponseBodyData &&) = default ;
    GetOpaClusterImageListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpaClusterImageListResponseBodyData() = default ;
    GetOpaClusterImageListResponseBodyData& operator=(const GetOpaClusterImageListResponseBodyData &) = default ;
    GetOpaClusterImageListResponseBodyData& operator=(GetOpaClusterImageListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageName_ != nullptr; };
    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline GetOpaClusterImageListResponseBodyData& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


  protected:
    // The name of the image.
    std::shared_ptr<string> imageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
