// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUEUEERRORBYTASKIDRESPONSEBODYDATAVOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETQUEUEERRORBYTASKIDRESPONSEBODYDATAVOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetQueueErrorByTaskIdResponseBodyDataVoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueueErrorByTaskIdResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_TO_JSON(QueueErrorDO, queueErrorDO_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueueErrorByTaskIdResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_FROM_JSON(QueueErrorDO, queueErrorDO_);
    };
    GetQueueErrorByTaskIdResponseBodyDataVoList() = default ;
    GetQueueErrorByTaskIdResponseBodyDataVoList(const GetQueueErrorByTaskIdResponseBodyDataVoList &) = default ;
    GetQueueErrorByTaskIdResponseBodyDataVoList(GetQueueErrorByTaskIdResponseBodyDataVoList &&) = default ;
    GetQueueErrorByTaskIdResponseBodyDataVoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueueErrorByTaskIdResponseBodyDataVoList() = default ;
    GetQueueErrorByTaskIdResponseBodyDataVoList& operator=(const GetQueueErrorByTaskIdResponseBodyDataVoList &) = default ;
    GetQueueErrorByTaskIdResponseBodyDataVoList& operator=(GetQueueErrorByTaskIdResponseBodyDataVoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queueErrorDO_ == nullptr; };
    // queueErrorDO Field Functions 
    bool hasQueueErrorDO() const { return this->queueErrorDO_ != nullptr;};
    void deleteQueueErrorDO() { this->queueErrorDO_ = nullptr;};
    inline const vector<Models::GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO> & queueErrorDO() const { DARABONBA_PTR_GET_CONST(queueErrorDO_, vector<Models::GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO>) };
    inline vector<Models::GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO> queueErrorDO() { DARABONBA_PTR_GET(queueErrorDO_, vector<Models::GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO>) };
    inline GetQueueErrorByTaskIdResponseBodyDataVoList& setQueueErrorDO(const vector<Models::GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO> & queueErrorDO) { DARABONBA_PTR_SET_VALUE(queueErrorDO_, queueErrorDO) };
    inline GetQueueErrorByTaskIdResponseBodyDataVoList& setQueueErrorDO(vector<Models::GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO> && queueErrorDO) { DARABONBA_PTR_SET_RVALUE(queueErrorDO_, queueErrorDO) };


  protected:
    std::shared_ptr<vector<Models::GetQueueErrorByTaskIdResponseBodyDataVoListQueueErrorDO>> queueErrorDO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
