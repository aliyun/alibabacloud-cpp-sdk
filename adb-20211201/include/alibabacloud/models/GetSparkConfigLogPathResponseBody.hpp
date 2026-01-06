// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKCONFIGLOGPATHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKCONFIGLOGPATHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkConfigLogPathResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkConfigLogPathResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkConfigLogPathResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSparkConfigLogPathResponseBody() = default ;
    GetSparkConfigLogPathResponseBody(const GetSparkConfigLogPathResponseBody &) = default ;
    GetSparkConfigLogPathResponseBody(GetSparkConfigLogPathResponseBody &&) = default ;
    GetSparkConfigLogPathResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkConfigLogPathResponseBody() = default ;
    GetSparkConfigLogPathResponseBody& operator=(const GetSparkConfigLogPathResponseBody &) = default ;
    GetSparkConfigLogPathResponseBody& operator=(GetSparkConfigLogPathResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultLogPath, defaultLogPath_);
        DARABONBA_PTR_TO_JSON(IsLogPathExists, isLogPathExists_);
        DARABONBA_PTR_TO_JSON(ModifiedTimestamp, modifiedTimestamp_);
        DARABONBA_PTR_TO_JSON(ModifiedUid, modifiedUid_);
        DARABONBA_PTR_TO_JSON(RecordedLogPath, recordedLogPath_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultLogPath, defaultLogPath_);
        DARABONBA_PTR_FROM_JSON(IsLogPathExists, isLogPathExists_);
        DARABONBA_PTR_FROM_JSON(ModifiedTimestamp, modifiedTimestamp_);
        DARABONBA_PTR_FROM_JSON(ModifiedUid, modifiedUid_);
        DARABONBA_PTR_FROM_JSON(RecordedLogPath, recordedLogPath_);
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
      virtual bool empty() const override { return this->defaultLogPath_ == nullptr
        && this->isLogPathExists_ == nullptr && this->modifiedTimestamp_ == nullptr && this->modifiedUid_ == nullptr && this->recordedLogPath_ == nullptr; };
      // defaultLogPath Field Functions 
      bool hasDefaultLogPath() const { return this->defaultLogPath_ != nullptr;};
      void deleteDefaultLogPath() { this->defaultLogPath_ = nullptr;};
      inline string getDefaultLogPath() const { DARABONBA_PTR_GET_DEFAULT(defaultLogPath_, "") };
      inline Data& setDefaultLogPath(string defaultLogPath) { DARABONBA_PTR_SET_VALUE(defaultLogPath_, defaultLogPath) };


      // isLogPathExists Field Functions 
      bool hasIsLogPathExists() const { return this->isLogPathExists_ != nullptr;};
      void deleteIsLogPathExists() { this->isLogPathExists_ = nullptr;};
      inline bool getIsLogPathExists() const { DARABONBA_PTR_GET_DEFAULT(isLogPathExists_, false) };
      inline Data& setIsLogPathExists(bool isLogPathExists) { DARABONBA_PTR_SET_VALUE(isLogPathExists_, isLogPathExists) };


      // modifiedTimestamp Field Functions 
      bool hasModifiedTimestamp() const { return this->modifiedTimestamp_ != nullptr;};
      void deleteModifiedTimestamp() { this->modifiedTimestamp_ = nullptr;};
      inline string getModifiedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimestamp_, "") };
      inline Data& setModifiedTimestamp(string modifiedTimestamp) { DARABONBA_PTR_SET_VALUE(modifiedTimestamp_, modifiedTimestamp) };


      // modifiedUid Field Functions 
      bool hasModifiedUid() const { return this->modifiedUid_ != nullptr;};
      void deleteModifiedUid() { this->modifiedUid_ = nullptr;};
      inline string getModifiedUid() const { DARABONBA_PTR_GET_DEFAULT(modifiedUid_, "") };
      inline Data& setModifiedUid(string modifiedUid) { DARABONBA_PTR_SET_VALUE(modifiedUid_, modifiedUid) };


      // recordedLogPath Field Functions 
      bool hasRecordedLogPath() const { return this->recordedLogPath_ != nullptr;};
      void deleteRecordedLogPath() { this->recordedLogPath_ = nullptr;};
      inline string getRecordedLogPath() const { DARABONBA_PTR_GET_DEFAULT(recordedLogPath_, "") };
      inline Data& setRecordedLogPath(string recordedLogPath) { DARABONBA_PTR_SET_VALUE(recordedLogPath_, recordedLogPath) };


    protected:
      // The default log path.
      shared_ptr<string> defaultLogPath_ {};
      // Indicates whether a log path exists.
      shared_ptr<bool> isLogPathExists_ {};
      // The last modification time.
      shared_ptr<string> modifiedTimestamp_ {};
      // The account ID of the modifier.
      shared_ptr<string> modifiedUid_ {};
      // The recorded log path.
      shared_ptr<string> recordedLogPath_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSparkConfigLogPathResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSparkConfigLogPathResponseBody::Data) };
    inline GetSparkConfigLogPathResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSparkConfigLogPathResponseBody::Data) };
    inline GetSparkConfigLogPathResponseBody& setData(const GetSparkConfigLogPathResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSparkConfigLogPathResponseBody& setData(GetSparkConfigLogPathResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSparkConfigLogPathResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried Spark log configuration.
    shared_ptr<GetSparkConfigLogPathResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
