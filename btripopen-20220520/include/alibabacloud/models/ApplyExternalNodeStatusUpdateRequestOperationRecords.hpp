// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYEXTERNALNODESTATUSUPDATEREQUESTOPERATIONRECORDS_HPP_
#define ALIBABACLOUD_MODELS_APPLYEXTERNALNODESTATUSUPDATEREQUESTOPERATIONRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyExternalNodeStatusUpdateRequestOperationRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyExternalNodeStatusUpdateRequestOperationRecords& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(operate_time, operateTime_);
      DARABONBA_PTR_TO_JSON(operator_name, operatorName_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyExternalNodeStatusUpdateRequestOperationRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(operate_time, operateTime_);
      DARABONBA_PTR_FROM_JSON(operator_name, operatorName_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ApplyExternalNodeStatusUpdateRequestOperationRecords() = default ;
    ApplyExternalNodeStatusUpdateRequestOperationRecords(const ApplyExternalNodeStatusUpdateRequestOperationRecords &) = default ;
    ApplyExternalNodeStatusUpdateRequestOperationRecords(ApplyExternalNodeStatusUpdateRequestOperationRecords &&) = default ;
    ApplyExternalNodeStatusUpdateRequestOperationRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyExternalNodeStatusUpdateRequestOperationRecords() = default ;
    ApplyExternalNodeStatusUpdateRequestOperationRecords& operator=(const ApplyExternalNodeStatusUpdateRequestOperationRecords &) = default ;
    ApplyExternalNodeStatusUpdateRequestOperationRecords& operator=(ApplyExternalNodeStatusUpdateRequestOperationRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->operateTime_ != nullptr && this->operatorName_ != nullptr && this->result_ != nullptr && this->type_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ApplyExternalNodeStatusUpdateRequestOperationRecords& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // operateTime Field Functions 
    bool hasOperateTime() const { return this->operateTime_ != nullptr;};
    void deleteOperateTime() { this->operateTime_ = nullptr;};
    inline string operateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, "") };
    inline ApplyExternalNodeStatusUpdateRequestOperationRecords& setOperateTime(string operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


    // operatorName Field Functions 
    bool hasOperatorName() const { return this->operatorName_ != nullptr;};
    void deleteOperatorName() { this->operatorName_ = nullptr;};
    inline string operatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
    inline ApplyExternalNodeStatusUpdateRequestOperationRecords& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline ApplyExternalNodeStatusUpdateRequestOperationRecords& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ApplyExternalNodeStatusUpdateRequestOperationRecords& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> operateTime_ = nullptr;
    std::shared_ptr<string> operatorName_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
