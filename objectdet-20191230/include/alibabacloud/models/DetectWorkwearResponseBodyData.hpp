// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTWORKWEARRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DETECTWORKWEARRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectWorkwearResponseBodyDataElements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectWorkwearResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectWorkwearResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
    };
    friend void from_json(const Darabonba::Json& j, DetectWorkwearResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
    };
    DetectWorkwearResponseBodyData() = default ;
    DetectWorkwearResponseBodyData(const DetectWorkwearResponseBodyData &) = default ;
    DetectWorkwearResponseBodyData(DetectWorkwearResponseBodyData &&) = default ;
    DetectWorkwearResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectWorkwearResponseBodyData() = default ;
    DetectWorkwearResponseBodyData& operator=(const DetectWorkwearResponseBodyData &) = default ;
    DetectWorkwearResponseBodyData& operator=(DetectWorkwearResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elements_ != nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::DetectWorkwearResponseBodyDataElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::DetectWorkwearResponseBodyDataElements>) };
    inline vector<Models::DetectWorkwearResponseBodyDataElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::DetectWorkwearResponseBodyDataElements>) };
    inline DetectWorkwearResponseBodyData& setElements(const vector<Models::DetectWorkwearResponseBodyDataElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline DetectWorkwearResponseBodyData& setElements(vector<Models::DetectWorkwearResponseBodyDataElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


  protected:
    std::shared_ptr<vector<Models::DetectWorkwearResponseBodyDataElements>> elements_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
