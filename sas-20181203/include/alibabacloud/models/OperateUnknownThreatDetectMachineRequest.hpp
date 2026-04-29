// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEUNKNOWNTHREATDETECTMACHINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEUNKNOWNTHREATDETECTMACHINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperateUnknownThreatDetectMachineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateUnknownThreatDetectMachineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, OperateUnknownThreatDetectMachineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    OperateUnknownThreatDetectMachineRequest() = default ;
    OperateUnknownThreatDetectMachineRequest(const OperateUnknownThreatDetectMachineRequest &) = default ;
    OperateUnknownThreatDetectMachineRequest(OperateUnknownThreatDetectMachineRequest &&) = default ;
    OperateUnknownThreatDetectMachineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateUnknownThreatDetectMachineRequest() = default ;
    OperateUnknownThreatDetectMachineRequest& operator=(const OperateUnknownThreatDetectMachineRequest &) = default ;
    OperateUnknownThreatDetectMachineRequest& operator=(OperateUnknownThreatDetectMachineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateType_ == nullptr
        && this->status_ == nullptr && this->uuidList_ == nullptr; };
    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline OperateUnknownThreatDetectMachineRequest& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline OperateUnknownThreatDetectMachineRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline OperateUnknownThreatDetectMachineRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline OperateUnknownThreatDetectMachineRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    shared_ptr<string> operateType_ {};
    shared_ptr<string> status_ {};
    shared_ptr<vector<string>> uuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
