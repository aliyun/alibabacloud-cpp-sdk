// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTODISPOSEENTITIESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTODISPOSEENTITIESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListAutoDisposeEntitiesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutoDisposeEntitiesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoDisposeRecordIds, autoDisposeRecordIdsShrink_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutoDisposeEntitiesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoDisposeRecordIds, autoDisposeRecordIdsShrink_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListAutoDisposeEntitiesShrinkRequest() = default ;
    ListAutoDisposeEntitiesShrinkRequest(const ListAutoDisposeEntitiesShrinkRequest &) = default ;
    ListAutoDisposeEntitiesShrinkRequest(ListAutoDisposeEntitiesShrinkRequest &&) = default ;
    ListAutoDisposeEntitiesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutoDisposeEntitiesShrinkRequest() = default ;
    ListAutoDisposeEntitiesShrinkRequest& operator=(const ListAutoDisposeEntitiesShrinkRequest &) = default ;
    ListAutoDisposeEntitiesShrinkRequest& operator=(ListAutoDisposeEntitiesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoDisposeRecordIdsShrink_ == nullptr
        && this->currentPage_ == nullptr && this->dataSourceType_ == nullptr && this->lang_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->pageSize_ == nullptr && this->uuid_ == nullptr; };
    // autoDisposeRecordIdsShrink Field Functions 
    bool hasAutoDisposeRecordIdsShrink() const { return this->autoDisposeRecordIdsShrink_ != nullptr;};
    void deleteAutoDisposeRecordIdsShrink() { this->autoDisposeRecordIdsShrink_ = nullptr;};
    inline string getAutoDisposeRecordIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(autoDisposeRecordIdsShrink_, "") };
    inline ListAutoDisposeEntitiesShrinkRequest& setAutoDisposeRecordIdsShrink(string autoDisposeRecordIdsShrink) { DARABONBA_PTR_SET_VALUE(autoDisposeRecordIdsShrink_, autoDisposeRecordIdsShrink) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline ListAutoDisposeEntitiesShrinkRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline ListAutoDisposeEntitiesShrinkRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListAutoDisposeEntitiesShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAutoDisposeEntitiesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAutoDisposeEntitiesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListAutoDisposeEntitiesShrinkRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListAutoDisposeEntitiesShrinkRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<string> autoDisposeRecordIdsShrink_ {};
    // This parameter is required.
    shared_ptr<string> currentPage_ {};
    // This parameter is required.
    shared_ptr<string> dataSourceType_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
