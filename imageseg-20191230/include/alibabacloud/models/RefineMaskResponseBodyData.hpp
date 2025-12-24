// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFINEMASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_REFINEMASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RefineMaskResponseBodyDataElements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class RefineMaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefineMaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
    };
    friend void from_json(const Darabonba::Json& j, RefineMaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
    };
    RefineMaskResponseBodyData() = default ;
    RefineMaskResponseBodyData(const RefineMaskResponseBodyData &) = default ;
    RefineMaskResponseBodyData(RefineMaskResponseBodyData &&) = default ;
    RefineMaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefineMaskResponseBodyData() = default ;
    RefineMaskResponseBodyData& operator=(const RefineMaskResponseBodyData &) = default ;
    RefineMaskResponseBodyData& operator=(RefineMaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elements_ == nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::RefineMaskResponseBodyDataElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::RefineMaskResponseBodyDataElements>) };
    inline vector<Models::RefineMaskResponseBodyDataElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::RefineMaskResponseBodyDataElements>) };
    inline RefineMaskResponseBodyData& setElements(const vector<Models::RefineMaskResponseBodyDataElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline RefineMaskResponseBodyData& setElements(vector<Models::RefineMaskResponseBodyDataElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


  protected:
    std::shared_ptr<vector<Models::RefineMaskResponseBodyDataElements>> elements_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
