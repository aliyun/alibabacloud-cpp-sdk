// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGANALYZERESULT_HPP_
#define ALIBABACLOUD_MODELS_SCALINGANALYZERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ScalingAnalyzeResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingAnalyzeResult& obj) { 
      DARABONBA_PTR_TO_JSON(ActualUsage, actualUsage_);
      DARABONBA_PTR_TO_JSON(IdealUsage, idealUsage_);
      DARABONBA_PTR_TO_JSON(ReleaseCores, releaseCores_);
      DARABONBA_PTR_TO_JSON(ReservedCores, reservedCores_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingAnalyzeResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualUsage, actualUsage_);
      DARABONBA_PTR_FROM_JSON(IdealUsage, idealUsage_);
      DARABONBA_PTR_FROM_JSON(ReleaseCores, releaseCores_);
      DARABONBA_PTR_FROM_JSON(ReservedCores, reservedCores_);
    };
    ScalingAnalyzeResult() = default ;
    ScalingAnalyzeResult(const ScalingAnalyzeResult &) = default ;
    ScalingAnalyzeResult(ScalingAnalyzeResult &&) = default ;
    ScalingAnalyzeResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingAnalyzeResult() = default ;
    ScalingAnalyzeResult& operator=(const ScalingAnalyzeResult &) = default ;
    ScalingAnalyzeResult& operator=(ScalingAnalyzeResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualUsage_ == nullptr
        && return this->idealUsage_ == nullptr && return this->releaseCores_ == nullptr && return this->reservedCores_ == nullptr; };
    // actualUsage Field Functions 
    bool hasActualUsage() const { return this->actualUsage_ != nullptr;};
    void deleteActualUsage() { this->actualUsage_ = nullptr;};
    inline float actualUsage() const { DARABONBA_PTR_GET_DEFAULT(actualUsage_, 0.0) };
    inline ScalingAnalyzeResult& setActualUsage(float actualUsage) { DARABONBA_PTR_SET_VALUE(actualUsage_, actualUsage) };


    // idealUsage Field Functions 
    bool hasIdealUsage() const { return this->idealUsage_ != nullptr;};
    void deleteIdealUsage() { this->idealUsage_ = nullptr;};
    inline float idealUsage() const { DARABONBA_PTR_GET_DEFAULT(idealUsage_, 0.0) };
    inline ScalingAnalyzeResult& setIdealUsage(float idealUsage) { DARABONBA_PTR_SET_VALUE(idealUsage_, idealUsage) };


    // releaseCores Field Functions 
    bool hasReleaseCores() const { return this->releaseCores_ != nullptr;};
    void deleteReleaseCores() { this->releaseCores_ = nullptr;};
    inline int32_t releaseCores() const { DARABONBA_PTR_GET_DEFAULT(releaseCores_, 0) };
    inline ScalingAnalyzeResult& setReleaseCores(int32_t releaseCores) { DARABONBA_PTR_SET_VALUE(releaseCores_, releaseCores) };


    // reservedCores Field Functions 
    bool hasReservedCores() const { return this->reservedCores_ != nullptr;};
    void deleteReservedCores() { this->reservedCores_ = nullptr;};
    inline int32_t reservedCores() const { DARABONBA_PTR_GET_DEFAULT(reservedCores_, 0) };
    inline ScalingAnalyzeResult& setReservedCores(int32_t reservedCores) { DARABONBA_PTR_SET_VALUE(reservedCores_, reservedCores) };


  protected:
    // 实际资源利用率。
    std::shared_ptr<float> actualUsage_ = nullptr;
    // 理想资源用量。
    std::shared_ptr<float> idealUsage_ = nullptr;
    // 固定资源释放核数（非master）core。
    std::shared_ptr<int32_t> releaseCores_ = nullptr;
    // 固定资源保留核数（非master）core。
    std::shared_ptr<int32_t> reservedCores_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
