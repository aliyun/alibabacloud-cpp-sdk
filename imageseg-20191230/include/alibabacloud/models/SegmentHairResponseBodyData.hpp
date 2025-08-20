// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEGMENTHAIRRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SEGMENTHAIRRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SegmentHairResponseBodyDataElements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class SegmentHairResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentHairResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentHairResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
    };
    SegmentHairResponseBodyData() = default ;
    SegmentHairResponseBodyData(const SegmentHairResponseBodyData &) = default ;
    SegmentHairResponseBodyData(SegmentHairResponseBodyData &&) = default ;
    SegmentHairResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentHairResponseBodyData() = default ;
    SegmentHairResponseBodyData& operator=(const SegmentHairResponseBodyData &) = default ;
    SegmentHairResponseBodyData& operator=(SegmentHairResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elements_ != nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::SegmentHairResponseBodyDataElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::SegmentHairResponseBodyDataElements>) };
    inline vector<Models::SegmentHairResponseBodyDataElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::SegmentHairResponseBodyDataElements>) };
    inline SegmentHairResponseBodyData& setElements(const vector<Models::SegmentHairResponseBodyDataElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline SegmentHairResponseBodyData& setElements(vector<Models::SegmentHairResponseBodyDataElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


  protected:
    std::shared_ptr<vector<Models::SegmentHairResponseBodyDataElements>> elements_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
