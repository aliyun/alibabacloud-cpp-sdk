// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELISTPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELISTPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetServiceListPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceListPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceListPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
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
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(TotalElements, totalElements_);
        DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(TotalElements, totalElements_);
        DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
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
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(EdasAppId, edasAppId_);
          DARABONBA_PTR_TO_JSON(EdasAppName, edasAppName_);
          DARABONBA_PTR_TO_JSON(Group, group_);
          DARABONBA_PTR_TO_JSON(InstanceNum, instanceNum_);
          DARABONBA_PTR_TO_JSON(RegisterType, registerType_);
          DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
          DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(EdasAppId, edasAppId_);
          DARABONBA_PTR_FROM_JSON(EdasAppName, edasAppName_);
          DARABONBA_PTR_FROM_JSON(Group, group_);
          DARABONBA_PTR_FROM_JSON(InstanceNum, instanceNum_);
          DARABONBA_PTR_FROM_JSON(RegisterType, registerType_);
          DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
          DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->edasAppId_ == nullptr
        && this->edasAppName_ == nullptr && this->group_ == nullptr && this->instanceNum_ == nullptr && this->registerType_ == nullptr && this->serviceId_ == nullptr
        && this->serviceName_ == nullptr && this->version_ == nullptr; };
        // edasAppId Field Functions 
        bool hasEdasAppId() const { return this->edasAppId_ != nullptr;};
        void deleteEdasAppId() { this->edasAppId_ = nullptr;};
        inline string getEdasAppId() const { DARABONBA_PTR_GET_DEFAULT(edasAppId_, "") };
        inline Content& setEdasAppId(string edasAppId) { DARABONBA_PTR_SET_VALUE(edasAppId_, edasAppId) };


        // edasAppName Field Functions 
        bool hasEdasAppName() const { return this->edasAppName_ != nullptr;};
        void deleteEdasAppName() { this->edasAppName_ = nullptr;};
        inline string getEdasAppName() const { DARABONBA_PTR_GET_DEFAULT(edasAppName_, "") };
        inline Content& setEdasAppName(string edasAppName) { DARABONBA_PTR_SET_VALUE(edasAppName_, edasAppName) };


        // group Field Functions 
        bool hasGroup() const { return this->group_ != nullptr;};
        void deleteGroup() { this->group_ = nullptr;};
        inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
        inline Content& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


        // instanceNum Field Functions 
        bool hasInstanceNum() const { return this->instanceNum_ != nullptr;};
        void deleteInstanceNum() { this->instanceNum_ = nullptr;};
        inline int32_t getInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(instanceNum_, 0) };
        inline Content& setInstanceNum(int32_t instanceNum) { DARABONBA_PTR_SET_VALUE(instanceNum_, instanceNum) };


        // registerType Field Functions 
        bool hasRegisterType() const { return this->registerType_ != nullptr;};
        void deleteRegisterType() { this->registerType_ = nullptr;};
        inline string getRegisterType() const { DARABONBA_PTR_GET_DEFAULT(registerType_, "") };
        inline Content& setRegisterType(string registerType) { DARABONBA_PTR_SET_VALUE(registerType_, registerType) };


        // serviceId Field Functions 
        bool hasServiceId() const { return this->serviceId_ != nullptr;};
        void deleteServiceId() { this->serviceId_ = nullptr;};
        inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
        inline Content& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


        // serviceName Field Functions 
        bool hasServiceName() const { return this->serviceName_ != nullptr;};
        void deleteServiceName() { this->serviceName_ = nullptr;};
        inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
        inline Content& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Content& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The ID of the application.
        shared_ptr<string> edasAppId_ {};
        // The name of the application.
        shared_ptr<string> edasAppName_ {};
        // The service group.
        shared_ptr<string> group_ {};
        // The number of instances.
        shared_ptr<int32_t> instanceNum_ {};
        // The type of the service registry.
        shared_ptr<string> registerType_ {};
        // The ID of the service.
        shared_ptr<string> serviceId_ {};
        // The name of the service.
        shared_ptr<string> serviceName_ {};
        // The version number.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->size_ == nullptr && this->totalElements_ == nullptr && this->totalPages_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Data::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Data::Content>) };
      inline vector<Data::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Data::Content>) };
      inline Data& setContent(const vector<Data::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Data& setContent(vector<Data::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline Data& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // totalElements Field Functions 
      bool hasTotalElements() const { return this->totalElements_ != nullptr;};
      void deleteTotalElements() { this->totalElements_ = nullptr;};
      inline int32_t getTotalElements() const { DARABONBA_PTR_GET_DEFAULT(totalElements_, 0) };
      inline Data& setTotalElements(int32_t totalElements) { DARABONBA_PTR_SET_VALUE(totalElements_, totalElements) };


      // totalPages Field Functions 
      bool hasTotalPages() const { return this->totalPages_ != nullptr;};
      void deleteTotalPages() { this->totalPages_ = nullptr;};
      inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
      inline Data& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    protected:
      // The data array that is returned.
      shared_ptr<vector<Data::Content>> content_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> size_ {};
      // The total number of returned entries.
      shared_ptr<int32_t> totalElements_ {};
      // The total number of returned pages.
      shared_ptr<int32_t> totalPages_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetServiceListPageResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


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


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetServiceListPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The returned data.
    shared_ptr<GetServiceListPageResponseBody::Data> data_ {};
    // The message that is returned for the request.
    shared_ptr<string> message_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
