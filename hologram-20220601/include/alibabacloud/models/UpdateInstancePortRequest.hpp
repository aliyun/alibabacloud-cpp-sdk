// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class UpdateInstancePortRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstancePortRequest& obj) { 
      DARABONBA_PTR_TO_JSON(port, port_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstancePortRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(port, port_);
    };
    UpdateInstancePortRequest() = default ;
    UpdateInstancePortRequest(const UpdateInstancePortRequest &) = default ;
    UpdateInstancePortRequest(UpdateInstancePortRequest &&) = default ;
    UpdateInstancePortRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstancePortRequest() = default ;
    UpdateInstancePortRequest& operator=(const UpdateInstancePortRequest &) = default ;
    UpdateInstancePortRequest& operator=(UpdateInstancePortRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->port_ == nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline UpdateInstancePortRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    shared_ptr<int32_t> port_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
