// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEHONEYPOTNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEHONEYPOTNODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpgradeHoneypotNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeHoneypotNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowHoneypotAccessInternet, allowHoneypotAccessInternet_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeHoneypotNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowHoneypotAccessInternet, allowHoneypotAccessInternet_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    UpgradeHoneypotNodeRequest() = default ;
    UpgradeHoneypotNodeRequest(const UpgradeHoneypotNodeRequest &) = default ;
    UpgradeHoneypotNodeRequest(UpgradeHoneypotNodeRequest &&) = default ;
    UpgradeHoneypotNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeHoneypotNodeRequest() = default ;
    UpgradeHoneypotNodeRequest& operator=(const UpgradeHoneypotNodeRequest &) = default ;
    UpgradeHoneypotNodeRequest& operator=(UpgradeHoneypotNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowHoneypotAccessInternet_ == nullptr
        && return this->lang_ == nullptr && return this->nodeId_ == nullptr; };
    // allowHoneypotAccessInternet Field Functions 
    bool hasAllowHoneypotAccessInternet() const { return this->allowHoneypotAccessInternet_ != nullptr;};
    void deleteAllowHoneypotAccessInternet() { this->allowHoneypotAccessInternet_ = nullptr;};
    inline bool allowHoneypotAccessInternet() const { DARABONBA_PTR_GET_DEFAULT(allowHoneypotAccessInternet_, false) };
    inline UpgradeHoneypotNodeRequest& setAllowHoneypotAccessInternet(bool allowHoneypotAccessInternet) { DARABONBA_PTR_SET_VALUE(allowHoneypotAccessInternet_, allowHoneypotAccessInternet) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpgradeHoneypotNodeRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline UpgradeHoneypotNodeRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // Specifies whether to allow the honeypot to access the Internet. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> allowHoneypotAccessInternet_ = nullptr;
    // The language of the content within the request and response.
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the management node that you want to upgrade.
    // 
    // >  You can call the [ListHoneypotNode](~~ListHoneypotNode~~) operation to obtain the ID.
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
