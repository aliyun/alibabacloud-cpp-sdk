// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetUserIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(ExternalId, externalId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(ExternalId, externalId_);
    };
    GetUserIdRequest() = default ;
    GetUserIdRequest(const GetUserIdRequest &) = default ;
    GetUserIdRequest(GetUserIdRequest &&) = default ;
    GetUserIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserIdRequest() = default ;
    GetUserIdRequest& operator=(const GetUserIdRequest &) = default ;
    GetUserIdRequest& operator=(GetUserIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExternalId : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExternalId& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      };
      friend void from_json(const Darabonba::Json& j, ExternalId& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      };
      ExternalId() = default ;
      ExternalId(const ExternalId &) = default ;
      ExternalId(ExternalId &&) = default ;
      ExternalId(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExternalId() = default ;
      ExternalId& operator=(const ExternalId &) = default ;
      ExternalId& operator=(ExternalId &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->issuer_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ExternalId& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // issuer Field Functions 
      bool hasIssuer() const { return this->issuer_ != nullptr;};
      void deleteIssuer() { this->issuer_ = nullptr;};
      inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
      inline ExternalId& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    protected:
      // The identifier of the user that is synchronized from an external IdP.
      shared_ptr<string> id_ {};
      // The method for external identity synchronization. Only System for Cross-domain Identity Management (SCIM) synchronization is supported.
      shared_ptr<string> issuer_ {};
    };

    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->externalId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline GetUserIdRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // externalId Field Functions 
    bool hasExternalId() const { return this->externalId_ != nullptr;};
    void deleteExternalId() { this->externalId_ = nullptr;};
    inline const GetUserIdRequest::ExternalId & getExternalId() const { DARABONBA_PTR_GET_CONST(externalId_, GetUserIdRequest::ExternalId) };
    inline GetUserIdRequest::ExternalId getExternalId() { DARABONBA_PTR_GET(externalId_, GetUserIdRequest::ExternalId) };
    inline GetUserIdRequest& setExternalId(const GetUserIdRequest::ExternalId & externalId) { DARABONBA_PTR_SET_VALUE(externalId_, externalId) };
    inline GetUserIdRequest& setExternalId(GetUserIdRequest::ExternalId && externalId) { DARABONBA_PTR_SET_RVALUE(externalId_, externalId) };


  protected:
    // The ID of the resource directory.
    shared_ptr<string> directoryId_ {};
    // The identifier information about the user that is synchronized from an external identity provider (IdP).
    shared_ptr<GetUserIdRequest::ExternalId> externalId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
