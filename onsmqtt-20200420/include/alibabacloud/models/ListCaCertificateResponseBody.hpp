// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCACERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCACERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class ListCaCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCaCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCaCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCaCertificateResponseBody() = default ;
    ListCaCertificateResponseBody(const ListCaCertificateResponseBody &) = default ;
    ListCaCertificateResponseBody(ListCaCertificateResponseBody &&) = default ;
    ListCaCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCaCertificateResponseBody() = default ;
    ListCaCertificateResponseBody& operator=(const ListCaCertificateResponseBody &) = default ;
    ListCaCertificateResponseBody& operator=(ListCaCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CaCertificateVOS, caCertificateVOS_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CaCertificateVOS, caCertificateVOS_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class CaCertificateVOS : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CaCertificateVOS& obj) { 
          DARABONBA_PTR_TO_JSON(CaContent, caContent_);
          DARABONBA_PTR_TO_JSON(CaName, caName_);
          DARABONBA_PTR_TO_JSON(RegistrationCode, registrationCode_);
          DARABONBA_PTR_TO_JSON(Sn, sn_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(ValidBegin, validBegin_);
          DARABONBA_PTR_TO_JSON(ValidEnd, validEnd_);
          DARABONBA_PTR_TO_JSON(VerificationContent, verificationContent_);
        };
        friend void from_json(const Darabonba::Json& j, CaCertificateVOS& obj) { 
          DARABONBA_PTR_FROM_JSON(CaContent, caContent_);
          DARABONBA_PTR_FROM_JSON(CaName, caName_);
          DARABONBA_PTR_FROM_JSON(RegistrationCode, registrationCode_);
          DARABONBA_PTR_FROM_JSON(Sn, sn_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(ValidBegin, validBegin_);
          DARABONBA_PTR_FROM_JSON(ValidEnd, validEnd_);
          DARABONBA_PTR_FROM_JSON(VerificationContent, verificationContent_);
        };
        CaCertificateVOS() = default ;
        CaCertificateVOS(const CaCertificateVOS &) = default ;
        CaCertificateVOS(CaCertificateVOS &&) = default ;
        CaCertificateVOS(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CaCertificateVOS() = default ;
        CaCertificateVOS& operator=(const CaCertificateVOS &) = default ;
        CaCertificateVOS& operator=(CaCertificateVOS &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->caContent_ == nullptr
        && this->caName_ == nullptr && this->registrationCode_ == nullptr && this->sn_ == nullptr && this->status_ == nullptr && this->validBegin_ == nullptr
        && this->validEnd_ == nullptr && this->verificationContent_ == nullptr; };
        // caContent Field Functions 
        bool hasCaContent() const { return this->caContent_ != nullptr;};
        void deleteCaContent() { this->caContent_ = nullptr;};
        inline string getCaContent() const { DARABONBA_PTR_GET_DEFAULT(caContent_, "") };
        inline CaCertificateVOS& setCaContent(string caContent) { DARABONBA_PTR_SET_VALUE(caContent_, caContent) };


        // caName Field Functions 
        bool hasCaName() const { return this->caName_ != nullptr;};
        void deleteCaName() { this->caName_ = nullptr;};
        inline string getCaName() const { DARABONBA_PTR_GET_DEFAULT(caName_, "") };
        inline CaCertificateVOS& setCaName(string caName) { DARABONBA_PTR_SET_VALUE(caName_, caName) };


        // registrationCode Field Functions 
        bool hasRegistrationCode() const { return this->registrationCode_ != nullptr;};
        void deleteRegistrationCode() { this->registrationCode_ = nullptr;};
        inline string getRegistrationCode() const { DARABONBA_PTR_GET_DEFAULT(registrationCode_, "") };
        inline CaCertificateVOS& setRegistrationCode(string registrationCode) { DARABONBA_PTR_SET_VALUE(registrationCode_, registrationCode) };


        // sn Field Functions 
        bool hasSn() const { return this->sn_ != nullptr;};
        void deleteSn() { this->sn_ = nullptr;};
        inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
        inline CaCertificateVOS& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CaCertificateVOS& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // validBegin Field Functions 
        bool hasValidBegin() const { return this->validBegin_ != nullptr;};
        void deleteValidBegin() { this->validBegin_ = nullptr;};
        inline string getValidBegin() const { DARABONBA_PTR_GET_DEFAULT(validBegin_, "") };
        inline CaCertificateVOS& setValidBegin(string validBegin) { DARABONBA_PTR_SET_VALUE(validBegin_, validBegin) };


        // validEnd Field Functions 
        bool hasValidEnd() const { return this->validEnd_ != nullptr;};
        void deleteValidEnd() { this->validEnd_ = nullptr;};
        inline string getValidEnd() const { DARABONBA_PTR_GET_DEFAULT(validEnd_, "") };
        inline CaCertificateVOS& setValidEnd(string validEnd) { DARABONBA_PTR_SET_VALUE(validEnd_, validEnd) };


        // verificationContent Field Functions 
        bool hasVerificationContent() const { return this->verificationContent_ != nullptr;};
        void deleteVerificationContent() { this->verificationContent_ = nullptr;};
        inline string getVerificationContent() const { DARABONBA_PTR_GET_DEFAULT(verificationContent_, "") };
        inline CaCertificateVOS& setVerificationContent(string verificationContent) { DARABONBA_PTR_SET_VALUE(verificationContent_, verificationContent) };


      protected:
        // Content of the CA certificate. 
        // > \\n represents a new line.
        shared_ptr<string> caContent_ {};
        // Name of the CA certificate
        shared_ptr<string> caName_ {};
        // Registration code of the CA certificate
        shared_ptr<string> registrationCode_ {};
        // SN serial number of the CA certificate
        shared_ptr<string> sn_ {};
        // The status of the CA certificate. The values are as follows:
        // - **0**: Indicates that the certificate is in an inactive state. - **1**: Indicates that the certificate is in an active state.
        // > After the CA certificate is registered, it is in an active state by default.
        shared_ptr<string> status_ {};
        // The start time when the CA certificate becomes effective. The format is a Unix timestamp in milliseconds.
        shared_ptr<string> validBegin_ {};
        // The end time when the CA certificate becomes effective. The format is a Unix timestamp in milliseconds.
        shared_ptr<string> validEnd_ {};
        // Verify the content of the certificate. 
        // > \\n represents a new line.
        shared_ptr<string> verificationContent_ {};
      };

      virtual bool empty() const override { return this->caCertificateVOS_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // caCertificateVOS Field Functions 
      bool hasCaCertificateVOS() const { return this->caCertificateVOS_ != nullptr;};
      void deleteCaCertificateVOS() { this->caCertificateVOS_ = nullptr;};
      inline const vector<Data::CaCertificateVOS> & getCaCertificateVOS() const { DARABONBA_PTR_GET_CONST(caCertificateVOS_, vector<Data::CaCertificateVOS>) };
      inline vector<Data::CaCertificateVOS> getCaCertificateVOS() { DARABONBA_PTR_GET(caCertificateVOS_, vector<Data::CaCertificateVOS>) };
      inline Data& setCaCertificateVOS(const vector<Data::CaCertificateVOS> & caCertificateVOS) { DARABONBA_PTR_SET_VALUE(caCertificateVOS_, caCertificateVOS) };
      inline Data& setCaCertificateVOS(vector<Data::CaCertificateVOS> && caCertificateVOS) { DARABONBA_PTR_SET_RVALUE(caCertificateVOS_, caCertificateVOS) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline Data& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // Details of the CA certificate
      shared_ptr<vector<Data::CaCertificateVOS>> caCertificateVOS_ {};
      // The current page number of the returned query records.
      shared_ptr<int32_t> pageNo_ {};
      // The maximum number of results to display per page.
      shared_ptr<int32_t> pageSize_ {};
      // Maximum number of pages in the query result.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCaCertificateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCaCertificateResponseBody::Data) };
    inline ListCaCertificateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCaCertificateResponseBody::Data) };
    inline ListCaCertificateResponseBody& setData(const ListCaCertificateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCaCertificateResponseBody& setData(ListCaCertificateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCaCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Query result.
    shared_ptr<ListCaCertificateResponseBody::Data> data_ {};
    // Public parameters, each request ID is unique and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
