// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEDMALICIOUSFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEDMALICIOUSFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse.hpp>
#include <alibabacloud/models/DescribeGroupedMaliciousFilesResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGroupedMaliciousFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupedMaliciousFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupedMaliciousFileResponse, groupedMaliciousFileResponse_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupedMaliciousFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupedMaliciousFileResponse, groupedMaliciousFileResponse_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGroupedMaliciousFilesResponseBody() = default ;
    DescribeGroupedMaliciousFilesResponseBody(const DescribeGroupedMaliciousFilesResponseBody &) = default ;
    DescribeGroupedMaliciousFilesResponseBody(DescribeGroupedMaliciousFilesResponseBody &&) = default ;
    DescribeGroupedMaliciousFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupedMaliciousFilesResponseBody() = default ;
    DescribeGroupedMaliciousFilesResponseBody& operator=(const DescribeGroupedMaliciousFilesResponseBody &) = default ;
    DescribeGroupedMaliciousFilesResponseBody& operator=(DescribeGroupedMaliciousFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupedMaliciousFileResponse_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // groupedMaliciousFileResponse Field Functions 
    bool hasGroupedMaliciousFileResponse() const { return this->groupedMaliciousFileResponse_ != nullptr;};
    void deleteGroupedMaliciousFileResponse() { this->groupedMaliciousFileResponse_ = nullptr;};
    inline const vector<DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse> & groupedMaliciousFileResponse() const { DARABONBA_PTR_GET_CONST(groupedMaliciousFileResponse_, vector<DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse>) };
    inline vector<DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse> groupedMaliciousFileResponse() { DARABONBA_PTR_GET(groupedMaliciousFileResponse_, vector<DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse>) };
    inline DescribeGroupedMaliciousFilesResponseBody& setGroupedMaliciousFileResponse(const vector<DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse> & groupedMaliciousFileResponse) { DARABONBA_PTR_SET_VALUE(groupedMaliciousFileResponse_, groupedMaliciousFileResponse) };
    inline DescribeGroupedMaliciousFilesResponseBody& setGroupedMaliciousFileResponse(vector<DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse> && groupedMaliciousFileResponse) { DARABONBA_PTR_SET_RVALUE(groupedMaliciousFileResponse_, groupedMaliciousFileResponse) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeGroupedMaliciousFilesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeGroupedMaliciousFilesResponseBodyPageInfo) };
    inline DescribeGroupedMaliciousFilesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeGroupedMaliciousFilesResponseBodyPageInfo) };
    inline DescribeGroupedMaliciousFilesResponseBody& setPageInfo(const DescribeGroupedMaliciousFilesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeGroupedMaliciousFilesResponseBody& setPageInfo(DescribeGroupedMaliciousFilesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupedMaliciousFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the malicious image sample.
    std::shared_ptr<vector<DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse>> groupedMaliciousFileResponse_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeGroupedMaliciousFilesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
