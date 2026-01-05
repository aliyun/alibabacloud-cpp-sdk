// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROVISIONEDPRODUCTPLANAPPROVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROVISIONEDPRODUCTPLANAPPROVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class ListProvisionedProductPlanApproversResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProvisionedProductPlanApproversResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Approvers, approvers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProvisionedProductPlanApproversResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Approvers, approvers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListProvisionedProductPlanApproversResponseBody() = default ;
    ListProvisionedProductPlanApproversResponseBody(const ListProvisionedProductPlanApproversResponseBody &) = default ;
    ListProvisionedProductPlanApproversResponseBody(ListProvisionedProductPlanApproversResponseBody &&) = default ;
    ListProvisionedProductPlanApproversResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProvisionedProductPlanApproversResponseBody() = default ;
    ListProvisionedProductPlanApproversResponseBody& operator=(const ListProvisionedProductPlanApproversResponseBody &) = default ;
    ListProvisionedProductPlanApproversResponseBody& operator=(ListProvisionedProductPlanApproversResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Approvers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Approvers& obj) { 
        DARABONBA_PTR_TO_JSON(PrincipalName, principalName_);
        DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
      };
      friend void from_json(const Darabonba::Json& j, Approvers& obj) { 
        DARABONBA_PTR_FROM_JSON(PrincipalName, principalName_);
        DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
      };
      Approvers() = default ;
      Approvers(const Approvers &) = default ;
      Approvers(Approvers &&) = default ;
      Approvers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Approvers() = default ;
      Approvers& operator=(const Approvers &) = default ;
      Approvers& operator=(Approvers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->principalName_ == nullptr
        && this->principalType_ == nullptr; };
      // principalName Field Functions 
      bool hasPrincipalName() const { return this->principalName_ != nullptr;};
      void deletePrincipalName() { this->principalName_ = nullptr;};
      inline string getPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
      inline Approvers& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


      // principalType Field Functions 
      bool hasPrincipalType() const { return this->principalType_ != nullptr;};
      void deletePrincipalType() { this->principalType_ = nullptr;};
      inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
      inline Approvers& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


    protected:
      // The name of the reviewer.
      shared_ptr<string> principalName_ {};
      // The type of the Resource Access Management (RAM) entity of the reviewer. Valid values:
      // 
      // *   RamUser: a RAM user
      // *   RamRole: a RAM role
      shared_ptr<string> principalType_ {};
    };

    virtual bool empty() const override { return this->approvers_ == nullptr
        && this->requestId_ == nullptr; };
    // approvers Field Functions 
    bool hasApprovers() const { return this->approvers_ != nullptr;};
    void deleteApprovers() { this->approvers_ = nullptr;};
    inline const vector<ListProvisionedProductPlanApproversResponseBody::Approvers> & getApprovers() const { DARABONBA_PTR_GET_CONST(approvers_, vector<ListProvisionedProductPlanApproversResponseBody::Approvers>) };
    inline vector<ListProvisionedProductPlanApproversResponseBody::Approvers> getApprovers() { DARABONBA_PTR_GET(approvers_, vector<ListProvisionedProductPlanApproversResponseBody::Approvers>) };
    inline ListProvisionedProductPlanApproversResponseBody& setApprovers(const vector<ListProvisionedProductPlanApproversResponseBody::Approvers> & approvers) { DARABONBA_PTR_SET_VALUE(approvers_, approvers) };
    inline ListProvisionedProductPlanApproversResponseBody& setApprovers(vector<ListProvisionedProductPlanApproversResponseBody::Approvers> && approvers) { DARABONBA_PTR_SET_RVALUE(approvers_, approvers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProvisionedProductPlanApproversResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of reviewers.
    shared_ptr<vector<ListProvisionedProductPlanApproversResponseBody::Approvers>> approvers_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
