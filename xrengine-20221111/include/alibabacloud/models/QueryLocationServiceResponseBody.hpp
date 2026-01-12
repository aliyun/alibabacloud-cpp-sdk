// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLOCATIONSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYLOCATIONSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class QueryLocationServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLocationServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorName, errorName_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLocationServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorName, errorName_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryLocationServiceResponseBody() = default ;
    QueryLocationServiceResponseBody(const QueryLocationServiceResponseBody &) = default ;
    QueryLocationServiceResponseBody(QueryLocationServiceResponseBody &&) = default ;
    QueryLocationServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLocationServiceResponseBody() = default ;
    QueryLocationServiceResponseBody& operator=(const QueryLocationServiceResponseBody &) = default ;
    QueryLocationServiceResponseBody& operator=(QueryLocationServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Note, note_);
        DARABONBA_PTR_TO_JSON(Qps, qps_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(SvcDeployStatus, svcDeployStatus_);
        DARABONBA_PTR_TO_JSON(SvcState, svcState_);
        DARABONBA_PTR_TO_JSON(TreeConfig, treeConfig_);
        DARABONBA_PTR_TO_JSON(UuidLogMap, uuidLogMap_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Note, note_);
        DARABONBA_PTR_FROM_JSON(Qps, qps_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(SvcDeployStatus, svcDeployStatus_);
        DARABONBA_PTR_FROM_JSON(SvcState, svcState_);
        DARABONBA_PTR_FROM_JSON(TreeConfig, treeConfig_);
        DARABONBA_PTR_FROM_JSON(UuidLogMap, uuidLogMap_);
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
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->expireTime_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->imageId_ == nullptr
        && this->imageName_ == nullptr && this->name_ == nullptr && this->note_ == nullptr && this->qps_ == nullptr && this->startTime_ == nullptr
        && this->svcDeployStatus_ == nullptr && this->svcState_ == nullptr && this->treeConfig_ == nullptr && this->uuidLogMap_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Data& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline int64_t getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, 0L) };
      inline Data& setImageId(int64_t imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
      inline Data& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // note Field Functions 
      bool hasNote() const { return this->note_ != nullptr;};
      void deleteNote() { this->note_ = nullptr;};
      inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
      inline Data& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


      // qps Field Functions 
      bool hasQps() const { return this->qps_ != nullptr;};
      void deleteQps() { this->qps_ = nullptr;};
      inline int64_t getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0L) };
      inline Data& setQps(int64_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // svcDeployStatus Field Functions 
      bool hasSvcDeployStatus() const { return this->svcDeployStatus_ != nullptr;};
      void deleteSvcDeployStatus() { this->svcDeployStatus_ = nullptr;};
      inline string getSvcDeployStatus() const { DARABONBA_PTR_GET_DEFAULT(svcDeployStatus_, "") };
      inline Data& setSvcDeployStatus(string svcDeployStatus) { DARABONBA_PTR_SET_VALUE(svcDeployStatus_, svcDeployStatus) };


      // svcState Field Functions 
      bool hasSvcState() const { return this->svcState_ != nullptr;};
      void deleteSvcState() { this->svcState_ = nullptr;};
      inline string getSvcState() const { DARABONBA_PTR_GET_DEFAULT(svcState_, "") };
      inline Data& setSvcState(string svcState) { DARABONBA_PTR_SET_VALUE(svcState_, svcState) };


      // treeConfig Field Functions 
      bool hasTreeConfig() const { return this->treeConfig_ != nullptr;};
      void deleteTreeConfig() { this->treeConfig_ = nullptr;};
      inline string getTreeConfig() const { DARABONBA_PTR_GET_DEFAULT(treeConfig_, "") };
      inline Data& setTreeConfig(string treeConfig) { DARABONBA_PTR_SET_VALUE(treeConfig_, treeConfig) };


      // uuidLogMap Field Functions 
      bool hasUuidLogMap() const { return this->uuidLogMap_ != nullptr;};
      void deleteUuidLogMap() { this->uuidLogMap_ = nullptr;};
      inline string getUuidLogMap() const { DARABONBA_PTR_GET_DEFAULT(uuidLogMap_, "") };
      inline Data& setUuidLogMap(string uuidLogMap) { DARABONBA_PTR_SET_VALUE(uuidLogMap_, uuidLogMap) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> expireTime_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<int64_t> imageId_ {};
      shared_ptr<string> imageName_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> note_ {};
      shared_ptr<int64_t> qps_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> svcDeployStatus_ {};
      shared_ptr<string> svcState_ {};
      shared_ptr<string> treeConfig_ {};
      shared_ptr<string> uuidLogMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorName_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryLocationServiceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryLocationServiceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryLocationServiceResponseBody::Data) };
    inline QueryLocationServiceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryLocationServiceResponseBody::Data) };
    inline QueryLocationServiceResponseBody& setData(const QueryLocationServiceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryLocationServiceResponseBody& setData(QueryLocationServiceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorName Field Functions 
    bool hasErrorName() const { return this->errorName_ != nullptr;};
    void deleteErrorName() { this->errorName_ = nullptr;};
    inline string getErrorName() const { DARABONBA_PTR_GET_DEFAULT(errorName_, "") };
    inline QueryLocationServiceResponseBody& setErrorName(string errorName) { DARABONBA_PTR_SET_VALUE(errorName_, errorName) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline QueryLocationServiceResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryLocationServiceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryLocationServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryLocationServiceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryLocationServiceResponseBody::Data> data_ {};
    shared_ptr<string> errorName_ {};
    shared_ptr<int32_t> httpCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
