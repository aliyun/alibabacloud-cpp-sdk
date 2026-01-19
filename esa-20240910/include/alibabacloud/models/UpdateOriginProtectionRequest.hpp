// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEORIGINPROTECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEORIGINPROTECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateOriginProtectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOriginProtectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoConfirmIPList, autoConfirmIPList_);
      DARABONBA_PTR_TO_JSON(OriginConverge, originConverge_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOriginProtectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoConfirmIPList, autoConfirmIPList_);
      DARABONBA_PTR_FROM_JSON(OriginConverge, originConverge_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateOriginProtectionRequest() = default ;
    UpdateOriginProtectionRequest(const UpdateOriginProtectionRequest &) = default ;
    UpdateOriginProtectionRequest(UpdateOriginProtectionRequest &&) = default ;
    UpdateOriginProtectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOriginProtectionRequest() = default ;
    UpdateOriginProtectionRequest& operator=(const UpdateOriginProtectionRequest &) = default ;
    UpdateOriginProtectionRequest& operator=(UpdateOriginProtectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoConfirmIPList_ == nullptr
        && this->originConverge_ == nullptr && this->siteId_ == nullptr; };
    // autoConfirmIPList Field Functions 
    bool hasAutoConfirmIPList() const { return this->autoConfirmIPList_ != nullptr;};
    void deleteAutoConfirmIPList() { this->autoConfirmIPList_ = nullptr;};
    inline string getAutoConfirmIPList() const { DARABONBA_PTR_GET_DEFAULT(autoConfirmIPList_, "") };
    inline UpdateOriginProtectionRequest& setAutoConfirmIPList(string autoConfirmIPList) { DARABONBA_PTR_SET_VALUE(autoConfirmIPList_, autoConfirmIPList) };


    // originConverge Field Functions 
    bool hasOriginConverge() const { return this->originConverge_ != nullptr;};
    void deleteOriginConverge() { this->originConverge_ = nullptr;};
    inline string getOriginConverge() const { DARABONBA_PTR_GET_DEFAULT(originConverge_, "") };
    inline UpdateOriginProtectionRequest& setOriginConverge(string originConverge) { DARABONBA_PTR_SET_VALUE(originConverge_, originConverge) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateOriginProtectionRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    shared_ptr<string> autoConfirmIPList_ {};
    // The IP convergence status.
    // 
    // *   on
    // *   off
    // 
    // This parameter is required.
    shared_ptr<string> originConverge_ {};
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
