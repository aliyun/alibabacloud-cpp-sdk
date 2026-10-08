// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICECONSUMERSPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICECONSUMERSPAGERESPONSEBODY_HPP_
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
  class GetServiceConsumersPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceConsumersPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceConsumersPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetServiceConsumersPageResponseBody() = default ;
    GetServiceConsumersPageResponseBody(const GetServiceConsumersPageResponseBody &) = default ;
    GetServiceConsumersPageResponseBody(GetServiceConsumersPageResponseBody &&) = default ;
    GetServiceConsumersPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceConsumersPageResponseBody() = default ;
    GetServiceConsumersPageResponseBody& operator=(const GetServiceConsumersPageResponseBody &) = default ;
    GetServiceConsumersPageResponseBody& operator=(GetServiceConsumersPageResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(EdasAppName, edasAppName_);
          DARABONBA_PTR_TO_JSON(EdassAppId, edassAppId_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(EdasAppName, edasAppName_);
          DARABONBA_PTR_FROM_JSON(EdassAppId, edassAppId_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
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
        virtual bool empty() const override { return this->edasAppName_ == nullptr
        && this->edassAppId_ == nullptr && this->ip_ == nullptr; };
        // edasAppName Field Functions 
        bool hasEdasAppName() const { return this->edasAppName_ != nullptr;};
        void deleteEdasAppName() { this->edasAppName_ = nullptr;};
        inline string getEdasAppName() const { DARABONBA_PTR_GET_DEFAULT(edasAppName_, "") };
        inline Content& setEdasAppName(string edasAppName) { DARABONBA_PTR_SET_VALUE(edasAppName_, edasAppName) };


        // edassAppId Field Functions 
        bool hasEdassAppId() const { return this->edassAppId_ != nullptr;};
        void deleteEdassAppId() { this->edassAppId_ = nullptr;};
        inline string getEdassAppId() const { DARABONBA_PTR_GET_DEFAULT(edassAppId_, "") };
        inline Content& setEdassAppId(string edassAppId) { DARABONBA_PTR_SET_VALUE(edassAppId_, edassAppId) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline Content& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      protected:
        // The name of the service consumer.
        shared_ptr<string> edasAppName_ {};
        // The ID of the service consumer.
        shared_ptr<string> edassAppId_ {};
        // The IP address of the service consumer.
        shared_ptr<string> ip_ {};
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
      // The number of entries to return on each page.
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
    inline GetServiceConsumersPageResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetServiceConsumersPageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetServiceConsumersPageResponseBody::Data) };
    inline GetServiceConsumersPageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetServiceConsumersPageResponseBody::Data) };
    inline GetServiceConsumersPageResponseBody& setData(const GetServiceConsumersPageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetServiceConsumersPageResponseBody& setData(GetServiceConsumersPageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetServiceConsumersPageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetServiceConsumersPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The data that is returned.
    shared_ptr<GetServiceConsumersPageResponseBody::Data> data_ {};
    // The message that is returned for the request.
    shared_ptr<string> message_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
