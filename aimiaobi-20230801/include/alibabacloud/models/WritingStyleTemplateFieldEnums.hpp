// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WRITINGSTYLETEMPLATEFIELDENUMS_HPP_
#define ALIBABACLOUD_MODELS_WRITINGSTYLETEMPLATEFIELDENUMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class WritingStyleTemplateFieldEnums : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WritingStyleTemplateFieldEnums& obj) { 
      DARABONBA_PTR_TO_JSON(CascadingFields, cascadingFields_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, WritingStyleTemplateFieldEnums& obj) { 
      DARABONBA_PTR_FROM_JSON(CascadingFields, cascadingFields_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    WritingStyleTemplateFieldEnums() = default ;
    WritingStyleTemplateFieldEnums(const WritingStyleTemplateFieldEnums &) = default ;
    WritingStyleTemplateFieldEnums(WritingStyleTemplateFieldEnums &&) = default ;
    WritingStyleTemplateFieldEnums(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WritingStyleTemplateFieldEnums() = default ;
    WritingStyleTemplateFieldEnums& operator=(const WritingStyleTemplateFieldEnums &) = default ;
    WritingStyleTemplateFieldEnums& operator=(WritingStyleTemplateFieldEnums &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cascadingFields_ != nullptr
        && this->key_ != nullptr && this->name_ != nullptr; };
    // cascadingFields Field Functions 
    bool hasCascadingFields() const { return this->cascadingFields_ != nullptr;};
    void deleteCascadingFields() { this->cascadingFields_ = nullptr;};
    inline const vector<string> & cascadingFields() const { DARABONBA_PTR_GET_CONST(cascadingFields_, vector<string>) };
    inline vector<string> cascadingFields() { DARABONBA_PTR_GET(cascadingFields_, vector<string>) };
    inline WritingStyleTemplateFieldEnums& setCascadingFields(const vector<string> & cascadingFields) { DARABONBA_PTR_SET_VALUE(cascadingFields_, cascadingFields) };
    inline WritingStyleTemplateFieldEnums& setCascadingFields(vector<string> && cascadingFields) { DARABONBA_PTR_SET_RVALUE(cascadingFields_, cascadingFields) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline WritingStyleTemplateFieldEnums& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline WritingStyleTemplateFieldEnums& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<vector<string>> cascadingFields_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
