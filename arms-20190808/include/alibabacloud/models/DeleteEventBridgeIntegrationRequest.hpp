// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEVENTBRIDGEINTEGRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEVENTBRIDGEINTEGRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteEventBridgeIntegrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEventBridgeIntegrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEventBridgeIntegrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DeleteEventBridgeIntegrationRequest() = default ;
    DeleteEventBridgeIntegrationRequest(const DeleteEventBridgeIntegrationRequest &) = default ;
    DeleteEventBridgeIntegrationRequest(DeleteEventBridgeIntegrationRequest &&) = default ;
    DeleteEventBridgeIntegrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEventBridgeIntegrationRequest() = default ;
    DeleteEventBridgeIntegrationRequest& operator=(const DeleteEventBridgeIntegrationRequest &) = default ;
    DeleteEventBridgeIntegrationRequest& operator=(DeleteEventBridgeIntegrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteEventBridgeIntegrationRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // Required. The ID of the EventBridge notification integration. You can call the **ListEventBridgeIntegrations** operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
