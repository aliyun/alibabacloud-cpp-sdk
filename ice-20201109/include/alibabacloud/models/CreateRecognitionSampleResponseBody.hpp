// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERECOGNITIONSAMPLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERECOGNITIONSAMPLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateRecognitionSampleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRecognitionSampleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SampleId, sampleId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRecognitionSampleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SampleId, sampleId_);
    };
    CreateRecognitionSampleResponseBody() = default ;
    CreateRecognitionSampleResponseBody(const CreateRecognitionSampleResponseBody &) = default ;
    CreateRecognitionSampleResponseBody(CreateRecognitionSampleResponseBody &&) = default ;
    CreateRecognitionSampleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRecognitionSampleResponseBody() = default ;
    CreateRecognitionSampleResponseBody& operator=(const CreateRecognitionSampleResponseBody &) = default ;
    CreateRecognitionSampleResponseBody& operator=(CreateRecognitionSampleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->sampleId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRecognitionSampleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sampleId Field Functions 
    bool hasSampleId() const { return this->sampleId_ != nullptr;};
    void deleteSampleId() { this->sampleId_ = nullptr;};
    inline string sampleId() const { DARABONBA_PTR_GET_DEFAULT(sampleId_, "") };
    inline CreateRecognitionSampleResponseBody& setSampleId(string sampleId) { DARABONBA_PTR_SET_VALUE(sampleId_, sampleId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the sample.
    std::shared_ptr<string> sampleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
