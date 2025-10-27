// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTNODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetHoneypotNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneypotNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneypotNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    GetHoneypotNodeRequest() = default ;
    GetHoneypotNodeRequest(const GetHoneypotNodeRequest &) = default ;
    GetHoneypotNodeRequest(GetHoneypotNodeRequest &&) = default ;
    GetHoneypotNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneypotNodeRequest() = default ;
    GetHoneypotNodeRequest& operator=(const GetHoneypotNodeRequest &) = default ;
    GetHoneypotNodeRequest& operator=(GetHoneypotNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->nodeId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetHoneypotNodeRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetHoneypotNodeRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the management node.
    // 
    // > You can call the [ListHoneypotNode](~~ListHoneypotNode~~) operation to query the IDs of management nodes.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
