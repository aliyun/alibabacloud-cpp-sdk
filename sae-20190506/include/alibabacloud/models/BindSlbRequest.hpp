// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDSLBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDSLBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class BindSlbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindSlbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Internet, internet_);
      DARABONBA_PTR_TO_JSON(InternetSlbChargeType, internetSlbChargeType_);
      DARABONBA_PTR_TO_JSON(InternetSlbId, internetSlbId_);
      DARABONBA_PTR_TO_JSON(Intranet, intranet_);
      DARABONBA_PTR_TO_JSON(IntranetSlbChargeType, intranetSlbChargeType_);
      DARABONBA_PTR_TO_JSON(IntranetSlbId, intranetSlbId_);
    };
    friend void from_json(const Darabonba::Json& j, BindSlbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Internet, internet_);
      DARABONBA_PTR_FROM_JSON(InternetSlbChargeType, internetSlbChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetSlbId, internetSlbId_);
      DARABONBA_PTR_FROM_JSON(Intranet, intranet_);
      DARABONBA_PTR_FROM_JSON(IntranetSlbChargeType, intranetSlbChargeType_);
      DARABONBA_PTR_FROM_JSON(IntranetSlbId, intranetSlbId_);
    };
    BindSlbRequest() = default ;
    BindSlbRequest(const BindSlbRequest &) = default ;
    BindSlbRequest(BindSlbRequest &&) = default ;
    BindSlbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindSlbRequest() = default ;
    BindSlbRequest& operator=(const BindSlbRequest &) = default ;
    BindSlbRequest& operator=(BindSlbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->internet_ != nullptr && this->internetSlbChargeType_ != nullptr && this->internetSlbId_ != nullptr && this->intranet_ != nullptr && this->intranetSlbChargeType_ != nullptr
        && this->intranetSlbId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline BindSlbRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // internet Field Functions 
    bool hasInternet() const { return this->internet_ != nullptr;};
    void deleteInternet() { this->internet_ = nullptr;};
    inline string internet() const { DARABONBA_PTR_GET_DEFAULT(internet_, "") };
    inline BindSlbRequest& setInternet(string internet) { DARABONBA_PTR_SET_VALUE(internet_, internet) };


    // internetSlbChargeType Field Functions 
    bool hasInternetSlbChargeType() const { return this->internetSlbChargeType_ != nullptr;};
    void deleteInternetSlbChargeType() { this->internetSlbChargeType_ = nullptr;};
    inline string internetSlbChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetSlbChargeType_, "") };
    inline BindSlbRequest& setInternetSlbChargeType(string internetSlbChargeType) { DARABONBA_PTR_SET_VALUE(internetSlbChargeType_, internetSlbChargeType) };


    // internetSlbId Field Functions 
    bool hasInternetSlbId() const { return this->internetSlbId_ != nullptr;};
    void deleteInternetSlbId() { this->internetSlbId_ = nullptr;};
    inline string internetSlbId() const { DARABONBA_PTR_GET_DEFAULT(internetSlbId_, "") };
    inline BindSlbRequest& setInternetSlbId(string internetSlbId) { DARABONBA_PTR_SET_VALUE(internetSlbId_, internetSlbId) };


    // intranet Field Functions 
    bool hasIntranet() const { return this->intranet_ != nullptr;};
    void deleteIntranet() { this->intranet_ = nullptr;};
    inline string intranet() const { DARABONBA_PTR_GET_DEFAULT(intranet_, "") };
    inline BindSlbRequest& setIntranet(string intranet) { DARABONBA_PTR_SET_VALUE(intranet_, intranet) };


    // intranetSlbChargeType Field Functions 
    bool hasIntranetSlbChargeType() const { return this->intranetSlbChargeType_ != nullptr;};
    void deleteIntranetSlbChargeType() { this->intranetSlbChargeType_ = nullptr;};
    inline string intranetSlbChargeType() const { DARABONBA_PTR_GET_DEFAULT(intranetSlbChargeType_, "") };
    inline BindSlbRequest& setIntranetSlbChargeType(string intranetSlbChargeType) { DARABONBA_PTR_SET_VALUE(intranetSlbChargeType_, intranetSlbChargeType) };


    // intranetSlbId Field Functions 
    bool hasIntranetSlbId() const { return this->intranetSlbId_ != nullptr;};
    void deleteIntranetSlbId() { this->intranetSlbId_ = nullptr;};
    inline string intranetSlbId() const { DARABONBA_PTR_GET_DEFAULT(intranetSlbId_, "") };
    inline BindSlbRequest& setIntranetSlbId(string intranetSlbId) { DARABONBA_PTR_SET_VALUE(intranetSlbId_, intranetSlbId) };


  protected:
    // 0099b7be-5f5b-4512-a7fc-56049ef1\\*\\*\\*\\*
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // [{"port":80,"targetPort":8080,"protocol":"TCP"}]
    std::shared_ptr<string> internet_ = nullptr;
    // The billing method of an Internet-facing SLB instance. The following billing methods are supported:
    // 
    // *   **PayBySpec**: Pay-by-specification.
    // *   **PayByCLCU**: Pay-by-CLCU.
    std::shared_ptr<string> internetSlbChargeType_ = nullptr;
    // lb-bp1tg0k6d9nqaw7l1\\*\\*\\*\\*
    std::shared_ptr<string> internetSlbId_ = nullptr;
    // [{"port":80,"targetPort":8080,"protocol":"TCP"}]
    std::shared_ptr<string> intranet_ = nullptr;
    // The billing method of an Internal-facing SLB instance. The following billing methods are supported:
    // 
    // *   **PayBySpec**: Pay-by-specification.
    // *   **PayByCLCU**: Pay-by-CLCU.
    std::shared_ptr<string> intranetSlbChargeType_ = nullptr;
    // lb-bp1tg0k6d9nqaw7l1\\*\\*\\*\\*
    std::shared_ptr<string> intranetSlbId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
