// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTLESSSENSITIVEFILEBYKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTLESSSENSITIVEFILEBYKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAgentlessSensitiveFileByKeyResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAgentlessSensitiveFileByKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgentlessSensitiveFileByKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SensitiveFileList, sensitiveFileList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgentlessSensitiveFileByKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SensitiveFileList, sensitiveFileList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAgentlessSensitiveFileByKeyResponseBody() = default ;
    DescribeAgentlessSensitiveFileByKeyResponseBody(const DescribeAgentlessSensitiveFileByKeyResponseBody &) = default ;
    DescribeAgentlessSensitiveFileByKeyResponseBody(DescribeAgentlessSensitiveFileByKeyResponseBody &&) = default ;
    DescribeAgentlessSensitiveFileByKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgentlessSensitiveFileByKeyResponseBody() = default ;
    DescribeAgentlessSensitiveFileByKeyResponseBody& operator=(const DescribeAgentlessSensitiveFileByKeyResponseBody &) = default ;
    DescribeAgentlessSensitiveFileByKeyResponseBody& operator=(DescribeAgentlessSensitiveFileByKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->requestId_ != nullptr && this->sensitiveFileList_ != nullptr && this->success_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeAgentlessSensitiveFileByKeyResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeAgentlessSensitiveFileByKeyResponseBodyPageInfo) };
    inline DescribeAgentlessSensitiveFileByKeyResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeAgentlessSensitiveFileByKeyResponseBodyPageInfo) };
    inline DescribeAgentlessSensitiveFileByKeyResponseBody& setPageInfo(const DescribeAgentlessSensitiveFileByKeyResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeAgentlessSensitiveFileByKeyResponseBody& setPageInfo(DescribeAgentlessSensitiveFileByKeyResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAgentlessSensitiveFileByKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sensitiveFileList Field Functions 
    bool hasSensitiveFileList() const { return this->sensitiveFileList_ != nullptr;};
    void deleteSensitiveFileList() { this->sensitiveFileList_ = nullptr;};
    inline const vector<DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList> & sensitiveFileList() const { DARABONBA_PTR_GET_CONST(sensitiveFileList_, vector<DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList>) };
    inline vector<DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList> sensitiveFileList() { DARABONBA_PTR_GET(sensitiveFileList_, vector<DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList>) };
    inline DescribeAgentlessSensitiveFileByKeyResponseBody& setSensitiveFileList(const vector<DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList> & sensitiveFileList) { DARABONBA_PTR_SET_VALUE(sensitiveFileList_, sensitiveFileList) };
    inline DescribeAgentlessSensitiveFileByKeyResponseBody& setSensitiveFileList(vector<DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList> && sensitiveFileList) { DARABONBA_PTR_SET_RVALUE(sensitiveFileList_, sensitiveFileList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAgentlessSensitiveFileByKeyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribeAgentlessSensitiveFileByKeyResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the sensitive files that are detected by using the agentless detection feature.
    std::shared_ptr<vector<DescribeAgentlessSensitiveFileByKeyResponseBodySensitiveFileList>> sensitiveFileList_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
