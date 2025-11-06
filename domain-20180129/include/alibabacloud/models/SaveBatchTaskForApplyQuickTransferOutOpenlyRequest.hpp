// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBATCHTASKFORAPPLYQUICKTRANSFEROUTOPENLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEBATCHTASKFORAPPLYQUICKTRANSFEROUTOPENLYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveBatchTaskForApplyQuickTransferOutOpenlyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveBatchTaskForApplyQuickTransferOutOpenlyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveBatchTaskForApplyQuickTransferOutOpenlyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveBatchTaskForApplyQuickTransferOutOpenlyRequest() = default ;
    SaveBatchTaskForApplyQuickTransferOutOpenlyRequest(const SaveBatchTaskForApplyQuickTransferOutOpenlyRequest &) = default ;
    SaveBatchTaskForApplyQuickTransferOutOpenlyRequest(SaveBatchTaskForApplyQuickTransferOutOpenlyRequest &&) = default ;
    SaveBatchTaskForApplyQuickTransferOutOpenlyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveBatchTaskForApplyQuickTransferOutOpenlyRequest() = default ;
    SaveBatchTaskForApplyQuickTransferOutOpenlyRequest& operator=(const SaveBatchTaskForApplyQuickTransferOutOpenlyRequest &) = default ;
    SaveBatchTaskForApplyQuickTransferOutOpenlyRequest& operator=(SaveBatchTaskForApplyQuickTransferOutOpenlyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainNames_ == nullptr
        && return this->lang_ == nullptr && return this->userClientIp_ == nullptr; };
    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline const vector<string> & domainNames() const { DARABONBA_PTR_GET_CONST(domainNames_, vector<string>) };
    inline vector<string> domainNames() { DARABONBA_PTR_GET(domainNames_, vector<string>) };
    inline SaveBatchTaskForApplyQuickTransferOutOpenlyRequest& setDomainNames(const vector<string> & domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };
    inline SaveBatchTaskForApplyQuickTransferOutOpenlyRequest& setDomainNames(vector<string> && domainNames) { DARABONBA_PTR_SET_RVALUE(domainNames_, domainNames) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveBatchTaskForApplyQuickTransferOutOpenlyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveBatchTaskForApplyQuickTransferOutOpenlyRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    std::shared_ptr<vector<string>> domainNames_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
