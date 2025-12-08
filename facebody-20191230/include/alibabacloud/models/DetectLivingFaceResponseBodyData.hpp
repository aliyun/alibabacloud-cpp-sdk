// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTLIVINGFACERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DETECTLIVINGFACERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectLivingFaceResponseBodyDataElements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DetectLivingFaceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectLivingFaceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
    };
    friend void from_json(const Darabonba::Json& j, DetectLivingFaceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
    };
    DetectLivingFaceResponseBodyData() = default ;
    DetectLivingFaceResponseBodyData(const DetectLivingFaceResponseBodyData &) = default ;
    DetectLivingFaceResponseBodyData(DetectLivingFaceResponseBodyData &&) = default ;
    DetectLivingFaceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectLivingFaceResponseBodyData() = default ;
    DetectLivingFaceResponseBodyData& operator=(const DetectLivingFaceResponseBodyData &) = default ;
    DetectLivingFaceResponseBodyData& operator=(DetectLivingFaceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elements_ == nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::DetectLivingFaceResponseBodyDataElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::DetectLivingFaceResponseBodyDataElements>) };
    inline vector<Models::DetectLivingFaceResponseBodyDataElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::DetectLivingFaceResponseBodyDataElements>) };
    inline DetectLivingFaceResponseBodyData& setElements(const vector<Models::DetectLivingFaceResponseBodyDataElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline DetectLivingFaceResponseBodyData& setElements(vector<Models::DetectLivingFaceResponseBodyDataElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


  protected:
    std::shared_ptr<vector<Models::DetectLivingFaceResponseBodyDataElements>> elements_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
