// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFUNDACCOUNTPAYRELATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFUNDACCOUNTPAYRELATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CreateFundAccountPayRelationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFundAccountPayRelationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFundAccountPayRelationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateFundAccountPayRelationResponseBody() = default ;
    CreateFundAccountPayRelationResponseBody(const CreateFundAccountPayRelationResponseBody &) = default ;
    CreateFundAccountPayRelationResponseBody(CreateFundAccountPayRelationResponseBody &&) = default ;
    CreateFundAccountPayRelationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFundAccountPayRelationResponseBody() = default ;
    CreateFundAccountPayRelationResponseBody& operator=(const CreateFundAccountPayRelationResponseBody &) = default ;
    CreateFundAccountPayRelationResponseBody& operator=(CreateFundAccountPayRelationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(FundAccountId, fundAccountId_);
        DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
        DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(FundAccountId, fundAccountId_);
        DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
        DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
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
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->fundAccountId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline Data& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // fundAccountId Field Functions 
      bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
      void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
      inline string getFundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, "") };
      inline Data& setFundAccountId(string fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


      // resultCode Field Functions 
      bool hasResultCode() const { return this->resultCode_ != nullptr;};
      void deleteResultCode() { this->resultCode_ = nullptr;};
      inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
      inline Data& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


      // resultMessage Field Functions 
      bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
      void deleteResultMessage() { this->resultMessage_ = nullptr;};
      inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
      inline Data& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


    protected:
      shared_ptr<string> accountId_ {};
      shared_ptr<string> accountName_ {};
      shared_ptr<string> fundAccountId_ {};
      shared_ptr<string> resultCode_ {};
      shared_ptr<string> resultMessage_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->metadata_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<CreateFundAccountPayRelationResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<CreateFundAccountPayRelationResponseBody::Data>) };
    inline vector<CreateFundAccountPayRelationResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<CreateFundAccountPayRelationResponseBody::Data>) };
    inline CreateFundAccountPayRelationResponseBody& setData(const vector<CreateFundAccountPayRelationResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateFundAccountPayRelationResponseBody& setData(vector<CreateFundAccountPayRelationResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline CreateFundAccountPayRelationResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline CreateFundAccountPayRelationResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFundAccountPayRelationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<CreateFundAccountPayRelationResponseBody::Data>> data_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
