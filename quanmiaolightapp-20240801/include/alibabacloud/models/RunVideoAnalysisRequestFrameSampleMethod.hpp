// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISREQUESTFRAMESAMPLEMETHOD_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISREQUESTFRAMESAMPLEMETHOD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoAnalysisRequestFrameSampleMethod : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisRequestFrameSampleMethod& obj) { 
      DARABONBA_PTR_TO_JSON(interval, interval_);
      DARABONBA_PTR_TO_JSON(methodName, methodName_);
      DARABONBA_PTR_TO_JSON(pixel, pixel_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisRequestFrameSampleMethod& obj) { 
      DARABONBA_PTR_FROM_JSON(interval, interval_);
      DARABONBA_PTR_FROM_JSON(methodName, methodName_);
      DARABONBA_PTR_FROM_JSON(pixel, pixel_);
    };
    RunVideoAnalysisRequestFrameSampleMethod() = default ;
    RunVideoAnalysisRequestFrameSampleMethod(const RunVideoAnalysisRequestFrameSampleMethod &) = default ;
    RunVideoAnalysisRequestFrameSampleMethod(RunVideoAnalysisRequestFrameSampleMethod &&) = default ;
    RunVideoAnalysisRequestFrameSampleMethod(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisRequestFrameSampleMethod() = default ;
    RunVideoAnalysisRequestFrameSampleMethod& operator=(const RunVideoAnalysisRequestFrameSampleMethod &) = default ;
    RunVideoAnalysisRequestFrameSampleMethod& operator=(RunVideoAnalysisRequestFrameSampleMethod &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->interval_ != nullptr
        && this->methodName_ != nullptr && this->pixel_ != nullptr; };
    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline double interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0.0) };
    inline RunVideoAnalysisRequestFrameSampleMethod& setInterval(double interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // methodName Field Functions 
    bool hasMethodName() const { return this->methodName_ != nullptr;};
    void deleteMethodName() { this->methodName_ = nullptr;};
    inline string methodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
    inline RunVideoAnalysisRequestFrameSampleMethod& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


    // pixel Field Functions 
    bool hasPixel() const { return this->pixel_ != nullptr;};
    void deletePixel() { this->pixel_ = nullptr;};
    inline int32_t pixel() const { DARABONBA_PTR_GET_DEFAULT(pixel_, 0) };
    inline RunVideoAnalysisRequestFrameSampleMethod& setPixel(int32_t pixel) { DARABONBA_PTR_SET_VALUE(pixel_, pixel) };


  protected:
    std::shared_ptr<double> interval_ = nullptr;
    std::shared_ptr<string> methodName_ = nullptr;
    std::shared_ptr<int32_t> pixel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
