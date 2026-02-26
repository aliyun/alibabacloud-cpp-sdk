// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROMPTTESTRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROMPTTESTRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetPromptTestResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPromptTestResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetPromptTestResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetPromptTestResultResponseBody() = default ;
    GetPromptTestResultResponseBody(const GetPromptTestResultResponseBody &) = default ;
    GetPromptTestResultResponseBody(GetPromptTestResultResponseBody &&) = default ;
    GetPromptTestResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPromptTestResultResponseBody() = default ;
    GetPromptTestResultResponseBody& operator=(const GetPromptTestResultResponseBody &) = default ;
    GetPromptTestResultResponseBody& operator=(GetPromptTestResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(LabelDetails, labelDetails_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(LabelDetails, labelDetails_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LabelDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LabelDetails& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Label, label_);
        };
        friend void from_json(const Darabonba::Json& j, LabelDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
        };
        LabelDetails() = default ;
        LabelDetails(const LabelDetails &) = default ;
        LabelDetails(LabelDetails &&) = default ;
        LabelDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LabelDetails() = default ;
        LabelDetails& operator=(const LabelDetails &) = default ;
        LabelDetails& operator=(LabelDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->label_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline LabelDetails& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline LabelDetails& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> label_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->labelDetails_ == nullptr && this->riskLevel_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Result& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // labelDetails Field Functions 
      bool hasLabelDetails() const { return this->labelDetails_ != nullptr;};
      void deleteLabelDetails() { this->labelDetails_ = nullptr;};
      inline const vector<Result::LabelDetails> & getLabelDetails() const { DARABONBA_PTR_GET_CONST(labelDetails_, vector<Result::LabelDetails>) };
      inline vector<Result::LabelDetails> getLabelDetails() { DARABONBA_PTR_GET(labelDetails_, vector<Result::LabelDetails>) };
      inline Result& setLabelDetails(const vector<Result::LabelDetails> & labelDetails) { DARABONBA_PTR_SET_VALUE(labelDetails_, labelDetails) };
      inline Result& setLabelDetails(vector<Result::LabelDetails> && labelDetails) { DARABONBA_PTR_SET_RVALUE(labelDetails_, labelDetails) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Result& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<vector<Result::LabelDetails>> labelDetails_ {};
      shared_ptr<string> riskLevel_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPromptTestResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<GetPromptTestResultResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<GetPromptTestResultResponseBody::Result>) };
    inline vector<GetPromptTestResultResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<GetPromptTestResultResponseBody::Result>) };
    inline GetPromptTestResultResponseBody& setResult(const vector<GetPromptTestResultResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetPromptTestResultResponseBody& setResult(vector<GetPromptTestResultResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetPromptTestResultResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
