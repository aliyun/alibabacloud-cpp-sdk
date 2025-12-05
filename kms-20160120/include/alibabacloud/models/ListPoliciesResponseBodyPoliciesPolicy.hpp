// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICIESRESPONSEBODYPOLICIESPOLICY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICIESRESPONSEBODYPOLICIESPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListPoliciesResponseBodyPoliciesPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPoliciesResponseBodyPoliciesPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListPoliciesResponseBodyPoliciesPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListPoliciesResponseBodyPoliciesPolicy() = default ;
    ListPoliciesResponseBodyPoliciesPolicy(const ListPoliciesResponseBodyPoliciesPolicy &) = default ;
    ListPoliciesResponseBodyPoliciesPolicy(ListPoliciesResponseBodyPoliciesPolicy &&) = default ;
    ListPoliciesResponseBodyPoliciesPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPoliciesResponseBodyPoliciesPolicy() = default ;
    ListPoliciesResponseBodyPoliciesPolicy& operator=(const ListPoliciesResponseBodyPoliciesPolicy &) = default ;
    ListPoliciesResponseBodyPoliciesPolicy& operator=(ListPoliciesResponseBodyPoliciesPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPoliciesResponseBodyPoliciesPolicy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the permission policy.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
