// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENETWORKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENETWORKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteNetworkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNetworkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNetworkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
    };
    DeleteNetworkRequest() = default ;
    DeleteNetworkRequest(const DeleteNetworkRequest &) = default ;
    DeleteNetworkRequest(DeleteNetworkRequest &&) = default ;
    DeleteNetworkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNetworkRequest() = default ;
    DeleteNetworkRequest& operator=(const DeleteNetworkRequest &) = default ;
    DeleteNetworkRequest& operator=(DeleteNetworkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkId_ == nullptr; };
    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DeleteNetworkRequest& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


  protected:
    // The ID of the network.
    // 
    // This parameter is required.
    shared_ptr<string> networkId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
