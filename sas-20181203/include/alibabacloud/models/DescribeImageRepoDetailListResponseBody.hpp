// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEREPODETAILLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEREPODETAILLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageRepoDetailListResponseBodyImageRepoResponses.hpp>
#include <alibabacloud/models/DescribeImageRepoDetailListResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageRepoDetailListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageRepoDetailListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageRepoResponses, imageRepoResponses_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageRepoDetailListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageRepoResponses, imageRepoResponses_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageRepoDetailListResponseBody() = default ;
    DescribeImageRepoDetailListResponseBody(const DescribeImageRepoDetailListResponseBody &) = default ;
    DescribeImageRepoDetailListResponseBody(DescribeImageRepoDetailListResponseBody &&) = default ;
    DescribeImageRepoDetailListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageRepoDetailListResponseBody() = default ;
    DescribeImageRepoDetailListResponseBody& operator=(const DescribeImageRepoDetailListResponseBody &) = default ;
    DescribeImageRepoDetailListResponseBody& operator=(DescribeImageRepoDetailListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageRepoResponses_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // imageRepoResponses Field Functions 
    bool hasImageRepoResponses() const { return this->imageRepoResponses_ != nullptr;};
    void deleteImageRepoResponses() { this->imageRepoResponses_ = nullptr;};
    inline const vector<DescribeImageRepoDetailListResponseBodyImageRepoResponses> & imageRepoResponses() const { DARABONBA_PTR_GET_CONST(imageRepoResponses_, vector<DescribeImageRepoDetailListResponseBodyImageRepoResponses>) };
    inline vector<DescribeImageRepoDetailListResponseBodyImageRepoResponses> imageRepoResponses() { DARABONBA_PTR_GET(imageRepoResponses_, vector<DescribeImageRepoDetailListResponseBodyImageRepoResponses>) };
    inline DescribeImageRepoDetailListResponseBody& setImageRepoResponses(const vector<DescribeImageRepoDetailListResponseBodyImageRepoResponses> & imageRepoResponses) { DARABONBA_PTR_SET_VALUE(imageRepoResponses_, imageRepoResponses) };
    inline DescribeImageRepoDetailListResponseBody& setImageRepoResponses(vector<DescribeImageRepoDetailListResponseBodyImageRepoResponses> && imageRepoResponses) { DARABONBA_PTR_SET_RVALUE(imageRepoResponses_, imageRepoResponses) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageRepoDetailListResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageRepoDetailListResponseBodyPageInfo) };
    inline DescribeImageRepoDetailListResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageRepoDetailListResponseBodyPageInfo) };
    inline DescribeImageRepoDetailListResponseBody& setPageInfo(const DescribeImageRepoDetailListResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageRepoDetailListResponseBody& setPageInfo(DescribeImageRepoDetailListResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageRepoDetailListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about image repositories.
    std::shared_ptr<vector<DescribeImageRepoDetailListResponseBodyImageRepoResponses>> imageRepoResponses_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeImageRepoDetailListResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
