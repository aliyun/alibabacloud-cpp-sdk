// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXCHANGEERRORBYTASKIDRESPONSEBODYDATAVOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETEXCHANGEERRORBYTASKIDRESPONSEBODYDATAVOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetExchangeErrorByTaskIdResponseBodyDataVoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExchangeErrorByTaskIdResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_TO_JSON(ExchangeErrorDO, exchangeErrorDO_);
    };
    friend void from_json(const Darabonba::Json& j, GetExchangeErrorByTaskIdResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_FROM_JSON(ExchangeErrorDO, exchangeErrorDO_);
    };
    GetExchangeErrorByTaskIdResponseBodyDataVoList() = default ;
    GetExchangeErrorByTaskIdResponseBodyDataVoList(const GetExchangeErrorByTaskIdResponseBodyDataVoList &) = default ;
    GetExchangeErrorByTaskIdResponseBodyDataVoList(GetExchangeErrorByTaskIdResponseBodyDataVoList &&) = default ;
    GetExchangeErrorByTaskIdResponseBodyDataVoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExchangeErrorByTaskIdResponseBodyDataVoList() = default ;
    GetExchangeErrorByTaskIdResponseBodyDataVoList& operator=(const GetExchangeErrorByTaskIdResponseBodyDataVoList &) = default ;
    GetExchangeErrorByTaskIdResponseBodyDataVoList& operator=(GetExchangeErrorByTaskIdResponseBodyDataVoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exchangeErrorDO_ == nullptr; };
    // exchangeErrorDO Field Functions 
    bool hasExchangeErrorDO() const { return this->exchangeErrorDO_ != nullptr;};
    void deleteExchangeErrorDO() { this->exchangeErrorDO_ = nullptr;};
    inline const vector<Models::GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO> & exchangeErrorDO() const { DARABONBA_PTR_GET_CONST(exchangeErrorDO_, vector<Models::GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO>) };
    inline vector<Models::GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO> exchangeErrorDO() { DARABONBA_PTR_GET(exchangeErrorDO_, vector<Models::GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO>) };
    inline GetExchangeErrorByTaskIdResponseBodyDataVoList& setExchangeErrorDO(const vector<Models::GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO> & exchangeErrorDO) { DARABONBA_PTR_SET_VALUE(exchangeErrorDO_, exchangeErrorDO) };
    inline GetExchangeErrorByTaskIdResponseBodyDataVoList& setExchangeErrorDO(vector<Models::GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO> && exchangeErrorDO) { DARABONBA_PTR_SET_RVALUE(exchangeErrorDO_, exchangeErrorDO) };


  protected:
    std::shared_ptr<vector<Models::GetExchangeErrorByTaskIdResponseBodyDataVoListExchangeErrorDO>> exchangeErrorDO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
