// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUNKNOWNTHREATDETECTPROCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUNKNOWNTHREATDETECTPROCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateUnknownThreatDetectProcessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUnknownThreatDetectProcessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUnknownThreatDetectProcessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    UpdateUnknownThreatDetectProcessRequest() = default ;
    UpdateUnknownThreatDetectProcessRequest(const UpdateUnknownThreatDetectProcessRequest &) = default ;
    UpdateUnknownThreatDetectProcessRequest(UpdateUnknownThreatDetectProcessRequest &&) = default ;
    UpdateUnknownThreatDetectProcessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUnknownThreatDetectProcessRequest() = default ;
    UpdateUnknownThreatDetectProcessRequest& operator=(const UpdateUnknownThreatDetectProcessRequest &) = default ;
    UpdateUnknownThreatDetectProcessRequest& operator=(UpdateUnknownThreatDetectProcessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->processId_ == nullptr
        && this->remark_ == nullptr; };
    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline UpdateUnknownThreatDetectProcessRequest& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateUnknownThreatDetectProcessRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    shared_ptr<string> processId_ {};
    shared_ptr<string> remark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
