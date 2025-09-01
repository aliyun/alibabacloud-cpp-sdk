// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANTSCORERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANTSCORERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetInstantScoreResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstantScoreResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(error, error_);
      DARABONBA_PTR_TO_JSON(latency, latency_);
      DARABONBA_PTR_TO_JSON(load, load_);
      DARABONBA_PTR_TO_JSON(saturation, saturation_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstantScoreResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(error, error_);
      DARABONBA_PTR_FROM_JSON(latency, latency_);
      DARABONBA_PTR_FROM_JSON(load, load_);
      DARABONBA_PTR_FROM_JSON(saturation, saturation_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    GetInstantScoreResponseBodyData() = default ;
    GetInstantScoreResponseBodyData(const GetInstantScoreResponseBodyData &) = default ;
    GetInstantScoreResponseBodyData(GetInstantScoreResponseBodyData &&) = default ;
    GetInstantScoreResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstantScoreResponseBodyData() = default ;
    GetInstantScoreResponseBodyData& operator=(const GetInstantScoreResponseBodyData &) = default ;
    GetInstantScoreResponseBodyData& operator=(GetInstantScoreResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->error_ != nullptr
        && this->latency_ != nullptr && this->load_ != nullptr && this->saturation_ != nullptr && this->total_ != nullptr; };
    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline float error() const { DARABONBA_PTR_GET_DEFAULT(error_, 0.0) };
    inline GetInstantScoreResponseBodyData& setError(float error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // latency Field Functions 
    bool hasLatency() const { return this->latency_ != nullptr;};
    void deleteLatency() { this->latency_ = nullptr;};
    inline float latency() const { DARABONBA_PTR_GET_DEFAULT(latency_, 0.0) };
    inline GetInstantScoreResponseBodyData& setLatency(float latency) { DARABONBA_PTR_SET_VALUE(latency_, latency) };


    // load Field Functions 
    bool hasLoad() const { return this->load_ != nullptr;};
    void deleteLoad() { this->load_ = nullptr;};
    inline float load() const { DARABONBA_PTR_GET_DEFAULT(load_, 0.0) };
    inline GetInstantScoreResponseBodyData& setLoad(float load) { DARABONBA_PTR_SET_VALUE(load_, load) };


    // saturation Field Functions 
    bool hasSaturation() const { return this->saturation_ != nullptr;};
    void deleteSaturation() { this->saturation_ = nullptr;};
    inline float saturation() const { DARABONBA_PTR_GET_DEFAULT(saturation_, 0.0) };
    inline GetInstantScoreResponseBodyData& setSaturation(float saturation) { DARABONBA_PTR_SET_VALUE(saturation_, saturation) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline float total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0.0) };
    inline GetInstantScoreResponseBodyData& setTotal(float total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<float> error_ = nullptr;
    std::shared_ptr<float> latency_ = nullptr;
    std::shared_ptr<float> load_ = nullptr;
    std::shared_ptr<float> saturation_ = nullptr;
    std::shared_ptr<float> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
