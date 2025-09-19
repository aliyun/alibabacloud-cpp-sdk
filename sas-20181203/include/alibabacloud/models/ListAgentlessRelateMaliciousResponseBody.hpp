// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTLESSRELATEMALICIOUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTLESSRELATEMALICIOUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAgentlessRelateMaliciousResponseBodyList.hpp>
#include <alibabacloud/models/ListAgentlessRelateMaliciousResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAgentlessRelateMaliciousResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentlessRelateMaliciousResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentlessRelateMaliciousResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAgentlessRelateMaliciousResponseBody() = default ;
    ListAgentlessRelateMaliciousResponseBody(const ListAgentlessRelateMaliciousResponseBody &) = default ;
    ListAgentlessRelateMaliciousResponseBody(ListAgentlessRelateMaliciousResponseBody &&) = default ;
    ListAgentlessRelateMaliciousResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentlessRelateMaliciousResponseBody() = default ;
    ListAgentlessRelateMaliciousResponseBody& operator=(const ListAgentlessRelateMaliciousResponseBody &) = default ;
    ListAgentlessRelateMaliciousResponseBody& operator=(ListAgentlessRelateMaliciousResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListAgentlessRelateMaliciousResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<ListAgentlessRelateMaliciousResponseBodyList>) };
    inline vector<ListAgentlessRelateMaliciousResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<ListAgentlessRelateMaliciousResponseBodyList>) };
    inline ListAgentlessRelateMaliciousResponseBody& setList(const vector<ListAgentlessRelateMaliciousResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListAgentlessRelateMaliciousResponseBody& setList(vector<ListAgentlessRelateMaliciousResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListAgentlessRelateMaliciousResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListAgentlessRelateMaliciousResponseBodyPageInfo) };
    inline ListAgentlessRelateMaliciousResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListAgentlessRelateMaliciousResponseBodyPageInfo) };
    inline ListAgentlessRelateMaliciousResponseBody& setPageInfo(const ListAgentlessRelateMaliciousResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListAgentlessRelateMaliciousResponseBody& setPageInfo(ListAgentlessRelateMaliciousResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentlessRelateMaliciousResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of hosts that are associated with the risk.
    std::shared_ptr<vector<ListAgentlessRelateMaliciousResponseBodyList>> list_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListAgentlessRelateMaliciousResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
