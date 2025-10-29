// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEVENTREDEPLOYINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHEVENTREDEPLOYINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchEventRedeployInstanceRequestEventInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class BatchEventRedeployInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchEventRedeployInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventInfos, eventInfos_);
    };
    friend void from_json(const Darabonba::Json& j, BatchEventRedeployInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventInfos, eventInfos_);
    };
    BatchEventRedeployInstanceRequest() = default ;
    BatchEventRedeployInstanceRequest(const BatchEventRedeployInstanceRequest &) = default ;
    BatchEventRedeployInstanceRequest(BatchEventRedeployInstanceRequest &&) = default ;
    BatchEventRedeployInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchEventRedeployInstanceRequest() = default ;
    BatchEventRedeployInstanceRequest& operator=(const BatchEventRedeployInstanceRequest &) = default ;
    BatchEventRedeployInstanceRequest& operator=(BatchEventRedeployInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventInfos_ == nullptr; };
    // eventInfos Field Functions 
    bool hasEventInfos() const { return this->eventInfos_ != nullptr;};
    void deleteEventInfos() { this->eventInfos_ = nullptr;};
    inline const vector<BatchEventRedeployInstanceRequestEventInfos> & eventInfos() const { DARABONBA_PTR_GET_CONST(eventInfos_, vector<BatchEventRedeployInstanceRequestEventInfos>) };
    inline vector<BatchEventRedeployInstanceRequestEventInfos> eventInfos() { DARABONBA_PTR_GET(eventInfos_, vector<BatchEventRedeployInstanceRequestEventInfos>) };
    inline BatchEventRedeployInstanceRequest& setEventInfos(const vector<BatchEventRedeployInstanceRequestEventInfos> & eventInfos) { DARABONBA_PTR_SET_VALUE(eventInfos_, eventInfos) };
    inline BatchEventRedeployInstanceRequest& setEventInfos(vector<BatchEventRedeployInstanceRequestEventInfos> && eventInfos) { DARABONBA_PTR_SET_RVALUE(eventInfos_, eventInfos) };


  protected:
    // List of events.
    std::shared_ptr<vector<BatchEventRedeployInstanceRequestEventInfos>> eventInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
