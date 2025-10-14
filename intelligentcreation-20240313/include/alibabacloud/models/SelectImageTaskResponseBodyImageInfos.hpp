// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTIMAGETASKRESPONSEBODYIMAGEINFOS_HPP_
#define ALIBABACLOUD_MODELS_SELECTIMAGETASKRESPONSEBODYIMAGEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SelectImageTaskResponseBodyImageInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectImageTaskResponseBodyImageInfos& obj) { 
      DARABONBA_PTR_TO_JSON(customImageUrl, customImageUrl_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(imageH, imageH_);
      DARABONBA_PTR_TO_JSON(imageW, imageW_);
    };
    friend void from_json(const Darabonba::Json& j, SelectImageTaskResponseBodyImageInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(customImageUrl, customImageUrl_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(imageH, imageH_);
      DARABONBA_PTR_FROM_JSON(imageW, imageW_);
    };
    SelectImageTaskResponseBodyImageInfos() = default ;
    SelectImageTaskResponseBodyImageInfos(const SelectImageTaskResponseBodyImageInfos &) = default ;
    SelectImageTaskResponseBodyImageInfos(SelectImageTaskResponseBodyImageInfos &&) = default ;
    SelectImageTaskResponseBodyImageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectImageTaskResponseBodyImageInfos() = default ;
    SelectImageTaskResponseBodyImageInfos& operator=(const SelectImageTaskResponseBodyImageInfos &) = default ;
    SelectImageTaskResponseBodyImageInfos& operator=(SelectImageTaskResponseBodyImageInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customImageUrl_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->imageH_ == nullptr && return this->imageW_ == nullptr; };
    // customImageUrl Field Functions 
    bool hasCustomImageUrl() const { return this->customImageUrl_ != nullptr;};
    void deleteCustomImageUrl() { this->customImageUrl_ = nullptr;};
    inline string customImageUrl() const { DARABONBA_PTR_GET_DEFAULT(customImageUrl_, "") };
    inline SelectImageTaskResponseBodyImageInfos& setCustomImageUrl(string customImageUrl) { DARABONBA_PTR_SET_VALUE(customImageUrl_, customImageUrl) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline SelectImageTaskResponseBodyImageInfos& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // imageH Field Functions 
    bool hasImageH() const { return this->imageH_ != nullptr;};
    void deleteImageH() { this->imageH_ = nullptr;};
    inline string imageH() const { DARABONBA_PTR_GET_DEFAULT(imageH_, "") };
    inline SelectImageTaskResponseBodyImageInfos& setImageH(string imageH) { DARABONBA_PTR_SET_VALUE(imageH_, imageH) };


    // imageW Field Functions 
    bool hasImageW() const { return this->imageW_ != nullptr;};
    void deleteImageW() { this->imageW_ = nullptr;};
    inline string imageW() const { DARABONBA_PTR_GET_DEFAULT(imageW_, "") };
    inline SelectImageTaskResponseBodyImageInfos& setImageW(string imageW) { DARABONBA_PTR_SET_VALUE(imageW_, imageW) };


  protected:
    std::shared_ptr<string> customImageUrl_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> imageH_ = nullptr;
    std::shared_ptr<string> imageW_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
