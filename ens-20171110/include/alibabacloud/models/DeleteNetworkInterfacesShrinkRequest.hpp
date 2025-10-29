// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENETWORKINTERFACESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENETWORKINTERFACESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteNetworkInterfacesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNetworkInterfacesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfaceIds, networkInterfaceIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNetworkInterfacesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceIds, networkInterfaceIdsShrink_);
    };
    DeleteNetworkInterfacesShrinkRequest() = default ;
    DeleteNetworkInterfacesShrinkRequest(const DeleteNetworkInterfacesShrinkRequest &) = default ;
    DeleteNetworkInterfacesShrinkRequest(DeleteNetworkInterfacesShrinkRequest &&) = default ;
    DeleteNetworkInterfacesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNetworkInterfacesShrinkRequest() = default ;
    DeleteNetworkInterfacesShrinkRequest& operator=(const DeleteNetworkInterfacesShrinkRequest &) = default ;
    DeleteNetworkInterfacesShrinkRequest& operator=(DeleteNetworkInterfacesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkInterfaceIdsShrink_ == nullptr; };
    // networkInterfaceIdsShrink Field Functions 
    bool hasNetworkInterfaceIdsShrink() const { return this->networkInterfaceIdsShrink_ != nullptr;};
    void deleteNetworkInterfaceIdsShrink() { this->networkInterfaceIdsShrink_ = nullptr;};
    inline string networkInterfaceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceIdsShrink_, "") };
    inline DeleteNetworkInterfacesShrinkRequest& setNetworkInterfaceIdsShrink(string networkInterfaceIdsShrink) { DARABONBA_PTR_SET_VALUE(networkInterfaceIdsShrink_, networkInterfaceIdsShrink) };


  protected:
    // The IDs of the elastic network interfaces (ENIs).
    // 
    // This parameter is required.
    std::shared_ptr<string> networkInterfaceIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
