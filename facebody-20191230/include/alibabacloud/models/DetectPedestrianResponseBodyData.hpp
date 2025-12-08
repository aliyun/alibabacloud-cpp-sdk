// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTPEDESTRIANRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DETECTPEDESTRIANRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectPedestrianResponseBodyDataElements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DetectPedestrianResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectPedestrianResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, DetectPedestrianResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    DetectPedestrianResponseBodyData() = default ;
    DetectPedestrianResponseBodyData(const DetectPedestrianResponseBodyData &) = default ;
    DetectPedestrianResponseBodyData(DetectPedestrianResponseBodyData &&) = default ;
    DetectPedestrianResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectPedestrianResponseBodyData() = default ;
    DetectPedestrianResponseBodyData& operator=(const DetectPedestrianResponseBodyData &) = default ;
    DetectPedestrianResponseBodyData& operator=(DetectPedestrianResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elements_ == nullptr
        && return this->height_ == nullptr && return this->width_ == nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::DetectPedestrianResponseBodyDataElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::DetectPedestrianResponseBodyDataElements>) };
    inline vector<Models::DetectPedestrianResponseBodyDataElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::DetectPedestrianResponseBodyDataElements>) };
    inline DetectPedestrianResponseBodyData& setElements(const vector<Models::DetectPedestrianResponseBodyDataElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline DetectPedestrianResponseBodyData& setElements(vector<Models::DetectPedestrianResponseBodyDataElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline DetectPedestrianResponseBodyData& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline DetectPedestrianResponseBodyData& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<vector<Models::DetectPedestrianResponseBodyDataElements>> elements_ = nullptr;
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
