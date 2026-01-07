// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTQUERYLOGINSETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTQUERYLOGINSETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseAccountQueryLoginSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseAccountQueryLoginSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(IsOpenApi, isOpenApi_);
      DARABONBA_PTR_TO_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_TO_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_TO_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
      DARABONBA_PTR_TO_JSON(ShowCompleteInfo, showCompleteInfo_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseAccountQueryLoginSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(IsOpenApi, isOpenApi_);
      DARABONBA_PTR_FROM_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_FROM_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_FROM_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
      DARABONBA_PTR_FROM_JSON(ShowCompleteInfo, showCompleteInfo_);
    };
    EnterpriseAccountQueryLoginSettingsRequest() = default ;
    EnterpriseAccountQueryLoginSettingsRequest(const EnterpriseAccountQueryLoginSettingsRequest &) = default ;
    EnterpriseAccountQueryLoginSettingsRequest(EnterpriseAccountQueryLoginSettingsRequest &&) = default ;
    EnterpriseAccountQueryLoginSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseAccountQueryLoginSettingsRequest() = default ;
    EnterpriseAccountQueryLoginSettingsRequest& operator=(const EnterpriseAccountQueryLoginSettingsRequest &) = default ;
    EnterpriseAccountQueryLoginSettingsRequest& operator=(EnterpriseAccountQueryLoginSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->isOpenApi_ == nullptr && this->orientedEcId_ == nullptr && this->orientedLeId_ == nullptr && this->orientedNbId_ == nullptr && this->pk_ == nullptr
        && this->showCompleteInfo_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline EnterpriseAccountQueryLoginSettingsRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // isOpenApi Field Functions 
    bool hasIsOpenApi() const { return this->isOpenApi_ != nullptr;};
    void deleteIsOpenApi() { this->isOpenApi_ = nullptr;};
    inline bool getIsOpenApi() const { DARABONBA_PTR_GET_DEFAULT(isOpenApi_, false) };
    inline EnterpriseAccountQueryLoginSettingsRequest& setIsOpenApi(bool isOpenApi) { DARABONBA_PTR_SET_VALUE(isOpenApi_, isOpenApi) };


    // orientedEcId Field Functions 
    bool hasOrientedEcId() const { return this->orientedEcId_ != nullptr;};
    void deleteOrientedEcId() { this->orientedEcId_ = nullptr;};
    inline string getOrientedEcId() const { DARABONBA_PTR_GET_DEFAULT(orientedEcId_, "") };
    inline EnterpriseAccountQueryLoginSettingsRequest& setOrientedEcId(string orientedEcId) { DARABONBA_PTR_SET_VALUE(orientedEcId_, orientedEcId) };


    // orientedLeId Field Functions 
    bool hasOrientedLeId() const { return this->orientedLeId_ != nullptr;};
    void deleteOrientedLeId() { this->orientedLeId_ = nullptr;};
    inline string getOrientedLeId() const { DARABONBA_PTR_GET_DEFAULT(orientedLeId_, "") };
    inline EnterpriseAccountQueryLoginSettingsRequest& setOrientedLeId(string orientedLeId) { DARABONBA_PTR_SET_VALUE(orientedLeId_, orientedLeId) };


    // orientedNbId Field Functions 
    bool hasOrientedNbId() const { return this->orientedNbId_ != nullptr;};
    void deleteOrientedNbId() { this->orientedNbId_ = nullptr;};
    inline string getOrientedNbId() const { DARABONBA_PTR_GET_DEFAULT(orientedNbId_, "") };
    inline EnterpriseAccountQueryLoginSettingsRequest& setOrientedNbId(string orientedNbId) { DARABONBA_PTR_SET_VALUE(orientedNbId_, orientedNbId) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline EnterpriseAccountQueryLoginSettingsRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    // showCompleteInfo Field Functions 
    bool hasShowCompleteInfo() const { return this->showCompleteInfo_ != nullptr;};
    void deleteShowCompleteInfo() { this->showCompleteInfo_ = nullptr;};
    inline bool getShowCompleteInfo() const { DARABONBA_PTR_GET_DEFAULT(showCompleteInfo_, false) };
    inline EnterpriseAccountQueryLoginSettingsRequest& setShowCompleteInfo(bool showCompleteInfo) { DARABONBA_PTR_SET_VALUE(showCompleteInfo_, showCompleteInfo) };


  protected:
    shared_ptr<string> appName_ {};
    shared_ptr<bool> isOpenApi_ {};
    shared_ptr<string> orientedEcId_ {};
    shared_ptr<string> orientedLeId_ {};
    shared_ptr<string> orientedNbId_ {};
    shared_ptr<string> pk_ {};
    shared_ptr<bool> showCompleteInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
