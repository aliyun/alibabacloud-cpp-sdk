// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DeleteConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
    };
    DeleteConnectionRequest() = default ;
    DeleteConnectionRequest(const DeleteConnectionRequest &) = default ;
    DeleteConnectionRequest(DeleteConnectionRequest &&) = default ;
    DeleteConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteConnectionRequest() = default ;
    DeleteConnectionRequest& operator=(const DeleteConnectionRequest &) = default ;
    DeleteConnectionRequest& operator=(DeleteConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionId_ != nullptr; };
    // connectionId Field Functions 
    bool hasConnectionId() const { return this->connectionId_ != nullptr;};
    void deleteConnectionId() { this->connectionId_ = nullptr;};
    inline int64_t connectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, 0L) };
    inline DeleteConnectionRequest& setConnectionId(int64_t connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


  protected:
    // The data source ID. You can call the [ListConnection](https://help.aliyun.com/document_detail/173911.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> connectionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
