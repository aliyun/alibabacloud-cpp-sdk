// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEXECUTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEXECUTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class DeleteExecutionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteExecutionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionIds, executionIds_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteExecutionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionIds, executionIds_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteExecutionsRequest() = default ;
    DeleteExecutionsRequest(const DeleteExecutionsRequest &) = default ;
    DeleteExecutionsRequest(DeleteExecutionsRequest &&) = default ;
    DeleteExecutionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteExecutionsRequest() = default ;
    DeleteExecutionsRequest& operator=(const DeleteExecutionsRequest &) = default ;
    DeleteExecutionsRequest& operator=(DeleteExecutionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executionIds_ == nullptr
        && return this->force_ == nullptr && return this->regionId_ == nullptr; };
    // executionIds Field Functions 
    bool hasExecutionIds() const { return this->executionIds_ != nullptr;};
    void deleteExecutionIds() { this->executionIds_ = nullptr;};
    inline string executionIds() const { DARABONBA_PTR_GET_DEFAULT(executionIds_, "") };
    inline DeleteExecutionsRequest& setExecutionIds(string executionIds) { DARABONBA_PTR_SET_VALUE(executionIds_, executionIds) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteExecutionsRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteExecutionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The execution IDs.
    // 
    // You can specify multiple execution IDs in a JSON array in the format of `["xxxxxxxxx", "yyyyyyyyy", ... "zzzzzzzzz"]`. You can specify up to 100 execution IDs at a time. Separate multiple IDs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> executionIds_ = nullptr;
    // Whether to force delete the running task, the default value is false.
    std::shared_ptr<bool> force_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
