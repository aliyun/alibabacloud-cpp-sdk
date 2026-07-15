// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROTOCOLMOUNTTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROTOCOLMOUNTTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Filters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Filters() = default ;
      Filters(const Filters &) = default ;
      Filters(Filters &&) = default ;
      Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filters() = default ;
      Filters& operator=(const Filters &) = default ;
      Filters& operator=(Filters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Filters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Filters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The name of the filter key.
      // 
      // - ProtocolServiceIds: filters by protocol service ID.
      // 
      // - ExportIds: filters by export directory ID.
      // 
      // - VpcIds: filters by VPC ID.
      // 
      // - FsetIds: filters by fileset ID.
      // 
      // - Paths: filters by the file system path that corresponds to the mount target.
      // 
      // - AccessGroupNames: filters by permission group name.
      shared_ptr<string> key_ {};
      // The value of the filter key. Wildcards are not supported.
      // 
      // - If Key is set to ProtocolServiceIds, set Value to a protocol service ID. You can specify up to 10 protocol service IDs. Example: `ptc-12345678` or `ptc-12345678,ptc-12345679`.
      // 
      // - If Key is set to ExportIds, set Value to an export directory ID. You can specify up to 10 export directory IDs. Example: `exp-12345678` or `exp-12345678,exp-12345679`.
      // 
      // - If Key is set to VpcIds, set Value to the VPC ID of the protocol service. You can specify up to 10 VPC IDs. Example: `vpc-12345678` or `vpc-12345678,vpc-12345679`.
      // 
      // - If Key is set to FsetIds, set Value to a fileset ID. You can specify up to 10 fileset IDs. Example: `fset-12345678` or `fset-12345678,fset-12345679`.
      // 
      // - If Key is set to Paths, set Value to the file system directory that corresponds to the mount target. You can specify up to 10 paths. Example: `/cpfs/mnt_1/` or `/cpfs/mnt_1/,/cpfs/mnt_2/`.
      // 
      // - If Key is set to AccessGroupNames, set Value to the permission group name of the protocol service. You can specify up to 10 permission group names. Example: `ag-12345678` or `ag-12345678,ag-12345679`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->fileSystemId_ == nullptr && this->filters_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->protocolServiceIds_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeProtocolMountTargetRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeProtocolMountTargetRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<DescribeProtocolMountTargetRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<DescribeProtocolMountTargetRequest::Filters>) };
    inline vector<DescribeProtocolMountTargetRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<DescribeProtocolMountTargetRequest::Filters>) };
    inline DescribeProtocolMountTargetRequest& setFilters(const vector<DescribeProtocolMountTargetRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribeProtocolMountTargetRequest& setFilters(vector<DescribeProtocolMountTargetRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeProtocolMountTargetRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeProtocolMountTargetRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // protocolServiceIds Field Functions 
    bool hasProtocolServiceIds() const { return this->protocolServiceIds_ != nullptr;};
    void deleteProtocolServiceIds() { this->protocolServiceIds_ = nullptr;};
    inline string getProtocolServiceIds() const { DARABONBA_PTR_GET_DEFAULT(protocolServiceIds_, "") };
    inline DescribeProtocolMountTargetRequest& setProtocolServiceIds(string protocolServiceIds) { DARABONBA_PTR_SET_VALUE(protocolServiceIds_, protocolServiceIds) };


  protected:
    // Ensures the idempotence of the request. Generate a unique parameter value from your client to ensure that the value is unique among different requests.
    // 
    // ClientToken supports only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system uses the RequestId of the API request as the ClientToken. The RequestId may vary for each API request.
    shared_ptr<string> clientToken_ {};
    // The file system ID.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The filter keys for querying protocol service export directories.
    shared_ptr<vector<DescribeProtocolMountTargetRequest::Filters>> filters_ {};
    // The maximum number of results to return per query.
    // 
    //  - Valid values: 10 to 100.
    // 
    // 
    // - Default value: 20.
    shared_ptr<int64_t> maxResults_ {};
    // The token used to initiate the next request when the response is truncated. You can use this token to retrieve the remaining results from where the truncation occurred.
    shared_ptr<string> nextToken_ {};
    // The list of protocol service IDs.
    shared_ptr<string> protocolServiceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
