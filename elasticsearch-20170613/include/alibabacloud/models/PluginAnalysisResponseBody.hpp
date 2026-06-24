// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PLUGINANALYSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PLUGINANALYSISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class PluginAnalysisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PluginAnalysisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, PluginAnalysisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    PluginAnalysisResponseBody() = default ;
    PluginAnalysisResponseBody(const PluginAnalysisResponseBody &) = default ;
    PluginAnalysisResponseBody(PluginAnalysisResponseBody &&) = default ;
    PluginAnalysisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PluginAnalysisResponseBody() = default ;
    PluginAnalysisResponseBody& operator=(const PluginAnalysisResponseBody &) = default ;
    PluginAnalysisResponseBody& operator=(PluginAnalysisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(elasticsearchVersion, elasticsearchVersion_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(securityPolicy, securityPolicy_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(elasticsearchVersion, elasticsearchVersion_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(securityPolicy, securityPolicy_);
        DARABONBA_PTR_FROM_JSON(version, version_);
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
        && this->elasticsearchVersion_ == nullptr && this->name_ == nullptr && this->securityPolicy_ == nullptr && this->version_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // elasticsearchVersion Field Functions 
      bool hasElasticsearchVersion() const { return this->elasticsearchVersion_ != nullptr;};
      void deleteElasticsearchVersion() { this->elasticsearchVersion_ = nullptr;};
      inline string getElasticsearchVersion() const { DARABONBA_PTR_GET_DEFAULT(elasticsearchVersion_, "") };
      inline Result& setElasticsearchVersion(string elasticsearchVersion) { DARABONBA_PTR_SET_VALUE(elasticsearchVersion_, elasticsearchVersion) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // securityPolicy Field Functions 
      bool hasSecurityPolicy() const { return this->securityPolicy_ != nullptr;};
      void deleteSecurityPolicy() { this->securityPolicy_ = nullptr;};
      inline string getSecurityPolicy() const { DARABONBA_PTR_GET_DEFAULT(securityPolicy_, "") };
      inline Result& setSecurityPolicy(string securityPolicy) { DARABONBA_PTR_SET_VALUE(securityPolicy_, securityPolicy) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Result& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // Plugin Description.
      shared_ptr<string> description_ {};
      // Plugin version.
      shared_ptr<string> elasticsearchVersion_ {};
      // Plugin Name.
      shared_ptr<string> name_ {};
      // Plugin security policy.
      shared_ptr<string> securityPolicy_ {};
      // Plugin Version.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PluginAnalysisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<PluginAnalysisResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<PluginAnalysisResponseBody::Result>) };
    inline vector<PluginAnalysisResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<PluginAnalysisResponseBody::Result>) };
    inline PluginAnalysisResponseBody& setResult(const vector<PluginAnalysisResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline PluginAnalysisResponseBody& setResult(vector<PluginAnalysisResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Return Result.
    shared_ptr<vector<PluginAnalysisResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
