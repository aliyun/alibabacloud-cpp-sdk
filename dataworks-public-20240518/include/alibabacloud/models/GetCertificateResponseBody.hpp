// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCertificateResponseBody() = default ;
    GetCertificateResponseBody(const GetCertificateResponseBody &) = default ;
    GetCertificateResponseBody(GetCertificateResponseBody &&) = default ;
    GetCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCertificateResponseBody() = default ;
    GetCertificateResponseBody& operator=(const GetCertificateResponseBody &) = default ;
    GetCertificateResponseBody& operator=(GetCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Certificate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Certificate& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FileSizeInBytes, fileSizeInBytes_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, Certificate& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FileSizeInBytes, fileSizeInBytes_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      Certificate() = default ;
      Certificate(const Certificate &) = default ;
      Certificate(Certificate &&) = default ;
      Certificate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Certificate() = default ;
      Certificate& operator=(const Certificate &) = default ;
      Certificate& operator=(Certificate &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createUser_ == nullptr && this->description_ == nullptr && this->fileSizeInBytes_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->projectId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Certificate& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline Certificate& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Certificate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fileSizeInBytes Field Functions 
      bool hasFileSizeInBytes() const { return this->fileSizeInBytes_ != nullptr;};
      void deleteFileSizeInBytes() { this->fileSizeInBytes_ = nullptr;};
      inline int64_t getFileSizeInBytes() const { DARABONBA_PTR_GET_DEFAULT(fileSizeInBytes_, 0L) };
      inline Certificate& setFileSizeInBytes(int64_t fileSizeInBytes) { DARABONBA_PTR_SET_VALUE(fileSizeInBytes_, fileSizeInBytes) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Certificate& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Certificate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Certificate& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      // The time when the certificate file was created. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The ID of the user who created the certificate file.
      shared_ptr<string> createUser_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The size of the certificate file, in bytes.
      shared_ptr<int64_t> fileSizeInBytes_ {};
      // The ID of the certificate file.
      shared_ptr<int64_t> id_ {};
      // The name of the certificate file.
      shared_ptr<string> name_ {};
      // The ID of the workspace to which the certificate file belongs.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->certificate_ == nullptr
        && this->requestId_ == nullptr; };
    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline const GetCertificateResponseBody::Certificate & getCertificate() const { DARABONBA_PTR_GET_CONST(certificate_, GetCertificateResponseBody::Certificate) };
    inline GetCertificateResponseBody::Certificate getCertificate() { DARABONBA_PTR_GET(certificate_, GetCertificateResponseBody::Certificate) };
    inline GetCertificateResponseBody& setCertificate(const GetCertificateResponseBody::Certificate & certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };
    inline GetCertificateResponseBody& setCertificate(GetCertificateResponseBody::Certificate && certificate) { DARABONBA_PTR_SET_RVALUE(certificate_, certificate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the certificate file.
    shared_ptr<GetCertificateResponseBody::Certificate> certificate_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
