// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTWHITEBASEIMAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DETECTWHITEBASEIMAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectWhiteBaseImageResponseBodyDataElements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectWhiteBaseImageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectWhiteBaseImageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
    };
    friend void from_json(const Darabonba::Json& j, DetectWhiteBaseImageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
    };
    DetectWhiteBaseImageResponseBodyData() = default ;
    DetectWhiteBaseImageResponseBodyData(const DetectWhiteBaseImageResponseBodyData &) = default ;
    DetectWhiteBaseImageResponseBodyData(DetectWhiteBaseImageResponseBodyData &&) = default ;
    DetectWhiteBaseImageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectWhiteBaseImageResponseBodyData() = default ;
    DetectWhiteBaseImageResponseBodyData& operator=(const DetectWhiteBaseImageResponseBodyData &) = default ;
    DetectWhiteBaseImageResponseBodyData& operator=(DetectWhiteBaseImageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elements_ != nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::DetectWhiteBaseImageResponseBodyDataElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::DetectWhiteBaseImageResponseBodyDataElements>) };
    inline vector<Models::DetectWhiteBaseImageResponseBodyDataElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::DetectWhiteBaseImageResponseBodyDataElements>) };
    inline DetectWhiteBaseImageResponseBodyData& setElements(const vector<Models::DetectWhiteBaseImageResponseBodyDataElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline DetectWhiteBaseImageResponseBodyData& setElements(vector<Models::DetectWhiteBaseImageResponseBodyDataElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


  protected:
    std::shared_ptr<vector<Models::DetectWhiteBaseImageResponseBodyDataElements>> elements_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
