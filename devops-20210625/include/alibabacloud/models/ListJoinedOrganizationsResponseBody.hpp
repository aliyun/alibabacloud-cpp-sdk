// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOINEDORGANIZATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOINEDORGANIZATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJoinedOrganizationsResponseBodyOrganizations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListJoinedOrganizationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJoinedOrganizationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(organizations, organizations_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListJoinedOrganizationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(organizations, organizations_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListJoinedOrganizationsResponseBody() = default ;
    ListJoinedOrganizationsResponseBody(const ListJoinedOrganizationsResponseBody &) = default ;
    ListJoinedOrganizationsResponseBody(ListJoinedOrganizationsResponseBody &&) = default ;
    ListJoinedOrganizationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJoinedOrganizationsResponseBody() = default ;
    ListJoinedOrganizationsResponseBody& operator=(const ListJoinedOrganizationsResponseBody &) = default ;
    ListJoinedOrganizationsResponseBody& operator=(ListJoinedOrganizationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->organizations_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListJoinedOrganizationsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListJoinedOrganizationsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // organizations Field Functions 
    bool hasOrganizations() const { return this->organizations_ != nullptr;};
    void deleteOrganizations() { this->organizations_ = nullptr;};
    inline const vector<ListJoinedOrganizationsResponseBodyOrganizations> & organizations() const { DARABONBA_PTR_GET_CONST(organizations_, vector<ListJoinedOrganizationsResponseBodyOrganizations>) };
    inline vector<ListJoinedOrganizationsResponseBodyOrganizations> organizations() { DARABONBA_PTR_GET(organizations_, vector<ListJoinedOrganizationsResponseBodyOrganizations>) };
    inline ListJoinedOrganizationsResponseBody& setOrganizations(const vector<ListJoinedOrganizationsResponseBodyOrganizations> & organizations) { DARABONBA_PTR_SET_VALUE(organizations_, organizations) };
    inline ListJoinedOrganizationsResponseBody& setOrganizations(vector<ListJoinedOrganizationsResponseBodyOrganizations> && organizations) { DARABONBA_PTR_SET_RVALUE(organizations_, organizations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJoinedOrganizationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListJoinedOrganizationsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<vector<ListJoinedOrganizationsResponseBodyOrganizations>> organizations_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
