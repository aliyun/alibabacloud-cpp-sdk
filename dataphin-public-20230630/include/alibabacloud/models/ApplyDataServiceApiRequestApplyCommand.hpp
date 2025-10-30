// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYDATASERVICEAPIREQUESTAPPLYCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_APPLYDATASERVICEAPIREQUESTAPPLYCOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApplyDataServiceApiRequestApplyCommandDevFieldList.hpp>
#include <alibabacloud/models/ApplyDataServiceApiRequestApplyCommandProdFieldList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ApplyDataServiceApiRequestApplyCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyDataServiceApiRequestApplyCommand& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DevFieldList, devFieldList_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(ProdFieldList, prodFieldList_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyDataServiceApiRequestApplyCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DevFieldList, devFieldList_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(ProdFieldList, prodFieldList_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    ApplyDataServiceApiRequestApplyCommand() = default ;
    ApplyDataServiceApiRequestApplyCommand(const ApplyDataServiceApiRequestApplyCommand &) = default ;
    ApplyDataServiceApiRequestApplyCommand(ApplyDataServiceApiRequestApplyCommand &&) = default ;
    ApplyDataServiceApiRequestApplyCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyDataServiceApiRequestApplyCommand() = default ;
    ApplyDataServiceApiRequestApplyCommand& operator=(const ApplyDataServiceApiRequestApplyCommand &) = default ;
    ApplyDataServiceApiRequestApplyCommand& operator=(ApplyDataServiceApiRequestApplyCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->appId_ == nullptr && return this->devFieldList_ == nullptr && return this->expireDate_ == nullptr && return this->prodFieldList_ == nullptr && return this->reason_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline ApplyDataServiceApiRequestApplyCommand& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int32_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
    inline ApplyDataServiceApiRequestApplyCommand& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // devFieldList Field Functions 
    bool hasDevFieldList() const { return this->devFieldList_ != nullptr;};
    void deleteDevFieldList() { this->devFieldList_ = nullptr;};
    inline const vector<Models::ApplyDataServiceApiRequestApplyCommandDevFieldList> & devFieldList() const { DARABONBA_PTR_GET_CONST(devFieldList_, vector<Models::ApplyDataServiceApiRequestApplyCommandDevFieldList>) };
    inline vector<Models::ApplyDataServiceApiRequestApplyCommandDevFieldList> devFieldList() { DARABONBA_PTR_GET(devFieldList_, vector<Models::ApplyDataServiceApiRequestApplyCommandDevFieldList>) };
    inline ApplyDataServiceApiRequestApplyCommand& setDevFieldList(const vector<Models::ApplyDataServiceApiRequestApplyCommandDevFieldList> & devFieldList) { DARABONBA_PTR_SET_VALUE(devFieldList_, devFieldList) };
    inline ApplyDataServiceApiRequestApplyCommand& setDevFieldList(vector<Models::ApplyDataServiceApiRequestApplyCommandDevFieldList> && devFieldList) { DARABONBA_PTR_SET_RVALUE(devFieldList_, devFieldList) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline ApplyDataServiceApiRequestApplyCommand& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // prodFieldList Field Functions 
    bool hasProdFieldList() const { return this->prodFieldList_ != nullptr;};
    void deleteProdFieldList() { this->prodFieldList_ = nullptr;};
    inline const vector<Models::ApplyDataServiceApiRequestApplyCommandProdFieldList> & prodFieldList() const { DARABONBA_PTR_GET_CONST(prodFieldList_, vector<Models::ApplyDataServiceApiRequestApplyCommandProdFieldList>) };
    inline vector<Models::ApplyDataServiceApiRequestApplyCommandProdFieldList> prodFieldList() { DARABONBA_PTR_GET(prodFieldList_, vector<Models::ApplyDataServiceApiRequestApplyCommandProdFieldList>) };
    inline ApplyDataServiceApiRequestApplyCommand& setProdFieldList(const vector<Models::ApplyDataServiceApiRequestApplyCommandProdFieldList> & prodFieldList) { DARABONBA_PTR_SET_VALUE(prodFieldList_, prodFieldList) };
    inline ApplyDataServiceApiRequestApplyCommand& setProdFieldList(vector<Models::ApplyDataServiceApiRequestApplyCommandProdFieldList> && prodFieldList) { DARABONBA_PTR_SET_RVALUE(prodFieldList_, prodFieldList) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ApplyDataServiceApiRequestApplyCommand& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> apiId_ = nullptr;
    // AppId
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> appId_ = nullptr;
    std::shared_ptr<vector<Models::ApplyDataServiceApiRequestApplyCommandDevFieldList>> devFieldList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> expireDate_ = nullptr;
    std::shared_ptr<vector<Models::ApplyDataServiceApiRequestApplyCommandProdFieldList>> prodFieldList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
