// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTOSQLOPTIMIZESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTOSQLOPTIMIZESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class UpdateAutoSqlOptimizeStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAutoSqlOptimizeStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAutoSqlOptimizeStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateAutoSqlOptimizeStatusRequest() = default ;
    UpdateAutoSqlOptimizeStatusRequest(const UpdateAutoSqlOptimizeStatusRequest &) = default ;
    UpdateAutoSqlOptimizeStatusRequest(UpdateAutoSqlOptimizeStatusRequest &&) = default ;
    UpdateAutoSqlOptimizeStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAutoSqlOptimizeStatusRequest() = default ;
    UpdateAutoSqlOptimizeStatusRequest& operator=(const UpdateAutoSqlOptimizeStatusRequest &) = default ;
    UpdateAutoSqlOptimizeStatusRequest& operator=(UpdateAutoSqlOptimizeStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instances_ == nullptr
        && return this->status_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline string instances() const { DARABONBA_PTR_GET_DEFAULT(instances_, "") };
    inline UpdateAutoSqlOptimizeStatusRequest& setInstances(string instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline UpdateAutoSqlOptimizeStatusRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The database instance IDs. Separate multiple IDs with commas (,).
    // 
    // >  You can specify up to 50 instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> instances_ = nullptr;
    // The status of the automatic SQL optimization feature. Valid values:
    // 
    // *   **0**: The automatic SQL optimization feature is disabled.
    // *   **1**: **SQL diagnosis and automatic index creation** is specified.
    // *   **3**: **SQL diagnosis only** is specified.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
