// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAMPLEDATALISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAMPLEDATALISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSampleDataListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSampleDataListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(deleteTag, deleteTag_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(queryContent, queryContent_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(sampleId, sampleId_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSampleDataListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(deleteTag, deleteTag_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(queryContent, queryContent_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(sampleId, sampleId_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    DescribeSampleDataListRequest() = default ;
    DescribeSampleDataListRequest(const DescribeSampleDataListRequest &) = default ;
    DescribeSampleDataListRequest(DescribeSampleDataListRequest &&) = default ;
    DescribeSampleDataListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSampleDataListRequest() = default ;
    DescribeSampleDataListRequest& operator=(const DescribeSampleDataListRequest &) = default ;
    DescribeSampleDataListRequest& operator=(DescribeSampleDataListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->currentPage_ == nullptr && this->deleteTag_ == nullptr && this->pageSize_ == nullptr && this->queryContent_ == nullptr && this->regId_ == nullptr
        && this->sampleId_ == nullptr && this->scene_ == nullptr && this->status_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSampleDataListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeSampleDataListRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // deleteTag Field Functions 
    bool hasDeleteTag() const { return this->deleteTag_ != nullptr;};
    void deleteDeleteTag() { this->deleteTag_ = nullptr;};
    inline string getDeleteTag() const { DARABONBA_PTR_GET_DEFAULT(deleteTag_, "") };
    inline DescribeSampleDataListRequest& setDeleteTag(string deleteTag) { DARABONBA_PTR_SET_VALUE(deleteTag_, deleteTag) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeSampleDataListRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryContent Field Functions 
    bool hasQueryContent() const { return this->queryContent_ != nullptr;};
    void deleteQueryContent() { this->queryContent_ = nullptr;};
    inline string getQueryContent() const { DARABONBA_PTR_GET_DEFAULT(queryContent_, "") };
    inline DescribeSampleDataListRequest& setQueryContent(string queryContent) { DARABONBA_PTR_SET_VALUE(queryContent_, queryContent) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeSampleDataListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sampleId Field Functions 
    bool hasSampleId() const { return this->sampleId_ != nullptr;};
    void deleteSampleId() { this->sampleId_ = nullptr;};
    inline int64_t getSampleId() const { DARABONBA_PTR_GET_DEFAULT(sampleId_, 0L) };
    inline DescribeSampleDataListRequest& setSampleId(int64_t sampleId) { DARABONBA_PTR_SET_VALUE(sampleId_, sampleId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline DescribeSampleDataListRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSampleDataListRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Current page number.
    shared_ptr<string> currentPage_ {};
    // Deletion status
    shared_ptr<string> deleteTag_ {};
    // Page size, default value is 10.
    shared_ptr<string> pageSize_ {};
    // Query content
    shared_ptr<string> queryContent_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Sample ID.
    shared_ptr<int64_t> sampleId_ {};
    // Scene
    shared_ptr<string> scene_ {};
    // Status.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
