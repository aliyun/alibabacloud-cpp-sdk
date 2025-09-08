// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDSLBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDSLBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UnbindSlbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindSlbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Internet, internet_);
      DARABONBA_PTR_TO_JSON(Intranet, intranet_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindSlbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Internet, internet_);
      DARABONBA_PTR_FROM_JSON(Intranet, intranet_);
    };
    UnbindSlbRequest() = default ;
    UnbindSlbRequest(const UnbindSlbRequest &) = default ;
    UnbindSlbRequest(UnbindSlbRequest &&) = default ;
    UnbindSlbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindSlbRequest() = default ;
    UnbindSlbRequest& operator=(const UnbindSlbRequest &) = default ;
    UnbindSlbRequest& operator=(UnbindSlbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->internet_ != nullptr && this->intranet_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UnbindSlbRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // internet Field Functions 
    bool hasInternet() const { return this->internet_ != nullptr;};
    void deleteInternet() { this->internet_ = nullptr;};
    inline bool internet() const { DARABONBA_PTR_GET_DEFAULT(internet_, false) };
    inline UnbindSlbRequest& setInternet(bool internet) { DARABONBA_PTR_SET_VALUE(internet_, internet) };


    // intranet Field Functions 
    bool hasIntranet() const { return this->intranet_ != nullptr;};
    void deleteIntranet() { this->intranet_ = nullptr;};
    inline bool intranet() const { DARABONBA_PTR_GET_DEFAULT(intranet_, false) };
    inline UnbindSlbRequest& setIntranet(bool intranet) { DARABONBA_PTR_SET_VALUE(intranet_, intranet) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // Specifies whether to disassociate the Internet-facing SLB instance. Valid values:
    // 
    // *   **true**: dissociates the Internet-facing SLB instance.
    // *   **false**: does not dissociate the Internet-facing SLB instance.
    std::shared_ptr<bool> internet_ = nullptr;
    // Specifies whether to disassociate the internal-facing SLB instance. Valid values:
    // 
    // *   **true**: dissociates the internal-facing SLB instance.
    // *   **false**: does not dissociate the internal-facing SLB instance.
    std::shared_ptr<bool> intranet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
