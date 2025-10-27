// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageInstancesResponseBodyImageInstanceList.hpp>
#include <alibabacloud/models/DescribeImageInstancesResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageInstanceList, imageInstanceList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageInstanceList, imageInstanceList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageInstancesResponseBody() = default ;
    DescribeImageInstancesResponseBody(const DescribeImageInstancesResponseBody &) = default ;
    DescribeImageInstancesResponseBody(DescribeImageInstancesResponseBody &&) = default ;
    DescribeImageInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageInstancesResponseBody() = default ;
    DescribeImageInstancesResponseBody& operator=(const DescribeImageInstancesResponseBody &) = default ;
    DescribeImageInstancesResponseBody& operator=(DescribeImageInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageInstanceList_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // imageInstanceList Field Functions 
    bool hasImageInstanceList() const { return this->imageInstanceList_ != nullptr;};
    void deleteImageInstanceList() { this->imageInstanceList_ = nullptr;};
    inline const vector<DescribeImageInstancesResponseBodyImageInstanceList> & imageInstanceList() const { DARABONBA_PTR_GET_CONST(imageInstanceList_, vector<DescribeImageInstancesResponseBodyImageInstanceList>) };
    inline vector<DescribeImageInstancesResponseBodyImageInstanceList> imageInstanceList() { DARABONBA_PTR_GET(imageInstanceList_, vector<DescribeImageInstancesResponseBodyImageInstanceList>) };
    inline DescribeImageInstancesResponseBody& setImageInstanceList(const vector<DescribeImageInstancesResponseBodyImageInstanceList> & imageInstanceList) { DARABONBA_PTR_SET_VALUE(imageInstanceList_, imageInstanceList) };
    inline DescribeImageInstancesResponseBody& setImageInstanceList(vector<DescribeImageInstancesResponseBodyImageInstanceList> && imageInstanceList) { DARABONBA_PTR_SET_RVALUE(imageInstanceList_, imageInstanceList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeImageInstancesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeImageInstancesResponseBodyPageInfo) };
    inline DescribeImageInstancesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeImageInstancesResponseBodyPageInfo) };
    inline DescribeImageInstancesResponseBody& setPageInfo(const DescribeImageInstancesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeImageInstancesResponseBody& setPageInfo(DescribeImageInstancesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the images.
    std::shared_ptr<vector<DescribeImageInstancesResponseBodyImageInstanceList>> imageInstanceList_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeImageInstancesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
