// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSASCONTAINERWEBDEFENSERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSASCONTAINERWEBDEFENSERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList.hpp>
#include <alibabacloud/models/ListSasContainerWebDefenseRuleResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListSasContainerWebDefenseRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSasContainerWebDefenseRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerWebDefenseRuleList, containerWebDefenseRuleList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSasContainerWebDefenseRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerWebDefenseRuleList, containerWebDefenseRuleList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSasContainerWebDefenseRuleResponseBody() = default ;
    ListSasContainerWebDefenseRuleResponseBody(const ListSasContainerWebDefenseRuleResponseBody &) = default ;
    ListSasContainerWebDefenseRuleResponseBody(ListSasContainerWebDefenseRuleResponseBody &&) = default ;
    ListSasContainerWebDefenseRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSasContainerWebDefenseRuleResponseBody() = default ;
    ListSasContainerWebDefenseRuleResponseBody& operator=(const ListSasContainerWebDefenseRuleResponseBody &) = default ;
    ListSasContainerWebDefenseRuleResponseBody& operator=(ListSasContainerWebDefenseRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->containerWebDefenseRuleList_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // containerWebDefenseRuleList Field Functions 
    bool hasContainerWebDefenseRuleList() const { return this->containerWebDefenseRuleList_ != nullptr;};
    void deleteContainerWebDefenseRuleList() { this->containerWebDefenseRuleList_ = nullptr;};
    inline const vector<ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList> & containerWebDefenseRuleList() const { DARABONBA_PTR_GET_CONST(containerWebDefenseRuleList_, vector<ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList>) };
    inline vector<ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList> containerWebDefenseRuleList() { DARABONBA_PTR_GET(containerWebDefenseRuleList_, vector<ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList>) };
    inline ListSasContainerWebDefenseRuleResponseBody& setContainerWebDefenseRuleList(const vector<ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList> & containerWebDefenseRuleList) { DARABONBA_PTR_SET_VALUE(containerWebDefenseRuleList_, containerWebDefenseRuleList) };
    inline ListSasContainerWebDefenseRuleResponseBody& setContainerWebDefenseRuleList(vector<ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList> && containerWebDefenseRuleList) { DARABONBA_PTR_SET_RVALUE(containerWebDefenseRuleList_, containerWebDefenseRuleList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListSasContainerWebDefenseRuleResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListSasContainerWebDefenseRuleResponseBodyPageInfo) };
    inline ListSasContainerWebDefenseRuleResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListSasContainerWebDefenseRuleResponseBodyPageInfo) };
    inline ListSasContainerWebDefenseRuleResponseBody& setPageInfo(const ListSasContainerWebDefenseRuleResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListSasContainerWebDefenseRuleResponseBody& setPageInfo(ListSasContainerWebDefenseRuleResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSasContainerWebDefenseRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The rules for container tamper-proofing.
    std::shared_ptr<vector<ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList>> containerWebDefenseRuleList_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListSasContainerWebDefenseRuleResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID, which is used to query logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
