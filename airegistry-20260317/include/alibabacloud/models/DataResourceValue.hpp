// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATARESOURCEVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATARESOURCEVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class DataResourceValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataResourceValue& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
    };
    friend void from_json(const Darabonba::Json& j, DataResourceValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
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
    shared_ptr<string> name_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> content_ {};
    Darabonba::Json metadata_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
