// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDVENDORACCOUNTAKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDVENDORACCOUNTAKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs.hpp>
#include <alibabacloud/models/DescribeCloudVendorAccountAKListResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCloudVendorAccountAKListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudVendorAccountAKListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudVendorAccountAKs, cloudVendorAccountAKs_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudVendorAccountAKListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudVendorAccountAKs, cloudVendorAccountAKs_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCloudVendorAccountAKListResponseBody() = default ;
    DescribeCloudVendorAccountAKListResponseBody(const DescribeCloudVendorAccountAKListResponseBody &) = default ;
    DescribeCloudVendorAccountAKListResponseBody(DescribeCloudVendorAccountAKListResponseBody &&) = default ;
    DescribeCloudVendorAccountAKListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudVendorAccountAKListResponseBody() = default ;
    DescribeCloudVendorAccountAKListResponseBody& operator=(const DescribeCloudVendorAccountAKListResponseBody &) = default ;
    DescribeCloudVendorAccountAKListResponseBody& operator=(DescribeCloudVendorAccountAKListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cloudVendorAccountAKs_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // cloudVendorAccountAKs Field Functions 
    bool hasCloudVendorAccountAKs() const { return this->cloudVendorAccountAKs_ != nullptr;};
    void deleteCloudVendorAccountAKs() { this->cloudVendorAccountAKs_ = nullptr;};
    inline const vector<DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs> & cloudVendorAccountAKs() const { DARABONBA_PTR_GET_CONST(cloudVendorAccountAKs_, vector<DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs>) };
    inline vector<DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs> cloudVendorAccountAKs() { DARABONBA_PTR_GET(cloudVendorAccountAKs_, vector<DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs>) };
    inline DescribeCloudVendorAccountAKListResponseBody& setCloudVendorAccountAKs(const vector<DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs> & cloudVendorAccountAKs) { DARABONBA_PTR_SET_VALUE(cloudVendorAccountAKs_, cloudVendorAccountAKs) };
    inline DescribeCloudVendorAccountAKListResponseBody& setCloudVendorAccountAKs(vector<DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs> && cloudVendorAccountAKs) { DARABONBA_PTR_SET_RVALUE(cloudVendorAccountAKs_, cloudVendorAccountAKs) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeCloudVendorAccountAKListResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeCloudVendorAccountAKListResponseBodyPageInfo) };
    inline DescribeCloudVendorAccountAKListResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeCloudVendorAccountAKListResponseBodyPageInfo) };
    inline DescribeCloudVendorAccountAKListResponseBody& setPageInfo(const DescribeCloudVendorAccountAKListResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeCloudVendorAccountAKListResponseBody& setPageInfo(DescribeCloudVendorAccountAKListResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudVendorAccountAKListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the AccessKey pairs.
    std::shared_ptr<vector<DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs>> cloudVendorAccountAKs_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeCloudVendorAccountAKListResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
