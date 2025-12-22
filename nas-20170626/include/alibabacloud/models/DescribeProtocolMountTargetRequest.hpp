// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROTOCOLMOUNTTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROTOCOLMOUNTTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeProtocolMountTargetRequestFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeProtocolMountTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProtocolMountTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProtocolServiceIds, protocolServiceIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProtocolMountTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProtocolServiceIds, protocolServiceIds_);
    };
    DescribeProtocolMountTargetRequest() = default ;
    DescribeProtocolMountTargetRequest(const DescribeProtocolMountTargetRequest &) = default ;
    DescribeProtocolMountTargetRequest(DescribeProtocolMountTargetRequest &&) = default ;
    DescribeProtocolMountTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProtocolMountTargetRequest() = default ;
    DescribeProtocolMountTargetRequest& operator=(const DescribeProtocolMountTargetRequest &) = default ;
    DescribeProtocolMountTargetRequest& operator=(DescribeProtocolMountTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->fileSystemId_ == nullptr && return this->filters_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->protocolServiceIds_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeProtocolMountTargetRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeProtocolMountTargetRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<DescribeProtocolMountTargetRequestFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<DescribeProtocolMountTargetRequestFilters>) };
    inline vector<DescribeProtocolMountTargetRequestFilters> filters() { DARABONBA_PTR_GET(filters_, vector<DescribeProtocolMountTargetRequestFilters>) };
    inline DescribeProtocolMountTargetRequest& setFilters(const vector<DescribeProtocolMountTargetRequestFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribeProtocolMountTargetRequest& setFilters(vector<DescribeProtocolMountTargetRequestFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeProtocolMountTargetRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeProtocolMountTargetRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // protocolServiceIds Field Functions 
    bool hasProtocolServiceIds() const { return this->protocolServiceIds_ != nullptr;};
    void deleteProtocolServiceIds() { this->protocolServiceIds_ = nullptr;};
    inline string protocolServiceIds() const { DARABONBA_PTR_GET_DEFAULT(protocolServiceIds_, "") };
    inline DescribeProtocolMountTargetRequest& setProtocolServiceIds(string protocolServiceIds) { DARABONBA_PTR_SET_VALUE(protocolServiceIds_, protocolServiceIds) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How do I ensure the idempotence?](https://help.aliyun.com/document_detail/25693.html)
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the file system.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The filter that is used to query the export directories of the protocol service.
    std::shared_ptr<vector<DescribeProtocolMountTargetRequestFilters>> filters_ = nullptr;
    // The number of results for each query.
    // 
    // *   Value values: 10 to 100.
    // *   Default value: 20.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> protocolServiceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
