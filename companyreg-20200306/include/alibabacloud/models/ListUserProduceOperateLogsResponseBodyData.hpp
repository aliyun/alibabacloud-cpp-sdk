// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERPRODUCEOPERATELOGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERPRODUCEOPERATELOGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class ListUserProduceOperateLogsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserProduceOperateLogsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BizStatus, bizStatus_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(OperateName, operateName_);
      DARABONBA_PTR_TO_JSON(OperateTime, operateTime_);
      DARABONBA_PTR_TO_JSON(OperateUserType, operateUserType_);
      DARABONBA_PTR_TO_JSON(ToBizStatus, toBizStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserProduceOperateLogsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BizStatus, bizStatus_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(OperateName, operateName_);
      DARABONBA_PTR_FROM_JSON(OperateTime, operateTime_);
      DARABONBA_PTR_FROM_JSON(OperateUserType, operateUserType_);
      DARABONBA_PTR_FROM_JSON(ToBizStatus, toBizStatus_);
    };
    ListUserProduceOperateLogsResponseBodyData() = default ;
    ListUserProduceOperateLogsResponseBodyData(const ListUserProduceOperateLogsResponseBodyData &) = default ;
    ListUserProduceOperateLogsResponseBodyData(ListUserProduceOperateLogsResponseBodyData &&) = default ;
    ListUserProduceOperateLogsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserProduceOperateLogsResponseBodyData() = default ;
    ListUserProduceOperateLogsResponseBodyData& operator=(const ListUserProduceOperateLogsResponseBodyData &) = default ;
    ListUserProduceOperateLogsResponseBodyData& operator=(ListUserProduceOperateLogsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->bizStatus_ == nullptr && return this->bizType_ == nullptr && return this->note_ == nullptr && return this->operateName_ == nullptr && return this->operateTime_ == nullptr
        && return this->operateUserType_ == nullptr && return this->toBizStatus_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline ListUserProduceOperateLogsResponseBodyData& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizStatus Field Functions 
    bool hasBizStatus() const { return this->bizStatus_ != nullptr;};
    void deleteBizStatus() { this->bizStatus_ = nullptr;};
    inline int32_t bizStatus() const { DARABONBA_PTR_GET_DEFAULT(bizStatus_, 0) };
    inline ListUserProduceOperateLogsResponseBodyData& setBizStatus(int32_t bizStatus) { DARABONBA_PTR_SET_VALUE(bizStatus_, bizStatus) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline ListUserProduceOperateLogsResponseBodyData& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline ListUserProduceOperateLogsResponseBodyData& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // operateName Field Functions 
    bool hasOperateName() const { return this->operateName_ != nullptr;};
    void deleteOperateName() { this->operateName_ = nullptr;};
    inline string operateName() const { DARABONBA_PTR_GET_DEFAULT(operateName_, "") };
    inline ListUserProduceOperateLogsResponseBodyData& setOperateName(string operateName) { DARABONBA_PTR_SET_VALUE(operateName_, operateName) };


    // operateTime Field Functions 
    bool hasOperateTime() const { return this->operateTime_ != nullptr;};
    void deleteOperateTime() { this->operateTime_ = nullptr;};
    inline int64_t operateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, 0L) };
    inline ListUserProduceOperateLogsResponseBodyData& setOperateTime(int64_t operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


    // operateUserType Field Functions 
    bool hasOperateUserType() const { return this->operateUserType_ != nullptr;};
    void deleteOperateUserType() { this->operateUserType_ = nullptr;};
    inline string operateUserType() const { DARABONBA_PTR_GET_DEFAULT(operateUserType_, "") };
    inline ListUserProduceOperateLogsResponseBodyData& setOperateUserType(string operateUserType) { DARABONBA_PTR_SET_VALUE(operateUserType_, operateUserType) };


    // toBizStatus Field Functions 
    bool hasToBizStatus() const { return this->toBizStatus_ != nullptr;};
    void deleteToBizStatus() { this->toBizStatus_ = nullptr;};
    inline int32_t toBizStatus() const { DARABONBA_PTR_GET_DEFAULT(toBizStatus_, 0) };
    inline ListUserProduceOperateLogsResponseBodyData& setToBizStatus(int32_t toBizStatus) { DARABONBA_PTR_SET_VALUE(toBizStatus_, toBizStatus) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<int32_t> bizStatus_ = nullptr;
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<string> note_ = nullptr;
    std::shared_ptr<string> operateName_ = nullptr;
    std::shared_ptr<int64_t> operateTime_ = nullptr;
    std::shared_ptr<string> operateUserType_ = nullptr;
    std::shared_ptr<int32_t> toBizStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
