// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PEDESTRIANDETECTATTRIBUTERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_PEDESTRIANDETECTATTRIBUTERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PedestrianDetectAttributeResponseBodyDataAttributes.hpp>
#include <alibabacloud/models/PedestrianDetectAttributeResponseBodyDataBoxes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class PedestrianDetectAttributeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PedestrianDetectAttributeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(Boxes, boxes_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(PersonNumber, personNumber_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, PedestrianDetectAttributeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(Boxes, boxes_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(PersonNumber, personNumber_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    PedestrianDetectAttributeResponseBodyData() = default ;
    PedestrianDetectAttributeResponseBodyData(const PedestrianDetectAttributeResponseBodyData &) = default ;
    PedestrianDetectAttributeResponseBodyData(PedestrianDetectAttributeResponseBodyData &&) = default ;
    PedestrianDetectAttributeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PedestrianDetectAttributeResponseBodyData() = default ;
    PedestrianDetectAttributeResponseBodyData& operator=(const PedestrianDetectAttributeResponseBodyData &) = default ;
    PedestrianDetectAttributeResponseBodyData& operator=(PedestrianDetectAttributeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->boxes_ == nullptr && return this->height_ == nullptr && return this->personNumber_ == nullptr && return this->width_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const vector<Models::PedestrianDetectAttributeResponseBodyDataAttributes> & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<Models::PedestrianDetectAttributeResponseBodyDataAttributes>) };
    inline vector<Models::PedestrianDetectAttributeResponseBodyDataAttributes> attributes() { DARABONBA_PTR_GET(attributes_, vector<Models::PedestrianDetectAttributeResponseBodyDataAttributes>) };
    inline PedestrianDetectAttributeResponseBodyData& setAttributes(const vector<Models::PedestrianDetectAttributeResponseBodyDataAttributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline PedestrianDetectAttributeResponseBodyData& setAttributes(vector<Models::PedestrianDetectAttributeResponseBodyDataAttributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // boxes Field Functions 
    bool hasBoxes() const { return this->boxes_ != nullptr;};
    void deleteBoxes() { this->boxes_ = nullptr;};
    inline const vector<Models::PedestrianDetectAttributeResponseBodyDataBoxes> & boxes() const { DARABONBA_PTR_GET_CONST(boxes_, vector<Models::PedestrianDetectAttributeResponseBodyDataBoxes>) };
    inline vector<Models::PedestrianDetectAttributeResponseBodyDataBoxes> boxes() { DARABONBA_PTR_GET(boxes_, vector<Models::PedestrianDetectAttributeResponseBodyDataBoxes>) };
    inline PedestrianDetectAttributeResponseBodyData& setBoxes(const vector<Models::PedestrianDetectAttributeResponseBodyDataBoxes> & boxes) { DARABONBA_PTR_SET_VALUE(boxes_, boxes) };
    inline PedestrianDetectAttributeResponseBodyData& setBoxes(vector<Models::PedestrianDetectAttributeResponseBodyDataBoxes> && boxes) { DARABONBA_PTR_SET_RVALUE(boxes_, boxes) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int64_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
    inline PedestrianDetectAttributeResponseBodyData& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // personNumber Field Functions 
    bool hasPersonNumber() const { return this->personNumber_ != nullptr;};
    void deletePersonNumber() { this->personNumber_ = nullptr;};
    inline int32_t personNumber() const { DARABONBA_PTR_GET_DEFAULT(personNumber_, 0) };
    inline PedestrianDetectAttributeResponseBodyData& setPersonNumber(int32_t personNumber) { DARABONBA_PTR_SET_VALUE(personNumber_, personNumber) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int64_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
    inline PedestrianDetectAttributeResponseBodyData& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<vector<Models::PedestrianDetectAttributeResponseBodyDataAttributes>> attributes_ = nullptr;
    std::shared_ptr<vector<Models::PedestrianDetectAttributeResponseBodyDataBoxes>> boxes_ = nullptr;
    std::shared_ptr<int64_t> height_ = nullptr;
    std::shared_ptr<int32_t> personNumber_ = nullptr;
    std::shared_ptr<int64_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
