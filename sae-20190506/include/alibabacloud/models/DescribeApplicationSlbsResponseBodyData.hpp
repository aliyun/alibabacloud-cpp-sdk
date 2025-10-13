// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSLBSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSLBSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationSlbsResponseBodyDataInternet.hpp>
#include <alibabacloud/models/DescribeApplicationSlbsResponseBodyDataIntranet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationSlbsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationSlbsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Internet, internet_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(InternetSlbChargeType, internetSlbChargeType_);
      DARABONBA_PTR_TO_JSON(InternetSlbExpired, internetSlbExpired_);
      DARABONBA_PTR_TO_JSON(InternetSlbId, internetSlbId_);
      DARABONBA_PTR_TO_JSON(Intranet, intranet_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(IntranetSlbChargeType, intranetSlbChargeType_);
      DARABONBA_PTR_TO_JSON(IntranetSlbExpired, intranetSlbExpired_);
      DARABONBA_PTR_TO_JSON(IntranetSlbId, intranetSlbId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationSlbsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Internet, internet_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(InternetSlbChargeType, internetSlbChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetSlbExpired, internetSlbExpired_);
      DARABONBA_PTR_FROM_JSON(InternetSlbId, internetSlbId_);
      DARABONBA_PTR_FROM_JSON(Intranet, intranet_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetSlbChargeType, intranetSlbChargeType_);
      DARABONBA_PTR_FROM_JSON(IntranetSlbExpired, intranetSlbExpired_);
      DARABONBA_PTR_FROM_JSON(IntranetSlbId, intranetSlbId_);
    };
    DescribeApplicationSlbsResponseBodyData() = default ;
    DescribeApplicationSlbsResponseBodyData(const DescribeApplicationSlbsResponseBodyData &) = default ;
    DescribeApplicationSlbsResponseBodyData(DescribeApplicationSlbsResponseBodyData &&) = default ;
    DescribeApplicationSlbsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationSlbsResponseBodyData() = default ;
    DescribeApplicationSlbsResponseBodyData& operator=(const DescribeApplicationSlbsResponseBodyData &) = default ;
    DescribeApplicationSlbsResponseBodyData& operator=(DescribeApplicationSlbsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->clusterId_ == nullptr && return this->internet_ == nullptr && return this->internetIp_ == nullptr && return this->internetSlbChargeType_ == nullptr
        && return this->internetSlbExpired_ == nullptr && return this->internetSlbId_ == nullptr && return this->intranet_ == nullptr && return this->intranetIp_ == nullptr && return this->intranetSlbChargeType_ == nullptr
        && return this->intranetSlbExpired_ == nullptr && return this->intranetSlbId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeApplicationSlbsResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeApplicationSlbsResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeApplicationSlbsResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // internet Field Functions 
    bool hasInternet() const { return this->internet_ != nullptr;};
    void deleteInternet() { this->internet_ = nullptr;};
    inline const vector<Models::DescribeApplicationSlbsResponseBodyDataInternet> & internet() const { DARABONBA_PTR_GET_CONST(internet_, vector<Models::DescribeApplicationSlbsResponseBodyDataInternet>) };
    inline vector<Models::DescribeApplicationSlbsResponseBodyDataInternet> internet() { DARABONBA_PTR_GET(internet_, vector<Models::DescribeApplicationSlbsResponseBodyDataInternet>) };
    inline DescribeApplicationSlbsResponseBodyData& setInternet(const vector<Models::DescribeApplicationSlbsResponseBodyDataInternet> & internet) { DARABONBA_PTR_SET_VALUE(internet_, internet) };
    inline DescribeApplicationSlbsResponseBodyData& setInternet(vector<Models::DescribeApplicationSlbsResponseBodyDataInternet> && internet) { DARABONBA_PTR_SET_RVALUE(internet_, internet) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeApplicationSlbsResponseBodyData& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // internetSlbChargeType Field Functions 
    bool hasInternetSlbChargeType() const { return this->internetSlbChargeType_ != nullptr;};
    void deleteInternetSlbChargeType() { this->internetSlbChargeType_ = nullptr;};
    inline string internetSlbChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetSlbChargeType_, "") };
    inline DescribeApplicationSlbsResponseBodyData& setInternetSlbChargeType(string internetSlbChargeType) { DARABONBA_PTR_SET_VALUE(internetSlbChargeType_, internetSlbChargeType) };


    // internetSlbExpired Field Functions 
    bool hasInternetSlbExpired() const { return this->internetSlbExpired_ != nullptr;};
    void deleteInternetSlbExpired() { this->internetSlbExpired_ = nullptr;};
    inline bool internetSlbExpired() const { DARABONBA_PTR_GET_DEFAULT(internetSlbExpired_, false) };
    inline DescribeApplicationSlbsResponseBodyData& setInternetSlbExpired(bool internetSlbExpired) { DARABONBA_PTR_SET_VALUE(internetSlbExpired_, internetSlbExpired) };


    // internetSlbId Field Functions 
    bool hasInternetSlbId() const { return this->internetSlbId_ != nullptr;};
    void deleteInternetSlbId() { this->internetSlbId_ = nullptr;};
    inline string internetSlbId() const { DARABONBA_PTR_GET_DEFAULT(internetSlbId_, "") };
    inline DescribeApplicationSlbsResponseBodyData& setInternetSlbId(string internetSlbId) { DARABONBA_PTR_SET_VALUE(internetSlbId_, internetSlbId) };


    // intranet Field Functions 
    bool hasIntranet() const { return this->intranet_ != nullptr;};
    void deleteIntranet() { this->intranet_ = nullptr;};
    inline const vector<Models::DescribeApplicationSlbsResponseBodyDataIntranet> & intranet() const { DARABONBA_PTR_GET_CONST(intranet_, vector<Models::DescribeApplicationSlbsResponseBodyDataIntranet>) };
    inline vector<Models::DescribeApplicationSlbsResponseBodyDataIntranet> intranet() { DARABONBA_PTR_GET(intranet_, vector<Models::DescribeApplicationSlbsResponseBodyDataIntranet>) };
    inline DescribeApplicationSlbsResponseBodyData& setIntranet(const vector<Models::DescribeApplicationSlbsResponseBodyDataIntranet> & intranet) { DARABONBA_PTR_SET_VALUE(intranet_, intranet) };
    inline DescribeApplicationSlbsResponseBodyData& setIntranet(vector<Models::DescribeApplicationSlbsResponseBodyDataIntranet> && intranet) { DARABONBA_PTR_SET_RVALUE(intranet_, intranet) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeApplicationSlbsResponseBodyData& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // intranetSlbChargeType Field Functions 
    bool hasIntranetSlbChargeType() const { return this->intranetSlbChargeType_ != nullptr;};
    void deleteIntranetSlbChargeType() { this->intranetSlbChargeType_ = nullptr;};
    inline string intranetSlbChargeType() const { DARABONBA_PTR_GET_DEFAULT(intranetSlbChargeType_, "") };
    inline DescribeApplicationSlbsResponseBodyData& setIntranetSlbChargeType(string intranetSlbChargeType) { DARABONBA_PTR_SET_VALUE(intranetSlbChargeType_, intranetSlbChargeType) };


    // intranetSlbExpired Field Functions 
    bool hasIntranetSlbExpired() const { return this->intranetSlbExpired_ != nullptr;};
    void deleteIntranetSlbExpired() { this->intranetSlbExpired_ = nullptr;};
    inline bool intranetSlbExpired() const { DARABONBA_PTR_GET_DEFAULT(intranetSlbExpired_, false) };
    inline DescribeApplicationSlbsResponseBodyData& setIntranetSlbExpired(bool intranetSlbExpired) { DARABONBA_PTR_SET_VALUE(intranetSlbExpired_, intranetSlbExpired) };


    // intranetSlbId Field Functions 
    bool hasIntranetSlbId() const { return this->intranetSlbId_ != nullptr;};
    void deleteIntranetSlbId() { this->intranetSlbId_ = nullptr;};
    inline string intranetSlbId() const { DARABONBA_PTR_GET_DEFAULT(intranetSlbId_, "") };
    inline DescribeApplicationSlbsResponseBodyData& setIntranetSlbId(string intranetSlbId) { DARABONBA_PTR_SET_VALUE(intranetSlbId_, intranetSlbId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> clusterId_ = nullptr;
    // The configurations of the Internet-facing SLB instance.
    std::shared_ptr<vector<Models::DescribeApplicationSlbsResponseBodyDataInternet>> internet_ = nullptr;
    // The ID of the Internet-facing SLB instance.
    std::shared_ptr<string> internetIp_ = nullptr;
    std::shared_ptr<string> internetSlbChargeType_ = nullptr;
    std::shared_ptr<bool> internetSlbExpired_ = nullptr;
    // Configurations of Internet-facing SLB instances.
    std::shared_ptr<string> internetSlbId_ = nullptr;
    // The configurations of the internal-facing SLB instance.
    std::shared_ptr<vector<Models::DescribeApplicationSlbsResponseBodyDataIntranet>> intranet_ = nullptr;
    // The error code.
    // 
    // *   The **ErrorCode** parameter is not returned when the request succeeds.
    // *   The **ErrorCode** parameter is returned when the request fails. For more information, see **Error codes** in this topic.
    std::shared_ptr<string> intranetIp_ = nullptr;
    std::shared_ptr<string> intranetSlbChargeType_ = nullptr;
    std::shared_ptr<bool> intranetSlbExpired_ = nullptr;
    // The IP address of the internal-facing SLB instance.
    std::shared_ptr<string> intranetSlbId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
