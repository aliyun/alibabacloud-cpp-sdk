// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFIELDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFIELDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class ModifyFieldRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyFieldRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(classify, classify_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enumData, enumData_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyFieldRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(classify, classify_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enumData, enumData_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    ModifyFieldRequest() = default ;
    ModifyFieldRequest(const ModifyFieldRequest &) = default ;
    ModifyFieldRequest(ModifyFieldRequest &&) = default ;
    ModifyFieldRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyFieldRequest() = default ;
    ModifyFieldRequest& operator=(const ModifyFieldRequest &) = default ;
    ModifyFieldRequest& operator=(ModifyFieldRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->classify_ == nullptr && this->description_ == nullptr && this->enumData_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->regId_ == nullptr && this->title_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyFieldRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline ModifyFieldRequest& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyFieldRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enumData Field Functions 
    bool hasEnumData() const { return this->enumData_ != nullptr;};
    void deleteEnumData() { this->enumData_ = nullptr;};
    inline string getEnumData() const { DARABONBA_PTR_GET_DEFAULT(enumData_, "") };
    inline ModifyFieldRequest& setEnumData(string enumData) { DARABONBA_PTR_SET_VALUE(enumData_, enumData) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyFieldRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyFieldRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline ModifyFieldRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ModifyFieldRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Field classification
    shared_ptr<string> classify_ {};
    // Description information.
    shared_ptr<string> description_ {};
    // Enum type
    shared_ptr<string> enumData_ {};
    // Variable ID
    shared_ptr<int64_t> id_ {};
    // Variable name
    shared_ptr<string> name_ {};
    // Region code
    // 
    // This parameter is required.
    shared_ptr<string> regId_ {};
    // Title.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
