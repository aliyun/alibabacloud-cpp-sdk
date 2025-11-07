// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELEXECUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELEXECUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CancelExecutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelExecutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelExecutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CancelExecutionRequest() = default ;
    CancelExecutionRequest(const CancelExecutionRequest &) = default ;
    CancelExecutionRequest(CancelExecutionRequest &&) = default ;
    CancelExecutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelExecutionRequest() = default ;
    CancelExecutionRequest& operator=(const CancelExecutionRequest &) = default ;
    CancelExecutionRequest& operator=(CancelExecutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executionId_ == nullptr
        && return this->regionId_ == nullptr; };
    // executionId Field Functions 
    bool hasExecutionId() const { return this->executionId_ != nullptr;};
    void deleteExecutionId() { this->executionId_ = nullptr;};
    inline string executionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
    inline CancelExecutionRequest& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CancelExecutionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the execution.
    // 
    // This parameter is required.
    std::shared_ptr<string> executionId_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
