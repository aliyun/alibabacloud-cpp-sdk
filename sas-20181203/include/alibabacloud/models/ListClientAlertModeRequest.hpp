// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLIENTALERTMODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLIENTALERTMODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListClientAlertModeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClientAlertModeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
    };
    friend void from_json(const Darabonba::Json& j, ListClientAlertModeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
    };
    ListClientAlertModeRequest() = default ;
    ListClientAlertModeRequest(const ListClientAlertModeRequest &) = default ;
    ListClientAlertModeRequest(ListClientAlertModeRequest &&) = default ;
    ListClientAlertModeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClientAlertModeRequest() = default ;
    ListClientAlertModeRequest& operator=(const ListClientAlertModeRequest &) = default ;
    ListClientAlertModeRequest& operator=(ListClientAlertModeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mode_ != nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ListClientAlertModeRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


  protected:
    // The protection mode. Valid values:
    // 
    // *   **strict**: The strict mode. False positives may be generated. We recommend that you enable this mode during major events.
    // *   **balance**: The balanced mode. More risks can be detected with less false positives in this mode.
    std::shared_ptr<string> mode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
