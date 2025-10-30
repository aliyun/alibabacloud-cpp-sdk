// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERKUBECONFIGSTATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERKUBECONFIGSTATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListClusterKubeconfigStatesResponseBodyPage.hpp>
#include <vector>
#include <alibabacloud/models/ListClusterKubeconfigStatesResponseBodyStates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListClusterKubeconfigStatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterKubeconfigStatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(states, states_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterKubeconfigStatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(states, states_);
    };
    ListClusterKubeconfigStatesResponseBody() = default ;
    ListClusterKubeconfigStatesResponseBody(const ListClusterKubeconfigStatesResponseBody &) = default ;
    ListClusterKubeconfigStatesResponseBody(ListClusterKubeconfigStatesResponseBody &&) = default ;
    ListClusterKubeconfigStatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterKubeconfigStatesResponseBody() = default ;
    ListClusterKubeconfigStatesResponseBody& operator=(const ListClusterKubeconfigStatesResponseBody &) = default ;
    ListClusterKubeconfigStatesResponseBody& operator=(ListClusterKubeconfigStatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->page_ == nullptr
        && return this->states_ == nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const ListClusterKubeconfigStatesResponseBodyPage & page() const { DARABONBA_PTR_GET_CONST(page_, ListClusterKubeconfigStatesResponseBodyPage) };
    inline ListClusterKubeconfigStatesResponseBodyPage page() { DARABONBA_PTR_GET(page_, ListClusterKubeconfigStatesResponseBodyPage) };
    inline ListClusterKubeconfigStatesResponseBody& setPage(const ListClusterKubeconfigStatesResponseBodyPage & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline ListClusterKubeconfigStatesResponseBody& setPage(ListClusterKubeconfigStatesResponseBodyPage && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // states Field Functions 
    bool hasStates() const { return this->states_ != nullptr;};
    void deleteStates() { this->states_ = nullptr;};
    inline const vector<ListClusterKubeconfigStatesResponseBodyStates> & states() const { DARABONBA_PTR_GET_CONST(states_, vector<ListClusterKubeconfigStatesResponseBodyStates>) };
    inline vector<ListClusterKubeconfigStatesResponseBodyStates> states() { DARABONBA_PTR_GET(states_, vector<ListClusterKubeconfigStatesResponseBodyStates>) };
    inline ListClusterKubeconfigStatesResponseBody& setStates(const vector<ListClusterKubeconfigStatesResponseBodyStates> & states) { DARABONBA_PTR_SET_VALUE(states_, states) };
    inline ListClusterKubeconfigStatesResponseBody& setStates(vector<ListClusterKubeconfigStatesResponseBodyStates> && states) { DARABONBA_PTR_SET_RVALUE(states_, states) };


  protected:
    // The pagination information.
    std::shared_ptr<ListClusterKubeconfigStatesResponseBodyPage> page_ = nullptr;
    // The status list of the kubeconfig files associated with the cluster.
    std::shared_ptr<vector<ListClusterKubeconfigStatesResponseBodyStates>> states_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
