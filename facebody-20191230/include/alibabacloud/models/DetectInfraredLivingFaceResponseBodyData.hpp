// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTINFRAREDLIVINGFACERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DETECTINFRAREDLIVINGFACERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectInfraredLivingFaceResponseBodyDataElements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DetectInfraredLivingFaceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectInfraredLivingFaceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
    };
    friend void from_json(const Darabonba::Json& j, DetectInfraredLivingFaceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
    };
    DetectInfraredLivingFaceResponseBodyData() = default ;
    DetectInfraredLivingFaceResponseBodyData(const DetectInfraredLivingFaceResponseBodyData &) = default ;
    DetectInfraredLivingFaceResponseBodyData(DetectInfraredLivingFaceResponseBodyData &&) = default ;
    DetectInfraredLivingFaceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectInfraredLivingFaceResponseBodyData() = default ;
    DetectInfraredLivingFaceResponseBodyData& operator=(const DetectInfraredLivingFaceResponseBodyData &) = default ;
    DetectInfraredLivingFaceResponseBodyData& operator=(DetectInfraredLivingFaceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elements_ == nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::DetectInfraredLivingFaceResponseBodyDataElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::DetectInfraredLivingFaceResponseBodyDataElements>) };
    inline vector<Models::DetectInfraredLivingFaceResponseBodyDataElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::DetectInfraredLivingFaceResponseBodyDataElements>) };
    inline DetectInfraredLivingFaceResponseBodyData& setElements(const vector<Models::DetectInfraredLivingFaceResponseBodyDataElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline DetectInfraredLivingFaceResponseBodyData& setElements(vector<Models::DetectInfraredLivingFaceResponseBodyDataElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


  protected:
    std::shared_ptr<vector<Models::DetectInfraredLivingFaceResponseBodyDataElements>> elements_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
