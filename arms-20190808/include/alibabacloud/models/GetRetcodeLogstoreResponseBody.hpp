// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRETCODELOGSTORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRETCODELOGSTORERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRetcodeLogstoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRetcodeLogstoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRetcodeLogstoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRetcodeLogstoreResponseBody() = default ;
    GetRetcodeLogstoreResponseBody(const GetRetcodeLogstoreResponseBody &) = default ;
    GetRetcodeLogstoreResponseBody(GetRetcodeLogstoreResponseBody &&) = default ;
    GetRetcodeLogstoreResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRetcodeLogstoreResponseBody() = default ;
    GetRetcodeLogstoreResponseBody& operator=(const GetRetcodeLogstoreResponseBody &) = default ;
    GetRetcodeLogstoreResponseBody& operator=(GetRetcodeLogstoreResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(RetcodeSLSConfig, retcodeSLSConfig_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(RetcodeSLSConfig, retcodeSLSConfig_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      class RetcodeSLSConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RetcodeSLSConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Logstore, logstore_);
          DARABONBA_PTR_TO_JSON(Project, project_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, RetcodeSLSConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
          DARABONBA_PTR_FROM_JSON(Project, project_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        RetcodeSLSConfig() = default ;
        RetcodeSLSConfig(const RetcodeSLSConfig &) = default ;
        RetcodeSLSConfig(RetcodeSLSConfig &&) = default ;
        RetcodeSLSConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RetcodeSLSConfig() = default ;
        RetcodeSLSConfig& operator=(const RetcodeSLSConfig &) = default ;
        RetcodeSLSConfig& operator=(RetcodeSLSConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->logstore_ == nullptr
        && this->project_ == nullptr && this->regionId_ == nullptr; };
        // logstore Field Functions 
        bool hasLogstore() const { return this->logstore_ != nullptr;};
        void deleteLogstore() { this->logstore_ = nullptr;};
        inline string getLogstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
        inline RetcodeSLSConfig& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline RetcodeSLSConfig& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline RetcodeSLSConfig& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The Log Service Logstore.
        shared_ptr<string> logstore_ {};
        // The Log Service project.
        shared_ptr<string> project_ {};
        // The ID of the region.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->message_ == nullptr
        && this->retcodeSLSConfig_ == nullptr && this->status_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // retcodeSLSConfig Field Functions 
      bool hasRetcodeSLSConfig() const { return this->retcodeSLSConfig_ != nullptr;};
      void deleteRetcodeSLSConfig() { this->retcodeSLSConfig_ = nullptr;};
      inline const Data::RetcodeSLSConfig & getRetcodeSLSConfig() const { DARABONBA_PTR_GET_CONST(retcodeSLSConfig_, Data::RetcodeSLSConfig) };
      inline Data::RetcodeSLSConfig getRetcodeSLSConfig() { DARABONBA_PTR_GET(retcodeSLSConfig_, Data::RetcodeSLSConfig) };
      inline Data& setRetcodeSLSConfig(const Data::RetcodeSLSConfig & retcodeSLSConfig) { DARABONBA_PTR_SET_VALUE(retcodeSLSConfig_, retcodeSLSConfig) };
      inline Data& setRetcodeSLSConfig(Data::RetcodeSLSConfig && retcodeSLSConfig) { DARABONBA_PTR_SET_RVALUE(retcodeSLSConfig_, retcodeSLSConfig) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The content of the log.
      shared_ptr<string> message_ {};
      // The information about Log Service.
      shared_ptr<Data::RetcodeSLSConfig> retcodeSLSConfig_ {};
      // The status of the request.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRetcodeLogstoreResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRetcodeLogstoreResponseBody::Data) };
    inline GetRetcodeLogstoreResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRetcodeLogstoreResponseBody::Data) };
    inline GetRetcodeLogstoreResponseBody& setData(const GetRetcodeLogstoreResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRetcodeLogstoreResponseBody& setData(GetRetcodeLogstoreResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRetcodeLogstoreResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned struct.
    shared_ptr<GetRetcodeLogstoreResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
