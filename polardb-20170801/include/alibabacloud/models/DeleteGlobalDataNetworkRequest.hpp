// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGLOBALDATANETWORKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEGLOBALDATANETWORKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteGlobalDataNetworkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGlobalDataNetworkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGlobalDataNetworkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
    };
    DeleteGlobalDataNetworkRequest() = default ;
    DeleteGlobalDataNetworkRequest(const DeleteGlobalDataNetworkRequest &) = default ;
    DeleteGlobalDataNetworkRequest(DeleteGlobalDataNetworkRequest &&) = default ;
    DeleteGlobalDataNetworkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGlobalDataNetworkRequest() = default ;
    DeleteGlobalDataNetworkRequest& operator=(const DeleteGlobalDataNetworkRequest &) = default ;
    DeleteGlobalDataNetworkRequest& operator=(DeleteGlobalDataNetworkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkId_ == nullptr; };
    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DeleteGlobalDataNetworkRequest& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


  protected:
    // GDN ID
    shared_ptr<string> networkId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
