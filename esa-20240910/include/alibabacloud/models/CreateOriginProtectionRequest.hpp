// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORIGINPROTECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORIGINPROTECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateOriginProtectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOriginProtectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoConfirmIPList, autoConfirmIPList_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOriginProtectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoConfirmIPList, autoConfirmIPList_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    CreateOriginProtectionRequest() = default ;
    CreateOriginProtectionRequest(const CreateOriginProtectionRequest &) = default ;
    CreateOriginProtectionRequest(CreateOriginProtectionRequest &&) = default ;
    CreateOriginProtectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOriginProtectionRequest() = default ;
    CreateOriginProtectionRequest& operator=(const CreateOriginProtectionRequest &) = default ;
    CreateOriginProtectionRequest& operator=(CreateOriginProtectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoConfirmIPList_ == nullptr
        && this->siteId_ == nullptr; };
    // autoConfirmIPList Field Functions 
    bool hasAutoConfirmIPList() const { return this->autoConfirmIPList_ != nullptr;};
    void deleteAutoConfirmIPList() { this->autoConfirmIPList_ = nullptr;};
    inline string getAutoConfirmIPList() const { DARABONBA_PTR_GET_DEFAULT(autoConfirmIPList_, "") };
    inline CreateOriginProtectionRequest& setAutoConfirmIPList(string autoConfirmIPList) { DARABONBA_PTR_SET_VALUE(autoConfirmIPList_, autoConfirmIPList) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateOriginProtectionRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    shared_ptr<string> autoConfirmIPList_ {};
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
