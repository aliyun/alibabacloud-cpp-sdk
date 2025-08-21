// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTILMPOLICIESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTILMPOLICIESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListILMPoliciesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListILMPoliciesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_ANY_TO_JSON(phases, phases_);
    };
    friend void from_json(const Darabonba::Json& j, ListILMPoliciesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_ANY_FROM_JSON(phases, phases_);
    };
    ListILMPoliciesResponseBodyResult() = default ;
    ListILMPoliciesResponseBodyResult(const ListILMPoliciesResponseBodyResult &) = default ;
    ListILMPoliciesResponseBodyResult(ListILMPoliciesResponseBodyResult &&) = default ;
    ListILMPoliciesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListILMPoliciesResponseBodyResult() = default ;
    ListILMPoliciesResponseBodyResult& operator=(const ListILMPoliciesResponseBodyResult &) = default ;
    ListILMPoliciesResponseBodyResult& operator=(ListILMPoliciesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->phases_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListILMPoliciesResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phases Field Functions 
    bool hasPhases() const { return this->phases_ != nullptr;};
    void deletePhases() { this->phases_ = nullptr;};
    inline     const Darabonba::Json & phases() const { DARABONBA_GET(phases_) };
    Darabonba::Json & phases() { DARABONBA_GET(phases_) };
    inline ListILMPoliciesResponseBodyResult& setPhases(const Darabonba::Json & phases) { DARABONBA_SET_VALUE(phases_, phases) };
    inline ListILMPoliciesResponseBodyResult& setPhases(Darabonba::Json & phases) { DARABONBA_SET_RVALUE(phases_, phases) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    Darabonba::Json phases_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
