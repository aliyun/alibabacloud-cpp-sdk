// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READNUMGROUPTOTALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_READNUMGROUPTOTALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
namespace Models
{
  class ReadNumGroupTotalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadNumGroupTotalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ReadNumGroupTotalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ReadNumGroupTotalResponseBody() = default ;
    ReadNumGroupTotalResponseBody(const ReadNumGroupTotalResponseBody &) = default ;
    ReadNumGroupTotalResponseBody(ReadNumGroupTotalResponseBody &&) = default ;
    ReadNumGroupTotalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadNumGroupTotalResponseBody() = default ;
    ReadNumGroupTotalResponseBody& operator=(const ReadNumGroupTotalResponseBody &) = default ;
    ReadNumGroupTotalResponseBody& operator=(ReadNumGroupTotalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(GroupCode, groupCode_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ReadCount, readCount_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(UnReadCount, unReadCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupCode, groupCode_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ReadCount, readCount_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(UnReadCount, unReadCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupCode_ == nullptr
        && this->id_ == nullptr && this->readCount_ == nullptr && this->totalCount_ == nullptr && this->unReadCount_ == nullptr; };
      // groupCode Field Functions 
      bool hasGroupCode() const { return this->groupCode_ != nullptr;};
      void deleteGroupCode() { this->groupCode_ = nullptr;};
      inline string getGroupCode() const { DARABONBA_PTR_GET_DEFAULT(groupCode_, "") };
      inline Data& setGroupCode(string groupCode) { DARABONBA_PTR_SET_VALUE(groupCode_, groupCode) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // readCount Field Functions 
      bool hasReadCount() const { return this->readCount_ != nullptr;};
      void deleteReadCount() { this->readCount_ = nullptr;};
      inline int64_t getReadCount() const { DARABONBA_PTR_GET_DEFAULT(readCount_, 0L) };
      inline Data& setReadCount(int64_t readCount) { DARABONBA_PTR_SET_VALUE(readCount_, readCount) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // unReadCount Field Functions 
      bool hasUnReadCount() const { return this->unReadCount_ != nullptr;};
      void deleteUnReadCount() { this->unReadCount_ = nullptr;};
      inline int64_t getUnReadCount() const { DARABONBA_PTR_GET_DEFAULT(unReadCount_, 0L) };
      inline Data& setUnReadCount(int64_t unReadCount) { DARABONBA_PTR_SET_VALUE(unReadCount_, unReadCount) };


    protected:
      // The group code.
      shared_ptr<string> groupCode_ {};
      // The message category ID.
      shared_ptr<int64_t> id_ {};
      // The number of read messages under the category.
      shared_ptr<int64_t> readCount_ {};
      // The total number of messages under the category.
      shared_ptr<int64_t> totalCount_ {};
      // The number of unread messages under the category.
      shared_ptr<int64_t> unReadCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ReadNumGroupTotalResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ReadNumGroupTotalResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ReadNumGroupTotalResponseBody::Data>) };
    inline vector<ReadNumGroupTotalResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ReadNumGroupTotalResponseBody::Data>) };
    inline ReadNumGroupTotalResponseBody& setData(const vector<ReadNumGroupTotalResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ReadNumGroupTotalResponseBody& setData(vector<ReadNumGroupTotalResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ReadNumGroupTotalResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReadNumGroupTotalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ReadNumGroupTotalResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned when the call fails. For more information, see Error codes.
    shared_ptr<string> code_ {};
    // The execution result.
    shared_ptr<vector<ReadNumGroupTotalResponseBody::Data>> data_ {};
    // The error message returned when the call fails.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values: true and false. true: The call was successful. false: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif
