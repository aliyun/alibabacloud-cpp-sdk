// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEGMENTCLOTHRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SEGMENTCLOTHRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SegmentClothResponseBodyDataElements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class SegmentClothResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentClothResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentClothResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
    };
    SegmentClothResponseBodyData() = default ;
    SegmentClothResponseBodyData(const SegmentClothResponseBodyData &) = default ;
    SegmentClothResponseBodyData(SegmentClothResponseBodyData &&) = default ;
    SegmentClothResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentClothResponseBodyData() = default ;
    SegmentClothResponseBodyData& operator=(const SegmentClothResponseBodyData &) = default ;
    SegmentClothResponseBodyData& operator=(SegmentClothResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elements_ != nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::SegmentClothResponseBodyDataElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::SegmentClothResponseBodyDataElements>) };
    inline vector<Models::SegmentClothResponseBodyDataElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::SegmentClothResponseBodyDataElements>) };
    inline SegmentClothResponseBodyData& setElements(const vector<Models::SegmentClothResponseBodyDataElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline SegmentClothResponseBodyData& setElements(vector<Models::SegmentClothResponseBodyDataElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


  protected:
    std::shared_ptr<vector<Models::SegmentClothResponseBodyDataElements>> elements_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
