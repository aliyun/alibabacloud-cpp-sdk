// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class RetrieveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    RetrieveResponseBody() = default ;
    RetrieveResponseBody(const RetrieveResponseBody &) = default ;
    RetrieveResponseBody(RetrieveResponseBody &&) = default ;
    RetrieveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveResponseBody() = default ;
    RetrieveResponseBody& operator=(const RetrieveResponseBody &) = default ;
    RetrieveResponseBody& operator=(RetrieveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
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
      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_ANY_TO_JSON(Metadata, metadata_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(Text, text_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->metadata_ == nullptr
        && this->score_ == nullptr && this->text_ == nullptr; };
        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline         const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
        Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
        inline Nodes& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
        inline Nodes& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline Nodes& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Nodes& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      protected:
        // The metadata map of the chunk.
        Darabonba::Json metadata_ {};
        // The similarity score of the chunk. Valid values:[0-1].
        shared_ptr<double> score_ {};
        // The text of the chunk.
        shared_ptr<string> text_ {};
      };

      virtual bool empty() const override { return this->nodes_ == nullptr; };
      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<Data::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Data::Nodes>) };
      inline vector<Data::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<Data::Nodes>) };
      inline Data& setNodes(const vector<Data::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline Data& setNodes(vector<Data::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    protected:
      // The list of queried chunks.
      shared_ptr<vector<Data::Nodes>> nodes_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RetrieveResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RetrieveResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RetrieveResponseBody::Data) };
    inline RetrieveResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RetrieveResponseBody::Data) };
    inline RetrieveResponseBody& setData(const RetrieveResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RetrieveResponseBody& setData(RetrieveResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RetrieveResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RetrieveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RetrieveResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RetrieveResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // HTTP status code
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<RetrieveResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The HTTP status code returned.
    shared_ptr<string> status_ {};
    // Indications whether the API call is successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
