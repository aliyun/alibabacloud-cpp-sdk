// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENETWORKINTERFACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENETWORKINTERFACESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteNetworkInterfacesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNetworkInterfacesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfaceIds, networkInterfaceIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNetworkInterfacesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceIds, networkInterfaceIds_);
    };
    DeleteNetworkInterfacesRequest() = default ;
    DeleteNetworkInterfacesRequest(const DeleteNetworkInterfacesRequest &) = default ;
    DeleteNetworkInterfacesRequest(DeleteNetworkInterfacesRequest &&) = default ;
    DeleteNetworkInterfacesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNetworkInterfacesRequest() = default ;
    DeleteNetworkInterfacesRequest& operator=(const DeleteNetworkInterfacesRequest &) = default ;
    DeleteNetworkInterfacesRequest& operator=(DeleteNetworkInterfacesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkInterfaceIds_ == nullptr; };
    // networkInterfaceIds Field Functions 
    bool hasNetworkInterfaceIds() const { return this->networkInterfaceIds_ != nullptr;};
    void deleteNetworkInterfaceIds() { this->networkInterfaceIds_ = nullptr;};
    inline const vector<string> & networkInterfaceIds() const { DARABONBA_PTR_GET_CONST(networkInterfaceIds_, vector<string>) };
    inline vector<string> networkInterfaceIds() { DARABONBA_PTR_GET(networkInterfaceIds_, vector<string>) };
    inline DeleteNetworkInterfacesRequest& setNetworkInterfaceIds(const vector<string> & networkInterfaceIds) { DARABONBA_PTR_SET_VALUE(networkInterfaceIds_, networkInterfaceIds) };
    inline DeleteNetworkInterfacesRequest& setNetworkInterfaceIds(vector<string> && networkInterfaceIds) { DARABONBA_PTR_SET_RVALUE(networkInterfaceIds_, networkInterfaceIds) };


  protected:
    // The IDs of the elastic network interfaces (ENIs).
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> networkInterfaceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
