// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGSTASHPLUGINSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGSTASHPLUGINSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListLogstashPluginsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogstashPluginsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(specificationUrl, specificationUrl_);
      DARABONBA_PTR_TO_JSON(state, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogstashPluginsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(specificationUrl, specificationUrl_);
      DARABONBA_PTR_FROM_JSON(state, state_);
    };
    ListLogstashPluginsResponseBodyResult() = default ;
    ListLogstashPluginsResponseBodyResult(const ListLogstashPluginsResponseBodyResult &) = default ;
    ListLogstashPluginsResponseBodyResult(ListLogstashPluginsResponseBodyResult &&) = default ;
    ListLogstashPluginsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogstashPluginsResponseBodyResult() = default ;
    ListLogstashPluginsResponseBodyResult& operator=(const ListLogstashPluginsResponseBodyResult &) = default ;
    ListLogstashPluginsResponseBodyResult& operator=(ListLogstashPluginsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->name_ != nullptr && this->source_ != nullptr && this->specificationUrl_ != nullptr && this->state_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListLogstashPluginsResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListLogstashPluginsResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListLogstashPluginsResponseBodyResult& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // specificationUrl Field Functions 
    bool hasSpecificationUrl() const { return this->specificationUrl_ != nullptr;};
    void deleteSpecificationUrl() { this->specificationUrl_ = nullptr;};
    inline string specificationUrl() const { DARABONBA_PTR_GET_DEFAULT(specificationUrl_, "") };
    inline ListLogstashPluginsResponseBodyResult& setSpecificationUrl(string specificationUrl) { DARABONBA_PTR_SET_VALUE(specificationUrl_, specificationUrl) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListLogstashPluginsResponseBodyResult& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The source of the plug-in.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    // The name of the plug-in.
    std::shared_ptr<string> specificationUrl_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
