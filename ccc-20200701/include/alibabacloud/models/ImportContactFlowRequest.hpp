// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTCONTACTFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTCONTACTFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ImportContactFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportContactFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FlowPackageData, flowPackageData_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportContactFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowPackageData, flowPackageData_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ImportContactFlowRequest() = default ;
    ImportContactFlowRequest(const ImportContactFlowRequest &) = default ;
    ImportContactFlowRequest(ImportContactFlowRequest &&) = default ;
    ImportContactFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportContactFlowRequest() = default ;
    ImportContactFlowRequest& operator=(const ImportContactFlowRequest &) = default ;
    ImportContactFlowRequest& operator=(ImportContactFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowPackageData_ == nullptr
        && return this->instanceId_ == nullptr && return this->requestId_ == nullptr; };
    // flowPackageData Field Functions 
    bool hasFlowPackageData() const { return this->flowPackageData_ != nullptr;};
    void deleteFlowPackageData() { this->flowPackageData_ = nullptr;};
    inline string flowPackageData() const { DARABONBA_PTR_GET_DEFAULT(flowPackageData_, "") };
    inline ImportContactFlowRequest& setFlowPackageData(string flowPackageData) { DARABONBA_PTR_SET_VALUE(flowPackageData_, flowPackageData) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ImportContactFlowRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportContactFlowRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> flowPackageData_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
