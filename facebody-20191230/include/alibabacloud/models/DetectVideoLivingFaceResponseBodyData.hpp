// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVIDEOLIVINGFACERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DETECTVIDEOLIVINGFACERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectVideoLivingFaceResponseBodyDataElements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DetectVideoLivingFaceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVideoLivingFaceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVideoLivingFaceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
    };
    DetectVideoLivingFaceResponseBodyData() = default ;
    DetectVideoLivingFaceResponseBodyData(const DetectVideoLivingFaceResponseBodyData &) = default ;
    DetectVideoLivingFaceResponseBodyData(DetectVideoLivingFaceResponseBodyData &&) = default ;
    DetectVideoLivingFaceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVideoLivingFaceResponseBodyData() = default ;
    DetectVideoLivingFaceResponseBodyData& operator=(const DetectVideoLivingFaceResponseBodyData &) = default ;
    DetectVideoLivingFaceResponseBodyData& operator=(DetectVideoLivingFaceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elements_ == nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::DetectVideoLivingFaceResponseBodyDataElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::DetectVideoLivingFaceResponseBodyDataElements>) };
    inline vector<Models::DetectVideoLivingFaceResponseBodyDataElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::DetectVideoLivingFaceResponseBodyDataElements>) };
    inline DetectVideoLivingFaceResponseBodyData& setElements(const vector<Models::DetectVideoLivingFaceResponseBodyDataElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline DetectVideoLivingFaceResponseBodyData& setElements(vector<Models::DetectVideoLivingFaceResponseBodyDataElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


  protected:
    std::shared_ptr<vector<Models::DetectVideoLivingFaceResponseBodyDataElements>> elements_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
