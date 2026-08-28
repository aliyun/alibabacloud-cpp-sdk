// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATARESOURCEVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATARESOURCEVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class DataResourceValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataResourceValue& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_ANY_TO_JSON(metadata, metadata_);
    };
    friend void from_json(const Darabonba::Json& j, DataResourceValue& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_ANY_FROM_JSON(metadata, metadata_);
    };
    DataResourceValue() = default ;
    DataResourceValue(const DataResourceValue &) = default ;
    DataResourceValue(DataResourceValue &&) = default ;
    DataResourceValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataResourceValue() = default ;
    DataResourceValue& operator=(const DataResourceValue &) = default ;
    DataResourceValue& operator=(DataResourceValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr && this->content_ == nullptr && this->metadata_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DataResourceValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DataResourceValue& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DataResourceValue& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline DataResourceValue& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline DataResourceValue& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


  protected:
    // The name.
    shared_ptr<string> name_ {};
    // The type.
    shared_ptr<string> type_ {};
    // The content.
    shared_ptr<string> content_ {};
    // The metadata.
    Darabonba::Json metadata_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
