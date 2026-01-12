// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGESFROMLIBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGESFROMLIBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListImagesFromLibRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImagesFromLibRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ImgId, imgId_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, ListImagesFromLibRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ImgId, imgId_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    ListImagesFromLibRequest() = default ;
    ListImagesFromLibRequest(const ListImagesFromLibRequest &) = default ;
    ListImagesFromLibRequest(ListImagesFromLibRequest &&) = default ;
    ListImagesFromLibRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImagesFromLibRequest() = default ;
    ListImagesFromLibRequest& operator=(const ListImagesFromLibRequest &) = default ;
    ListImagesFromLibRequest& operator=(ListImagesFromLibRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->endDate_ == nullptr && this->imgId_ == nullptr && this->libId_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->sort_ == nullptr && this->startDate_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListImagesFromLibRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ListImagesFromLibRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // imgId Field Functions 
    bool hasImgId() const { return this->imgId_ != nullptr;};
    void deleteImgId() { this->imgId_ = nullptr;};
    inline string getImgId() const { DARABONBA_PTR_GET_DEFAULT(imgId_, "") };
    inline ListImagesFromLibRequest& setImgId(string imgId) { DARABONBA_PTR_SET_VALUE(imgId_, imgId) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline ListImagesFromLibRequest& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListImagesFromLibRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListImagesFromLibRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline const map<string, string> & getSort() const { DARABONBA_PTR_GET_CONST(sort_, map<string, string>) };
    inline map<string, string> getSort() { DARABONBA_PTR_GET(sort_, map<string, string>) };
    inline ListImagesFromLibRequest& setSort(const map<string, string> & sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };
    inline ListImagesFromLibRequest& setSort(map<string, string> && sort) { DARABONBA_PTR_SET_RVALUE(sort_, sort) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline ListImagesFromLibRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // End date.
    shared_ptr<string> endDate_ {};
    // Image ID.
    shared_ptr<string> imgId_ {};
    // Gallery ID.
    shared_ptr<string> libId_ {};
    // Page size.
    shared_ptr<int32_t> pageSize_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
    // Sort field.
    shared_ptr<map<string, string>> sort_ {};
    // Start date.
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
