// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROTOCOLSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROTOCOLSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeProtocolServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProtocolServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProtocolServiceIds, protocolServiceIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProtocolServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProtocolServiceIds, protocolServiceIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeProtocolServiceRequest() = default ;
    DescribeProtocolServiceRequest(const DescribeProtocolServiceRequest &) = default ;
    DescribeProtocolServiceRequest(DescribeProtocolServiceRequest &&) = default ;
    DescribeProtocolServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProtocolServiceRequest() = default ;
    DescribeProtocolServiceRequest& operator=(const DescribeProtocolServiceRequest &) = default ;
    DescribeProtocolServiceRequest& operator=(DescribeProtocolServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->fileSystemId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->protocolServiceIds_ == nullptr
        && this->status_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeProtocolServiceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeProtocolServiceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeProtocolServiceRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeProtocolServiceRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeProtocolServiceRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // protocolServiceIds Field Functions 
    bool hasProtocolServiceIds() const { return this->protocolServiceIds_ != nullptr;};
    void deleteProtocolServiceIds() { this->protocolServiceIds_ = nullptr;};
    inline string getProtocolServiceIds() const { DARABONBA_PTR_GET_DEFAULT(protocolServiceIds_, "") };
    inline DescribeProtocolServiceRequest& setProtocolServiceIds(string protocolServiceIds) { DARABONBA_PTR_SET_VALUE(protocolServiceIds_, protocolServiceIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeProtocolServiceRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Ensures the idempotency of the request. You can use the client to generate the token, but make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotency](https://help.aliyun.com/document_detail/25693.html).
    // >If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may vary for each API request.
    shared_ptr<string> clientToken_ {};
    // The description of the protocol service or a part of the description used for matching.
    // 
    // Limits:
    // - The description must be 2 to 128 characters in length.
    // - The description must start with a letter and cannot start with `http://` or `https://`.
    // - The description can contain digits, colons (:), underscores (_), or hyphens (-).
    shared_ptr<string> description_ {};
    // The file system ID.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The maximum number of results to return for each request.
    // 
    // - Maximum value: 100.
    // - Minimum value: 10.
    // - Default value: 20.
    shared_ptr<int64_t> maxResults_ {};
    // The token used to initiate the next request if the response of the current request is truncated. You can use this token to retrieve the remaining results.
    shared_ptr<string> nextToken_ {};
    // The protocol service IDs.
    // - Format: CSV
    // 
    // - Limit: You can specify up to 10 protocol service IDs.
    shared_ptr<string> protocolServiceIds_ {};
    // The status of the protocol service used for matching.
    // 
    // Format: CSV
    // 
    // Valid values:
    // - Creating: The protocol service is being created.
    // - Starting: The protocol service is being started.
    // - Running: The protocol service is available.
    // - Updating: The protocol service is being updated.
    // - Deleting: The protocol service is being deleted.
    // - Stopping: The protocol service is being stopped.
    // - Stopped: The protocol service is stopped.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
