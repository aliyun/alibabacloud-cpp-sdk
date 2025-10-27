// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUESTNETWORKRESTRICTEDURLS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUESTNETWORKRESTRICTEDURLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs& obj) { 
      DARABONBA_PTR_TO_JSON(RestrictedURLId, restrictedURLId_);
      DARABONBA_PTR_TO_JSON(URL, URL_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs& obj) { 
      DARABONBA_PTR_FROM_JSON(RestrictedURLId, restrictedURLId_);
      DARABONBA_PTR_FROM_JSON(URL, URL_);
    };
    ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs() = default ;
    ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs(const ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs &) = default ;
    ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs(ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs &&) = default ;
    ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs() = default ;
    ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs& operator=(const ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs &) = default ;
    ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs& operator=(ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->restrictedURLId_ == nullptr
        && return this->URL_ == nullptr; };
    // restrictedURLId Field Functions 
    bool hasRestrictedURLId() const { return this->restrictedURLId_ != nullptr;};
    void deleteRestrictedURLId() { this->restrictedURLId_ = nullptr;};
    inline string restrictedURLId() const { DARABONBA_PTR_GET_DEFAULT(restrictedURLId_, "") };
    inline ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs& setRestrictedURLId(string restrictedURLId) { DARABONBA_PTR_SET_VALUE(restrictedURLId_, restrictedURLId) };


    // URL Field Functions 
    bool hasURL() const { return this->URL_ != nullptr;};
    void deleteURL() { this->URL_ = nullptr;};
    inline string URL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
    inline ModifyBrowserInstanceGroupRequestNetworkRestrictedURLs& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


  protected:
    std::shared_ptr<string> restrictedURLId_ = nullptr;
    std::shared_ptr<string> URL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
