// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERSIONPAGELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERSIONPAGELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeVersionPageListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVersionPageListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(objectCode, objectCode_);
      DARABONBA_PTR_TO_JSON(objectId, objectId_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(paging, paging_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVersionPageListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(objectCode, objectCode_);
      DARABONBA_PTR_FROM_JSON(objectId, objectId_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(paging, paging_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeVersionPageListRequest() = default ;
    DescribeVersionPageListRequest(const DescribeVersionPageListRequest &) = default ;
    DescribeVersionPageListRequest(DescribeVersionPageListRequest &&) = default ;
    DescribeVersionPageListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVersionPageListRequest() = default ;
    DescribeVersionPageListRequest& operator=(const DescribeVersionPageListRequest &) = default ;
    DescribeVersionPageListRequest& operator=(DescribeVersionPageListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->currentPage_ != nullptr && this->objectCode_ != nullptr && this->objectId_ != nullptr
        && this->pageSize_ != nullptr && this->paging_ != nullptr && this->regId_ != nullptr && this->type_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeVersionPageListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeVersionPageListRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeVersionPageListRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeVersionPageListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // objectCode Field Functions 
    bool hasObjectCode() const { return this->objectCode_ != nullptr;};
    void deleteObjectCode() { this->objectCode_ = nullptr;};
    inline string objectCode() const { DARABONBA_PTR_GET_DEFAULT(objectCode_, "") };
    inline DescribeVersionPageListRequest& setObjectCode(string objectCode) { DARABONBA_PTR_SET_VALUE(objectCode_, objectCode) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline int64_t objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, 0L) };
    inline DescribeVersionPageListRequest& setObjectId(int64_t objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVersionPageListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // paging Field Functions 
    bool hasPaging() const { return this->paging_ != nullptr;};
    void deletePaging() { this->paging_ = nullptr;};
    inline bool paging() const { DARABONBA_PTR_GET_DEFAULT(paging_, false) };
    inline DescribeVersionPageListRequest& setPaging(bool paging) { DARABONBA_PTR_SET_VALUE(paging_, paging) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeVersionPageListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVersionPageListRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Sets the language type for the request and response messages, with a default value of **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Maximum number of results to be read in this call, with a default value of 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Used to mark the starting position for reading. An empty value indicates starting from the beginning.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Current page number.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Name of the variable.
    std::shared_ptr<string> objectCode_ = nullptr;
    // Primary key ID of the variable.
    std::shared_ptr<int64_t> objectId_ = nullptr;
    // Number of items per page, with a default value of 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Pagination flag, with a default value of true.
    std::shared_ptr<bool> paging_ = nullptr;
    // Region code.
    std::shared_ptr<string> regId_ = nullptr;
    // Type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
