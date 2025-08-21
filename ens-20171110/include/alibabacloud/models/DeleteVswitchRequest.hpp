// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVSWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVSWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteVSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DeleteVSwitchRequest() = default ;
    DeleteVSwitchRequest(const DeleteVSwitchRequest &) = default ;
    DeleteVSwitchRequest(DeleteVSwitchRequest &&) = default ;
    DeleteVSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVSwitchRequest() = default ;
    DeleteVSwitchRequest& operator=(const DeleteVSwitchRequest &) = default ;
    DeleteVSwitchRequest& operator=(DeleteVSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vSwitchId_ != nullptr; };
    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DeleteVSwitchRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The ID of the vSwitch.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
