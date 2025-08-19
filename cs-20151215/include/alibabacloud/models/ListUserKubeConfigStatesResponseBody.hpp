// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERKUBECONFIGSTATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERKUBECONFIGSTATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListUserKubeConfigStatesResponseBodyPage.hpp>
#include <vector>
#include <alibabacloud/models/ListUserKubeConfigStatesResponseBodyStates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListUserKubeConfigStatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserKubeConfigStatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(states, states_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserKubeConfigStatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(states, states_);
    };
    ListUserKubeConfigStatesResponseBody() = default ;
    ListUserKubeConfigStatesResponseBody(const ListUserKubeConfigStatesResponseBody &) = default ;
    ListUserKubeConfigStatesResponseBody(ListUserKubeConfigStatesResponseBody &&) = default ;
    ListUserKubeConfigStatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserKubeConfigStatesResponseBody() = default ;
    ListUserKubeConfigStatesResponseBody& operator=(const ListUserKubeConfigStatesResponseBody &) = default ;
    ListUserKubeConfigStatesResponseBody& operator=(ListUserKubeConfigStatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->page_ != nullptr
        && this->states_ != nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const ListUserKubeConfigStatesResponseBodyPage & page() const { DARABONBA_PTR_GET_CONST(page_, ListUserKubeConfigStatesResponseBodyPage) };
    inline ListUserKubeConfigStatesResponseBodyPage page() { DARABONBA_PTR_GET(page_, ListUserKubeConfigStatesResponseBodyPage) };
    inline ListUserKubeConfigStatesResponseBody& setPage(const ListUserKubeConfigStatesResponseBodyPage & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline ListUserKubeConfigStatesResponseBody& setPage(ListUserKubeConfigStatesResponseBodyPage && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // states Field Functions 
    bool hasStates() const { return this->states_ != nullptr;};
    void deleteStates() { this->states_ = nullptr;};
    inline const vector<ListUserKubeConfigStatesResponseBodyStates> & states() const { DARABONBA_PTR_GET_CONST(states_, vector<ListUserKubeConfigStatesResponseBodyStates>) };
    inline vector<ListUserKubeConfigStatesResponseBodyStates> states() { DARABONBA_PTR_GET(states_, vector<ListUserKubeConfigStatesResponseBodyStates>) };
    inline ListUserKubeConfigStatesResponseBody& setStates(const vector<ListUserKubeConfigStatesResponseBodyStates> & states) { DARABONBA_PTR_SET_VALUE(states_, states) };
    inline ListUserKubeConfigStatesResponseBody& setStates(vector<ListUserKubeConfigStatesResponseBodyStates> && states) { DARABONBA_PTR_SET_RVALUE(states_, states) };


  protected:
    // The pagination information.
    std::shared_ptr<ListUserKubeConfigStatesResponseBodyPage> page_ = nullptr;
    // The status of the kubeconfig files.
    std::shared_ptr<vector<ListUserKubeConfigStatesResponseBodyStates>> states_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
