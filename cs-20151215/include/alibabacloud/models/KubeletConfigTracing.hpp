// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KUBELETCONFIGTRACING_HPP_
#define ALIBABACLOUD_MODELS_KUBELETCONFIGTRACING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class KubeletConfigTracing : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KubeletConfigTracing& obj) { 
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(samplingRatePerMillion, samplingRatePerMillion_);
    };
    friend void from_json(const Darabonba::Json& j, KubeletConfigTracing& obj) { 
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(samplingRatePerMillion, samplingRatePerMillion_);
    };
    KubeletConfigTracing() = default ;
    KubeletConfigTracing(const KubeletConfigTracing &) = default ;
    KubeletConfigTracing(KubeletConfigTracing &&) = default ;
    KubeletConfigTracing(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KubeletConfigTracing() = default ;
    KubeletConfigTracing& operator=(const KubeletConfigTracing &) = default ;
    KubeletConfigTracing& operator=(KubeletConfigTracing &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpoint_ != nullptr
        && this->samplingRatePerMillion_ != nullptr; };
    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline KubeletConfigTracing& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // samplingRatePerMillion Field Functions 
    bool hasSamplingRatePerMillion() const { return this->samplingRatePerMillion_ != nullptr;};
    void deleteSamplingRatePerMillion() { this->samplingRatePerMillion_ = nullptr;};
    inline int32_t samplingRatePerMillion() const { DARABONBA_PTR_GET_DEFAULT(samplingRatePerMillion_, 0) };
    inline KubeletConfigTracing& setSamplingRatePerMillion(int32_t samplingRatePerMillion) { DARABONBA_PTR_SET_VALUE(samplingRatePerMillion_, samplingRatePerMillion) };


  protected:
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<int32_t> samplingRatePerMillion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
