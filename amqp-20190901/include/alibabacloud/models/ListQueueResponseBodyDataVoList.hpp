// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUERESPONSEBODYDATAVOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUERESPONSEBODYDATAVOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQueueResponseBodyDataVoListQueueVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListQueueResponseBodyDataVoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueueResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_TO_JSON(QueueVO, queueVO_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueueResponseBodyDataVoList& obj) { 
      DARABONBA_PTR_FROM_JSON(QueueVO, queueVO_);
    };
    ListQueueResponseBodyDataVoList() = default ;
    ListQueueResponseBodyDataVoList(const ListQueueResponseBodyDataVoList &) = default ;
    ListQueueResponseBodyDataVoList(ListQueueResponseBodyDataVoList &&) = default ;
    ListQueueResponseBodyDataVoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueueResponseBodyDataVoList() = default ;
    ListQueueResponseBodyDataVoList& operator=(const ListQueueResponseBodyDataVoList &) = default ;
    ListQueueResponseBodyDataVoList& operator=(ListQueueResponseBodyDataVoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queueVO_ == nullptr; };
    // queueVO Field Functions 
    bool hasQueueVO() const { return this->queueVO_ != nullptr;};
    void deleteQueueVO() { this->queueVO_ = nullptr;};
    inline const vector<Models::ListQueueResponseBodyDataVoListQueueVO> & queueVO() const { DARABONBA_PTR_GET_CONST(queueVO_, vector<Models::ListQueueResponseBodyDataVoListQueueVO>) };
    inline vector<Models::ListQueueResponseBodyDataVoListQueueVO> queueVO() { DARABONBA_PTR_GET(queueVO_, vector<Models::ListQueueResponseBodyDataVoListQueueVO>) };
    inline ListQueueResponseBodyDataVoList& setQueueVO(const vector<Models::ListQueueResponseBodyDataVoListQueueVO> & queueVO) { DARABONBA_PTR_SET_VALUE(queueVO_, queueVO) };
    inline ListQueueResponseBodyDataVoList& setQueueVO(vector<Models::ListQueueResponseBodyDataVoListQueueVO> && queueVO) { DARABONBA_PTR_SET_RVALUE(queueVO_, queueVO) };


  protected:
    std::shared_ptr<vector<Models::ListQueueResponseBodyDataVoListQueueVO>> queueVO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
