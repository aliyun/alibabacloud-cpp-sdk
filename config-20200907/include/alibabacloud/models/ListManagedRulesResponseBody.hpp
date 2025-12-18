// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMANAGEDRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMANAGEDRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListManagedRulesResponseBodyManagedRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListManagedRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListManagedRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ManagedRules, managedRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListManagedRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ManagedRules, managedRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListManagedRulesResponseBody() = default ;
    ListManagedRulesResponseBody(const ListManagedRulesResponseBody &) = default ;
    ListManagedRulesResponseBody(ListManagedRulesResponseBody &&) = default ;
    ListManagedRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListManagedRulesResponseBody() = default ;
    ListManagedRulesResponseBody& operator=(const ListManagedRulesResponseBody &) = default ;
    ListManagedRulesResponseBody& operator=(ListManagedRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->managedRules_ == nullptr
        && return this->requestId_ == nullptr; };
    // managedRules Field Functions 
    bool hasManagedRules() const { return this->managedRules_ != nullptr;};
    void deleteManagedRules() { this->managedRules_ = nullptr;};
    inline const ListManagedRulesResponseBodyManagedRules & managedRules() const { DARABONBA_PTR_GET_CONST(managedRules_, ListManagedRulesResponseBodyManagedRules) };
    inline ListManagedRulesResponseBodyManagedRules managedRules() { DARABONBA_PTR_GET(managedRules_, ListManagedRulesResponseBodyManagedRules) };
    inline ListManagedRulesResponseBody& setManagedRules(const ListManagedRulesResponseBodyManagedRules & managedRules) { DARABONBA_PTR_SET_VALUE(managedRules_, managedRules) };
    inline ListManagedRulesResponseBody& setManagedRules(ListManagedRulesResponseBodyManagedRules && managedRules) { DARABONBA_PTR_SET_RVALUE(managedRules_, managedRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListManagedRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The managed rules.
    std::shared_ptr<ListManagedRulesResponseBodyManagedRules> managedRules_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
