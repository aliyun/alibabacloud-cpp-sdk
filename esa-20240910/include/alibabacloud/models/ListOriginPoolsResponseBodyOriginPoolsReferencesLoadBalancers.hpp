// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORIGINPOOLSRESPONSEBODYORIGINPOOLSREFERENCESLOADBALANCERS_HPP_
#define ALIBABACLOUD_MODELS_LISTORIGINPOOLSRESPONSEBODYORIGINPOOLSREFERENCESLOADBALANCERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers() = default ;
    ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers(const ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers &) = default ;
    ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers(ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers &&) = default ;
    ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers() = default ;
    ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers& operator=(const ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers &) = default ;
    ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers& operator=(ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers &&) = default ;
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
    inline ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListOriginPoolsResponseBodyOriginPoolsReferencesLoadBalancers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // ID of the load balancer.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Name of the load balancer.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
