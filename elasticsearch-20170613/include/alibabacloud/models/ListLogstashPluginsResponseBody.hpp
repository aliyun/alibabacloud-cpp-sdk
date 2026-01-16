// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGSTASHPLUGINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGSTASHPLUGINSRESPONSEBODY_HPP_
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
  class ListLogstashPluginsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogstashPluginsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogstashPluginsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListLogstashPluginsResponseBody() = default ;
    ListLogstashPluginsResponseBody(const ListLogstashPluginsResponseBody &) = default ;
    ListLogstashPluginsResponseBody(ListLogstashPluginsResponseBody &&) = default ;
    ListLogstashPluginsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogstashPluginsResponseBody() = default ;
    ListLogstashPluginsResponseBody& operator=(const ListLogstashPluginsResponseBody &) = default ;
    ListLogstashPluginsResponseBody& operator=(ListLogstashPluginsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(specificationUrl, specificationUrl_);
        DARABONBA_PTR_TO_JSON(state, state_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(specificationUrl, specificationUrl_);
        DARABONBA_PTR_FROM_JSON(state, state_);
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
        && this->name_ == nullptr && this->source_ == nullptr && this->specificationUrl_ == nullptr && this->state_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Result& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // specificationUrl Field Functions 
      bool hasSpecificationUrl() const { return this->specificationUrl_ != nullptr;};
      void deleteSpecificationUrl() { this->specificationUrl_ = nullptr;};
      inline string getSpecificationUrl() const { DARABONBA_PTR_GET_DEFAULT(specificationUrl_, "") };
      inline Result& setSpecificationUrl(string specificationUrl) { DARABONBA_PTR_SET_VALUE(specificationUrl_, specificationUrl) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Result& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The source of the plug-in.
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> source_ {};
      // The name of the plug-in.
      shared_ptr<string> specificationUrl_ {};
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLogstashPluginsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListLogstashPluginsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListLogstashPluginsResponseBody::Result>) };
    inline vector<ListLogstashPluginsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListLogstashPluginsResponseBody::Result>) };
    inline ListLogstashPluginsResponseBody& setResult(const vector<ListLogstashPluginsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListLogstashPluginsResponseBody& setResult(vector<ListLogstashPluginsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The address of the documentation for the plug-in.
    shared_ptr<string> requestId_ {};
    // The status of the plug-in. Valid values:
    // 
    // *   INSTALLED: Installed
    // *   UNINSTALLED: Not installed
    // *   INSTALLING: The instance is being installed.
    // *   UNINSTALLING: The instance is being uninstalled.
    // *   UPGRADING: The backup gateway is being upgraded.
    // *   FAILED: Installation failed
    // *   UNKNOWN: The cluster is lost and cannot be created.
    shared_ptr<vector<ListLogstashPluginsResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
