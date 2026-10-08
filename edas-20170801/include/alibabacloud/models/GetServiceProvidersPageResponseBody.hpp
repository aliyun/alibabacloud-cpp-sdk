// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEPROVIDERSPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEPROVIDERSPAGERESPONSEBODY_HPP_
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
  class GetServiceProvidersPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceProvidersPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceProvidersPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetServiceProvidersPageResponseBody() = default ;
    GetServiceProvidersPageResponseBody(const GetServiceProvidersPageResponseBody &) = default ;
    GetServiceProvidersPageResponseBody(GetServiceProvidersPageResponseBody &&) = default ;
    GetServiceProvidersPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceProvidersPageResponseBody() = default ;
    GetServiceProvidersPageResponseBody& operator=(const GetServiceProvidersPageResponseBody &) = default ;
    GetServiceProvidersPageResponseBody& operator=(GetServiceProvidersPageResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Iannotations, iannotations_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(SerializeType, serializeType_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(Iannotations, iannotations_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(SerializeType, serializeType_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
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
        virtual bool empty() const override { return this->iannotations_ == nullptr
        && this->ip_ == nullptr && this->port_ == nullptr && this->serializeType_ == nullptr && this->timeout_ == nullptr; };
        // iannotations Field Functions 
        bool hasIannotations() const { return this->iannotations_ != nullptr;};
        void deleteIannotations() { this->iannotations_ = nullptr;};
        inline string getIannotations() const { DARABONBA_PTR_GET_DEFAULT(iannotations_, "") };
        inline Content& setIannotations(string iannotations) { DARABONBA_PTR_SET_VALUE(iannotations_, iannotations) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline Content& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline Content& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // serializeType Field Functions 
        bool hasSerializeType() const { return this->serializeType_ != nullptr;};
        void deleteSerializeType() { this->serializeType_ = nullptr;};
        inline string getSerializeType() const { DARABONBA_PTR_GET_DEFAULT(serializeType_, "") };
        inline Content& setSerializeType(string serializeType) { DARABONBA_PTR_SET_VALUE(serializeType_, serializeType) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline string getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, "") };
        inline Content& setTimeout(string timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      protected:
        // The remarks of the service provider.
        shared_ptr<string> iannotations_ {};
        // The IP address of the service provider.
        shared_ptr<string> ip_ {};
        // The port number of the service provider.
        shared_ptr<string> port_ {};
        // The serialization type.
        shared_ptr<string> serializeType_ {};
        // The service timeout period.
        shared_ptr<string> timeout_ {};
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
      // The data array returned.
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
    inline GetServiceProvidersPageResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetServiceProvidersPageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetServiceProvidersPageResponseBody::Data) };
    inline GetServiceProvidersPageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetServiceProvidersPageResponseBody::Data) };
    inline GetServiceProvidersPageResponseBody& setData(const GetServiceProvidersPageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetServiceProvidersPageResponseBody& setData(GetServiceProvidersPageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetServiceProvidersPageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetServiceProvidersPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The data structure.
    shared_ptr<GetServiceProvidersPageResponseBody::Data> data_ {};
    // The message returned for the request.
    shared_ptr<string> message_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
