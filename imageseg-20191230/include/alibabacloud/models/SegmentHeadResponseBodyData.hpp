// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEGMENTHEADRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SEGMENTHEADRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SegmentHeadResponseBodyDataElements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class SegmentHeadResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentHeadResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentHeadResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
    };
    SegmentHeadResponseBodyData() = default ;
    SegmentHeadResponseBodyData(const SegmentHeadResponseBodyData &) = default ;
    SegmentHeadResponseBodyData(SegmentHeadResponseBodyData &&) = default ;
    SegmentHeadResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentHeadResponseBodyData() = default ;
    SegmentHeadResponseBodyData& operator=(const SegmentHeadResponseBodyData &) = default ;
    SegmentHeadResponseBodyData& operator=(SegmentHeadResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elements_ != nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::SegmentHeadResponseBodyDataElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::SegmentHeadResponseBodyDataElements>) };
    inline vector<Models::SegmentHeadResponseBodyDataElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::SegmentHeadResponseBodyDataElements>) };
    inline SegmentHeadResponseBodyData& setElements(const vector<Models::SegmentHeadResponseBodyDataElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline SegmentHeadResponseBodyData& setElements(vector<Models::SegmentHeadResponseBodyDataElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


  protected:
    std::shared_ptr<vector<Models::SegmentHeadResponseBodyDataElements>> elements_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
