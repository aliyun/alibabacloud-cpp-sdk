// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBROWSERINSTANCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBROWSERINSTANCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetBrowserInstanceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBrowserInstanceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BrowserInstanceGroupId, browserInstanceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBrowserInstanceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BrowserInstanceGroupId, browserInstanceGroupId_);
    };
    GetBrowserInstanceGroupRequest() = default ;
    GetBrowserInstanceGroupRequest(const GetBrowserInstanceGroupRequest &) = default ;
    GetBrowserInstanceGroupRequest(GetBrowserInstanceGroupRequest &&) = default ;
    GetBrowserInstanceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBrowserInstanceGroupRequest() = default ;
    GetBrowserInstanceGroupRequest& operator=(const GetBrowserInstanceGroupRequest &) = default ;
    GetBrowserInstanceGroupRequest& operator=(GetBrowserInstanceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->browserInstanceGroupId_ == nullptr; };
    // browserInstanceGroupId Field Functions 
    bool hasBrowserInstanceGroupId() const { return this->browserInstanceGroupId_ != nullptr;};
    void deleteBrowserInstanceGroupId() { this->browserInstanceGroupId_ = nullptr;};
    inline string getBrowserInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(browserInstanceGroupId_, "") };
    inline GetBrowserInstanceGroupRequest& setBrowserInstanceGroupId(string browserInstanceGroupId) { DARABONBA_PTR_SET_VALUE(browserInstanceGroupId_, browserInstanceGroupId) };


  protected:
    // The cloud browser group ID. This parameter is required. Specify the ID of a browser group that is created under the current account.
    shared_ptr<string> browserInstanceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
