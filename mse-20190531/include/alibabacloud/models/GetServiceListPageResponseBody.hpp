// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELISTPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELISTPAGERESPONSEBODY_HPP_
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
  class GetServiceListPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceListPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceListPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetServiceListPageResponseBody() = default ;
    GetServiceListPageResponseBody(const GetServiceListPageResponseBody &) = default ;
    GetServiceListPageResponseBody(GetServiceListPageResponseBody &&) = default ;
    GetServiceListPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceListPageResponseBody() = default ;
    GetServiceListPageResponseBody& operator=(const GetServiceListPageResponseBody &) = default ;
    GetServiceListPageResponseBody& operator=(GetServiceListPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(GmtModifyTime, gmtModifyTime_);
          DARABONBA_PTR_TO_JSON(Group, group_);
          DARABONBA_PTR_TO_JSON(InstanceNum, instanceNum_);
          DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(GmtModifyTime, gmtModifyTime_);
          DARABONBA_PTR_FROM_JSON(Group, group_);
          DARABONBA_PTR_FROM_JSON(InstanceNum, instanceNum_);
          DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->gmtModifyTime_ == nullptr && this->group_ == nullptr && this->instanceNum_ == nullptr && this->serviceName_ == nullptr
        && this->serviceType_ == nullptr && this->version_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Result& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline Result& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // gmtModifyTime Field Functions 
        bool hasGmtModifyTime() const { return this->gmtModifyTime_ != nullptr;};
        void deleteGmtModifyTime() { this->gmtModifyTime_ = nullptr;};
        inline string getGmtModifyTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifyTime_, "") };
        inline Result& setGmtModifyTime(string gmtModifyTime) { DARABONBA_PTR_SET_VALUE(gmtModifyTime_, gmtModifyTime) };


        // group Field Functions 
        bool hasGroup() const { return this->group_ != nullptr;};
        void deleteGroup() { this->group_ = nullptr;};
        inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
        inline Result& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


        // instanceNum Field Functions 
        bool hasInstanceNum() const { return this->instanceNum_ != nullptr;};
        void deleteInstanceNum() { this->instanceNum_ = nullptr;};
        inline int32_t getInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(instanceNum_, 0) };
        inline Result& setInstanceNum(int32_t instanceNum) { DARABONBA_PTR_SET_VALUE(instanceNum_, instanceNum) };


        // serviceName Field Functions 
        bool hasServiceName() const { return this->serviceName_ != nullptr;};
        void deleteServiceName() { this->serviceName_ = nullptr;};
        inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
        inline Result& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


        // serviceType Field Functions 
        bool hasServiceType() const { return this->serviceType_ != nullptr;};
        void deleteServiceType() { this->serviceType_ = nullptr;};
        inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
        inline Result& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Result& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The application ID.
        shared_ptr<string> appId_ {};
        // The application name.
        shared_ptr<string> appName_ {};
        // The time when the service was last updated.
        shared_ptr<string> gmtModifyTime_ {};
        // The group to which the service belongs.
        shared_ptr<string> group_ {};
        // The number of service nodes.
        shared_ptr<int32_t> instanceNum_ {};
        // The service name.
        shared_ptr<string> serviceName_ {};
        shared_ptr<string> serviceType_ {};
        // The service version.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->result_ == nullptr && this->totalSize_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
      inline Data& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
      inline Data& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline string getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, "") };
      inline Data& setTotalSize(string totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The page number.
      shared_ptr<string> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<string> pageSize_ {};
      // The data on the current page.
      shared_ptr<vector<Data::Result>> result_ {};
      // The total number of entries returned.
      shared_ptr<string> totalSize_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetServiceListPageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetServiceListPageResponseBody::Data) };
    inline GetServiceListPageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetServiceListPageResponseBody::Data) };
    inline GetServiceListPageResponseBody& setData(const GetServiceListPageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetServiceListPageResponseBody& setData(GetServiceListPageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetServiceListPageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceListPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetServiceListPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response to the request.
    shared_ptr<GetServiceListPageResponseBody::Data> data_ {};
    // The request information.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
