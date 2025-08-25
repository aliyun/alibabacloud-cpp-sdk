// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTELLIGENTCOMPOSITIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_INTELLIGENTCOMPOSITIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntelligentCompositionResponseBodyDataElements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class IntelligentCompositionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntelligentCompositionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
    };
    friend void from_json(const Darabonba::Json& j, IntelligentCompositionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
    };
    IntelligentCompositionResponseBodyData() = default ;
    IntelligentCompositionResponseBodyData(const IntelligentCompositionResponseBodyData &) = default ;
    IntelligentCompositionResponseBodyData(IntelligentCompositionResponseBodyData &&) = default ;
    IntelligentCompositionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntelligentCompositionResponseBodyData() = default ;
    IntelligentCompositionResponseBodyData& operator=(const IntelligentCompositionResponseBodyData &) = default ;
    IntelligentCompositionResponseBodyData& operator=(IntelligentCompositionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elements_ != nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::IntelligentCompositionResponseBodyDataElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::IntelligentCompositionResponseBodyDataElements>) };
    inline vector<Models::IntelligentCompositionResponseBodyDataElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::IntelligentCompositionResponseBodyDataElements>) };
    inline IntelligentCompositionResponseBodyData& setElements(const vector<Models::IntelligentCompositionResponseBodyDataElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline IntelligentCompositionResponseBodyData& setElements(vector<Models::IntelligentCompositionResponseBodyDataElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


  protected:
    std::shared_ptr<vector<Models::IntelligentCompositionResponseBodyDataElements>> elements_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
