// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEPRODUCTCONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEPRODUCTCONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class GenerateProductContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateProductContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateProductContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GenerateProductContentResponseBody() = default ;
    GenerateProductContentResponseBody(const GenerateProductContentResponseBody &) = default ;
    GenerateProductContentResponseBody(GenerateProductContentResponseBody &&) = default ;
    GenerateProductContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateProductContentResponseBody() = default ;
    GenerateProductContentResponseBody& operator=(const GenerateProductContentResponseBody &) = default ;
    GenerateProductContentResponseBody& operator=(GenerateProductContentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ContentType, contentType_);
        DARABONBA_PTR_TO_JSON(Length, length_);
        DARABONBA_PTR_TO_JSON(OutputLanguage, outputLanguage_);
        DARABONBA_PTR_TO_JSON(PointLengths, pointLengths_);
        DARABONBA_PTR_TO_JSON(Points, points_);
        DARABONBA_PTR_TO_JSON(Text, text_);
        DARABONBA_PTR_TO_JSON(UsageMap, usageMap_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
        DARABONBA_PTR_FROM_JSON(Length, length_);
        DARABONBA_PTR_FROM_JSON(OutputLanguage, outputLanguage_);
        DARABONBA_PTR_FROM_JSON(PointLengths, pointLengths_);
        DARABONBA_PTR_FROM_JSON(Points, points_);
        DARABONBA_PTR_FROM_JSON(Text, text_);
        DARABONBA_PTR_FROM_JSON(UsageMap, usageMap_);
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
      virtual bool empty() const override { return this->contentType_ == nullptr
        && this->length_ == nullptr && this->outputLanguage_ == nullptr && this->pointLengths_ == nullptr && this->points_ == nullptr && this->text_ == nullptr
        && this->usageMap_ == nullptr; };
      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline Data& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // length Field Functions 
      bool hasLength() const { return this->length_ != nullptr;};
      void deleteLength() { this->length_ = nullptr;};
      inline int32_t getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
      inline Data& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


      // outputLanguage Field Functions 
      bool hasOutputLanguage() const { return this->outputLanguage_ != nullptr;};
      void deleteOutputLanguage() { this->outputLanguage_ = nullptr;};
      inline string getOutputLanguage() const { DARABONBA_PTR_GET_DEFAULT(outputLanguage_, "") };
      inline Data& setOutputLanguage(string outputLanguage) { DARABONBA_PTR_SET_VALUE(outputLanguage_, outputLanguage) };


      // pointLengths Field Functions 
      bool hasPointLengths() const { return this->pointLengths_ != nullptr;};
      void deletePointLengths() { this->pointLengths_ = nullptr;};
      inline const vector<int32_t> & getPointLengths() const { DARABONBA_PTR_GET_CONST(pointLengths_, vector<int32_t>) };
      inline vector<int32_t> getPointLengths() { DARABONBA_PTR_GET(pointLengths_, vector<int32_t>) };
      inline Data& setPointLengths(const vector<int32_t> & pointLengths) { DARABONBA_PTR_SET_VALUE(pointLengths_, pointLengths) };
      inline Data& setPointLengths(vector<int32_t> && pointLengths) { DARABONBA_PTR_SET_RVALUE(pointLengths_, pointLengths) };


      // points Field Functions 
      bool hasPoints() const { return this->points_ != nullptr;};
      void deletePoints() { this->points_ = nullptr;};
      inline const vector<string> & getPoints() const { DARABONBA_PTR_GET_CONST(points_, vector<string>) };
      inline vector<string> getPoints() { DARABONBA_PTR_GET(points_, vector<string>) };
      inline Data& setPoints(const vector<string> & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
      inline Data& setPoints(vector<string> && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
      inline Data& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      // usageMap Field Functions 
      bool hasUsageMap() const { return this->usageMap_ != nullptr;};
      void deleteUsageMap() { this->usageMap_ = nullptr;};
      inline const map<string, int32_t> & getUsageMap() const { DARABONBA_PTR_GET_CONST(usageMap_, map<string, int32_t>) };
      inline map<string, int32_t> getUsageMap() { DARABONBA_PTR_GET(usageMap_, map<string, int32_t>) };
      inline Data& setUsageMap(const map<string, int32_t> & usageMap) { DARABONBA_PTR_SET_VALUE(usageMap_, usageMap) };
      inline Data& setUsageMap(map<string, int32_t> && usageMap) { DARABONBA_PTR_SET_RVALUE(usageMap_, usageMap) };


    protected:
      // The actual copy type processed.
      shared_ptr<string> contentType_ {};
      // The total number of characters in data.text, including formatting characters such as spaces, punctuation marks, and line breaks.
      shared_ptr<int32_t> length_ {};
      // The code of the actual output language.
      shared_ptr<string> outputLanguage_ {};
      // The number of characters for each selling point, which corresponds to data.points one by one. This parameter is returned only when bullet points are successfully processed.
      shared_ptr<vector<int32_t>> pointLengths_ {};
      // The selling point texts arranged in output order. This parameter is returned only when bullet points are successfully processed.
      shared_ptr<vector<string>> points_ {};
      // The final copy. Generated keywords are separated by commas and spaces. Rewritten keywords are separated by spaces. Bullet points are separated by line breaks.
      shared_ptr<string> text_ {};
      // The usage information.
      shared_ptr<map<string, int32_t>> usageMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GenerateProductContentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GenerateProductContentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GenerateProductContentResponseBody::Data) };
    inline GenerateProductContentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GenerateProductContentResponseBody::Data) };
    inline GenerateProductContentResponseBody& setData(const GenerateProductContentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GenerateProductContentResponseBody& setData(GenerateProductContentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GenerateProductContentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateProductContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GenerateProductContentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code. This parameter is not returned for successful calls.
    shared_ptr<string> code_ {};
    // The processing result. Contains copy data upon success. Returns null upon business failure.
    shared_ptr<GenerateProductContentResponseBody::Data> data_ {};
    // The error message. This parameter is not returned for successful calls.
    shared_ptr<string> message_ {};
    // The request ID, which is used for troubleshooting. This parameter may be empty in extreme exception scenarios.
    shared_ptr<string> requestId_ {};
    // Indicates whether the business processing is successful. Valid values: true (the output passes verification) and false (the business processing fails).
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
