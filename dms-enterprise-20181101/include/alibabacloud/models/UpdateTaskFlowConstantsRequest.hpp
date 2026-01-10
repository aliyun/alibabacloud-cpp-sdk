// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKFLOWCONSTANTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKFLOWCONSTANTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateTaskFlowConstantsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskFlowConstantsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagConstants, dagConstants_);
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskFlowConstantsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagConstants, dagConstants_);
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    UpdateTaskFlowConstantsRequest() = default ;
    UpdateTaskFlowConstantsRequest(const UpdateTaskFlowConstantsRequest &) = default ;
    UpdateTaskFlowConstantsRequest(UpdateTaskFlowConstantsRequest &&) = default ;
    UpdateTaskFlowConstantsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskFlowConstantsRequest() = default ;
    UpdateTaskFlowConstantsRequest& operator=(const UpdateTaskFlowConstantsRequest &) = default ;
    UpdateTaskFlowConstantsRequest& operator=(UpdateTaskFlowConstantsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DagConstants : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DagConstants& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, DagConstants& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      DagConstants() = default ;
      DagConstants(const DagConstants &) = default ;
      DagConstants(DagConstants &&) = default ;
      DagConstants(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DagConstants() = default ;
      DagConstants& operator=(const DagConstants &) = default ;
      DagConstants& operator=(DagConstants &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline DagConstants& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline DagConstants& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key name of a constant for the task flow.
      shared_ptr<string> key_ {};
      // The key value of a constant for the task flow.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->dagConstants_ == nullptr
        && this->dagId_ == nullptr && this->tid_ == nullptr; };
    // dagConstants Field Functions 
    bool hasDagConstants() const { return this->dagConstants_ != nullptr;};
    void deleteDagConstants() { this->dagConstants_ = nullptr;};
    inline const vector<UpdateTaskFlowConstantsRequest::DagConstants> & getDagConstants() const { DARABONBA_PTR_GET_CONST(dagConstants_, vector<UpdateTaskFlowConstantsRequest::DagConstants>) };
    inline vector<UpdateTaskFlowConstantsRequest::DagConstants> getDagConstants() { DARABONBA_PTR_GET(dagConstants_, vector<UpdateTaskFlowConstantsRequest::DagConstants>) };
    inline UpdateTaskFlowConstantsRequest& setDagConstants(const vector<UpdateTaskFlowConstantsRequest::DagConstants> & dagConstants) { DARABONBA_PTR_SET_VALUE(dagConstants_, dagConstants) };
    inline UpdateTaskFlowConstantsRequest& setDagConstants(vector<UpdateTaskFlowConstantsRequest::DagConstants> && dagConstants) { DARABONBA_PTR_SET_RVALUE(dagConstants_, dagConstants) };


    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline UpdateTaskFlowConstantsRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateTaskFlowConstantsRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The constants for the task flow.
    shared_ptr<vector<UpdateTaskFlowConstantsRequest::DagConstants>> dagConstants_ {};
    // The ID of the task flow. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to query the task flow ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dagId_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the tenant ID.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
