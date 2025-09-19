// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAEGISCONTAINERPLUGINRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAEGISCONTAINERPLUGINRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAegisContainerPluginRuleResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListAegisContainerPluginRuleResponseBodyRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAegisContainerPluginRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAegisContainerPluginRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
    };
    friend void from_json(const Darabonba::Json& j, ListAegisContainerPluginRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
    };
    ListAegisContainerPluginRuleResponseBody() = default ;
    ListAegisContainerPluginRuleResponseBody(const ListAegisContainerPluginRuleResponseBody &) = default ;
    ListAegisContainerPluginRuleResponseBody(ListAegisContainerPluginRuleResponseBody &&) = default ;
    ListAegisContainerPluginRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAegisContainerPluginRuleResponseBody() = default ;
    ListAegisContainerPluginRuleResponseBody& operator=(const ListAegisContainerPluginRuleResponseBody &) = default ;
    ListAegisContainerPluginRuleResponseBody& operator=(ListAegisContainerPluginRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->requestId_ != nullptr && this->ruleList_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListAegisContainerPluginRuleResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListAegisContainerPluginRuleResponseBodyPageInfo) };
    inline ListAegisContainerPluginRuleResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListAegisContainerPluginRuleResponseBodyPageInfo) };
    inline ListAegisContainerPluginRuleResponseBody& setPageInfo(const ListAegisContainerPluginRuleResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListAegisContainerPluginRuleResponseBody& setPageInfo(ListAegisContainerPluginRuleResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAegisContainerPluginRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<ListAegisContainerPluginRuleResponseBodyRuleList> & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<ListAegisContainerPluginRuleResponseBodyRuleList>) };
    inline vector<ListAegisContainerPluginRuleResponseBodyRuleList> ruleList() { DARABONBA_PTR_GET(ruleList_, vector<ListAegisContainerPluginRuleResponseBodyRuleList>) };
    inline ListAegisContainerPluginRuleResponseBody& setRuleList(const vector<ListAegisContainerPluginRuleResponseBodyRuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline ListAegisContainerPluginRuleResponseBody& setRuleList(vector<ListAegisContainerPluginRuleResponseBodyRuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


  protected:
    // The pagination information.
    std::shared_ptr<ListAegisContainerPluginRuleResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The rules.
    std::shared_ptr<vector<ListAegisContainerPluginRuleResponseBodyRuleList>> ruleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
