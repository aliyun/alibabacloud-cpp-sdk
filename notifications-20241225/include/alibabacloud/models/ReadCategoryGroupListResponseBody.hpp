// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READCATEGORYGROUPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_READCATEGORYGROUPLISTRESPONSEBODY_HPP_
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
  class ReadCategoryGroupListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadCategoryGroupListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ReadCategoryGroupListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ReadCategoryGroupListResponseBody() = default ;
    ReadCategoryGroupListResponseBody(const ReadCategoryGroupListResponseBody &) = default ;
    ReadCategoryGroupListResponseBody(ReadCategoryGroupListResponseBody &&) = default ;
    ReadCategoryGroupListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadCategoryGroupListResponseBody() = default ;
    ReadCategoryGroupListResponseBody& operator=(const ReadCategoryGroupListResponseBody &) = default ;
    ReadCategoryGroupListResponseBody& operator=(ReadCategoryGroupListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(GroupCode, groupCode_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupCode, groupCode_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
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
        && this->groupName_ == nullptr; };
      // groupCode Field Functions 
      bool hasGroupCode() const { return this->groupCode_ != nullptr;};
      void deleteGroupCode() { this->groupCode_ = nullptr;};
      inline string getGroupCode() const { DARABONBA_PTR_GET_DEFAULT(groupCode_, "") };
      inline Data& setGroupCode(string groupCode) { DARABONBA_PTR_SET_VALUE(groupCode_, groupCode) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Data& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    protected:
      // The category group code.
      shared_ptr<string> groupCode_ {};
      // The group name.
      shared_ptr<string> groupName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ReadCategoryGroupListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ReadCategoryGroupListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ReadCategoryGroupListResponseBody::Data>) };
    inline vector<ReadCategoryGroupListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ReadCategoryGroupListResponseBody::Data>) };
    inline ReadCategoryGroupListResponseBody& setData(const vector<ReadCategoryGroupListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ReadCategoryGroupListResponseBody& setData(vector<ReadCategoryGroupListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ReadCategoryGroupListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReadCategoryGroupListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ReadCategoryGroupListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned by the system. For more information about error codes, see Error codes.
    shared_ptr<string> code_ {};
    // The execution result.
    shared_ptr<vector<ReadCategoryGroupListResponseBody::Data>> data_ {};
    // The message returned when the call fails.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. true: The call was successful. false: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif
