// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTESCALATIONPOLICIESRESPONSEBODYPAGEBEANESCALATIONPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTESCALATIONPOLICIESRESPONSEBODYPAGEBEANESCALATIONPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies() = default ;
    ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies(const ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies &) = default ;
    ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies(ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies &&) = default ;
    ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies() = default ;
    ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies& operator=(const ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies &) = default ;
    ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies& operator=(ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEscalationPoliciesResponseBodyPageBeanEscalationPolicies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The ID of the escalation policy.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the escalation policy.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
