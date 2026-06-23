// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROCESSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPROCESSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetProcessInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProcessInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProcessInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
    };
    GetProcessInstanceRequest() = default ;
    GetProcessInstanceRequest(const GetProcessInstanceRequest &) = default ;
    GetProcessInstanceRequest(GetProcessInstanceRequest &&) = default ;
    GetProcessInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProcessInstanceRequest() = default ;
    GetProcessInstanceRequest& operator=(const GetProcessInstanceRequest &) = default ;
    GetProcessInstanceRequest& operator=(GetProcessInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->processInstanceId_ == nullptr; };
    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string getProcessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline GetProcessInstanceRequest& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


  protected:
    // The ID of the process instance.
    // 
    // This parameter is required.
    shared_ptr<string> processInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
