// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTDATASERVICEAPIREQUESTGRANTCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_GRANTDATASERVICEAPIREQUESTGRANTCOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GrantDataServiceApiRequestGrantCommandDevFieldList.hpp>
#include <alibabacloud/models/GrantDataServiceApiRequestGrantCommandProdFieldList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GrantDataServiceApiRequestGrantCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantDataServiceApiRequestGrantCommand& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DevFieldList, devFieldList_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(ProdFieldList, prodFieldList_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, GrantDataServiceApiRequestGrantCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DevFieldList, devFieldList_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(ProdFieldList, prodFieldList_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    GrantDataServiceApiRequestGrantCommand() = default ;
    GrantDataServiceApiRequestGrantCommand(const GrantDataServiceApiRequestGrantCommand &) = default ;
    GrantDataServiceApiRequestGrantCommand(GrantDataServiceApiRequestGrantCommand &&) = default ;
    GrantDataServiceApiRequestGrantCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantDataServiceApiRequestGrantCommand() = default ;
    GrantDataServiceApiRequestGrantCommand& operator=(const GrantDataServiceApiRequestGrantCommand &) = default ;
    GrantDataServiceApiRequestGrantCommand& operator=(GrantDataServiceApiRequestGrantCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiId_ != nullptr
        && this->appId_ != nullptr && this->devFieldList_ != nullptr && this->expireDate_ != nullptr && this->prodFieldList_ != nullptr && this->reason_ != nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline GrantDataServiceApiRequestGrantCommand& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int32_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
    inline GrantDataServiceApiRequestGrantCommand& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // devFieldList Field Functions 
    bool hasDevFieldList() const { return this->devFieldList_ != nullptr;};
    void deleteDevFieldList() { this->devFieldList_ = nullptr;};
    inline const vector<Models::GrantDataServiceApiRequestGrantCommandDevFieldList> & devFieldList() const { DARABONBA_PTR_GET_CONST(devFieldList_, vector<Models::GrantDataServiceApiRequestGrantCommandDevFieldList>) };
    inline vector<Models::GrantDataServiceApiRequestGrantCommandDevFieldList> devFieldList() { DARABONBA_PTR_GET(devFieldList_, vector<Models::GrantDataServiceApiRequestGrantCommandDevFieldList>) };
    inline GrantDataServiceApiRequestGrantCommand& setDevFieldList(const vector<Models::GrantDataServiceApiRequestGrantCommandDevFieldList> & devFieldList) { DARABONBA_PTR_SET_VALUE(devFieldList_, devFieldList) };
    inline GrantDataServiceApiRequestGrantCommand& setDevFieldList(vector<Models::GrantDataServiceApiRequestGrantCommandDevFieldList> && devFieldList) { DARABONBA_PTR_SET_RVALUE(devFieldList_, devFieldList) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline GrantDataServiceApiRequestGrantCommand& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // prodFieldList Field Functions 
    bool hasProdFieldList() const { return this->prodFieldList_ != nullptr;};
    void deleteProdFieldList() { this->prodFieldList_ = nullptr;};
    inline const vector<Models::GrantDataServiceApiRequestGrantCommandProdFieldList> & prodFieldList() const { DARABONBA_PTR_GET_CONST(prodFieldList_, vector<Models::GrantDataServiceApiRequestGrantCommandProdFieldList>) };
    inline vector<Models::GrantDataServiceApiRequestGrantCommandProdFieldList> prodFieldList() { DARABONBA_PTR_GET(prodFieldList_, vector<Models::GrantDataServiceApiRequestGrantCommandProdFieldList>) };
    inline GrantDataServiceApiRequestGrantCommand& setProdFieldList(const vector<Models::GrantDataServiceApiRequestGrantCommandProdFieldList> & prodFieldList) { DARABONBA_PTR_SET_VALUE(prodFieldList_, prodFieldList) };
    inline GrantDataServiceApiRequestGrantCommand& setProdFieldList(vector<Models::GrantDataServiceApiRequestGrantCommandProdFieldList> && prodFieldList) { DARABONBA_PTR_SET_RVALUE(prodFieldList_, prodFieldList) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GrantDataServiceApiRequestGrantCommand& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> apiId_ = nullptr;
    // AppID
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> appId_ = nullptr;
    std::shared_ptr<vector<Models::GrantDataServiceApiRequestGrantCommandDevFieldList>> devFieldList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> expireDate_ = nullptr;
    std::shared_ptr<vector<Models::GrantDataServiceApiRequestGrantCommandProdFieldList>> prodFieldList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
