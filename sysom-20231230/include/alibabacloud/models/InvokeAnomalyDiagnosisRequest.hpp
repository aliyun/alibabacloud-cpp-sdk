// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEANOMALYDIAGNOSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOKEANOMALYDIAGNOSISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class InvokeAnomalyDiagnosisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAnomalyDiagnosisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAnomalyDiagnosisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
    };
    InvokeAnomalyDiagnosisRequest() = default ;
    InvokeAnomalyDiagnosisRequest(const InvokeAnomalyDiagnosisRequest &) = default ;
    InvokeAnomalyDiagnosisRequest(InvokeAnomalyDiagnosisRequest &&) = default ;
    InvokeAnomalyDiagnosisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAnomalyDiagnosisRequest() = default ;
    InvokeAnomalyDiagnosisRequest& operator=(const InvokeAnomalyDiagnosisRequest &) = default ;
    InvokeAnomalyDiagnosisRequest& operator=(InvokeAnomalyDiagnosisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->uuid_ == nullptr; };
    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline InvokeAnomalyDiagnosisRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
