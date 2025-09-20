// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTTEXTANOMALYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETECTTEXTANOMALYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DetectTextAnomalyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectTextAnomalyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, DetectTextAnomalyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
    };
    DetectTextAnomalyResponseBody() = default ;
    DetectTextAnomalyResponseBody(const DetectTextAnomalyResponseBody &) = default ;
    DetectTextAnomalyResponseBody(DetectTextAnomalyResponseBody &&) = default ;
    DetectTextAnomalyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectTextAnomalyResponseBody() = default ;
    DetectTextAnomalyResponseBody& operator=(const DetectTextAnomalyResponseBody &) = default ;
    DetectTextAnomalyResponseBody& operator=(DetectTextAnomalyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->suggestion_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetectTextAnomalyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline DetectTextAnomalyResponseBody& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the text contains anomalies. Valid values:
    // 
    // *   pass: the text does not contain anomalies.
    // *   block: the text contains anomalies.
    std::shared_ptr<string> suggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
