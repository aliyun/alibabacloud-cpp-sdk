// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSVSCATTACHINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSVSCATTACHINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFilesystemsVscAttachInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFilesystemsVscAttachInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VscAttachInfo, vscAttachInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFilesystemsVscAttachInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VscAttachInfo, vscAttachInfo_);
    };
    DescribeFilesystemsVscAttachInfoResponseBody() = default ;
    DescribeFilesystemsVscAttachInfoResponseBody(const DescribeFilesystemsVscAttachInfoResponseBody &) = default ;
    DescribeFilesystemsVscAttachInfoResponseBody(DescribeFilesystemsVscAttachInfoResponseBody &&) = default ;
    DescribeFilesystemsVscAttachInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFilesystemsVscAttachInfoResponseBody() = default ;
    DescribeFilesystemsVscAttachInfoResponseBody& operator=(const DescribeFilesystemsVscAttachInfoResponseBody &) = default ;
    DescribeFilesystemsVscAttachInfoResponseBody& operator=(DescribeFilesystemsVscAttachInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->vscAttachInfo_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeFilesystemsVscAttachInfoResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeFilesystemsVscAttachInfoResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFilesystemsVscAttachInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeFilesystemsVscAttachInfoResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vscAttachInfo Field Functions 
    bool hasVscAttachInfo() const { return this->vscAttachInfo_ != nullptr;};
    void deleteVscAttachInfo() { this->vscAttachInfo_ = nullptr;};
    inline const DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo & vscAttachInfo() const { DARABONBA_PTR_GET_CONST(vscAttachInfo_, DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo) };
    inline DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo vscAttachInfo() { DARABONBA_PTR_GET(vscAttachInfo_, DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo) };
    inline DescribeFilesystemsVscAttachInfoResponseBody& setVscAttachInfo(const DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo & vscAttachInfo) { DARABONBA_PTR_SET_VALUE(vscAttachInfo_, vscAttachInfo) };
    inline DescribeFilesystemsVscAttachInfoResponseBody& setVscAttachInfo(DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo && vscAttachInfo) { DARABONBA_PTR_SET_RVALUE(vscAttachInfo_, vscAttachInfo) };


  protected:
    // The number of directories to return for each query.
    // 
    // Valid values: 10 to 1000.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Query token, which is the NextToken value returned from the previous API call.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of associated information.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // A collection of file system and virtual channel association data.
    std::shared_ptr<DescribeFilesystemsVscAttachInfoResponseBodyVscAttachInfo> vscAttachInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
