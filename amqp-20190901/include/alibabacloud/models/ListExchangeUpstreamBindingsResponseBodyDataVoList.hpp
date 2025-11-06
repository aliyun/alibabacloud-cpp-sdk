// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXCHANGEUPSTREAMBINDINGSRESPONSEBODYDATAVOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXCHANGEUPSTREAMBINDINGSRESPONSEBODYDATAVOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExchangeUpstreamBindingsResponseBodyDataVoListBindingVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListExchangeUpstreamBindingsResponseBodyDataVoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExchangeUpstreamBindingsResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_TO_JSON(BindingVO, bindingVO_);
    };
    friend void from_json(const Darabonba::Json& j, ListExchangeUpstreamBindingsResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_FROM_JSON(BindingVO, bindingVO_);
    };
    ListExchangeUpstreamBindingsResponseBodyDataVoList() = default ;
    ListExchangeUpstreamBindingsResponseBodyDataVoList(const ListExchangeUpstreamBindingsResponseBodyDataVoList &) = default ;
    ListExchangeUpstreamBindingsResponseBodyDataVoList(ListExchangeUpstreamBindingsResponseBodyDataVoList &&) = default ;
    ListExchangeUpstreamBindingsResponseBodyDataVoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExchangeUpstreamBindingsResponseBodyDataVoList() = default ;
    ListExchangeUpstreamBindingsResponseBodyDataVoList& operator=(const ListExchangeUpstreamBindingsResponseBodyDataVoList &) = default ;
    ListExchangeUpstreamBindingsResponseBodyDataVoList& operator=(ListExchangeUpstreamBindingsResponseBodyDataVoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindingVO_ == nullptr; };
    // bindingVO Field Functions 
    bool hasBindingVO() const { return this->bindingVO_ != nullptr;};
    void deleteBindingVO() { this->bindingVO_ = nullptr;};
    inline const vector<Models::ListExchangeUpstreamBindingsResponseBodyDataVoListBindingVO> & bindingVO() const { DARABONBA_PTR_GET_CONST(bindingVO_, vector<Models::ListExchangeUpstreamBindingsResponseBodyDataVoListBindingVO>) };
    inline vector<Models::ListExchangeUpstreamBindingsResponseBodyDataVoListBindingVO> bindingVO() { DARABONBA_PTR_GET(bindingVO_, vector<Models::ListExchangeUpstreamBindingsResponseBodyDataVoListBindingVO>) };
    inline ListExchangeUpstreamBindingsResponseBodyDataVoList& setBindingVO(const vector<Models::ListExchangeUpstreamBindingsResponseBodyDataVoListBindingVO> & bindingVO) { DARABONBA_PTR_SET_VALUE(bindingVO_, bindingVO) };
    inline ListExchangeUpstreamBindingsResponseBodyDataVoList& setBindingVO(vector<Models::ListExchangeUpstreamBindingsResponseBodyDataVoListBindingVO> && bindingVO) { DARABONBA_PTR_SET_RVALUE(bindingVO_, bindingVO) };


  protected:
    std::shared_ptr<vector<Models::ListExchangeUpstreamBindingsResponseBodyDataVoListBindingVO>> bindingVO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
