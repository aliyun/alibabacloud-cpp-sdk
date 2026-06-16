// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVARIABLELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVARIABLELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeVariableListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVariableListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(createType, createType_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(refObjId, refObjId_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(typesStr, typesStr_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVariableListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(createType, createType_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(refObjId, refObjId_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(typesStr, typesStr_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    DescribeVariableListRequest() = default ;
    DescribeVariableListRequest(const DescribeVariableListRequest &) = default ;
    DescribeVariableListRequest(DescribeVariableListRequest &&) = default ;
    DescribeVariableListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVariableListRequest() = default ;
    DescribeVariableListRequest& operator=(const DescribeVariableListRequest &) = default ;
    DescribeVariableListRequest& operator=(DescribeVariableListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->createType_ == nullptr && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->refObjId_ == nullptr && this->regId_ == nullptr
        && this->sourceType_ == nullptr && this->type_ == nullptr && this->typesStr_ == nullptr && this->value_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeVariableListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline string getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
    inline DescribeVariableListRequest& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeVariableListRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeVariableListRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // refObjId Field Functions 
    bool hasRefObjId() const { return this->refObjId_ != nullptr;};
    void deleteRefObjId() { this->refObjId_ = nullptr;};
    inline string getRefObjId() const { DARABONBA_PTR_GET_DEFAULT(refObjId_, "") };
    inline DescribeVariableListRequest& setRefObjId(string refObjId) { DARABONBA_PTR_SET_VALUE(refObjId_, refObjId) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeVariableListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeVariableListRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVariableListRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // typesStr Field Functions 
    bool hasTypesStr() const { return this->typesStr_ != nullptr;};
    void deleteTypesStr() { this->typesStr_ = nullptr;};
    inline string getTypesStr() const { DARABONBA_PTR_GET_DEFAULT(typesStr_, "") };
    inline DescribeVariableListRequest& setTypesStr(string typesStr) { DARABONBA_PTR_SET_VALUE(typesStr_, typesStr) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeVariableListRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The language of the request and response. Default value: **zh**. Valid values:
    // - **zh**: Chinese
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The creation type.
    shared_ptr<string> createType_ {};
    // The current page number.
    shared_ptr<string> currentPage_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<string> pageSize_ {};
    // The ID of the associated event.
    shared_ptr<string> refObjId_ {};
    // The region code.
    shared_ptr<string> regId_ {};
    // The source type.
    shared_ptr<string> sourceType_ {};
    // The type.
    shared_ptr<string> type_ {};
    // The type JSON array string.
    shared_ptr<string> typesStr_ {};
    // The value for fuzzy match.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
