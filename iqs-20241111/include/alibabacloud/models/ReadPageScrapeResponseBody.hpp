// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READPAGESCRAPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_READPAGESCRAPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ReadPageItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class ReadPageScrapeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadPageScrapeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ReadPageScrapeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ReadPageScrapeResponseBody() = default ;
    ReadPageScrapeResponseBody(const ReadPageScrapeResponseBody &) = default ;
    ReadPageScrapeResponseBody(ReadPageScrapeResponseBody &&) = default ;
    ReadPageScrapeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadPageScrapeResponseBody() = default ;
    ReadPageScrapeResponseBody& operator=(const ReadPageScrapeResponseBody &) = default ;
    ReadPageScrapeResponseBody& operator=(ReadPageScrapeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ReadPageItem & getData() const { DARABONBA_PTR_GET_CONST(data_, ReadPageItem) };
    inline ReadPageItem getData() { DARABONBA_PTR_GET(data_, ReadPageItem) };
    inline ReadPageScrapeResponseBody& setData(const ReadPageItem & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ReadPageScrapeResponseBody& setData(ReadPageItem && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ReadPageScrapeResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ReadPageScrapeResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReadPageScrapeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ReadPageItem> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
