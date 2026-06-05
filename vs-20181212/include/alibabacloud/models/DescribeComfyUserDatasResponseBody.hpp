// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMFYUSERDATASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMFYUSERDATASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeComfyUserDatasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComfyUserDatasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(UserDatas, userDatas_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComfyUserDatasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(UserDatas, userDatas_);
    };
    DescribeComfyUserDatasResponseBody() = default ;
    DescribeComfyUserDatasResponseBody(const DescribeComfyUserDatasResponseBody &) = default ;
    DescribeComfyUserDatasResponseBody(DescribeComfyUserDatasResponseBody &&) = default ;
    DescribeComfyUserDatasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComfyUserDatasResponseBody() = default ;
    DescribeComfyUserDatasResponseBody& operator=(const DescribeComfyUserDatasResponseBody &) = default ;
    DescribeComfyUserDatasResponseBody& operator=(DescribeComfyUserDatasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserDatas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserDatas& obj) { 
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      };
      friend void from_json(const Darabonba::Json& j, UserDatas& obj) { 
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      };
      UserDatas() = default ;
      UserDatas(const UserDatas &) = default ;
      UserDatas(UserDatas &&) = default ;
      UserDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserDatas() = default ;
      UserDatas& operator=(const UserDatas &) = default ;
      UserDatas& operator=(UserDatas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileName_ == nullptr
        && this->fileSize_ == nullptr && this->type_ == nullptr && this->updatedTime_ == nullptr; };
      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline UserDatas& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
      inline UserDatas& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline UserDatas& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline string getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
      inline UserDatas& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    protected:
      shared_ptr<string> fileName_ {};
      shared_ptr<int64_t> fileSize_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> updatedTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr
        && this->userDatas_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline DescribeComfyUserDatasResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeComfyUserDatasResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeComfyUserDatasResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeComfyUserDatasResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeComfyUserDatasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeComfyUserDatasResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // userDatas Field Functions 
    bool hasUserDatas() const { return this->userDatas_ != nullptr;};
    void deleteUserDatas() { this->userDatas_ = nullptr;};
    inline const vector<DescribeComfyUserDatasResponseBody::UserDatas> & getUserDatas() const { DARABONBA_PTR_GET_CONST(userDatas_, vector<DescribeComfyUserDatasResponseBody::UserDatas>) };
    inline vector<DescribeComfyUserDatasResponseBody::UserDatas> getUserDatas() { DARABONBA_PTR_GET(userDatas_, vector<DescribeComfyUserDatasResponseBody::UserDatas>) };
    inline DescribeComfyUserDatasResponseBody& setUserDatas(const vector<DescribeComfyUserDatasResponseBody::UserDatas> & userDatas) { DARABONBA_PTR_SET_VALUE(userDatas_, userDatas) };
    inline DescribeComfyUserDatasResponseBody& setUserDatas(vector<DescribeComfyUserDatasResponseBody::UserDatas> && userDatas) { DARABONBA_PTR_SET_RVALUE(userDatas_, userDatas) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
    shared_ptr<vector<DescribeComfyUserDatasResponseBody::UserDatas>> userDatas_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
