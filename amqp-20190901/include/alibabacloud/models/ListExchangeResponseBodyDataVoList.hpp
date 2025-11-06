// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXCHANGERESPONSEBODYDATAVOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXCHANGERESPONSEBODYDATAVOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExchangeResponseBodyDataVoListExchangVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListExchangeResponseBodyDataVoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExchangeResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_TO_JSON(ExchangVO, exchangVO_);
    };
    friend void from_json(const Darabonba::Json& j, ListExchangeResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_FROM_JSON(ExchangVO, exchangVO_);
    };
    ListExchangeResponseBodyDataVoList() = default ;
    ListExchangeResponseBodyDataVoList(const ListExchangeResponseBodyDataVoList &) = default ;
    ListExchangeResponseBodyDataVoList(ListExchangeResponseBodyDataVoList &&) = default ;
    ListExchangeResponseBodyDataVoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExchangeResponseBodyDataVoList() = default ;
    ListExchangeResponseBodyDataVoList& operator=(const ListExchangeResponseBodyDataVoList &) = default ;
    ListExchangeResponseBodyDataVoList& operator=(ListExchangeResponseBodyDataVoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exchangVO_ == nullptr; };
    // exchangVO Field Functions 
    bool hasExchangVO() const { return this->exchangVO_ != nullptr;};
    void deleteExchangVO() { this->exchangVO_ = nullptr;};
    inline const vector<Models::ListExchangeResponseBodyDataVoListExchangVO> & exchangVO() const { DARABONBA_PTR_GET_CONST(exchangVO_, vector<Models::ListExchangeResponseBodyDataVoListExchangVO>) };
    inline vector<Models::ListExchangeResponseBodyDataVoListExchangVO> exchangVO() { DARABONBA_PTR_GET(exchangVO_, vector<Models::ListExchangeResponseBodyDataVoListExchangVO>) };
    inline ListExchangeResponseBodyDataVoList& setExchangVO(const vector<Models::ListExchangeResponseBodyDataVoListExchangVO> & exchangVO) { DARABONBA_PTR_SET_VALUE(exchangVO_, exchangVO) };
    inline ListExchangeResponseBodyDataVoList& setExchangVO(vector<Models::ListExchangeResponseBodyDataVoListExchangVO> && exchangVO) { DARABONBA_PTR_SET_RVALUE(exchangVO_, exchangVO) };


  protected:
    std::shared_ptr<vector<Models::ListExchangeResponseBodyDataVoListExchangVO>> exchangVO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
