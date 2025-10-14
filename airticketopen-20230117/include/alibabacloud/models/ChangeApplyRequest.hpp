// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEAPPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEAPPLYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeApplyRequestChangePassengerList.hpp>
#include <alibabacloud/models/ChangeApplyRequestChangedJourneys.hpp>
#include <alibabacloud/models/ChangeApplyRequestContact.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeApplyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeApplyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(change_passenger_list, changePassengerList_);
      DARABONBA_PTR_TO_JSON(changed_journeys, changedJourneys_);
      DARABONBA_PTR_TO_JSON(contact, contact_);
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeApplyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(change_passenger_list, changePassengerList_);
      DARABONBA_PTR_FROM_JSON(changed_journeys, changedJourneys_);
      DARABONBA_PTR_FROM_JSON(contact, contact_);
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ChangeApplyRequest() = default ;
    ChangeApplyRequest(const ChangeApplyRequest &) = default ;
    ChangeApplyRequest(ChangeApplyRequest &&) = default ;
    ChangeApplyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeApplyRequest() = default ;
    ChangeApplyRequest& operator=(const ChangeApplyRequest &) = default ;
    ChangeApplyRequest& operator=(ChangeApplyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changePassengerList_ == nullptr
        && return this->changedJourneys_ == nullptr && return this->contact_ == nullptr && return this->orderNum_ == nullptr && return this->remark_ == nullptr && return this->type_ == nullptr; };
    // changePassengerList Field Functions 
    bool hasChangePassengerList() const { return this->changePassengerList_ != nullptr;};
    void deleteChangePassengerList() { this->changePassengerList_ = nullptr;};
    inline const vector<ChangeApplyRequestChangePassengerList> & changePassengerList() const { DARABONBA_PTR_GET_CONST(changePassengerList_, vector<ChangeApplyRequestChangePassengerList>) };
    inline vector<ChangeApplyRequestChangePassengerList> changePassengerList() { DARABONBA_PTR_GET(changePassengerList_, vector<ChangeApplyRequestChangePassengerList>) };
    inline ChangeApplyRequest& setChangePassengerList(const vector<ChangeApplyRequestChangePassengerList> & changePassengerList) { DARABONBA_PTR_SET_VALUE(changePassengerList_, changePassengerList) };
    inline ChangeApplyRequest& setChangePassengerList(vector<ChangeApplyRequestChangePassengerList> && changePassengerList) { DARABONBA_PTR_SET_RVALUE(changePassengerList_, changePassengerList) };


    // changedJourneys Field Functions 
    bool hasChangedJourneys() const { return this->changedJourneys_ != nullptr;};
    void deleteChangedJourneys() { this->changedJourneys_ = nullptr;};
    inline const vector<ChangeApplyRequestChangedJourneys> & changedJourneys() const { DARABONBA_PTR_GET_CONST(changedJourneys_, vector<ChangeApplyRequestChangedJourneys>) };
    inline vector<ChangeApplyRequestChangedJourneys> changedJourneys() { DARABONBA_PTR_GET(changedJourneys_, vector<ChangeApplyRequestChangedJourneys>) };
    inline ChangeApplyRequest& setChangedJourneys(const vector<ChangeApplyRequestChangedJourneys> & changedJourneys) { DARABONBA_PTR_SET_VALUE(changedJourneys_, changedJourneys) };
    inline ChangeApplyRequest& setChangedJourneys(vector<ChangeApplyRequestChangedJourneys> && changedJourneys) { DARABONBA_PTR_SET_RVALUE(changedJourneys_, changedJourneys) };


    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline const ChangeApplyRequestContact & contact() const { DARABONBA_PTR_GET_CONST(contact_, ChangeApplyRequestContact) };
    inline ChangeApplyRequestContact contact() { DARABONBA_PTR_GET(contact_, ChangeApplyRequestContact) };
    inline ChangeApplyRequest& setContact(const ChangeApplyRequestContact & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
    inline ChangeApplyRequest& setContact(ChangeApplyRequestContact && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline ChangeApplyRequest& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ChangeApplyRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ChangeApplyRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<ChangeApplyRequestChangePassengerList>> changePassengerList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<ChangeApplyRequestChangedJourneys>> changedJourneys_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ChangeApplyRequestContact> contact_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> orderNum_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
