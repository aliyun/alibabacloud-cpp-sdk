// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECEIVERBYPARAMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECEIVERBYPARAMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryReceiverByParamResponseBodyDataReceiver.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryReceiverByParamResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReceiverByParamResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(receiver, receiver_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReceiverByParamResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(receiver, receiver_);
    };
    QueryReceiverByParamResponseBodyData() = default ;
    QueryReceiverByParamResponseBodyData(const QueryReceiverByParamResponseBodyData &) = default ;
    QueryReceiverByParamResponseBodyData(QueryReceiverByParamResponseBodyData &&) = default ;
    QueryReceiverByParamResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReceiverByParamResponseBodyData() = default ;
    QueryReceiverByParamResponseBodyData& operator=(const QueryReceiverByParamResponseBodyData &) = default ;
    QueryReceiverByParamResponseBodyData& operator=(QueryReceiverByParamResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->receiver_ == nullptr; };
    // receiver Field Functions 
    bool hasReceiver() const { return this->receiver_ != nullptr;};
    void deleteReceiver() { this->receiver_ = nullptr;};
    inline const vector<Models::QueryReceiverByParamResponseBodyDataReceiver> & receiver() const { DARABONBA_PTR_GET_CONST(receiver_, vector<Models::QueryReceiverByParamResponseBodyDataReceiver>) };
    inline vector<Models::QueryReceiverByParamResponseBodyDataReceiver> receiver() { DARABONBA_PTR_GET(receiver_, vector<Models::QueryReceiverByParamResponseBodyDataReceiver>) };
    inline QueryReceiverByParamResponseBodyData& setReceiver(const vector<Models::QueryReceiverByParamResponseBodyDataReceiver> & receiver) { DARABONBA_PTR_SET_VALUE(receiver_, receiver) };
    inline QueryReceiverByParamResponseBodyData& setReceiver(vector<Models::QueryReceiverByParamResponseBodyDataReceiver> && receiver) { DARABONBA_PTR_SET_RVALUE(receiver_, receiver) };


  protected:
    std::shared_ptr<vector<Models::QueryReceiverByParamResponseBodyDataReceiver>> receiver_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
