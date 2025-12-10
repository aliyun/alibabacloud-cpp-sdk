// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPARTITIONSPROFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPARTITIONSPROFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PartitionProfile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class ListPartitionsProfileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPartitionsProfileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(LatestAccessNumDate, latestAccessNumDate_);
      DARABONBA_PTR_TO_JSON(LatestDate, latestDate_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListPartitionsProfileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(LatestAccessNumDate, latestAccessNumDate_);
      DARABONBA_PTR_FROM_JSON(LatestDate, latestDate_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListPartitionsProfileResponseBody() = default ;
    ListPartitionsProfileResponseBody(const ListPartitionsProfileResponseBody &) = default ;
    ListPartitionsProfileResponseBody(ListPartitionsProfileResponseBody &&) = default ;
    ListPartitionsProfileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPartitionsProfileResponseBody() = default ;
    ListPartitionsProfileResponseBody& operator=(const ListPartitionsProfileResponseBody &) = default ;
    ListPartitionsProfileResponseBody& operator=(ListPartitionsProfileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->latestAccessNumDate_ == nullptr && return this->latestDate_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr && return this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListPartitionsProfileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<PartitionProfile> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<PartitionProfile>) };
    inline vector<PartitionProfile> data() { DARABONBA_PTR_GET(data_, vector<PartitionProfile>) };
    inline ListPartitionsProfileResponseBody& setData(const vector<PartitionProfile> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListPartitionsProfileResponseBody& setData(vector<PartitionProfile> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // latestAccessNumDate Field Functions 
    bool hasLatestAccessNumDate() const { return this->latestAccessNumDate_ != nullptr;};
    void deleteLatestAccessNumDate() { this->latestAccessNumDate_ = nullptr;};
    inline string latestAccessNumDate() const { DARABONBA_PTR_GET_DEFAULT(latestAccessNumDate_, "") };
    inline ListPartitionsProfileResponseBody& setLatestAccessNumDate(string latestAccessNumDate) { DARABONBA_PTR_SET_VALUE(latestAccessNumDate_, latestAccessNumDate) };


    // latestDate Field Functions 
    bool hasLatestDate() const { return this->latestDate_ != nullptr;};
    void deleteLatestDate() { this->latestDate_ = nullptr;};
    inline string latestDate() const { DARABONBA_PTR_GET_DEFAULT(latestDate_, "") };
    inline ListPartitionsProfileResponseBody& setLatestDate(string latestDate) { DARABONBA_PTR_SET_VALUE(latestDate_, latestDate) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPartitionsProfileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPartitionsProfileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListPartitionsProfileResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListPartitionsProfileResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The error code.
    std::shared_ptr<string> code_ = nullptr;
    // The partition data profiles.
    std::shared_ptr<vector<PartitionProfile>> data_ = nullptr;
    // The time when the access frequency is updated. This parameter is obsolete.
    std::shared_ptr<string> latestAccessNumDate_ = nullptr;
    // The time when the metadata warehouse was updated.
    std::shared_ptr<string> latestDate_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
