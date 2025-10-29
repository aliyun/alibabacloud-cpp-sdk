// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEVENTMIGRATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHEVENTMIGRATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchEventMigrateInstanceRequestEventInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class BatchEventMigrateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchEventMigrateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventInfos, eventInfos_);
    };
    friend void from_json(const Darabonba::Json& j, BatchEventMigrateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventInfos, eventInfos_);
    };
    BatchEventMigrateInstanceRequest() = default ;
    BatchEventMigrateInstanceRequest(const BatchEventMigrateInstanceRequest &) = default ;
    BatchEventMigrateInstanceRequest(BatchEventMigrateInstanceRequest &&) = default ;
    BatchEventMigrateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchEventMigrateInstanceRequest() = default ;
    BatchEventMigrateInstanceRequest& operator=(const BatchEventMigrateInstanceRequest &) = default ;
    BatchEventMigrateInstanceRequest& operator=(BatchEventMigrateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventInfos_ == nullptr; };
    // eventInfos Field Functions 
    bool hasEventInfos() const { return this->eventInfos_ != nullptr;};
    void deleteEventInfos() { this->eventInfos_ = nullptr;};
    inline const vector<BatchEventMigrateInstanceRequestEventInfos> & eventInfos() const { DARABONBA_PTR_GET_CONST(eventInfos_, vector<BatchEventMigrateInstanceRequestEventInfos>) };
    inline vector<BatchEventMigrateInstanceRequestEventInfos> eventInfos() { DARABONBA_PTR_GET(eventInfos_, vector<BatchEventMigrateInstanceRequestEventInfos>) };
    inline BatchEventMigrateInstanceRequest& setEventInfos(const vector<BatchEventMigrateInstanceRequestEventInfos> & eventInfos) { DARABONBA_PTR_SET_VALUE(eventInfos_, eventInfos) };
    inline BatchEventMigrateInstanceRequest& setEventInfos(vector<BatchEventMigrateInstanceRequestEventInfos> && eventInfos) { DARABONBA_PTR_SET_RVALUE(eventInfos_, eventInfos) };


  protected:
    // The details of events.
    std::shared_ptr<vector<BatchEventMigrateInstanceRequestEventInfos>> eventInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
