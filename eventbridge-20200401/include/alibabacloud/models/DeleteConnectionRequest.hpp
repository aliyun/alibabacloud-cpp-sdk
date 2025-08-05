// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class DeleteConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
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
    virtual bool empty() const override { this->connectionName_ != nullptr; };
    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline DeleteConnectionRequest& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


  protected:
    // The name of the connection that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> connectionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
