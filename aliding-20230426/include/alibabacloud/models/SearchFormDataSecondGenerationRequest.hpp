// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFORMDATASECONDGENERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFORMDATASECONDGENERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SearchFormDataSecondGenerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFormDataSecondGenerationRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SearchFormDataSecondGenerationRequest& obj) { 
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
    SearchFormDataSecondGenerationRequest() = default ;
    SearchFormDataSecondGenerationRequest(const SearchFormDataSecondGenerationRequest &) = default ;
    SearchFormDataSecondGenerationRequest(SearchFormDataSecondGenerationRequest &&) = default ;
    SearchFormDataSecondGenerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFormDataSecondGenerationRequest() = default ;
    SearchFormDataSecondGenerationRequest& operator=(const SearchFormDataSecondGenerationRequest &) = default ;
    SearchFormDataSecondGenerationRequest& operator=(SearchFormDataSecondGenerationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && this->createFromTimeGMT_ == nullptr && this->createToTimeGMT_ == nullptr && this->formUuid_ == nullptr && this->modifiedFromTimeGMT_ == nullptr && this->modifiedToTimeGMT_ == nullptr
        && this->orderConfigJson_ == nullptr && this->originatorId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->searchCondition_ == nullptr
        && this->systemToken_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline SearchFormDataSecondGenerationRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // createFromTimeGMT Field Functions 
    bool hasCreateFromTimeGMT() const { return this->createFromTimeGMT_ != nullptr;};
    void deleteCreateFromTimeGMT() { this->createFromTimeGMT_ = nullptr;};
    inline string getCreateFromTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createFromTimeGMT_, "") };
    inline SearchFormDataSecondGenerationRequest& setCreateFromTimeGMT(string createFromTimeGMT) { DARABONBA_PTR_SET_VALUE(createFromTimeGMT_, createFromTimeGMT) };


    // createToTimeGMT Field Functions 
    bool hasCreateToTimeGMT() const { return this->createToTimeGMT_ != nullptr;};
    void deleteCreateToTimeGMT() { this->createToTimeGMT_ = nullptr;};
    inline string getCreateToTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createToTimeGMT_, "") };
    inline SearchFormDataSecondGenerationRequest& setCreateToTimeGMT(string createToTimeGMT) { DARABONBA_PTR_SET_VALUE(createToTimeGMT_, createToTimeGMT) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string getFormUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline SearchFormDataSecondGenerationRequest& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // modifiedFromTimeGMT Field Functions 
    bool hasModifiedFromTimeGMT() const { return this->modifiedFromTimeGMT_ != nullptr;};
    void deleteModifiedFromTimeGMT() { this->modifiedFromTimeGMT_ = nullptr;};
    inline string getModifiedFromTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedFromTimeGMT_, "") };
    inline SearchFormDataSecondGenerationRequest& setModifiedFromTimeGMT(string modifiedFromTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedFromTimeGMT_, modifiedFromTimeGMT) };


    // modifiedToTimeGMT Field Functions 
    bool hasModifiedToTimeGMT() const { return this->modifiedToTimeGMT_ != nullptr;};
    void deleteModifiedToTimeGMT() { this->modifiedToTimeGMT_ = nullptr;};
    inline string getModifiedToTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedToTimeGMT_, "") };
    inline SearchFormDataSecondGenerationRequest& setModifiedToTimeGMT(string modifiedToTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedToTimeGMT_, modifiedToTimeGMT) };


    // orderConfigJson Field Functions 
    bool hasOrderConfigJson() const { return this->orderConfigJson_ != nullptr;};
    void deleteOrderConfigJson() { this->orderConfigJson_ = nullptr;};
    inline string getOrderConfigJson() const { DARABONBA_PTR_GET_DEFAULT(orderConfigJson_, "") };
    inline SearchFormDataSecondGenerationRequest& setOrderConfigJson(string orderConfigJson) { DARABONBA_PTR_SET_VALUE(orderConfigJson_, orderConfigJson) };


    // originatorId Field Functions 
    bool hasOriginatorId() const { return this->originatorId_ != nullptr;};
    void deleteOriginatorId() { this->originatorId_ = nullptr;};
    inline string getOriginatorId() const { DARABONBA_PTR_GET_DEFAULT(originatorId_, "") };
    inline SearchFormDataSecondGenerationRequest& setOriginatorId(string originatorId) { DARABONBA_PTR_SET_VALUE(originatorId_, originatorId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchFormDataSecondGenerationRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchFormDataSecondGenerationRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchCondition Field Functions 
    bool hasSearchCondition() const { return this->searchCondition_ != nullptr;};
    void deleteSearchCondition() { this->searchCondition_ = nullptr;};
    inline string getSearchCondition() const { DARABONBA_PTR_GET_DEFAULT(searchCondition_, "") };
    inline SearchFormDataSecondGenerationRequest& setSearchCondition(string searchCondition) { DARABONBA_PTR_SET_VALUE(searchCondition_, searchCondition) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string getSystemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline SearchFormDataSecondGenerationRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    // This parameter is required.
    shared_ptr<string> appType_ {};
    shared_ptr<string> createFromTimeGMT_ {};
    shared_ptr<string> createToTimeGMT_ {};
    // This parameter is required.
    shared_ptr<string> formUuid_ {};
    shared_ptr<string> modifiedFromTimeGMT_ {};
    shared_ptr<string> modifiedToTimeGMT_ {};
    shared_ptr<string> orderConfigJson_ {};
    shared_ptr<string> originatorId_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> searchCondition_ {};
    // This parameter is required.
    shared_ptr<string> systemToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
