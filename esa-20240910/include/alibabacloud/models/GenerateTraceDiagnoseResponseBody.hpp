// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATETRACEDIAGNOSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATETRACEDIAGNOSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GenerateTraceDiagnoseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateTraceDiagnoseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tip, tip_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateTraceDiagnoseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tip, tip_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GenerateTraceDiagnoseResponseBody() = default ;
    GenerateTraceDiagnoseResponseBody(const GenerateTraceDiagnoseResponseBody &) = default ;
    GenerateTraceDiagnoseResponseBody(GenerateTraceDiagnoseResponseBody &&) = default ;
    GenerateTraceDiagnoseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateTraceDiagnoseResponseBody() = default ;
    GenerateTraceDiagnoseResponseBody& operator=(const GenerateTraceDiagnoseResponseBody &) = default ;
    GenerateTraceDiagnoseResponseBody& operator=(GenerateTraceDiagnoseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tip_ == nullptr && this->url_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateTraceDiagnoseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tip Field Functions 
    bool hasTip() const { return this->tip_ != nullptr;};
    void deleteTip() { this->tip_ = nullptr;};
    inline string getTip() const { DARABONBA_PTR_GET_DEFAULT(tip_, "") };
    inline GenerateTraceDiagnoseResponseBody& setTip(string tip) { DARABONBA_PTR_SET_VALUE(tip_, tip) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GenerateTraceDiagnoseResponseBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // A diagnostic message.
    shared_ptr<string> tip_ {};
    // The generated diagnostic link.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
