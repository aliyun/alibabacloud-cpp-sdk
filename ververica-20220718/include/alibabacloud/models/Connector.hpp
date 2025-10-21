// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONNECTOR_HPP_
#define ALIBABACLOUD_MODELS_CONNECTOR_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Property.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class Connector : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Connector& obj) { 
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(dependencies, dependencies_);
      DARABONBA_PTR_TO_JSON(lookup, lookup_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(modifierName, modifierName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(properties, properties_);
      DARABONBA_PTR_TO_JSON(sink, sink_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(supportedFormats, supportedFormats_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, Connector& obj) { 
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(dependencies, dependencies_);
      DARABONBA_PTR_FROM_JSON(lookup, lookup_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(modifierName, modifierName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(properties, properties_);
      DARABONBA_PTR_FROM_JSON(sink, sink_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(supportedFormats, supportedFormats_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    Connector() = default ;
    Connector(const Connector &) = default ;
    Connector(Connector &&) = default ;
    Connector(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Connector() = default ;
    Connector& operator=(const Connector &) = default ;
    Connector& operator=(Connector &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creator_ == nullptr
        && return this->creatorName_ == nullptr && return this->dependencies_ == nullptr && return this->lookup_ == nullptr && return this->modifier_ == nullptr && return this->modifierName_ == nullptr
        && return this->name_ == nullptr && return this->properties_ == nullptr && return this->sink_ == nullptr && return this->source_ == nullptr && return this->supportedFormats_ == nullptr
        && return this->type_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline Connector& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline Connector& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // dependencies Field Functions 
    bool hasDependencies() const { return this->dependencies_ != nullptr;};
    void deleteDependencies() { this->dependencies_ = nullptr;};
    inline const vector<string> & dependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, vector<string>) };
    inline vector<string> dependencies() { DARABONBA_PTR_GET(dependencies_, vector<string>) };
    inline Connector& setDependencies(const vector<string> & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
    inline Connector& setDependencies(vector<string> && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


    // lookup Field Functions 
    bool hasLookup() const { return this->lookup_ != nullptr;};
    void deleteLookup() { this->lookup_ = nullptr;};
    inline bool lookup() const { DARABONBA_PTR_GET_DEFAULT(lookup_, false) };
    inline Connector& setLookup(bool lookup) { DARABONBA_PTR_SET_VALUE(lookup_, lookup) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline Connector& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // modifierName Field Functions 
    bool hasModifierName() const { return this->modifierName_ != nullptr;};
    void deleteModifierName() { this->modifierName_ = nullptr;};
    inline string modifierName() const { DARABONBA_PTR_GET_DEFAULT(modifierName_, "") };
    inline Connector& setModifierName(string modifierName) { DARABONBA_PTR_SET_VALUE(modifierName_, modifierName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Connector& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const vector<Property> & properties() const { DARABONBA_PTR_GET_CONST(properties_, vector<Property>) };
    inline vector<Property> properties() { DARABONBA_PTR_GET(properties_, vector<Property>) };
    inline Connector& setProperties(const vector<Property> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline Connector& setProperties(vector<Property> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // sink Field Functions 
    bool hasSink() const { return this->sink_ != nullptr;};
    void deleteSink() { this->sink_ = nullptr;};
    inline bool sink() const { DARABONBA_PTR_GET_DEFAULT(sink_, false) };
    inline Connector& setSink(bool sink) { DARABONBA_PTR_SET_VALUE(sink_, sink) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline bool source() const { DARABONBA_PTR_GET_DEFAULT(source_, false) };
    inline Connector& setSource(bool source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // supportedFormats Field Functions 
    bool hasSupportedFormats() const { return this->supportedFormats_ != nullptr;};
    void deleteSupportedFormats() { this->supportedFormats_ = nullptr;};
    inline const vector<string> & supportedFormats() const { DARABONBA_PTR_GET_CONST(supportedFormats_, vector<string>) };
    inline vector<string> supportedFormats() { DARABONBA_PTR_GET(supportedFormats_, vector<string>) };
    inline Connector& setSupportedFormats(const vector<string> & supportedFormats) { DARABONBA_PTR_SET_VALUE(supportedFormats_, supportedFormats) };
    inline Connector& setSupportedFormats(vector<string> && supportedFormats) { DARABONBA_PTR_SET_RVALUE(supportedFormats_, supportedFormats) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline Connector& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> creatorName_ = nullptr;
    std::shared_ptr<vector<string>> dependencies_ = nullptr;
    std::shared_ptr<bool> lookup_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> modifierName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Property>> properties_ = nullptr;
    std::shared_ptr<bool> sink_ = nullptr;
    std::shared_ptr<bool> source_ = nullptr;
    std::shared_ptr<vector<string>> supportedFormats_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
