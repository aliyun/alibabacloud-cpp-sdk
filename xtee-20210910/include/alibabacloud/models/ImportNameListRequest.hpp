// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTNAMELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTNAMELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class ImportNameListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportNameListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(createType, createType_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(importType, importType_);
      DARABONBA_PTR_TO_JSON(memo, memo_);
      DARABONBA_PTR_TO_JSON(nameListType, nameListType_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(variableId, variableId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportNameListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(createType, createType_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(importType, importType_);
      DARABONBA_PTR_FROM_JSON(memo, memo_);
      DARABONBA_PTR_FROM_JSON(nameListType, nameListType_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(variableId, variableId_);
    };
    ImportNameListRequest() = default ;
    ImportNameListRequest(const ImportNameListRequest &) = default ;
    ImportNameListRequest(ImportNameListRequest &&) = default ;
    ImportNameListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportNameListRequest() = default ;
    ImportNameListRequest& operator=(const ImportNameListRequest &) = default ;
    ImportNameListRequest& operator=(ImportNameListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->createType_ == nullptr && this->data_ == nullptr && this->description_ == nullptr && this->importType_ == nullptr && this->memo_ == nullptr
        && this->nameListType_ == nullptr && this->regId_ == nullptr && this->title_ == nullptr && this->variableId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ImportNameListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline string getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
    inline ImportNameListRequest& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ImportNameListRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ImportNameListRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // importType Field Functions 
    bool hasImportType() const { return this->importType_ != nullptr;};
    void deleteImportType() { this->importType_ = nullptr;};
    inline string getImportType() const { DARABONBA_PTR_GET_DEFAULT(importType_, "") };
    inline ImportNameListRequest& setImportType(string importType) { DARABONBA_PTR_SET_VALUE(importType_, importType) };


    // memo Field Functions 
    bool hasMemo() const { return this->memo_ != nullptr;};
    void deleteMemo() { this->memo_ = nullptr;};
    inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
    inline ImportNameListRequest& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


    // nameListType Field Functions 
    bool hasNameListType() const { return this->nameListType_ != nullptr;};
    void deleteNameListType() { this->nameListType_ = nullptr;};
    inline string getNameListType() const { DARABONBA_PTR_GET_DEFAULT(nameListType_, "") };
    inline ImportNameListRequest& setNameListType(string nameListType) { DARABONBA_PTR_SET_VALUE(nameListType_, nameListType) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline ImportNameListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ImportNameListRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // variableId Field Functions 
    bool hasVariableId() const { return this->variableId_ != nullptr;};
    void deleteVariableId() { this->variableId_ = nullptr;};
    inline int64_t getVariableId() const { DARABONBA_PTR_GET_DEFAULT(variableId_, 0L) };
    inline ImportNameListRequest& setVariableId(int64_t variableId) { DARABONBA_PTR_SET_VALUE(variableId_, variableId) };


  protected:
    // Set the language type for request and response messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Creation type
    shared_ptr<string> createType_ {};
    // Import name list.
    shared_ptr<string> data_ {};
    // Description information.
    shared_ptr<string> description_ {};
    // Document import type:
    // 
    // 
    // INPUT: Text input
    // CSV: CSV upload
    // NONE: Do not upload for now
    // 
    // This parameter is required.
    shared_ptr<string> importType_ {};
    // name content memo
    shared_ptr<string> memo_ {};
    // nameListType
    shared_ptr<string> nameListType_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Title.
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
    // Variable ID
    shared_ptr<int64_t> variableId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
