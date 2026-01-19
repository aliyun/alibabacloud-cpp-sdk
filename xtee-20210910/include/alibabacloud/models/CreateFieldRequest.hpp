// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFIELDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFIELDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateFieldRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFieldRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(classify, classify_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enumData, enumData_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFieldRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(classify, classify_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enumData, enumData_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateFieldRequest() = default ;
    CreateFieldRequest(const CreateFieldRequest &) = default ;
    CreateFieldRequest(CreateFieldRequest &&) = default ;
    CreateFieldRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFieldRequest() = default ;
    CreateFieldRequest& operator=(const CreateFieldRequest &) = default ;
    CreateFieldRequest& operator=(CreateFieldRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->classify_ == nullptr && this->description_ == nullptr && this->enumData_ == nullptr && this->name_ == nullptr && this->regId_ == nullptr
        && this->source_ == nullptr && this->title_ == nullptr && this->type_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateFieldRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline CreateFieldRequest& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFieldRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enumData Field Functions 
    bool hasEnumData() const { return this->enumData_ != nullptr;};
    void deleteEnumData() { this->enumData_ = nullptr;};
    inline string getEnumData() const { DARABONBA_PTR_GET_DEFAULT(enumData_, "") };
    inline CreateFieldRequest& setEnumData(string enumData) { DARABONBA_PTR_SET_VALUE(enumData_, enumData) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateFieldRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline CreateFieldRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateFieldRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateFieldRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateFieldRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Field classification.
    shared_ptr<string> classify_ {};
    // Description information.
    shared_ptr<string> description_ {};
    // Enum data.
    shared_ptr<string> enumData_ {};
    // Field name.
    shared_ptr<string> name_ {};
    // Region code.
    // 
    // This parameter is required.
    shared_ptr<string> regId_ {};
    // Business source.
    shared_ptr<string> source_ {};
    // Title.
    shared_ptr<string> title_ {};
    // Field type.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
