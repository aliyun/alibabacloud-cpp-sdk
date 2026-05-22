// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSITENAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKSITENAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CheckSiteNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckSiteNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
    };
    friend void from_json(const Darabonba::Json& j, CheckSiteNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
    };
    CheckSiteNameRequest() = default ;
    CheckSiteNameRequest(const CheckSiteNameRequest &) = default ;
    CheckSiteNameRequest(CheckSiteNameRequest &&) = default ;
    CheckSiteNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckSiteNameRequest() = default ;
    CheckSiteNameRequest& operator=(const CheckSiteNameRequest &) = default ;
    CheckSiteNameRequest& operator=(CheckSiteNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->siteName_ == nullptr; };
    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline CheckSiteNameRequest& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


  protected:
    // The website name.
    // 
    // This parameter is required.
    shared_ptr<string> siteName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
