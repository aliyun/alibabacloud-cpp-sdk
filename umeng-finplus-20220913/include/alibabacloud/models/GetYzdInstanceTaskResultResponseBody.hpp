// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYZDINSTANCETASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETYZDINSTANCETASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class GetYzdInstanceTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYzdInstanceTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetYzdInstanceTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetYzdInstanceTaskResultResponseBody() = default ;
    GetYzdInstanceTaskResultResponseBody(const GetYzdInstanceTaskResultResponseBody &) = default ;
    GetYzdInstanceTaskResultResponseBody(GetYzdInstanceTaskResultResponseBody &&) = default ;
    GetYzdInstanceTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYzdInstanceTaskResultResponseBody() = default ;
    GetYzdInstanceTaskResultResponseBody& operator=(const GetYzdInstanceTaskResultResponseBody &) = default ;
    GetYzdInstanceTaskResultResponseBody& operator=(GetYzdInstanceTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(appid, appid_);
        DARABONBA_PTR_TO_JSON(bcid, bcid_);
        DARABONBA_PTR_TO_JSON(datasetIds, datasetIds_);
        DARABONBA_PTR_TO_JSON(downloadUrls, downloadUrls_);
        DARABONBA_PTR_TO_JSON(resultCnt, resultCnt_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(timeDuration, timeDuration_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(appid, appid_);
        DARABONBA_PTR_FROM_JSON(bcid, bcid_);
        DARABONBA_PTR_FROM_JSON(datasetIds, datasetIds_);
        DARABONBA_PTR_FROM_JSON(downloadUrls, downloadUrls_);
        DARABONBA_PTR_FROM_JSON(resultCnt, resultCnt_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(timeDuration, timeDuration_);
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
      class DownloadUrls : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DownloadUrls& obj) { 
          DARABONBA_PTR_TO_JSON(pwd, pwd_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, DownloadUrls& obj) { 
          DARABONBA_PTR_FROM_JSON(pwd, pwd_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        DownloadUrls() = default ;
        DownloadUrls(const DownloadUrls &) = default ;
        DownloadUrls(DownloadUrls &&) = default ;
        DownloadUrls(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DownloadUrls() = default ;
        DownloadUrls& operator=(const DownloadUrls &) = default ;
        DownloadUrls& operator=(DownloadUrls &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->pwd_ == nullptr
        && this->url_ == nullptr; };
        // pwd Field Functions 
        bool hasPwd() const { return this->pwd_ != nullptr;};
        void deletePwd() { this->pwd_ = nullptr;};
        inline string getPwd() const { DARABONBA_PTR_GET_DEFAULT(pwd_, "") };
        inline DownloadUrls& setPwd(string pwd) { DARABONBA_PTR_SET_VALUE(pwd_, pwd) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline DownloadUrls& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> pwd_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->appid_ == nullptr
        && this->bcid_ == nullptr && this->datasetIds_ == nullptr && this->downloadUrls_ == nullptr && this->resultCnt_ == nullptr && this->status_ == nullptr
        && this->timeDuration_ == nullptr; };
      // appid Field Functions 
      bool hasAppid() const { return this->appid_ != nullptr;};
      void deleteAppid() { this->appid_ = nullptr;};
      inline string getAppid() const { DARABONBA_PTR_GET_DEFAULT(appid_, "") };
      inline Data& setAppid(string appid) { DARABONBA_PTR_SET_VALUE(appid_, appid) };


      // bcid Field Functions 
      bool hasBcid() const { return this->bcid_ != nullptr;};
      void deleteBcid() { this->bcid_ = nullptr;};
      inline string getBcid() const { DARABONBA_PTR_GET_DEFAULT(bcid_, "") };
      inline Data& setBcid(string bcid) { DARABONBA_PTR_SET_VALUE(bcid_, bcid) };


      // datasetIds Field Functions 
      bool hasDatasetIds() const { return this->datasetIds_ != nullptr;};
      void deleteDatasetIds() { this->datasetIds_ = nullptr;};
      inline string getDatasetIds() const { DARABONBA_PTR_GET_DEFAULT(datasetIds_, "") };
      inline Data& setDatasetIds(string datasetIds) { DARABONBA_PTR_SET_VALUE(datasetIds_, datasetIds) };


      // downloadUrls Field Functions 
      bool hasDownloadUrls() const { return this->downloadUrls_ != nullptr;};
      void deleteDownloadUrls() { this->downloadUrls_ = nullptr;};
      inline const vector<Data::DownloadUrls> & getDownloadUrls() const { DARABONBA_PTR_GET_CONST(downloadUrls_, vector<Data::DownloadUrls>) };
      inline vector<Data::DownloadUrls> getDownloadUrls() { DARABONBA_PTR_GET(downloadUrls_, vector<Data::DownloadUrls>) };
      inline Data& setDownloadUrls(const vector<Data::DownloadUrls> & downloadUrls) { DARABONBA_PTR_SET_VALUE(downloadUrls_, downloadUrls) };
      inline Data& setDownloadUrls(vector<Data::DownloadUrls> && downloadUrls) { DARABONBA_PTR_SET_RVALUE(downloadUrls_, downloadUrls) };


      // resultCnt Field Functions 
      bool hasResultCnt() const { return this->resultCnt_ != nullptr;};
      void deleteResultCnt() { this->resultCnt_ = nullptr;};
      inline string getResultCnt() const { DARABONBA_PTR_GET_DEFAULT(resultCnt_, "") };
      inline Data& setResultCnt(string resultCnt) { DARABONBA_PTR_SET_VALUE(resultCnt_, resultCnt) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // timeDuration Field Functions 
      bool hasTimeDuration() const { return this->timeDuration_ != nullptr;};
      void deleteTimeDuration() { this->timeDuration_ = nullptr;};
      inline string getTimeDuration() const { DARABONBA_PTR_GET_DEFAULT(timeDuration_, "") };
      inline Data& setTimeDuration(string timeDuration) { DARABONBA_PTR_SET_VALUE(timeDuration_, timeDuration) };


    protected:
      shared_ptr<string> appid_ {};
      shared_ptr<string> bcid_ {};
      shared_ptr<string> datasetIds_ {};
      shared_ptr<vector<Data::DownloadUrls>> downloadUrls_ {};
      shared_ptr<string> resultCnt_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> timeDuration_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline bool getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, false) };
    inline GetYzdInstanceTaskResultResponseBody& setCode(bool code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetYzdInstanceTaskResultResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetYzdInstanceTaskResultResponseBody::Data>) };
    inline vector<GetYzdInstanceTaskResultResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetYzdInstanceTaskResultResponseBody::Data>) };
    inline GetYzdInstanceTaskResultResponseBody& setData(const vector<GetYzdInstanceTaskResultResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetYzdInstanceTaskResultResponseBody& setData(vector<GetYzdInstanceTaskResultResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetYzdInstanceTaskResultResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetYzdInstanceTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetYzdInstanceTaskResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<bool> code_ {};
    shared_ptr<vector<GetYzdInstanceTaskResultResponseBody::Data>> data_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
