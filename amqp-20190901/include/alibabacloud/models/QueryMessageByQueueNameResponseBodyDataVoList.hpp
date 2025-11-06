// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMESSAGEBYQUEUENAMERESPONSEBODYDATAVOLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMESSAGEBYQUEUENAMERESPONSEBODYDATAVOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMessageByQueueNameResponseBodyDataVoListAmqpMessageVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class QueryMessageByQueueNameResponseBodyDataVoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMessageByQueueNameResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_TO_JSON(AmqpMessageVO, amqpMessageVO_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMessageByQueueNameResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AmqpMessageVO, amqpMessageVO_);
    };
    QueryMessageByQueueNameResponseBodyDataVoList() = default ;
    QueryMessageByQueueNameResponseBodyDataVoList(const QueryMessageByQueueNameResponseBodyDataVoList &) = default ;
    QueryMessageByQueueNameResponseBodyDataVoList(QueryMessageByQueueNameResponseBodyDataVoList &&) = default ;
    QueryMessageByQueueNameResponseBodyDataVoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMessageByQueueNameResponseBodyDataVoList() = default ;
    QueryMessageByQueueNameResponseBodyDataVoList& operator=(const QueryMessageByQueueNameResponseBodyDataVoList &) = default ;
    QueryMessageByQueueNameResponseBodyDataVoList& operator=(QueryMessageByQueueNameResponseBodyDataVoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amqpMessageVO_ == nullptr; };
    // amqpMessageVO Field Functions 
    bool hasAmqpMessageVO() const { return this->amqpMessageVO_ != nullptr;};
    void deleteAmqpMessageVO() { this->amqpMessageVO_ = nullptr;};
    inline const vector<Models::QueryMessageByQueueNameResponseBodyDataVoListAmqpMessageVO> & amqpMessageVO() const { DARABONBA_PTR_GET_CONST(amqpMessageVO_, vector<Models::QueryMessageByQueueNameResponseBodyDataVoListAmqpMessageVO>) };
    inline vector<Models::QueryMessageByQueueNameResponseBodyDataVoListAmqpMessageVO> amqpMessageVO() { DARABONBA_PTR_GET(amqpMessageVO_, vector<Models::QueryMessageByQueueNameResponseBodyDataVoListAmqpMessageVO>) };
    inline QueryMessageByQueueNameResponseBodyDataVoList& setAmqpMessageVO(const vector<Models::QueryMessageByQueueNameResponseBodyDataVoListAmqpMessageVO> & amqpMessageVO) { DARABONBA_PTR_SET_VALUE(amqpMessageVO_, amqpMessageVO) };
    inline QueryMessageByQueueNameResponseBodyDataVoList& setAmqpMessageVO(vector<Models::QueryMessageByQueueNameResponseBodyDataVoListAmqpMessageVO> && amqpMessageVO) { DARABONBA_PTR_SET_RVALUE(amqpMessageVO_, amqpMessageVO) };


  protected:
    std::shared_ptr<vector<Models::QueryMessageByQueueNameResponseBodyDataVoListAmqpMessageVO>> amqpMessageVO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
