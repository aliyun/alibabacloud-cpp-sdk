// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECONFIGURATIONSAMPLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECONFIGURATIONSAMPLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResourceConfigurationSampleResponseBodySample.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceConfigurationSampleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceConfigurationSampleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sample, sample_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceConfigurationSampleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sample, sample_);
    };
    GetResourceConfigurationSampleResponseBody() = default ;
    GetResourceConfigurationSampleResponseBody(const GetResourceConfigurationSampleResponseBody &) = default ;
    GetResourceConfigurationSampleResponseBody(GetResourceConfigurationSampleResponseBody &&) = default ;
    GetResourceConfigurationSampleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceConfigurationSampleResponseBody() = default ;
    GetResourceConfigurationSampleResponseBody& operator=(const GetResourceConfigurationSampleResponseBody &) = default ;
    GetResourceConfigurationSampleResponseBody& operator=(GetResourceConfigurationSampleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->sample_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceConfigurationSampleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sample Field Functions 
    bool hasSample() const { return this->sample_ != nullptr;};
    void deleteSample() { this->sample_ = nullptr;};
    inline const GetResourceConfigurationSampleResponseBodySample & sample() const { DARABONBA_PTR_GET_CONST(sample_, GetResourceConfigurationSampleResponseBodySample) };
    inline GetResourceConfigurationSampleResponseBodySample sample() { DARABONBA_PTR_GET(sample_, GetResourceConfigurationSampleResponseBodySample) };
    inline GetResourceConfigurationSampleResponseBody& setSample(const GetResourceConfigurationSampleResponseBodySample & sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };
    inline GetResourceConfigurationSampleResponseBody& setSample(GetResourceConfigurationSampleResponseBodySample && sample) { DARABONBA_PTR_SET_RVALUE(sample_, sample) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetResourceConfigurationSampleResponseBodySample> sample_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
