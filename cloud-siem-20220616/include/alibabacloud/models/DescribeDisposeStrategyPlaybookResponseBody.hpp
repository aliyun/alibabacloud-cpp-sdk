// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISPOSESTRATEGYPLAYBOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISPOSESTRATEGYPLAYBOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeDisposeStrategyPlaybookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisposeStrategyPlaybookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisposeStrategyPlaybookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDisposeStrategyPlaybookResponseBody() = default ;
    DescribeDisposeStrategyPlaybookResponseBody(const DescribeDisposeStrategyPlaybookResponseBody &) = default ;
    DescribeDisposeStrategyPlaybookResponseBody(DescribeDisposeStrategyPlaybookResponseBody &&) = default ;
    DescribeDisposeStrategyPlaybookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisposeStrategyPlaybookResponseBody() = default ;
    DescribeDisposeStrategyPlaybookResponseBody& operator=(const DescribeDisposeStrategyPlaybookResponseBody &) = default ;
    DescribeDisposeStrategyPlaybookResponseBody& operator=(DescribeDisposeStrategyPlaybookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PlaybookName, playbookName_);
        DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PlaybookName, playbookName_);
        DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
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
      virtual bool empty() const override { return this->playbookName_ == nullptr
        && this->playbookUuid_ == nullptr; };
      // playbookName Field Functions 
      bool hasPlaybookName() const { return this->playbookName_ != nullptr;};
      void deletePlaybookName() { this->playbookName_ = nullptr;};
      inline string getPlaybookName() const { DARABONBA_PTR_GET_DEFAULT(playbookName_, "") };
      inline Data& setPlaybookName(string playbookName) { DARABONBA_PTR_SET_VALUE(playbookName_, playbookName) };


      // playbookUuid Field Functions 
      bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
      void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
      inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
      inline Data& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


    protected:
      // The playbook name, which is the unique identifier of the playbook.
      shared_ptr<string> playbookName_ {};
      // The UUID of the playbook.
      shared_ptr<string> playbookUuid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeDisposeStrategyPlaybookResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeDisposeStrategyPlaybookResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeDisposeStrategyPlaybookResponseBody::Data>) };
    inline vector<DescribeDisposeStrategyPlaybookResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeDisposeStrategyPlaybookResponseBody::Data>) };
    inline DescribeDisposeStrategyPlaybookResponseBody& setData(const vector<DescribeDisposeStrategyPlaybookResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDisposeStrategyPlaybookResponseBody& setData(vector<DescribeDisposeStrategyPlaybookResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDisposeStrategyPlaybookResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDisposeStrategyPlaybookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDisposeStrategyPlaybookResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<vector<DescribeDisposeStrategyPlaybookResponseBody::Data>> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
