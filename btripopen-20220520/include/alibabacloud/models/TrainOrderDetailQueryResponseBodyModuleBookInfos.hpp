// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULEBOOKINFOS_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERDETAILQUERYRESPONSEBODYMODULEBOOKINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderDetailQueryResponseBodyModuleBookInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderDetailQueryResponseBodyModuleBookInfos& obj) { 
      DARABONBA_PTR_TO_JSON(book_train_infos, bookTrainInfos_);
      DARABONBA_PTR_TO_JSON(fail_code, failCode_);
      DARABONBA_PTR_TO_JSON(fail_msg, failMsg_);
      DARABONBA_PTR_TO_JSON(last_pay_time, lastPayTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderDetailQueryResponseBodyModuleBookInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(book_train_infos, bookTrainInfos_);
      DARABONBA_PTR_FROM_JSON(fail_code, failCode_);
      DARABONBA_PTR_FROM_JSON(fail_msg, failMsg_);
      DARABONBA_PTR_FROM_JSON(last_pay_time, lastPayTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
    };
    TrainOrderDetailQueryResponseBodyModuleBookInfos() = default ;
    TrainOrderDetailQueryResponseBodyModuleBookInfos(const TrainOrderDetailQueryResponseBodyModuleBookInfos &) = default ;
    TrainOrderDetailQueryResponseBodyModuleBookInfos(TrainOrderDetailQueryResponseBodyModuleBookInfos &&) = default ;
    TrainOrderDetailQueryResponseBodyModuleBookInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderDetailQueryResponseBodyModuleBookInfos() = default ;
    TrainOrderDetailQueryResponseBodyModuleBookInfos& operator=(const TrainOrderDetailQueryResponseBodyModuleBookInfos &) = default ;
    TrainOrderDetailQueryResponseBodyModuleBookInfos& operator=(TrainOrderDetailQueryResponseBodyModuleBookInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bookTrainInfos_ != nullptr
        && this->failCode_ != nullptr && this->failMsg_ != nullptr && this->lastPayTime_ != nullptr && this->status_ != nullptr && this->ticketNo_ != nullptr; };
    // bookTrainInfos Field Functions 
    bool hasBookTrainInfos() const { return this->bookTrainInfos_ != nullptr;};
    void deleteBookTrainInfos() { this->bookTrainInfos_ = nullptr;};
    inline const vector<Models::TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos> & bookTrainInfos() const { DARABONBA_PTR_GET_CONST(bookTrainInfos_, vector<Models::TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos>) };
    inline vector<Models::TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos> bookTrainInfos() { DARABONBA_PTR_GET(bookTrainInfos_, vector<Models::TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos>) };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfos& setBookTrainInfos(const vector<Models::TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos> & bookTrainInfos) { DARABONBA_PTR_SET_VALUE(bookTrainInfos_, bookTrainInfos) };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfos& setBookTrainInfos(vector<Models::TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos> && bookTrainInfos) { DARABONBA_PTR_SET_RVALUE(bookTrainInfos_, bookTrainInfos) };


    // failCode Field Functions 
    bool hasFailCode() const { return this->failCode_ != nullptr;};
    void deleteFailCode() { this->failCode_ = nullptr;};
    inline string failCode() const { DARABONBA_PTR_GET_DEFAULT(failCode_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfos& setFailCode(string failCode) { DARABONBA_PTR_SET_VALUE(failCode_, failCode) };


    // failMsg Field Functions 
    bool hasFailMsg() const { return this->failMsg_ != nullptr;};
    void deleteFailMsg() { this->failMsg_ = nullptr;};
    inline string failMsg() const { DARABONBA_PTR_GET_DEFAULT(failMsg_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfos& setFailMsg(string failMsg) { DARABONBA_PTR_SET_VALUE(failMsg_, failMsg) };


    // lastPayTime Field Functions 
    bool hasLastPayTime() const { return this->lastPayTime_ != nullptr;};
    void deleteLastPayTime() { this->lastPayTime_ = nullptr;};
    inline string lastPayTime() const { DARABONBA_PTR_GET_DEFAULT(lastPayTime_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfos& setLastPayTime(string lastPayTime) { DARABONBA_PTR_SET_VALUE(lastPayTime_, lastPayTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfos& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // ticketNo Field Functions 
    bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
    void deleteTicketNo() { this->ticketNo_ = nullptr;};
    inline string ticketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
    inline TrainOrderDetailQueryResponseBodyModuleBookInfos& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


  protected:
    std::shared_ptr<vector<Models::TrainOrderDetailQueryResponseBodyModuleBookInfosBookTrainInfos>> bookTrainInfos_ = nullptr;
    std::shared_ptr<string> failCode_ = nullptr;
    std::shared_ptr<string> failMsg_ = nullptr;
    std::shared_ptr<string> lastPayTime_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> ticketNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
