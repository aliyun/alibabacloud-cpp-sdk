// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSAMPLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSAMPLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class ListSampleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSampleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegId, regId_);
      DARABONBA_PTR_TO_JSON(SampleName, sampleName_);
      DARABONBA_PTR_TO_JSON(Tab, tab_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UploadTimeEnd, uploadTimeEnd_);
      DARABONBA_PTR_TO_JSON(UploadTimeStart, uploadTimeStart_);
    };
    friend void from_json(const Darabonba::Json& j, ListSampleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegId, regId_);
      DARABONBA_PTR_FROM_JSON(SampleName, sampleName_);
      DARABONBA_PTR_FROM_JSON(Tab, tab_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UploadTimeEnd, uploadTimeEnd_);
      DARABONBA_PTR_FROM_JSON(UploadTimeStart, uploadTimeStart_);
    };
    ListSampleRequest() = default ;
    ListSampleRequest(const ListSampleRequest &) = default ;
    ListSampleRequest(ListSampleRequest &&) = default ;
    ListSampleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSampleRequest() = default ;
    ListSampleRequest& operator=(const ListSampleRequest &) = default ;
    ListSampleRequest& operator=(ListSampleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->lang_ == nullptr && this->pageSize_ == nullptr && this->regId_ == nullptr && this->sampleName_ == nullptr && this->tab_ == nullptr
        && this->type_ == nullptr && this->uploadTimeEnd_ == nullptr && this->uploadTimeStart_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListSampleRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListSampleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSampleRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline ListSampleRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sampleName Field Functions 
    bool hasSampleName() const { return this->sampleName_ != nullptr;};
    void deleteSampleName() { this->sampleName_ = nullptr;};
    inline string getSampleName() const { DARABONBA_PTR_GET_DEFAULT(sampleName_, "") };
    inline ListSampleRequest& setSampleName(string sampleName) { DARABONBA_PTR_SET_VALUE(sampleName_, sampleName) };


    // tab Field Functions 
    bool hasTab() const { return this->tab_ != nullptr;};
    void deleteTab() { this->tab_ = nullptr;};
    inline string getTab() const { DARABONBA_PTR_GET_DEFAULT(tab_, "") };
    inline ListSampleRequest& setTab(string tab) { DARABONBA_PTR_SET_VALUE(tab_, tab) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListSampleRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uploadTimeEnd Field Functions 
    bool hasUploadTimeEnd() const { return this->uploadTimeEnd_ != nullptr;};
    void deleteUploadTimeEnd() { this->uploadTimeEnd_ = nullptr;};
    inline string getUploadTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(uploadTimeEnd_, "") };
    inline ListSampleRequest& setUploadTimeEnd(string uploadTimeEnd) { DARABONBA_PTR_SET_VALUE(uploadTimeEnd_, uploadTimeEnd) };


    // uploadTimeStart Field Functions 
    bool hasUploadTimeStart() const { return this->uploadTimeStart_ != nullptr;};
    void deleteUploadTimeStart() { this->uploadTimeStart_ = nullptr;};
    inline string getUploadTimeStart() const { DARABONBA_PTR_GET_DEFAULT(uploadTimeStart_, "") };
    inline ListSampleRequest& setUploadTimeStart(string uploadTimeStart) { DARABONBA_PTR_SET_VALUE(uploadTimeStart_, uploadTimeStart) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> regId_ {};
    shared_ptr<string> sampleName_ {};
    shared_ptr<string> tab_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> uploadTimeEnd_ {};
    shared_ptr<string> uploadTimeStart_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
