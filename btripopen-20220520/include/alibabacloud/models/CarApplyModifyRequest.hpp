// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARAPPLYMODIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CARAPPLYMODIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarApplyModifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarApplyModifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(operate_time, operateTime_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(third_part_apply_id, thirdPartApplyId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CarApplyModifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(operate_time, operateTime_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(third_part_apply_id, thirdPartApplyId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    CarApplyModifyRequest() = default ;
    CarApplyModifyRequest(const CarApplyModifyRequest &) = default ;
    CarApplyModifyRequest(CarApplyModifyRequest &&) = default ;
    CarApplyModifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarApplyModifyRequest() = default ;
    CarApplyModifyRequest& operator=(const CarApplyModifyRequest &) = default ;
    CarApplyModifyRequest& operator=(CarApplyModifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateTime_ == nullptr
        && this->remark_ == nullptr && this->status_ == nullptr && this->thirdPartApplyId_ == nullptr && this->userId_ == nullptr; };
    // operateTime Field Functions 
    bool hasOperateTime() const { return this->operateTime_ != nullptr;};
    void deleteOperateTime() { this->operateTime_ = nullptr;};
    inline string getOperateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, "") };
    inline CarApplyModifyRequest& setOperateTime(string operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CarApplyModifyRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CarApplyModifyRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // thirdPartApplyId Field Functions 
    bool hasThirdPartApplyId() const { return this->thirdPartApplyId_ != nullptr;};
    void deleteThirdPartApplyId() { this->thirdPartApplyId_ = nullptr;};
    inline string getThirdPartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartApplyId_, "") };
    inline CarApplyModifyRequest& setThirdPartApplyId(string thirdPartApplyId) { DARABONBA_PTR_SET_VALUE(thirdPartApplyId_, thirdPartApplyId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CarApplyModifyRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> operateTime_ {};
    shared_ptr<string> remark_ {};
    // This parameter is required.
    shared_ptr<int32_t> status_ {};
    // This parameter is required.
    shared_ptr<string> thirdPartApplyId_ {};
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
