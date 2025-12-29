// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPAREFACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COMPAREFACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CompareFacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareFacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CompareFacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CompareFacesResponseBody() = default ;
    CompareFacesResponseBody(const CompareFacesResponseBody &) = default ;
    CompareFacesResponseBody(CompareFacesResponseBody &&) = default ;
    CompareFacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareFacesResponseBody() = default ;
    CompareFacesResponseBody& operator=(const CompareFacesResponseBody &) = default ;
    CompareFacesResponseBody& operator=(CompareFacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConfidenceThresholds, confidenceThresholds_);
        DARABONBA_PTR_TO_JSON(SimilarityScore, similarityScore_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfidenceThresholds, confidenceThresholds_);
        DARABONBA_PTR_FROM_JSON(SimilarityScore, similarityScore_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->confidenceThresholds_ == nullptr
        && this->similarityScore_ == nullptr; };
      // confidenceThresholds Field Functions 
      bool hasConfidenceThresholds() const { return this->confidenceThresholds_ != nullptr;};
      void deleteConfidenceThresholds() { this->confidenceThresholds_ = nullptr;};
      inline string getConfidenceThresholds() const { DARABONBA_PTR_GET_DEFAULT(confidenceThresholds_, "") };
      inline Data& setConfidenceThresholds(string confidenceThresholds) { DARABONBA_PTR_SET_VALUE(confidenceThresholds_, confidenceThresholds) };


      // similarityScore Field Functions 
      bool hasSimilarityScore() const { return this->similarityScore_ != nullptr;};
      void deleteSimilarityScore() { this->similarityScore_ = nullptr;};
      inline float getSimilarityScore() const { DARABONBA_PTR_GET_DEFAULT(similarityScore_, 0.0) };
      inline Data& setSimilarityScore(float similarityScore) { DARABONBA_PTR_SET_VALUE(similarityScore_, similarityScore) };


    protected:
      // Confidence thresholds for face comparison. The returned content is a JSON Object, with the specific structure being `"key":"value"`.
      // 
      // - `key` represents the false acceptance rate, which is the probability of misidentifying someone else as the specified person.
      // - `value` is the corresponding threshold.
      // 
      // 
      // > Regarding the confidence thresholds (confidenceThresholds) in the example:
      // - `"0.0001": "90.07"` indicates that the threshold is 90.07 when the false acceptance rate is 0.01%.
      // - `"0.001": "80.01"` indicates that the threshold is 80.01 when the false acceptance rate is 0.1%.
      // - `"0.01": "70.02"` indicates that the threshold is 70.02 when the false acceptance rate is 1%.
      // 
      // Confidence thresholds are dynamically provided based on different images and algorithms, so do not persist these thresholds.
      shared_ptr<string> confidenceThresholds_ {};
      // The degree of similarity between the faces in the two images. The value range is [0, 100], with higher values indicating greater similarity.
      shared_ptr<float> similarityScore_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CompareFacesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CompareFacesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CompareFacesResponseBody::Data) };
    inline CompareFacesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CompareFacesResponseBody::Data) };
    inline CompareFacesResponseBody& setData(const CompareFacesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CompareFacesResponseBody& setData(CompareFacesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CompareFacesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CompareFacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CompareFacesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // HTTP status code.
    shared_ptr<string> code_ {};
    // Result of the face comparison.
    shared_ptr<CompareFacesResponseBody::Data> data_ {};
    // Error code.
    shared_ptr<string> message_ {};
    // ID of the current request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the response was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
