// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RTCSIPMUTEREQUESTOPERATIONS_HPP_
#define ALIBABACLOUD_MODELS_RTCSIPMUTEREQUESTOPERATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RtcSipMuteRequestOperationsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class RtcSipMuteRequestOperations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RtcSipMuteRequestOperations& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(Op, op_);
      DARABONBA_PTR_TO_JSON(OperationId, operationId_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, RtcSipMuteRequestOperations& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(Op, op_);
      DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    RtcSipMuteRequestOperations() = default ;
    RtcSipMuteRequestOperations(const RtcSipMuteRequestOperations &) = default ;
    RtcSipMuteRequestOperations(RtcSipMuteRequestOperations &&) = default ;
    RtcSipMuteRequestOperations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RtcSipMuteRequestOperations() = default ;
    RtcSipMuteRequestOperations& operator=(const RtcSipMuteRequestOperations &) = default ;
    RtcSipMuteRequestOperations& operator=(RtcSipMuteRequestOperations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ids_ == nullptr
        && return this->op_ == nullptr && return this->operationId_ == nullptr && return this->path_ == nullptr && return this->value_ == nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<string> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<string>) };
    inline vector<string> ids() { DARABONBA_PTR_GET(ids_, vector<string>) };
    inline RtcSipMuteRequestOperations& setIds(const vector<string> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline RtcSipMuteRequestOperations& setIds(vector<string> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // op Field Functions 
    bool hasOp() const { return this->op_ != nullptr;};
    void deleteOp() { this->op_ = nullptr;};
    inline string op() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
    inline RtcSipMuteRequestOperations& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string operationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline RtcSipMuteRequestOperations& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline RtcSipMuteRequestOperations& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const Models::RtcSipMuteRequestOperationsValue & value() const { DARABONBA_PTR_GET_CONST(value_, Models::RtcSipMuteRequestOperationsValue) };
    inline Models::RtcSipMuteRequestOperationsValue value() { DARABONBA_PTR_GET(value_, Models::RtcSipMuteRequestOperationsValue) };
    inline RtcSipMuteRequestOperations& setValue(const Models::RtcSipMuteRequestOperationsValue & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline RtcSipMuteRequestOperations& setValue(Models::RtcSipMuteRequestOperationsValue && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> ids_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> op_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> operationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> path_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::RtcSipMuteRequestOperationsValue> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
