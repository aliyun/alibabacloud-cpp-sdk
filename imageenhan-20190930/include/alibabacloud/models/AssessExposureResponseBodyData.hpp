// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSESSEXPOSURERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ASSESSEXPOSURERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class AssessExposureResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssessExposureResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Exposure, exposure_);
    };
    friend void from_json(const Darabonba::Json& j, AssessExposureResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Exposure, exposure_);
    };
    AssessExposureResponseBodyData() = default ;
    AssessExposureResponseBodyData(const AssessExposureResponseBodyData &) = default ;
    AssessExposureResponseBodyData(AssessExposureResponseBodyData &&) = default ;
    AssessExposureResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssessExposureResponseBodyData() = default ;
    AssessExposureResponseBodyData& operator=(const AssessExposureResponseBodyData &) = default ;
    AssessExposureResponseBodyData& operator=(AssessExposureResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exposure_ != nullptr; };
    // exposure Field Functions 
    bool hasExposure() const { return this->exposure_ != nullptr;};
    void deleteExposure() { this->exposure_ = nullptr;};
    inline float exposure() const { DARABONBA_PTR_GET_DEFAULT(exposure_, 0.0) };
    inline AssessExposureResponseBodyData& setExposure(float exposure) { DARABONBA_PTR_SET_VALUE(exposure_, exposure) };


  protected:
    std::shared_ptr<float> exposure_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
