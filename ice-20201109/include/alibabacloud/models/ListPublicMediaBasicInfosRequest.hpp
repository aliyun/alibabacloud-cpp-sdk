// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLICMEDIABASICINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLICMEDIABASICINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListPublicMediaBasicInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublicMediaBasicInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(IncludeFileBasicInfo, includeFileBasicInfo_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MediaTagId, mediaTagId_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublicMediaBasicInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(IncludeFileBasicInfo, includeFileBasicInfo_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MediaTagId, mediaTagId_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListPublicMediaBasicInfosRequest() = default ;
    ListPublicMediaBasicInfosRequest(const ListPublicMediaBasicInfosRequest &) = default ;
    ListPublicMediaBasicInfosRequest(ListPublicMediaBasicInfosRequest &&) = default ;
    ListPublicMediaBasicInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublicMediaBasicInfosRequest() = default ;
    ListPublicMediaBasicInfosRequest& operator=(const ListPublicMediaBasicInfosRequest &) = default ;
    ListPublicMediaBasicInfosRequest& operator=(ListPublicMediaBasicInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessType_ == nullptr
        && this->includeFileBasicInfo_ == nullptr && this->maxResults_ == nullptr && this->mediaTagId_ == nullptr && this->nextToken_ == nullptr && this->pageNo_ == nullptr
        && this->pageSize_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline ListPublicMediaBasicInfosRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // includeFileBasicInfo Field Functions 
    bool hasIncludeFileBasicInfo() const { return this->includeFileBasicInfo_ != nullptr;};
    void deleteIncludeFileBasicInfo() { this->includeFileBasicInfo_ = nullptr;};
    inline bool getIncludeFileBasicInfo() const { DARABONBA_PTR_GET_DEFAULT(includeFileBasicInfo_, false) };
    inline ListPublicMediaBasicInfosRequest& setIncludeFileBasicInfo(bool includeFileBasicInfo) { DARABONBA_PTR_SET_VALUE(includeFileBasicInfo_, includeFileBasicInfo) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPublicMediaBasicInfosRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // mediaTagId Field Functions 
    bool hasMediaTagId() const { return this->mediaTagId_ != nullptr;};
    void deleteMediaTagId() { this->mediaTagId_ = nullptr;};
    inline string getMediaTagId() const { DARABONBA_PTR_GET_DEFAULT(mediaTagId_, "") };
    inline ListPublicMediaBasicInfosRequest& setMediaTagId(string mediaTagId) { DARABONBA_PTR_SET_VALUE(mediaTagId_, mediaTagId) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPublicMediaBasicInfosRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListPublicMediaBasicInfosRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPublicMediaBasicInfosRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The business type of the media asset. Valid values:
    // 
    // *   sticker
    // *   bgm
    // *   bgi
    shared_ptr<string> businessType_ {};
    // Specifies whether to return the basic information of the media asset.
    shared_ptr<bool> includeFileBasicInfo_ {};
    // The maximum number of entries to return.
    // 
    // Maximum value: 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The media tag. All media assets that contain the specified media tag are returned. Valid values:
    // 
    // *   Sticker tags:
    // 
    //     *   sticker-atmosphere
    //     *   sticker-bubble
    //     *   sticker-cute
    //     *   sticker-daily
    //     *   sticker-expression
    //     *   sticker-gif
    // 
    // *   Background music (BGM) tags:
    // 
    //     *   bgm-romantic
    //     *   bgm-cuisine
    //     *   bgm-chinese-style
    //     *   bgm-upbeat
    //     *   bgm-dynamic
    //     *   bgm-relaxing
    //     *   bgm-quirky
    //     *   bgm-beauty
    // 
    // *   Background image (BGI) tags:
    // 
    //     *   bgi-grad
    //     *   bgi-solid
    //     *   bgi-pic
    shared_ptr<string> mediaTagId_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    // The page number. Default value: 1
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Default value: 10. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
