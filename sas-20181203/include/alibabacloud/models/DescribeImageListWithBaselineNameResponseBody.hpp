// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTWITHBASELINENAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTWITHBASELINENAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageListWithBaselineNameResponseBodyImageInfos.hpp>
#include <alibabacloud/models/DescribeImageListWithBaselineNameResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageListWithBaselineNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageListWithBaselineNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageInfos, imageInfos_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageListWithBaselineNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageInfos, imageInfos_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageListWithBaselineNameResponseBody() = default ;
    DescribeImageListWithBaselineNameResponseBody(const DescribeImageListWithBaselineNameResponseBody &) = default ;
    DescribeImageListWithBaselineNameResponseBody(DescribeImageListWithBaselineNameResponseBody &&) = default ;
    DescribeImageListWithBaselineNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageListWithBaselineNameResponseBody() = default ;
    DescribeImageListWithBaselineNameResponseBody& operator=(const DescribeImageListWithBaselineNameResponseBody &) = default ;
    DescribeImageListWithBaselineNameResponseBody& operator=(DescribeImageListWithBaselineNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageInfos_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // imageInfos Field Functions 
    bool hasImageInfos() const { return this->imageInfos_ != nullptr;};
    void deleteImageInfos() { this->imageInfos_ = nullptr;};
    inline const vector<DescribeImageListWithBaselineNameResponseBodyImageInfos> & imageInfos() const { DARABONBA_PTR_GET_CONST(imageInfos_, vector<DescribeImageListWithBaselineNameResponseBodyImageInfos>) };
    inline vector<DescribeImageListWithBaselineNameResponseBodyImageInfos> imageInfos() { DARABONBA_PTR_GET(imageInfos_, vector<DescribeImageListWithBaselineNameResponseBodyImageInfos>) };
    inline DescribeImageListWithBaselineNameResponseBody& setImageInfos(const vector<DescribeImageListWithBaselineNameResponseBodyImageInfos> & imageInfos) { DARABONBA_PTR_SET_VALUE(imageInfos_, imageInfos) };
    inline DescribeImageListWithBaselineNameResponseBody& setImageInfos(vector<DescribeImageListWithBaselineNameResponseBodyImageInfos> && imageInfos) { DARABONBA_PTR_SET_RVALUE(imageInfos_, imageInfos) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageListWithBaselineNameResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageListWithBaselineNameResponseBodyPageInfo) };
    inline DescribeImageListWithBaselineNameResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageListWithBaselineNameResponseBodyPageInfo) };
    inline DescribeImageListWithBaselineNameResponseBody& setPageInfo(const DescribeImageListWithBaselineNameResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageListWithBaselineNameResponseBody& setPageInfo(DescribeImageListWithBaselineNameResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageListWithBaselineNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the images.
    std::shared_ptr<vector<DescribeImageListWithBaselineNameResponseBodyImageInfos>> imageInfos_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeImageListWithBaselineNameResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
