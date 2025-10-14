// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFORMDATASECONDGENERATIONNOTABLEFIELDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFORMDATASECONDGENERATIONNOTABLEFIELDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SearchFormDataSecondGenerationNoTableFieldRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFormDataSecondGenerationNoTableFieldRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(CreateFromTimeGMT, createFromTimeGMT_);
      DARABONBA_PTR_TO_JSON(CreateToTimeGMT, createToTimeGMT_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(ModifiedFromTimeGMT, modifiedFromTimeGMT_);
      DARABONBA_PTR_TO_JSON(ModifiedToTimeGMT, modifiedToTimeGMT_);
      DARABONBA_PTR_TO_JSON(OrderConfigJson, orderConfigJson_);
      DARABONBA_PTR_TO_JSON(OriginatorId, originatorId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchCondition, searchCondition_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
    };
    friend void from_json(const Darabonba::Json& j, SearchFormDataSecondGenerationNoTableFieldRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(CreateFromTimeGMT, createFromTimeGMT_);
      DARABONBA_PTR_FROM_JSON(CreateToTimeGMT, createToTimeGMT_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(ModifiedFromTimeGMT, modifiedFromTimeGMT_);
      DARABONBA_PTR_FROM_JSON(ModifiedToTimeGMT, modifiedToTimeGMT_);
      DARABONBA_PTR_FROM_JSON(OrderConfigJson, orderConfigJson_);
      DARABONBA_PTR_FROM_JSON(OriginatorId, originatorId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchCondition, searchCondition_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
    };
    SearchFormDataSecondGenerationNoTableFieldRequest() = default ;
    SearchFormDataSecondGenerationNoTableFieldRequest(const SearchFormDataSecondGenerationNoTableFieldRequest &) = default ;
    SearchFormDataSecondGenerationNoTableFieldRequest(SearchFormDataSecondGenerationNoTableFieldRequest &&) = default ;
    SearchFormDataSecondGenerationNoTableFieldRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFormDataSecondGenerationNoTableFieldRequest() = default ;
    SearchFormDataSecondGenerationNoTableFieldRequest& operator=(const SearchFormDataSecondGenerationNoTableFieldRequest &) = default ;
    SearchFormDataSecondGenerationNoTableFieldRequest& operator=(SearchFormDataSecondGenerationNoTableFieldRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && return this->createFromTimeGMT_ == nullptr && return this->createToTimeGMT_ == nullptr && return this->formUuid_ == nullptr && return this->modifiedFromTimeGMT_ == nullptr && return this->modifiedToTimeGMT_ == nullptr
        && return this->orderConfigJson_ == nullptr && return this->originatorId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->searchCondition_ == nullptr
        && return this->systemToken_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline SearchFormDataSecondGenerationNoTableFieldRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // createFromTimeGMT Field Functions 
    bool hasCreateFromTimeGMT() const { return this->createFromTimeGMT_ != nullptr;};
    void deleteCreateFromTimeGMT() { this->createFromTimeGMT_ = nullptr;};
    inline string createFromTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createFromTimeGMT_, "") };
    inline SearchFormDataSecondGenerationNoTableFieldRequest& setCreateFromTimeGMT(string createFromTimeGMT) { DARABONBA_PTR_SET_VALUE(createFromTimeGMT_, createFromTimeGMT) };


    // createToTimeGMT Field Functions 
    bool hasCreateToTimeGMT() const { return this->createToTimeGMT_ != nullptr;};
    void deleteCreateToTimeGMT() { this->createToTimeGMT_ = nullptr;};
    inline string createToTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createToTimeGMT_, "") };
    inline SearchFormDataSecondGenerationNoTableFieldRequest& setCreateToTimeGMT(string createToTimeGMT) { DARABONBA_PTR_SET_VALUE(createToTimeGMT_, createToTimeGMT) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string formUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline SearchFormDataSecondGenerationNoTableFieldRequest& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // modifiedFromTimeGMT Field Functions 
    bool hasModifiedFromTimeGMT() const { return this->modifiedFromTimeGMT_ != nullptr;};
    void deleteModifiedFromTimeGMT() { this->modifiedFromTimeGMT_ = nullptr;};
    inline string modifiedFromTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedFromTimeGMT_, "") };
    inline SearchFormDataSecondGenerationNoTableFieldRequest& setModifiedFromTimeGMT(string modifiedFromTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedFromTimeGMT_, modifiedFromTimeGMT) };


    // modifiedToTimeGMT Field Functions 
    bool hasModifiedToTimeGMT() const { return this->modifiedToTimeGMT_ != nullptr;};
    void deleteModifiedToTimeGMT() { this->modifiedToTimeGMT_ = nullptr;};
    inline string modifiedToTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedToTimeGMT_, "") };
    inline SearchFormDataSecondGenerationNoTableFieldRequest& setModifiedToTimeGMT(string modifiedToTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedToTimeGMT_, modifiedToTimeGMT) };


    // orderConfigJson Field Functions 
    bool hasOrderConfigJson() const { return this->orderConfigJson_ != nullptr;};
    void deleteOrderConfigJson() { this->orderConfigJson_ = nullptr;};
    inline string orderConfigJson() const { DARABONBA_PTR_GET_DEFAULT(orderConfigJson_, "") };
    inline SearchFormDataSecondGenerationNoTableFieldRequest& setOrderConfigJson(string orderConfigJson) { DARABONBA_PTR_SET_VALUE(orderConfigJson_, orderConfigJson) };


    // originatorId Field Functions 
    bool hasOriginatorId() const { return this->originatorId_ != nullptr;};
    void deleteOriginatorId() { this->originatorId_ = nullptr;};
    inline string originatorId() const { DARABONBA_PTR_GET_DEFAULT(originatorId_, "") };
    inline SearchFormDataSecondGenerationNoTableFieldRequest& setOriginatorId(string originatorId) { DARABONBA_PTR_SET_VALUE(originatorId_, originatorId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchFormDataSecondGenerationNoTableFieldRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchFormDataSecondGenerationNoTableFieldRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchCondition Field Functions 
    bool hasSearchCondition() const { return this->searchCondition_ != nullptr;};
    void deleteSearchCondition() { this->searchCondition_ = nullptr;};
    inline string searchCondition() const { DARABONBA_PTR_GET_DEFAULT(searchCondition_, "") };
    inline SearchFormDataSecondGenerationNoTableFieldRequest& setSearchCondition(string searchCondition) { DARABONBA_PTR_SET_VALUE(searchCondition_, searchCondition) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline SearchFormDataSecondGenerationNoTableFieldRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> createFromTimeGMT_ = nullptr;
    std::shared_ptr<string> createToTimeGMT_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> formUuid_ = nullptr;
    std::shared_ptr<string> modifiedFromTimeGMT_ = nullptr;
    std::shared_ptr<string> modifiedToTimeGMT_ = nullptr;
    std::shared_ptr<string> orderConfigJson_ = nullptr;
    std::shared_ptr<string> originatorId_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> searchCondition_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> systemToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
