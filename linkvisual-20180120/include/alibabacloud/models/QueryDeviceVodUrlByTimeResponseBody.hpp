// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEVICEVODURLBYTIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEVICEVODURLBYTIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryDeviceVodUrlByTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDeviceVodUrlByTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDeviceVodUrlByTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryDeviceVodUrlByTimeResponseBody() = default ;
    QueryDeviceVodUrlByTimeResponseBody(const QueryDeviceVodUrlByTimeResponseBody &) = default ;
    QueryDeviceVodUrlByTimeResponseBody(QueryDeviceVodUrlByTimeResponseBody &&) = default ;
    QueryDeviceVodUrlByTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDeviceVodUrlByTimeResponseBody() = default ;
    QueryDeviceVodUrlByTimeResponseBody& operator=(const QueryDeviceVodUrlByTimeResponseBody &) = default ;
    QueryDeviceVodUrlByTimeResponseBody& operator=(QueryDeviceVodUrlByTimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DecryptKey, decryptKey_);
        DARABONBA_PTR_TO_JSON(StunInfo, stunInfo_);
        DARABONBA_PTR_TO_JSON(VodUrl, vodUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DecryptKey, decryptKey_);
        DARABONBA_PTR_FROM_JSON(StunInfo, stunInfo_);
        DARABONBA_PTR_FROM_JSON(VodUrl, vodUrl_);
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
      virtual bool empty() const override { return this->decryptKey_ == nullptr
        && this->stunInfo_ == nullptr && this->vodUrl_ == nullptr; };
      // decryptKey Field Functions 
      bool hasDecryptKey() const { return this->decryptKey_ != nullptr;};
      void deleteDecryptKey() { this->decryptKey_ = nullptr;};
      inline string getDecryptKey() const { DARABONBA_PTR_GET_DEFAULT(decryptKey_, "") };
      inline Data& setDecryptKey(string decryptKey) { DARABONBA_PTR_SET_VALUE(decryptKey_, decryptKey) };


      // stunInfo Field Functions 
      bool hasStunInfo() const { return this->stunInfo_ != nullptr;};
      void deleteStunInfo() { this->stunInfo_ = nullptr;};
      inline string getStunInfo() const { DARABONBA_PTR_GET_DEFAULT(stunInfo_, "") };
      inline Data& setStunInfo(string stunInfo) { DARABONBA_PTR_SET_VALUE(stunInfo_, stunInfo) };


      // vodUrl Field Functions 
      bool hasVodUrl() const { return this->vodUrl_ != nullptr;};
      void deleteVodUrl() { this->vodUrl_ = nullptr;};
      inline string getVodUrl() const { DARABONBA_PTR_GET_DEFAULT(vodUrl_, "") };
      inline Data& setVodUrl(string vodUrl) { DARABONBA_PTR_SET_VALUE(vodUrl_, vodUrl) };


    protected:
      // The decryption key.
      // A decryption key is generated when the **ShouldEncrypt** parameter is set to **true**.
      shared_ptr<string> decryptKey_ {};
      shared_ptr<string> stunInfo_ {};
      // The playback URL of the local recording.
      shared_ptr<string> vodUrl_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryDeviceVodUrlByTimeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryDeviceVodUrlByTimeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryDeviceVodUrlByTimeResponseBody::Data) };
    inline QueryDeviceVodUrlByTimeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryDeviceVodUrlByTimeResponseBody::Data) };
    inline QueryDeviceVodUrlByTimeResponseBody& setData(const QueryDeviceVodUrlByTimeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryDeviceVodUrlByTimeResponseBody& setData(QueryDeviceVodUrlByTimeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryDeviceVodUrlByTimeResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDeviceVodUrlByTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDeviceVodUrlByTimeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. Valid values:
    // 
    // - **200**: The call was successful.
    // - Other values: An error occurred. For more information, see [Error codes](https://help.aliyun.com/document_detail/145071.html).
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<QueryDeviceVodUrlByTimeResponseBody::Data> data_ {};
    // The error message returned if the call fails.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
