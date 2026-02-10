// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLIENTALERTMODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLIENTALERTMODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateClientAlertModeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateClientAlertModeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateClientAlertModeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    UpdateClientAlertModeRequest() = default ;
    UpdateClientAlertModeRequest(const UpdateClientAlertModeRequest &) = default ;
    UpdateClientAlertModeRequest(UpdateClientAlertModeRequest &&) = default ;
    UpdateClientAlertModeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateClientAlertModeRequest() = default ;
    UpdateClientAlertModeRequest& operator=(const UpdateClientAlertModeRequest &) = default ;
    UpdateClientAlertModeRequest& operator=(UpdateClientAlertModeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mode_ == nullptr
        && this->uuids_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline UpdateClientAlertModeRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline const vector<string> & getUuids() const { DARABONBA_PTR_GET_CONST(uuids_, vector<string>) };
    inline vector<string> getUuids() { DARABONBA_PTR_GET(uuids_, vector<string>) };
    inline UpdateClientAlertModeRequest& setUuids(const vector<string> & uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };
    inline UpdateClientAlertModeRequest& setUuids(vector<string> && uuids) { DARABONBA_PTR_SET_RVALUE(uuids_, uuids) };


  protected:
    // The protection mode. Valid values:
    // 
    // *   **strict**: The strict mode. False positives may be generated. We recommend that you enable this mode during major events.
    // *   **balance**: The balanced mode. More risks can be detected with less false positives in this mode.
    shared_ptr<string> mode_ {};
    // The UUIDs of servers.
    shared_ptr<vector<string>> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
