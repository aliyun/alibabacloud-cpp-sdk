// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRINCIPALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRINCIPALSRESPONSEBODY_HPP_
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
  class ListPrincipalsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrincipalsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Principals, principals_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrincipalsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Principals, principals_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPrincipalsResponseBody() = default ;
    ListPrincipalsResponseBody(const ListPrincipalsResponseBody &) = default ;
    ListPrincipalsResponseBody(ListPrincipalsResponseBody &&) = default ;
    ListPrincipalsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrincipalsResponseBody() = default ;
    ListPrincipalsResponseBody& operator=(const ListPrincipalsResponseBody &) = default ;
    ListPrincipalsResponseBody& operator=(ListPrincipalsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Principals : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Principals& obj) { 
        DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
        DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
      };
      friend void from_json(const Darabonba::Json& j, Principals& obj) { 
        DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
        DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
      };
      Principals() = default ;
      Principals(const Principals &) = default ;
      Principals(Principals &&) = default ;
      Principals(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Principals() = default ;
      Principals& operator=(const Principals &) = default ;
      Principals& operator=(Principals &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->principalId_ == nullptr
        && this->principalType_ == nullptr; };
      // principalId Field Functions 
      bool hasPrincipalId() const { return this->principalId_ != nullptr;};
      void deletePrincipalId() { this->principalId_ = nullptr;};
      inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
      inline Principals& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


      // principalType Field Functions 
      bool hasPrincipalType() const { return this->principalType_ != nullptr;};
      void deletePrincipalType() { this->principalType_ = nullptr;};
      inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
      inline Principals& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


    protected:
      // The ID of the RAM entity.
      shared_ptr<string> principalId_ {};
      // The type of the RAM entity. Valid values:
      // 
      // *   RamUser: a RAM user
      // *   RamRole: a RAM role
      shared_ptr<string> principalType_ {};
    };

    virtual bool empty() const override { return this->principals_ == nullptr
        && this->requestId_ == nullptr; };
    // principals Field Functions 
    bool hasPrincipals() const { return this->principals_ != nullptr;};
    void deletePrincipals() { this->principals_ = nullptr;};
    inline const vector<ListPrincipalsResponseBody::Principals> & getPrincipals() const { DARABONBA_PTR_GET_CONST(principals_, vector<ListPrincipalsResponseBody::Principals>) };
    inline vector<ListPrincipalsResponseBody::Principals> getPrincipals() { DARABONBA_PTR_GET(principals_, vector<ListPrincipalsResponseBody::Principals>) };
    inline ListPrincipalsResponseBody& setPrincipals(const vector<ListPrincipalsResponseBody::Principals> & principals) { DARABONBA_PTR_SET_VALUE(principals_, principals) };
    inline ListPrincipalsResponseBody& setPrincipals(vector<ListPrincipalsResponseBody::Principals> && principals) { DARABONBA_PTR_SET_RVALUE(principals_, principals) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrincipalsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The RAM entities.
    shared_ptr<vector<ListPrincipalsResponseBody::Principals>> principals_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
