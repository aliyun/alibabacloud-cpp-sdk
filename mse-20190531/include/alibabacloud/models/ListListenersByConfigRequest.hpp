// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERSBYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERSBYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ExtGrayRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExtGrayRules& obj) { 
        DARABONBA_PTR_TO_JSON(GrayRule, grayRule_);
        DARABONBA_PTR_TO_JSON(GrayRuleName, grayRuleName_);
        DARABONBA_PTR_TO_JSON(GrayRulePriority, grayRulePriority_);
        DARABONBA_PTR_TO_JSON(GrayRuleType, grayRuleType_);
      };
      friend void from_json(const Darabonba::Json& j, ExtGrayRules& obj) { 
        DARABONBA_PTR_FROM_JSON(GrayRule, grayRule_);
        DARABONBA_PTR_FROM_JSON(GrayRuleName, grayRuleName_);
        DARABONBA_PTR_FROM_JSON(GrayRulePriority, grayRulePriority_);
        DARABONBA_PTR_FROM_JSON(GrayRuleType, grayRuleType_);
      };
      ExtGrayRules() = default ;
      ExtGrayRules(const ExtGrayRules &) = default ;
      ExtGrayRules(ExtGrayRules &&) = default ;
      ExtGrayRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExtGrayRules() = default ;
      ExtGrayRules& operator=(const ExtGrayRules &) = default ;
      ExtGrayRules& operator=(ExtGrayRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->grayRule_ == nullptr
        && this->grayRuleName_ == nullptr && this->grayRulePriority_ == nullptr && this->grayRuleType_ == nullptr; };
      // grayRule Field Functions 
      bool hasGrayRule() const { return this->grayRule_ != nullptr;};
      void deleteGrayRule() { this->grayRule_ = nullptr;};
      inline string getGrayRule() const { DARABONBA_PTR_GET_DEFAULT(grayRule_, "") };
      inline ExtGrayRules& setGrayRule(string grayRule) { DARABONBA_PTR_SET_VALUE(grayRule_, grayRule) };


      // grayRuleName Field Functions 
      bool hasGrayRuleName() const { return this->grayRuleName_ != nullptr;};
      void deleteGrayRuleName() { this->grayRuleName_ = nullptr;};
      inline string getGrayRuleName() const { DARABONBA_PTR_GET_DEFAULT(grayRuleName_, "") };
      inline ExtGrayRules& setGrayRuleName(string grayRuleName) { DARABONBA_PTR_SET_VALUE(grayRuleName_, grayRuleName) };


      // grayRulePriority Field Functions 
      bool hasGrayRulePriority() const { return this->grayRulePriority_ != nullptr;};
      void deleteGrayRulePriority() { this->grayRulePriority_ = nullptr;};
      inline int32_t getGrayRulePriority() const { DARABONBA_PTR_GET_DEFAULT(grayRulePriority_, 0) };
      inline ExtGrayRules& setGrayRulePriority(int32_t grayRulePriority) { DARABONBA_PTR_SET_VALUE(grayRulePriority_, grayRulePriority) };


      // grayRuleType Field Functions 
      bool hasGrayRuleType() const { return this->grayRuleType_ != nullptr;};
      void deleteGrayRuleType() { this->grayRuleType_ = nullptr;};
      inline string getGrayRuleType() const { DARABONBA_PTR_GET_DEFAULT(grayRuleType_, "") };
      inline ExtGrayRules& setGrayRuleType(string grayRuleType) { DARABONBA_PTR_SET_VALUE(grayRuleType_, grayRuleType) };


    protected:
      shared_ptr<string> grayRule_ {};
      shared_ptr<string> grayRuleName_ {};
      shared_ptr<int32_t> grayRulePriority_ {};
      shared_ptr<string> grayRuleType_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->dataId_ == nullptr && this->extGrayRules_ == nullptr && this->group_ == nullptr && this->instanceId_ == nullptr && this->namespaceId_ == nullptr
        && this->requestPars_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListListenersByConfigRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline ListListenersByConfigRequest& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // extGrayRules Field Functions 
    bool hasExtGrayRules() const { return this->extGrayRules_ != nullptr;};
    void deleteExtGrayRules() { this->extGrayRules_ = nullptr;};
    inline const vector<ListListenersByConfigRequest::ExtGrayRules> & getExtGrayRules() const { DARABONBA_PTR_GET_CONST(extGrayRules_, vector<ListListenersByConfigRequest::ExtGrayRules>) };
    inline vector<ListListenersByConfigRequest::ExtGrayRules> getExtGrayRules() { DARABONBA_PTR_GET(extGrayRules_, vector<ListListenersByConfigRequest::ExtGrayRules>) };
    inline ListListenersByConfigRequest& setExtGrayRules(const vector<ListListenersByConfigRequest::ExtGrayRules> & extGrayRules) { DARABONBA_PTR_SET_VALUE(extGrayRules_, extGrayRules) };
    inline ListListenersByConfigRequest& setExtGrayRules(vector<ListListenersByConfigRequest::ExtGrayRules> && extGrayRules) { DARABONBA_PTR_SET_RVALUE(extGrayRules_, extGrayRules) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ListListenersByConfigRequest& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListListenersByConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListListenersByConfigRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string getRequestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline ListListenersByConfigRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The ID of the data.
    // 
    // This parameter is required.
    shared_ptr<string> dataId_ {};
    shared_ptr<vector<ListListenersByConfigRequest::ExtGrayRules>> extGrayRules_ {};
    // The name of the group.
    // 
    // This parameter is required.
    shared_ptr<string> group_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the namespace.
    shared_ptr<string> namespaceId_ {};
    // The extended request parameters in the JSON format.
    shared_ptr<string> requestPars_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
