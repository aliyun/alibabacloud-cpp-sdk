// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHSAMPLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHSAMPLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class SearchSampleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchSampleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(Tab, tab_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UploadTimeEnd, uploadTimeEnd_);
      DARABONBA_PTR_TO_JSON(UploadTimeStart, uploadTimeStart_);
    };
    friend void from_json(const Darabonba::Json& j, SearchSampleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(Tab, tab_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UploadTimeEnd, uploadTimeEnd_);
      DARABONBA_PTR_FROM_JSON(UploadTimeStart, uploadTimeStart_);
    };
    SearchSampleRequest() = default ;
    SearchSampleRequest(const SearchSampleRequest &) = default ;
    SearchSampleRequest(SearchSampleRequest &&) = default ;
    SearchSampleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchSampleRequest() = default ;
    SearchSampleRequest& operator=(const SearchSampleRequest &) = default ;
    SearchSampleRequest& operator=(SearchSampleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->lang_ == nullptr && this->regId_ == nullptr && this->tab_ == nullptr && this->type_ == nullptr && this->uploadTimeEnd_ == nullptr
        && this->uploadTimeStart_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline SearchSampleRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SearchSampleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline SearchSampleRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // tab Field Functions 
    bool hasTab() const { return this->tab_ != nullptr;};
    void deleteTab() { this->tab_ = nullptr;};
    inline string getTab() const { DARABONBA_PTR_GET_DEFAULT(tab_, "") };
    inline SearchSampleRequest& setTab(string tab) { DARABONBA_PTR_SET_VALUE(tab_, tab) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SearchSampleRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uploadTimeEnd Field Functions 
    bool hasUploadTimeEnd() const { return this->uploadTimeEnd_ != nullptr;};
    void deleteUploadTimeEnd() { this->uploadTimeEnd_ = nullptr;};
    inline string getUploadTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(uploadTimeEnd_, "") };
    inline SearchSampleRequest& setUploadTimeEnd(string uploadTimeEnd) { DARABONBA_PTR_SET_VALUE(uploadTimeEnd_, uploadTimeEnd) };


    // uploadTimeStart Field Functions 
    bool hasUploadTimeStart() const { return this->uploadTimeStart_ != nullptr;};
    void deleteUploadTimeStart() { this->uploadTimeStart_ = nullptr;};
    inline string getUploadTimeStart() const { DARABONBA_PTR_GET_DEFAULT(uploadTimeStart_, "") };
    inline SearchSampleRequest& setUploadTimeStart(string uploadTimeStart) { DARABONBA_PTR_SET_VALUE(uploadTimeStart_, uploadTimeStart) };


  protected:
    shared_ptr<string> keyword_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> regId_ {};
    shared_ptr<string> tab_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> uploadTimeEnd_ {};
    shared_ptr<string> uploadTimeStart_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
