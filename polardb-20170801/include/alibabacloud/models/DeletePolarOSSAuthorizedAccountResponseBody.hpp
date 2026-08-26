// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLAROSSAUTHORIZEDACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLAROSSAUTHORIZEDACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeletePolarOSSAuthorizedAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolarOSSAuthorizedAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedUserArnIds, authorizedUserArnIds_);
      DARABONBA_PTR_TO_JSON(AuthorizedUserIds, authorizedUserIds_);
      DARABONBA_PTR_TO_JSON(PfsInstanceId, pfsInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolarOSSAuthorizedAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedUserArnIds, authorizedUserArnIds_);
      DARABONBA_PTR_FROM_JSON(AuthorizedUserIds, authorizedUserIds_);
      DARABONBA_PTR_FROM_JSON(PfsInstanceId, pfsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeletePolarOSSAuthorizedAccountResponseBody() = default ;
    DeletePolarOSSAuthorizedAccountResponseBody(const DeletePolarOSSAuthorizedAccountResponseBody &) = default ;
    DeletePolarOSSAuthorizedAccountResponseBody(DeletePolarOSSAuthorizedAccountResponseBody &&) = default ;
    DeletePolarOSSAuthorizedAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolarOSSAuthorizedAccountResponseBody() = default ;
    DeletePolarOSSAuthorizedAccountResponseBody& operator=(const DeletePolarOSSAuthorizedAccountResponseBody &) = default ;
    DeletePolarOSSAuthorizedAccountResponseBody& operator=(DeletePolarOSSAuthorizedAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedUserArnIds_ == nullptr
        && this->authorizedUserIds_ == nullptr && this->pfsInstanceId_ == nullptr && this->requestId_ == nullptr; };
    // authorizedUserArnIds Field Functions 
    bool hasAuthorizedUserArnIds() const { return this->authorizedUserArnIds_ != nullptr;};
    void deleteAuthorizedUserArnIds() { this->authorizedUserArnIds_ = nullptr;};
    inline string getAuthorizedUserArnIds() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserArnIds_, "") };
    inline DeletePolarOSSAuthorizedAccountResponseBody& setAuthorizedUserArnIds(string authorizedUserArnIds) { DARABONBA_PTR_SET_VALUE(authorizedUserArnIds_, authorizedUserArnIds) };


    // authorizedUserIds Field Functions 
    bool hasAuthorizedUserIds() const { return this->authorizedUserIds_ != nullptr;};
    void deleteAuthorizedUserIds() { this->authorizedUserIds_ = nullptr;};
    inline string getAuthorizedUserIds() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserIds_, "") };
    inline DeletePolarOSSAuthorizedAccountResponseBody& setAuthorizedUserIds(string authorizedUserIds) { DARABONBA_PTR_SET_VALUE(authorizedUserIds_, authorizedUserIds) };


    // pfsInstanceId Field Functions 
    bool hasPfsInstanceId() const { return this->pfsInstanceId_ != nullptr;};
    void deletePfsInstanceId() { this->pfsInstanceId_ = nullptr;};
    inline string getPfsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(pfsInstanceId_, "") };
    inline DeletePolarOSSAuthorizedAccountResponseBody& setPfsInstanceId(string pfsInstanceId) { DARABONBA_PTR_SET_VALUE(pfsInstanceId_, pfsInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeletePolarOSSAuthorizedAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The updated list of RAM role ARNs, separated by commas.
    shared_ptr<string> authorizedUserArnIds_ {};
    // The updated list of UIDs, separated by commas.
    shared_ptr<string> authorizedUserIds_ {};
    // The cold storage instance ID.
    shared_ptr<string> pfsInstanceId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
