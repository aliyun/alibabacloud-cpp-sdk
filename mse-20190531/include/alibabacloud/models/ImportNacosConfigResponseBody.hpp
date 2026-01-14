// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTNACOSCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMPORTNACOSCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ImportNacosConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportNacosConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ImportNacosConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ImportNacosConfigResponseBody() = default ;
    ImportNacosConfigResponseBody(const ImportNacosConfigResponseBody &) = default ;
    ImportNacosConfigResponseBody(ImportNacosConfigResponseBody &&) = default ;
    ImportNacosConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportNacosConfigResponseBody() = default ;
    ImportNacosConfigResponseBody& operator=(const ImportNacosConfigResponseBody &) = default ;
    ImportNacosConfigResponseBody& operator=(ImportNacosConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FailData, failData_);
        DARABONBA_PTR_TO_JSON(SkipCount, skipCount_);
        DARABONBA_PTR_TO_JSON(SkipData, skipData_);
        DARABONBA_PTR_TO_JSON(SuccCount, succCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FailData, failData_);
        DARABONBA_PTR_FROM_JSON(SkipCount, skipCount_);
        DARABONBA_PTR_FROM_JSON(SkipData, skipData_);
        DARABONBA_PTR_FROM_JSON(SuccCount, succCount_);
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
      class SkipData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SkipData& obj) { 
          DARABONBA_PTR_TO_JSON(DataId, dataId_);
          DARABONBA_PTR_TO_JSON(Group, group_);
        };
        friend void from_json(const Darabonba::Json& j, SkipData& obj) { 
          DARABONBA_PTR_FROM_JSON(DataId, dataId_);
          DARABONBA_PTR_FROM_JSON(Group, group_);
        };
        SkipData() = default ;
        SkipData(const SkipData &) = default ;
        SkipData(SkipData &&) = default ;
        SkipData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SkipData() = default ;
        SkipData& operator=(const SkipData &) = default ;
        SkipData& operator=(SkipData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataId_ == nullptr
        && this->group_ == nullptr; };
        // dataId Field Functions 
        bool hasDataId() const { return this->dataId_ != nullptr;};
        void deleteDataId() { this->dataId_ = nullptr;};
        inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
        inline SkipData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


        // group Field Functions 
        bool hasGroup() const { return this->group_ != nullptr;};
        void deleteGroup() { this->group_ = nullptr;};
        inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
        inline SkipData& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      protected:
        // The ID of the group.
        shared_ptr<string> dataId_ {};
        // The information about configurations that are failed to be imported.
        shared_ptr<string> group_ {};
      };

      class FailData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailData& obj) { 
          DARABONBA_PTR_TO_JSON(DataId, dataId_);
          DARABONBA_PTR_TO_JSON(Group, group_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
        };
        friend void from_json(const Darabonba::Json& j, FailData& obj) { 
          DARABONBA_PTR_FROM_JSON(DataId, dataId_);
          DARABONBA_PTR_FROM_JSON(Group, group_);
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
        };
        FailData() = default ;
        FailData(const FailData &) = default ;
        FailData(FailData &&) = default ;
        FailData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailData() = default ;
        FailData& operator=(const FailData &) = default ;
        FailData& operator=(FailData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataId_ == nullptr
        && this->group_ == nullptr && this->reason_ == nullptr; };
        // dataId Field Functions 
        bool hasDataId() const { return this->dataId_ != nullptr;};
        void deleteDataId() { this->dataId_ = nullptr;};
        inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
        inline FailData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


        // group Field Functions 
        bool hasGroup() const { return this->group_ != nullptr;};
        void deleteGroup() { this->group_ = nullptr;};
        inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
        inline FailData& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline FailData& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      protected:
        // The ID of the group.
        shared_ptr<string> dataId_ {};
        shared_ptr<string> group_ {};
        shared_ptr<string> reason_ {};
      };

      virtual bool empty() const override { return this->failData_ == nullptr
        && this->skipCount_ == nullptr && this->skipData_ == nullptr && this->succCount_ == nullptr; };
      // failData Field Functions 
      bool hasFailData() const { return this->failData_ != nullptr;};
      void deleteFailData() { this->failData_ = nullptr;};
      inline const vector<Data::FailData> & getFailData() const { DARABONBA_PTR_GET_CONST(failData_, vector<Data::FailData>) };
      inline vector<Data::FailData> getFailData() { DARABONBA_PTR_GET(failData_, vector<Data::FailData>) };
      inline Data& setFailData(const vector<Data::FailData> & failData) { DARABONBA_PTR_SET_VALUE(failData_, failData) };
      inline Data& setFailData(vector<Data::FailData> && failData) { DARABONBA_PTR_SET_RVALUE(failData_, failData) };


      // skipCount Field Functions 
      bool hasSkipCount() const { return this->skipCount_ != nullptr;};
      void deleteSkipCount() { this->skipCount_ = nullptr;};
      inline int32_t getSkipCount() const { DARABONBA_PTR_GET_DEFAULT(skipCount_, 0) };
      inline Data& setSkipCount(int32_t skipCount) { DARABONBA_PTR_SET_VALUE(skipCount_, skipCount) };


      // skipData Field Functions 
      bool hasSkipData() const { return this->skipData_ != nullptr;};
      void deleteSkipData() { this->skipData_ = nullptr;};
      inline const vector<Data::SkipData> & getSkipData() const { DARABONBA_PTR_GET_CONST(skipData_, vector<Data::SkipData>) };
      inline vector<Data::SkipData> getSkipData() { DARABONBA_PTR_GET(skipData_, vector<Data::SkipData>) };
      inline Data& setSkipData(const vector<Data::SkipData> & skipData) { DARABONBA_PTR_SET_VALUE(skipData_, skipData) };
      inline Data& setSkipData(vector<Data::SkipData> && skipData) { DARABONBA_PTR_SET_RVALUE(skipData_, skipData) };


      // succCount Field Functions 
      bool hasSuccCount() const { return this->succCount_ != nullptr;};
      void deleteSuccCount() { this->succCount_ = nullptr;};
      inline int32_t getSuccCount() const { DARABONBA_PTR_GET_DEFAULT(succCount_, 0) };
      inline Data& setSuccCount(int32_t succCount) { DARABONBA_PTR_SET_VALUE(succCount_, succCount) };


    protected:
      // The data structure.
      shared_ptr<vector<Data::FailData>> failData_ {};
      // The information about skipped configurations.
      shared_ptr<int32_t> skipCount_ {};
      // The data structure.
      shared_ptr<vector<Data::SkipData>> skipData_ {};
      // The number of configurations that are skipped.
      shared_ptr<int32_t> succCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicMessage_ == nullptr && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ImportNacosConfigResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ImportNacosConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ImportNacosConfigResponseBody::Data) };
    inline ImportNacosConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ImportNacosConfigResponseBody::Data) };
    inline ImportNacosConfigResponseBody& setData(const ImportNacosConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ImportNacosConfigResponseBody& setData(ImportNacosConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ImportNacosConfigResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ImportNacosConfigResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ImportNacosConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ImportNacosConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportNacosConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ImportNacosConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error message returned.
    shared_ptr<int32_t> code_ {};
    // The number of configurations that are imported.
    shared_ptr<ImportNacosConfigResponseBody::Data> data_ {};
    // The details of the data.
    shared_ptr<string> dynamicMessage_ {};
    // The code returned.
    shared_ptr<string> errorCode_ {};
    // The ID of the request.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request is successfully processed.
    shared_ptr<string> message_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<string> requestId_ {};
    // The error code that is returned.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
