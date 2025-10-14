// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPEPNINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPEPNINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class StopEpnInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopEpnInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EPNInstanceId, EPNInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, StopEpnInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EPNInstanceId, EPNInstanceId_);
    };
    StopEpnInstanceRequest() = default ;
    StopEpnInstanceRequest(const StopEpnInstanceRequest &) = default ;
    StopEpnInstanceRequest(StopEpnInstanceRequest &&) = default ;
    StopEpnInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopEpnInstanceRequest() = default ;
    StopEpnInstanceRequest& operator=(const StopEpnInstanceRequest &) = default ;
    StopEpnInstanceRequest& operator=(StopEpnInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->EPNInstanceId_ == nullptr; };
    // EPNInstanceId Field Functions 
    bool hasEPNInstanceId() const { return this->EPNInstanceId_ != nullptr;};
    void deleteEPNInstanceId() { this->EPNInstanceId_ = nullptr;};
    inline string EPNInstanceId() const { DARABONBA_PTR_GET_DEFAULT(EPNInstanceId_, "") };
    inline StopEpnInstanceRequest& setEPNInstanceId(string EPNInstanceId) { DARABONBA_PTR_SET_VALUE(EPNInstanceId_, EPNInstanceId) };


  protected:
    // The ID of the EPN instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> EPNInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
