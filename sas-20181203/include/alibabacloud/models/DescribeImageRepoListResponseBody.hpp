// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEREPOLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEREPOLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageRepoListResponseBodyImageRepoList.hpp>
#include <alibabacloud/models/DescribeImageRepoListResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageRepoListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageRepoListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddTargetCount, addTargetCount_);
      DARABONBA_PTR_TO_JSON(AllTargetCount, allTargetCount_);
      DARABONBA_PTR_TO_JSON(DelTargetCount, delTargetCount_);
      DARABONBA_PTR_TO_JSON(ImageRepoList, imageRepoList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageRepoListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddTargetCount, addTargetCount_);
      DARABONBA_PTR_FROM_JSON(AllTargetCount, allTargetCount_);
      DARABONBA_PTR_FROM_JSON(DelTargetCount, delTargetCount_);
      DARABONBA_PTR_FROM_JSON(ImageRepoList, imageRepoList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageRepoListResponseBody() = default ;
    DescribeImageRepoListResponseBody(const DescribeImageRepoListResponseBody &) = default ;
    DescribeImageRepoListResponseBody(DescribeImageRepoListResponseBody &&) = default ;
    DescribeImageRepoListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageRepoListResponseBody() = default ;
    DescribeImageRepoListResponseBody& operator=(const DescribeImageRepoListResponseBody &) = default ;
    DescribeImageRepoListResponseBody& operator=(DescribeImageRepoListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addTargetCount_ == nullptr
        && return this->allTargetCount_ == nullptr && return this->delTargetCount_ == nullptr && return this->imageRepoList_ == nullptr && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // addTargetCount Field Functions 
    bool hasAddTargetCount() const { return this->addTargetCount_ != nullptr;};
    void deleteAddTargetCount() { this->addTargetCount_ = nullptr;};
    inline int32_t addTargetCount() const { DARABONBA_PTR_GET_DEFAULT(addTargetCount_, 0) };
    inline DescribeImageRepoListResponseBody& setAddTargetCount(int32_t addTargetCount) { DARABONBA_PTR_SET_VALUE(addTargetCount_, addTargetCount) };


    // allTargetCount Field Functions 
    bool hasAllTargetCount() const { return this->allTargetCount_ != nullptr;};
    void deleteAllTargetCount() { this->allTargetCount_ = nullptr;};
    inline int32_t allTargetCount() const { DARABONBA_PTR_GET_DEFAULT(allTargetCount_, 0) };
    inline DescribeImageRepoListResponseBody& setAllTargetCount(int32_t allTargetCount) { DARABONBA_PTR_SET_VALUE(allTargetCount_, allTargetCount) };


    // delTargetCount Field Functions 
    bool hasDelTargetCount() const { return this->delTargetCount_ != nullptr;};
    void deleteDelTargetCount() { this->delTargetCount_ = nullptr;};
    inline int32_t delTargetCount() const { DARABONBA_PTR_GET_DEFAULT(delTargetCount_, 0) };
    inline DescribeImageRepoListResponseBody& setDelTargetCount(int32_t delTargetCount) { DARABONBA_PTR_SET_VALUE(delTargetCount_, delTargetCount) };


    // imageRepoList Field Functions 
    bool hasImageRepoList() const { return this->imageRepoList_ != nullptr;};
    void deleteImageRepoList() { this->imageRepoList_ = nullptr;};
    inline const vector<DescribeImageRepoListResponseBodyImageRepoList> & imageRepoList() const { DARABONBA_PTR_GET_CONST(imageRepoList_, vector<DescribeImageRepoListResponseBodyImageRepoList>) };
    inline vector<DescribeImageRepoListResponseBodyImageRepoList> imageRepoList() { DARABONBA_PTR_GET(imageRepoList_, vector<DescribeImageRepoListResponseBodyImageRepoList>) };
    inline DescribeImageRepoListResponseBody& setImageRepoList(const vector<DescribeImageRepoListResponseBodyImageRepoList> & imageRepoList) { DARABONBA_PTR_SET_VALUE(imageRepoList_, imageRepoList) };
    inline DescribeImageRepoListResponseBody& setImageRepoList(vector<DescribeImageRepoListResponseBodyImageRepoList> && imageRepoList) { DARABONBA_PTR_SET_RVALUE(imageRepoList_, imageRepoList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageRepoListResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageRepoListResponseBodyPageInfo) };
    inline DescribeImageRepoListResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageRepoListResponseBodyPageInfo) };
    inline DescribeImageRepoListResponseBody& setPageInfo(const DescribeImageRepoListResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageRepoListResponseBody& setPageInfo(DescribeImageRepoListResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageRepoListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of image repositories that are added to Security Center.
    std::shared_ptr<int32_t> addTargetCount_ = nullptr;
    // The total number of image repositories.
    std::shared_ptr<int32_t> allTargetCount_ = nullptr;
    // The number of excluded image repositories.
    std::shared_ptr<int32_t> delTargetCount_ = nullptr;
    // An array that consists of the information about image repositories.
    std::shared_ptr<vector<DescribeImageRepoListResponseBodyImageRepoList>> imageRepoList_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeImageRepoListResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
