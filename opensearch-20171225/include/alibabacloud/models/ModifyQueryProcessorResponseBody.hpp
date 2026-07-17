// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYQUERYPROCESSORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYQUERYPROCESSORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ModifyQueryProcessorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyQueryProcessorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyQueryProcessorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ModifyQueryProcessorResponseBody() = default ;
    ModifyQueryProcessorResponseBody(const ModifyQueryProcessorResponseBody &) = default ;
    ModifyQueryProcessorResponseBody(ModifyQueryProcessorResponseBody &&) = default ;
    ModifyQueryProcessorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyQueryProcessorResponseBody() = default ;
    ModifyQueryProcessorResponseBody& operator=(const ModifyQueryProcessorResponseBody &) = default ;
    ModifyQueryProcessorResponseBody& operator=(ModifyQueryProcessorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(active, active_);
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(domain, domain_);
        DARABONBA_PTR_TO_JSON(indexes, indexes_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(processors, processors_);
        DARABONBA_PTR_TO_JSON(updated, updated_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(active, active_);
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(domain, domain_);
        DARABONBA_PTR_FROM_JSON(indexes, indexes_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(processors, processors_);
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
      virtual bool empty() const override { return this->active_ == nullptr
        && this->created_ == nullptr && this->domain_ == nullptr && this->indexes_ == nullptr && this->name_ == nullptr && this->processors_ == nullptr
        && this->updated_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
      inline Result& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline int32_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
      inline Result& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Result& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // indexes Field Functions 
      bool hasIndexes() const { return this->indexes_ != nullptr;};
      void deleteIndexes() { this->indexes_ = nullptr;};
      inline const vector<string> & getIndexes() const { DARABONBA_PTR_GET_CONST(indexes_, vector<string>) };
      inline vector<string> getIndexes() { DARABONBA_PTR_GET(indexes_, vector<string>) };
      inline Result& setIndexes(const vector<string> & indexes) { DARABONBA_PTR_SET_VALUE(indexes_, indexes) };
      inline Result& setIndexes(vector<string> && indexes) { DARABONBA_PTR_SET_RVALUE(indexes_, indexes) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // processors Field Functions 
      bool hasProcessors() const { return this->processors_ != nullptr;};
      void deleteProcessors() { this->processors_ = nullptr;};
      inline const vector<Darabonba::Json> & getProcessors() const { DARABONBA_PTR_GET_CONST(processors_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getProcessors() { DARABONBA_PTR_GET(processors_, vector<Darabonba::Json>) };
      inline Result& setProcessors(const vector<Darabonba::Json> & processors) { DARABONBA_PTR_SET_VALUE(processors_, processors) };
      inline Result& setProcessors(vector<Darabonba::Json> && processors) { DARABONBA_PTR_SET_RVALUE(processors_, processors) };


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline int32_t getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
      inline Result& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    protected:
      // Indicates whether the rule is a default rule.
      shared_ptr<bool> active_ {};
      // The time when the rule was created.
      shared_ptr<int32_t> created_ {};
      // The industry to which the query analysis rule applies. Valid values:
      // 
      // - GENERAL: General
      // 
      // - ECOMMERCE: E-commerce
      // 
      // - IT_CONTENT: IT content
      shared_ptr<string> domain_ {};
      // The indexes to which the query analysis rule applies.
      shared_ptr<vector<string>> indexes_ {};
      // The name of the rule.
      shared_ptr<string> name_ {};
      // The analysis rule.
      shared_ptr<vector<Darabonba::Json>> processors_ {};
      // The time when the rule was updated.
      shared_ptr<int32_t> updated_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyQueryProcessorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ModifyQueryProcessorResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ModifyQueryProcessorResponseBody::Result) };
    inline ModifyQueryProcessorResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ModifyQueryProcessorResponseBody::Result) };
    inline ModifyQueryProcessorResponseBody& setResult(const ModifyQueryProcessorResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ModifyQueryProcessorResponseBody& setResult(ModifyQueryProcessorResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the rule.
    shared_ptr<ModifyQueryProcessorResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
