// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERSBYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERSBYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListListenersByConfigRequestExtGrayRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListListenersByConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenersByConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(ExtGrayRules, extGrayRules_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(RequestPars, requestPars_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenersByConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(ExtGrayRules, extGrayRules_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(RequestPars, requestPars_);
    };
    ListListenersByConfigRequest() = default ;
    ListListenersByConfigRequest(const ListListenersByConfigRequest &) = default ;
    ListListenersByConfigRequest(ListListenersByConfigRequest &&) = default ;
    ListListenersByConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenersByConfigRequest() = default ;
    ListListenersByConfigRequest& operator=(const ListListenersByConfigRequest &) = default ;
    ListListenersByConfigRequest& operator=(ListListenersByConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->dataId_ == nullptr && return this->extGrayRules_ == nullptr && return this->group_ == nullptr && return this->instanceId_ == nullptr && return this->namespaceId_ == nullptr
        && return this->requestPars_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListListenersByConfigRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline ListListenersByConfigRequest& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // extGrayRules Field Functions 
    bool hasExtGrayRules() const { return this->extGrayRules_ != nullptr;};
    void deleteExtGrayRules() { this->extGrayRules_ = nullptr;};
    inline const vector<ListListenersByConfigRequestExtGrayRules> & extGrayRules() const { DARABONBA_PTR_GET_CONST(extGrayRules_, vector<ListListenersByConfigRequestExtGrayRules>) };
    inline vector<ListListenersByConfigRequestExtGrayRules> extGrayRules() { DARABONBA_PTR_GET(extGrayRules_, vector<ListListenersByConfigRequestExtGrayRules>) };
    inline ListListenersByConfigRequest& setExtGrayRules(const vector<ListListenersByConfigRequestExtGrayRules> & extGrayRules) { DARABONBA_PTR_SET_VALUE(extGrayRules_, extGrayRules) };
    inline ListListenersByConfigRequest& setExtGrayRules(vector<ListListenersByConfigRequestExtGrayRules> && extGrayRules) { DARABONBA_PTR_SET_RVALUE(extGrayRules_, extGrayRules) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ListListenersByConfigRequest& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListListenersByConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListListenersByConfigRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string requestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline ListListenersByConfigRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the data.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataId_ = nullptr;
    std::shared_ptr<vector<ListListenersByConfigRequestExtGrayRules>> extGrayRules_ = nullptr;
    // The name of the group.
    // 
    // This parameter is required.
    std::shared_ptr<string> group_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The extended request parameters in the JSON format.
    std::shared_ptr<string> requestPars_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
