// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUEUPSTREAMBINDINGSRESPONSEBODYDATAVOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUEUPSTREAMBINDINGSRESPONSEBODYDATAVOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListQueueUpstreamBindingsResponseBodyDataVoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueueUpstreamBindingsResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_TO_JSON(BindingVO, bindingVO_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueueUpstreamBindingsResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_FROM_JSON(BindingVO, bindingVO_);
    };
    ListQueueUpstreamBindingsResponseBodyDataVoList() = default ;
    ListQueueUpstreamBindingsResponseBodyDataVoList(const ListQueueUpstreamBindingsResponseBodyDataVoList &) = default ;
    ListQueueUpstreamBindingsResponseBodyDataVoList(ListQueueUpstreamBindingsResponseBodyDataVoList &&) = default ;
    ListQueueUpstreamBindingsResponseBodyDataVoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueueUpstreamBindingsResponseBodyDataVoList() = default ;
    ListQueueUpstreamBindingsResponseBodyDataVoList& operator=(const ListQueueUpstreamBindingsResponseBodyDataVoList &) = default ;
    ListQueueUpstreamBindingsResponseBodyDataVoList& operator=(ListQueueUpstreamBindingsResponseBodyDataVoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindingVO_ == nullptr; };
    // bindingVO Field Functions 
    bool hasBindingVO() const { return this->bindingVO_ != nullptr;};
    void deleteBindingVO() { this->bindingVO_ = nullptr;};
    inline const vector<Models::ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO> & bindingVO() const { DARABONBA_PTR_GET_CONST(bindingVO_, vector<Models::ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO>) };
    inline vector<Models::ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO> bindingVO() { DARABONBA_PTR_GET(bindingVO_, vector<Models::ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO>) };
    inline ListQueueUpstreamBindingsResponseBodyDataVoList& setBindingVO(const vector<Models::ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO> & bindingVO) { DARABONBA_PTR_SET_VALUE(bindingVO_, bindingVO) };
    inline ListQueueUpstreamBindingsResponseBodyDataVoList& setBindingVO(vector<Models::ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO> && bindingVO) { DARABONBA_PTR_SET_RVALUE(bindingVO_, bindingVO) };


  protected:
    std::shared_ptr<vector<Models::ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO>> bindingVO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
