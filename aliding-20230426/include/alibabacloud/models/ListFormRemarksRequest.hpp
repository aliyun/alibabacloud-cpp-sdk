// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFORMREMARKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFORMREMARKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListFormRemarksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFormRemarksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(FormInstanceIdList, formInstanceIdList_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListFormRemarksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(FormInstanceIdList, formInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
    };
    ListFormRemarksRequest() = default ;
    ListFormRemarksRequest(const ListFormRemarksRequest &) = default ;
    ListFormRemarksRequest(ListFormRemarksRequest &&) = default ;
    ListFormRemarksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFormRemarksRequest() = default ;
    ListFormRemarksRequest& operator=(const ListFormRemarksRequest &) = default ;
    ListFormRemarksRequest& operator=(ListFormRemarksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->formInstanceIdList_ != nullptr && this->formUuid_ != nullptr && this->systemToken_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline ListFormRemarksRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // formInstanceIdList Field Functions 
    bool hasFormInstanceIdList() const { return this->formInstanceIdList_ != nullptr;};
    void deleteFormInstanceIdList() { this->formInstanceIdList_ = nullptr;};
    inline const vector<string> & formInstanceIdList() const { DARABONBA_PTR_GET_CONST(formInstanceIdList_, vector<string>) };
    inline vector<string> formInstanceIdList() { DARABONBA_PTR_GET(formInstanceIdList_, vector<string>) };
    inline ListFormRemarksRequest& setFormInstanceIdList(const vector<string> & formInstanceIdList) { DARABONBA_PTR_SET_VALUE(formInstanceIdList_, formInstanceIdList) };
    inline ListFormRemarksRequest& setFormInstanceIdList(vector<string> && formInstanceIdList) { DARABONBA_PTR_SET_RVALUE(formInstanceIdList_, formInstanceIdList) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string formUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline ListFormRemarksRequest& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline ListFormRemarksRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> formInstanceIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> formUuid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> systemToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
