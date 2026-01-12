// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class MultiModalAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultiModalAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, MultiModalAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    MultiModalAgentResponseBody() = default ;
    MultiModalAgentResponseBody(const MultiModalAgentResponseBody &) = default ;
    MultiModalAgentResponseBody(MultiModalAgentResponseBody &&) = default ;
    MultiModalAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultiModalAgentResponseBody() = default ;
    MultiModalAgentResponseBody& operator=(const MultiModalAgentResponseBody &) = default ;
    MultiModalAgentResponseBody& operator=(MultiModalAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(Usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(Usage, usage_);
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
      class Usage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Usage& obj) { 
          DARABONBA_ANY_TO_JSON(AgentDetail, agentDetail_);
          DARABONBA_PTR_TO_JSON(ContentLength, contentLength_);
          DARABONBA_PTR_TO_JSON(PromptLength, promptLength_);
        };
        friend void from_json(const Darabonba::Json& j, Usage& obj) { 
          DARABONBA_ANY_FROM_JSON(AgentDetail, agentDetail_);
          DARABONBA_PTR_FROM_JSON(ContentLength, contentLength_);
          DARABONBA_PTR_FROM_JSON(PromptLength, promptLength_);
        };
        Usage() = default ;
        Usage(const Usage &) = default ;
        Usage(Usage &&) = default ;
        Usage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Usage() = default ;
        Usage& operator=(const Usage &) = default ;
        Usage& operator=(Usage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentDetail_ == nullptr
        && this->contentLength_ == nullptr && this->promptLength_ == nullptr; };
        // agentDetail Field Functions 
        bool hasAgentDetail() const { return this->agentDetail_ != nullptr;};
        void deleteAgentDetail() { this->agentDetail_ = nullptr;};
        inline         const Darabonba::Json & getAgentDetail() const { DARABONBA_GET(agentDetail_) };
        Darabonba::Json & getAgentDetail() { DARABONBA_GET(agentDetail_) };
        inline Usage& setAgentDetail(const Darabonba::Json & agentDetail) { DARABONBA_SET_VALUE(agentDetail_, agentDetail) };
        inline Usage& setAgentDetail(Darabonba::Json && agentDetail) { DARABONBA_SET_RVALUE(agentDetail_, agentDetail) };


        // contentLength Field Functions 
        bool hasContentLength() const { return this->contentLength_ != nullptr;};
        void deleteContentLength() { this->contentLength_ = nullptr;};
        inline int64_t getContentLength() const { DARABONBA_PTR_GET_DEFAULT(contentLength_, 0L) };
        inline Usage& setContentLength(int64_t contentLength) { DARABONBA_PTR_SET_VALUE(contentLength_, contentLength) };


        // promptLength Field Functions 
        bool hasPromptLength() const { return this->promptLength_ != nullptr;};
        void deletePromptLength() { this->promptLength_ = nullptr;};
        inline int64_t getPromptLength() const { DARABONBA_PTR_GET_DEFAULT(promptLength_, 0L) };
        inline Usage& setPromptLength(int64_t promptLength) { DARABONBA_PTR_SET_VALUE(promptLength_, promptLength) };


      protected:
        Darabonba::Json agentDetail_ {};
        shared_ptr<int64_t> contentLength_ {};
        shared_ptr<int64_t> promptLength_ {};
      };

      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
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
        virtual bool empty() const override { return this->description_ == nullptr
        && this->label_ == nullptr && this->reason_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Result& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline Result& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> label_ {};
        shared_ptr<string> reason_ {};
      };

      virtual bool empty() const override { return this->dataId_ == nullptr
        && this->result_ == nullptr && this->riskLevel_ == nullptr && this->usage_ == nullptr; };
      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Data& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Data& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline const Data::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, Data::Usage) };
      inline Data::Usage getUsage() { DARABONBA_PTR_GET(usage_, Data::Usage) };
      inline Data& setUsage(const Data::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
      inline Data& setUsage(Data::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


    protected:
      shared_ptr<string> dataId_ {};
      shared_ptr<vector<Data::Result>> result_ {};
      shared_ptr<string> riskLevel_ {};
      shared_ptr<Data::Usage> usage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MultiModalAgentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const MultiModalAgentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, MultiModalAgentResponseBody::Data) };
    inline MultiModalAgentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, MultiModalAgentResponseBody::Data) };
    inline MultiModalAgentResponseBody& setData(const MultiModalAgentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MultiModalAgentResponseBody& setData(MultiModalAgentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MultiModalAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MultiModalAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<MultiModalAgentResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
