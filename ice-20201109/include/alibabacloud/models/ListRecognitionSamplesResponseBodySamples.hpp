// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECOGNITIONSAMPLESRESPONSEBODYSAMPLES_HPP_
#define ALIBABACLOUD_MODELS_LISTRECOGNITIONSAMPLESRESPONSEBODYSAMPLES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRecognitionSamplesResponseBodySamplesSample.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListRecognitionSamplesResponseBodySamples : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecognitionSamplesResponseBodySamples& obj) { 
      DARABONBA_PTR_TO_JSON(Sample, sample_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecognitionSamplesResponseBodySamples& obj) { 
      DARABONBA_PTR_FROM_JSON(Sample, sample_);
    };
    ListRecognitionSamplesResponseBodySamples() = default ;
    ListRecognitionSamplesResponseBodySamples(const ListRecognitionSamplesResponseBodySamples &) = default ;
    ListRecognitionSamplesResponseBodySamples(ListRecognitionSamplesResponseBodySamples &&) = default ;
    ListRecognitionSamplesResponseBodySamples(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecognitionSamplesResponseBodySamples() = default ;
    ListRecognitionSamplesResponseBodySamples& operator=(const ListRecognitionSamplesResponseBodySamples &) = default ;
    ListRecognitionSamplesResponseBodySamples& operator=(ListRecognitionSamplesResponseBodySamples &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sample_ == nullptr; };
    // sample Field Functions 
    bool hasSample() const { return this->sample_ != nullptr;};
    void deleteSample() { this->sample_ = nullptr;};
    inline const vector<Models::ListRecognitionSamplesResponseBodySamplesSample> & sample() const { DARABONBA_PTR_GET_CONST(sample_, vector<Models::ListRecognitionSamplesResponseBodySamplesSample>) };
    inline vector<Models::ListRecognitionSamplesResponseBodySamplesSample> sample() { DARABONBA_PTR_GET(sample_, vector<Models::ListRecognitionSamplesResponseBodySamplesSample>) };
    inline ListRecognitionSamplesResponseBodySamples& setSample(const vector<Models::ListRecognitionSamplesResponseBodySamplesSample> & sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };
    inline ListRecognitionSamplesResponseBodySamples& setSample(vector<Models::ListRecognitionSamplesResponseBodySamplesSample> && sample) { DARABONBA_PTR_SET_RVALUE(sample_, sample) };


  protected:
    std::shared_ptr<vector<Models::ListRecognitionSamplesResponseBodySamplesSample>> sample_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
