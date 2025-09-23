// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTIPCOBJECTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DETECTIPCOBJECTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectIPCObjectResponseBodyDataElements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectIPCObjectResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectIPCObjectResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, DetectIPCObjectResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    DetectIPCObjectResponseBodyData() = default ;
    DetectIPCObjectResponseBodyData(const DetectIPCObjectResponseBodyData &) = default ;
    DetectIPCObjectResponseBodyData(DetectIPCObjectResponseBodyData &&) = default ;
    DetectIPCObjectResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectIPCObjectResponseBodyData() = default ;
    DetectIPCObjectResponseBodyData& operator=(const DetectIPCObjectResponseBodyData &) = default ;
    DetectIPCObjectResponseBodyData& operator=(DetectIPCObjectResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elements_ != nullptr
        && this->height_ != nullptr && this->width_ != nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::DetectIPCObjectResponseBodyDataElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::DetectIPCObjectResponseBodyDataElements>) };
    inline vector<Models::DetectIPCObjectResponseBodyDataElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::DetectIPCObjectResponseBodyDataElements>) };
    inline DetectIPCObjectResponseBodyData& setElements(const vector<Models::DetectIPCObjectResponseBodyDataElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline DetectIPCObjectResponseBodyData& setElements(vector<Models::DetectIPCObjectResponseBodyDataElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int64_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
    inline DetectIPCObjectResponseBodyData& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int64_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
    inline DetectIPCObjectResponseBodyData& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<vector<Models::DetectIPCObjectResponseBodyDataElements>> elements_ = nullptr;
    std::shared_ptr<int64_t> height_ = nullptr;
    std::shared_ptr<int64_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
