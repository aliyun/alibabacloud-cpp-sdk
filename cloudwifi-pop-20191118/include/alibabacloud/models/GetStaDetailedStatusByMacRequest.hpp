// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTADETAILEDSTATUSBYMACREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTADETAILEDSTATUSBYMACREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class GetStaDetailedStatusByMacRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStaDetailedStatusByMacRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(StaMac, staMac_);
    };
    friend void from_json(const Darabonba::Json& j, GetStaDetailedStatusByMacRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(StaMac, staMac_);
    };
    GetStaDetailedStatusByMacRequest() = default ;
    GetStaDetailedStatusByMacRequest(const GetStaDetailedStatusByMacRequest &) = default ;
    GetStaDetailedStatusByMacRequest(GetStaDetailedStatusByMacRequest &&) = default ;
    GetStaDetailedStatusByMacRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStaDetailedStatusByMacRequest() = default ;
    GetStaDetailedStatusByMacRequest& operator=(const GetStaDetailedStatusByMacRequest &) = default ;
    GetStaDetailedStatusByMacRequest& operator=(GetStaDetailedStatusByMacRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && this->appName_ == nullptr && this->staMac_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline GetStaDetailedStatusByMacRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetStaDetailedStatusByMacRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // staMac Field Functions 
    bool hasStaMac() const { return this->staMac_ != nullptr;};
    void deleteStaMac() { this->staMac_ = nullptr;};
    inline string getStaMac() const { DARABONBA_PTR_GET_DEFAULT(staMac_, "") };
    inline GetStaDetailedStatusByMacRequest& setStaMac(string staMac) { DARABONBA_PTR_SET_VALUE(staMac_, staMac) };


  protected:
    shared_ptr<string> appCode_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<string> staMac_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
