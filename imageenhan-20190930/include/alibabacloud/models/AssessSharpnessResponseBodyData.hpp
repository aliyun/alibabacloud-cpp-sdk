// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSESSSHARPNESSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ASSESSSHARPNESSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class AssessSharpnessResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssessSharpnessResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Sharpness, sharpness_);
    };
    friend void from_json(const Darabonba::Json& j, AssessSharpnessResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Sharpness, sharpness_);
    };
    AssessSharpnessResponseBodyData() = default ;
    AssessSharpnessResponseBodyData(const AssessSharpnessResponseBodyData &) = default ;
    AssessSharpnessResponseBodyData(AssessSharpnessResponseBodyData &&) = default ;
    AssessSharpnessResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssessSharpnessResponseBodyData() = default ;
    AssessSharpnessResponseBodyData& operator=(const AssessSharpnessResponseBodyData &) = default ;
    AssessSharpnessResponseBodyData& operator=(AssessSharpnessResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sharpness_ == nullptr; };
    // sharpness Field Functions 
    bool hasSharpness() const { return this->sharpness_ != nullptr;};
    void deleteSharpness() { this->sharpness_ = nullptr;};
    inline float sharpness() const { DARABONBA_PTR_GET_DEFAULT(sharpness_, 0.0) };
    inline AssessSharpnessResponseBodyData& setSharpness(float sharpness) { DARABONBA_PTR_SET_VALUE(sharpness_, sharpness) };


  protected:
    std::shared_ptr<float> sharpness_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
