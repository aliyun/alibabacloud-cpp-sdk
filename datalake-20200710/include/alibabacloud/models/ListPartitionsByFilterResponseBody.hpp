// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPARTITIONSBYFILTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPARTITIONSBYFILTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PartitionSpec.hpp>
#include <alibabacloud/models/Partition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class ListPartitionsByFilterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPartitionsByFilterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(PartitionSpecs, partitionSpecs_);
      DARABONBA_PTR_TO_JSON(Partitions, partitions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListPartitionsByFilterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(PartitionSpecs, partitionSpecs_);
      DARABONBA_PTR_FROM_JSON(Partitions, partitions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListPartitionsByFilterResponseBody() = default ;
    ListPartitionsByFilterResponseBody(const ListPartitionsByFilterResponseBody &) = default ;
    ListPartitionsByFilterResponseBody(ListPartitionsByFilterResponseBody &&) = default ;
    ListPartitionsByFilterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPartitionsByFilterResponseBody() = default ;
    ListPartitionsByFilterResponseBody& operator=(const ListPartitionsByFilterResponseBody &) = default ;
    ListPartitionsByFilterResponseBody& operator=(ListPartitionsByFilterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->nextPageToken_ == nullptr && return this->partitionSpecs_ == nullptr && return this->partitions_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListPartitionsByFilterResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPartitionsByFilterResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListPartitionsByFilterResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // partitionSpecs Field Functions 
    bool hasPartitionSpecs() const { return this->partitionSpecs_ != nullptr;};
    void deletePartitionSpecs() { this->partitionSpecs_ = nullptr;};
    inline const vector<PartitionSpec> & partitionSpecs() const { DARABONBA_PTR_GET_CONST(partitionSpecs_, vector<PartitionSpec>) };
    inline vector<PartitionSpec> partitionSpecs() { DARABONBA_PTR_GET(partitionSpecs_, vector<PartitionSpec>) };
    inline ListPartitionsByFilterResponseBody& setPartitionSpecs(const vector<PartitionSpec> & partitionSpecs) { DARABONBA_PTR_SET_VALUE(partitionSpecs_, partitionSpecs) };
    inline ListPartitionsByFilterResponseBody& setPartitionSpecs(vector<PartitionSpec> && partitionSpecs) { DARABONBA_PTR_SET_RVALUE(partitionSpecs_, partitionSpecs) };


    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline const vector<Partition> & partitions() const { DARABONBA_PTR_GET_CONST(partitions_, vector<Partition>) };
    inline vector<Partition> partitions() { DARABONBA_PTR_GET(partitions_, vector<Partition>) };
    inline ListPartitionsByFilterResponseBody& setPartitions(const vector<Partition> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
    inline ListPartitionsByFilterResponseBody& setPartitions(vector<Partition> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPartitionsByFilterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListPartitionsByFilterResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    std::shared_ptr<string> code_ = nullptr;
    // The response message.
    std::shared_ptr<string> message_ = nullptr;
    // The page turning token, which is used to obtain the next page of data.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The partition specifications.
    std::shared_ptr<vector<PartitionSpec>> partitionSpecs_ = nullptr;
    // The details about the partitions that are queried based on the filter condition.
    std::shared_ptr<vector<Partition>> partitions_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values: Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
