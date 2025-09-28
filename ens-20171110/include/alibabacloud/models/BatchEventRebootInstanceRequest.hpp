// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEVENTREBOOTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHEVENTREBOOTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchEventRebootInstanceRequestEventInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class BatchEventRebootInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchEventRebootInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventInfos, eventInfos_);
    };
    friend void from_json(const Darabonba::Json& j, BatchEventRebootInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventInfos, eventInfos_);
    };
    BatchEventRebootInstanceRequest() = default ;
    BatchEventRebootInstanceRequest(const BatchEventRebootInstanceRequest &) = default ;
    BatchEventRebootInstanceRequest(BatchEventRebootInstanceRequest &&) = default ;
    BatchEventRebootInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchEventRebootInstanceRequest() = default ;
    BatchEventRebootInstanceRequest& operator=(const BatchEventRebootInstanceRequest &) = default ;
    BatchEventRebootInstanceRequest& operator=(BatchEventRebootInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventInfos_ != nullptr; };
    // eventInfos Field Functions 
    bool hasEventInfos() const { return this->eventInfos_ != nullptr;};
    void deleteEventInfos() { this->eventInfos_ = nullptr;};
    inline const vector<BatchEventRebootInstanceRequestEventInfos> & eventInfos() const { DARABONBA_PTR_GET_CONST(eventInfos_, vector<BatchEventRebootInstanceRequestEventInfos>) };
    inline vector<BatchEventRebootInstanceRequestEventInfos> eventInfos() { DARABONBA_PTR_GET(eventInfos_, vector<BatchEventRebootInstanceRequestEventInfos>) };
    inline BatchEventRebootInstanceRequest& setEventInfos(const vector<BatchEventRebootInstanceRequestEventInfos> & eventInfos) { DARABONBA_PTR_SET_VALUE(eventInfos_, eventInfos) };
    inline BatchEventRebootInstanceRequest& setEventInfos(vector<BatchEventRebootInstanceRequestEventInfos> && eventInfos) { DARABONBA_PTR_SET_RVALUE(eventInfos_, eventInfos) };


  protected:
    std::shared_ptr<vector<BatchEventRebootInstanceRequestEventInfos>> eventInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
