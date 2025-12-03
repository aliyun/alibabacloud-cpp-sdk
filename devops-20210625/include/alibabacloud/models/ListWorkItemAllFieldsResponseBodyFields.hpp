// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKITEMALLFIELDSRESPONSEBODYFIELDS_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKITEMALLFIELDSRESPONSEBODYFIELDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWorkItemAllFieldsResponseBodyFieldsOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListWorkItemAllFieldsResponseBodyFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkItemAllFieldsResponseBodyFields& obj) { 
      DARABONBA_PTR_TO_JSON(className, className_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(defaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(format, format_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(isRequired, isRequired_);
      DARABONBA_PTR_TO_JSON(isShowWhenCreate, isShowWhenCreate_);
      DARABONBA_PTR_TO_JSON(isSystemRequired, isSystemRequired_);
      DARABONBA_PTR_TO_JSON(linkWithService, linkWithService_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(options, options_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkItemAllFieldsResponseBodyFields& obj) { 
      DARABONBA_PTR_FROM_JSON(className, className_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(defaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(format, format_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(isRequired, isRequired_);
      DARABONBA_PTR_FROM_JSON(isShowWhenCreate, isShowWhenCreate_);
      DARABONBA_PTR_FROM_JSON(isSystemRequired, isSystemRequired_);
      DARABONBA_PTR_FROM_JSON(linkWithService, linkWithService_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(options, options_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListWorkItemAllFieldsResponseBodyFields() = default ;
    ListWorkItemAllFieldsResponseBodyFields(const ListWorkItemAllFieldsResponseBodyFields &) = default ;
    ListWorkItemAllFieldsResponseBodyFields(ListWorkItemAllFieldsResponseBodyFields &&) = default ;
    ListWorkItemAllFieldsResponseBodyFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkItemAllFieldsResponseBodyFields() = default ;
    ListWorkItemAllFieldsResponseBodyFields& operator=(const ListWorkItemAllFieldsResponseBodyFields &) = default ;
    ListWorkItemAllFieldsResponseBodyFields& operator=(ListWorkItemAllFieldsResponseBodyFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->className_ == nullptr
        && return this->creator_ == nullptr && return this->defaultValue_ == nullptr && return this->description_ == nullptr && return this->format_ == nullptr && return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->identifier_ == nullptr && return this->isRequired_ == nullptr && return this->isShowWhenCreate_ == nullptr && return this->isSystemRequired_ == nullptr
        && return this->linkWithService_ == nullptr && return this->modifier_ == nullptr && return this->name_ == nullptr && return this->options_ == nullptr && return this->resourceType_ == nullptr
        && return this->type_ == nullptr; };
    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline ListWorkItemAllFieldsResponseBodyFields& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListWorkItemAllFieldsResponseBodyFields& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline ListWorkItemAllFieldsResponseBodyFields& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListWorkItemAllFieldsResponseBodyFields& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline ListWorkItemAllFieldsResponseBodyFields& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ListWorkItemAllFieldsResponseBodyFields& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline ListWorkItemAllFieldsResponseBodyFields& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ListWorkItemAllFieldsResponseBodyFields& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // isRequired Field Functions 
    bool hasIsRequired() const { return this->isRequired_ != nullptr;};
    void deleteIsRequired() { this->isRequired_ = nullptr;};
    inline bool isRequired() const { DARABONBA_PTR_GET_DEFAULT(isRequired_, false) };
    inline ListWorkItemAllFieldsResponseBodyFields& setIsRequired(bool isRequired) { DARABONBA_PTR_SET_VALUE(isRequired_, isRequired) };


    // isShowWhenCreate Field Functions 
    bool hasIsShowWhenCreate() const { return this->isShowWhenCreate_ != nullptr;};
    void deleteIsShowWhenCreate() { this->isShowWhenCreate_ = nullptr;};
    inline bool isShowWhenCreate() const { DARABONBA_PTR_GET_DEFAULT(isShowWhenCreate_, false) };
    inline ListWorkItemAllFieldsResponseBodyFields& setIsShowWhenCreate(bool isShowWhenCreate) { DARABONBA_PTR_SET_VALUE(isShowWhenCreate_, isShowWhenCreate) };


    // isSystemRequired Field Functions 
    bool hasIsSystemRequired() const { return this->isSystemRequired_ != nullptr;};
    void deleteIsSystemRequired() { this->isSystemRequired_ = nullptr;};
    inline bool isSystemRequired() const { DARABONBA_PTR_GET_DEFAULT(isSystemRequired_, false) };
    inline ListWorkItemAllFieldsResponseBodyFields& setIsSystemRequired(bool isSystemRequired) { DARABONBA_PTR_SET_VALUE(isSystemRequired_, isSystemRequired) };


    // linkWithService Field Functions 
    bool hasLinkWithService() const { return this->linkWithService_ != nullptr;};
    void deleteLinkWithService() { this->linkWithService_ = nullptr;};
    inline string linkWithService() const { DARABONBA_PTR_GET_DEFAULT(linkWithService_, "") };
    inline ListWorkItemAllFieldsResponseBodyFields& setLinkWithService(string linkWithService) { DARABONBA_PTR_SET_VALUE(linkWithService_, linkWithService) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline ListWorkItemAllFieldsResponseBodyFields& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWorkItemAllFieldsResponseBodyFields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const vector<Models::ListWorkItemAllFieldsResponseBodyFieldsOptions> & options() const { DARABONBA_PTR_GET_CONST(options_, vector<Models::ListWorkItemAllFieldsResponseBodyFieldsOptions>) };
    inline vector<Models::ListWorkItemAllFieldsResponseBodyFieldsOptions> options() { DARABONBA_PTR_GET(options_, vector<Models::ListWorkItemAllFieldsResponseBodyFieldsOptions>) };
    inline ListWorkItemAllFieldsResponseBodyFields& setOptions(const vector<Models::ListWorkItemAllFieldsResponseBodyFieldsOptions> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline ListWorkItemAllFieldsResponseBodyFields& setOptions(vector<Models::ListWorkItemAllFieldsResponseBodyFieldsOptions> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListWorkItemAllFieldsResponseBodyFields& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListWorkItemAllFieldsResponseBodyFields& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> className_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> format_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<bool> isRequired_ = nullptr;
    std::shared_ptr<bool> isShowWhenCreate_ = nullptr;
    std::shared_ptr<bool> isSystemRequired_ = nullptr;
    std::shared_ptr<string> linkWithService_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::ListWorkItemAllFieldsResponseBodyFieldsOptions>> options_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
