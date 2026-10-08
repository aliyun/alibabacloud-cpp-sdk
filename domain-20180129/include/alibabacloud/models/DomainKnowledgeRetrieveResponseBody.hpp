// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOMAINKNOWLEDGERETRIEVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DOMAINKNOWLEDGERETRIEVERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class DomainKnowledgeRetrieveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DomainKnowledgeRetrieveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DomainKnowledgeRetrieveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DomainKnowledgeRetrieveResponseBody() = default ;
    DomainKnowledgeRetrieveResponseBody(const DomainKnowledgeRetrieveResponseBody &) = default ;
    DomainKnowledgeRetrieveResponseBody(DomainKnowledgeRetrieveResponseBody &&) = default ;
    DomainKnowledgeRetrieveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DomainKnowledgeRetrieveResponseBody() = default ;
    DomainKnowledgeRetrieveResponseBody& operator=(const DomainKnowledgeRetrieveResponseBody &) = default ;
    DomainKnowledgeRetrieveResponseBody& operator=(DomainKnowledgeRetrieveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Text, text_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Text, text_);
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
      virtual bool empty() const override { return this->score_ == nullptr
        && this->source_ == nullptr && this->text_ == nullptr; };
      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
      inline Data& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Data& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
      inline Data& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    protected:
      // Le score du texte récupéré ; plus le score est élevé, plus le résultat est pertinent.
      shared_ptr<double> score_ {};
      // La source des résultats récupérés.
      shared_ptr<string> source_ {};
      // Le texte récupéré.
      shared_ptr<string> text_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DomainKnowledgeRetrieveResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DomainKnowledgeRetrieveResponseBody::Data>) };
    inline vector<DomainKnowledgeRetrieveResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DomainKnowledgeRetrieveResponseBody::Data>) };
    inline DomainKnowledgeRetrieveResponseBody& setData(const vector<DomainKnowledgeRetrieveResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DomainKnowledgeRetrieveResponseBody& setData(vector<DomainKnowledgeRetrieveResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DomainKnowledgeRetrieveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // La liste des résultats récupérés.
    shared_ptr<vector<DomainKnowledgeRetrieveResponseBody::Data>> data_ {};
    // L\\"identifiant de la requête.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
