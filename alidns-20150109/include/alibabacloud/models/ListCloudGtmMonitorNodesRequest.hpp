// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMMONITORNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMMONITORNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmMonitorNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmMonitorNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ShowDisabledNodes, showDisabledNodes_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmMonitorNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ShowDisabledNodes, showDisabledNodes_);
    };
    ListCloudGtmMonitorNodesRequest() = default ;
    ListCloudGtmMonitorNodesRequest(const ListCloudGtmMonitorNodesRequest &) = default ;
    ListCloudGtmMonitorNodesRequest(ListCloudGtmMonitorNodesRequest &&) = default ;
    ListCloudGtmMonitorNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmMonitorNodesRequest() = default ;
    ListCloudGtmMonitorNodesRequest& operator=(const ListCloudGtmMonitorNodesRequest &) = default ;
    ListCloudGtmMonitorNodesRequest& operator=(ListCloudGtmMonitorNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->showDisabledNodes_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListCloudGtmMonitorNodesRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // showDisabledNodes Field Functions 
    bool hasShowDisabledNodes() const { return this->showDisabledNodes_ != nullptr;};
    void deleteShowDisabledNodes() { this->showDisabledNodes_ = nullptr;};
    inline bool getShowDisabledNodes() const { DARABONBA_PTR_GET_DEFAULT(showDisabledNodes_, false) };
    inline ListCloudGtmMonitorNodesRequest& setShowDisabledNodes(bool showDisabledNodes) { DARABONBA_PTR_SET_VALUE(showDisabledNodes_, showDisabledNodes) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   **zh-CN**: Chinese
    // *   **en-US** (default): English
    shared_ptr<string> acceptLanguage_ {};
    shared_ptr<bool> showDisabledNodes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
