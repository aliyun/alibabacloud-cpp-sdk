// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEINTERVENTIONDICTIONARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVEINTERVENTIONDICTIONARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class RemoveInterventionDictionaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveInterventionDictionaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveInterventionDictionaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    RemoveInterventionDictionaryResponseBody() = default ;
    RemoveInterventionDictionaryResponseBody(const RemoveInterventionDictionaryResponseBody &) = default ;
    RemoveInterventionDictionaryResponseBody(RemoveInterventionDictionaryResponseBody &&) = default ;
    RemoveInterventionDictionaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveInterventionDictionaryResponseBody() = default ;
    RemoveInterventionDictionaryResponseBody& operator=(const RemoveInterventionDictionaryResponseBody &) = default ;
    RemoveInterventionDictionaryResponseBody& operator=(RemoveInterventionDictionaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(analyzer, analyzer_);
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(updated, updated_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(analyzer, analyzer_);
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(updated, updated_);
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
      virtual bool empty() const override { return this->analyzer_ == nullptr
        && this->created_ == nullptr && this->name_ == nullptr && this->type_ == nullptr && this->updated_ == nullptr; };
      // analyzer Field Functions 
      bool hasAnalyzer() const { return this->analyzer_ != nullptr;};
      void deleteAnalyzer() { this->analyzer_ = nullptr;};
      inline string getAnalyzer() const { DARABONBA_PTR_GET_DEFAULT(analyzer_, "") };
      inline Result& setAnalyzer(string analyzer) { DARABONBA_PTR_SET_VALUE(analyzer_, analyzer) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
      inline Result& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline string getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
      inline Result& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    protected:
      // The custom analyzer.
      shared_ptr<string> analyzer_ {};
      // The time when the intervention dictionary was created.
      shared_ptr<string> created_ {};
      // Parameter
      shared_ptr<string> name_ {};
      // Type
      // 
      // *   stopword: an intervention dictionary for stop word filtering.
      // *   synonym: an intervention dictionary for synonym configuration.
      // *   correction: an intervention dictionary for spelling correction.
      // *   category_prediction: an intervention dictionary for category prediction.
      // *   ner: an intervention dictionary for named entity recognition.
      // *   term_weighting: an intervention dictionary for term weight analysis.
      shared_ptr<string> type_ {};
      // The time when the the intervention dictionary was modified.
      shared_ptr<string> updated_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveInterventionDictionaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const RemoveInterventionDictionaryResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, RemoveInterventionDictionaryResponseBody::Result) };
    inline RemoveInterventionDictionaryResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, RemoveInterventionDictionaryResponseBody::Result) };
    inline RemoveInterventionDictionaryResponseBody& setResult(const RemoveInterventionDictionaryResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline RemoveInterventionDictionaryResponseBody& setResult(RemoveInterventionDictionaryResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the intervention dictionary.
    shared_ptr<RemoveInterventionDictionaryResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
