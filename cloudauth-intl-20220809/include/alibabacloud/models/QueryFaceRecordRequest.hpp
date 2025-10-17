// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFACERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYFACERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class QueryFaceRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFaceRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(FaceGroupCode, faceGroupCode_);
      DARABONBA_PTR_TO_JSON(FaceId, faceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegistrationType, registrationType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFaceRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(FaceGroupCode, faceGroupCode_);
      DARABONBA_PTR_FROM_JSON(FaceId, faceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegistrationType, registrationType_);
    };
    QueryFaceRecordRequest() = default ;
    QueryFaceRecordRequest(const QueryFaceRecordRequest &) = default ;
    QueryFaceRecordRequest(QueryFaceRecordRequest &&) = default ;
    QueryFaceRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFaceRecordRequest() = default ;
    QueryFaceRecordRequest& operator=(const QueryFaceRecordRequest &) = default ;
    QueryFaceRecordRequest& operator=(QueryFaceRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->faceGroupCode_ == nullptr && return this->faceId_ == nullptr && return this->maxResults_ == nullptr && return this->merchantUserId_ == nullptr && return this->nextToken_ == nullptr
        && return this->pageSize_ == nullptr && return this->registrationType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline QueryFaceRecordRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // faceGroupCode Field Functions 
    bool hasFaceGroupCode() const { return this->faceGroupCode_ != nullptr;};
    void deleteFaceGroupCode() { this->faceGroupCode_ = nullptr;};
    inline string faceGroupCode() const { DARABONBA_PTR_GET_DEFAULT(faceGroupCode_, "") };
    inline QueryFaceRecordRequest& setFaceGroupCode(string faceGroupCode) { DARABONBA_PTR_SET_VALUE(faceGroupCode_, faceGroupCode) };


    // faceId Field Functions 
    bool hasFaceId() const { return this->faceId_ != nullptr;};
    void deleteFaceId() { this->faceId_ = nullptr;};
    inline string faceId() const { DARABONBA_PTR_GET_DEFAULT(faceId_, "") };
    inline QueryFaceRecordRequest& setFaceId(string faceId) { DARABONBA_PTR_SET_VALUE(faceId_, faceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QueryFaceRecordRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string merchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline QueryFaceRecordRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryFaceRecordRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryFaceRecordRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // registrationType Field Functions 
    bool hasRegistrationType() const { return this->registrationType_ != nullptr;};
    void deleteRegistrationType() { this->registrationType_ = nullptr;};
    inline string registrationType() const { DARABONBA_PTR_GET_DEFAULT(registrationType_, "") };
    inline QueryFaceRecordRequest& setRegistrationType(string registrationType) { DARABONBA_PTR_SET_VALUE(registrationType_, registrationType) };


  protected:
    // Current Page.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // Face Group Code.
    // 
    // This parameter is required.
    std::shared_ptr<string> faceGroupCode_ = nullptr;
    // Face ID.
    std::shared_ptr<string> faceId_ = nullptr;
    // Number of rows per page for paginated queries.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Merchant User ID.
    std::shared_ptr<string> merchantUserId_ = nullptr;
    // Used to request the next page of search results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Number of items per page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Registration Type.
    std::shared_ptr<string> registrationType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
