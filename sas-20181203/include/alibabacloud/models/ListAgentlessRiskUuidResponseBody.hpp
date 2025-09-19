// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTLESSRISKUUIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTLESSRISKUUIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAgentlessRiskUuidResponseBodyList.hpp>
#include <alibabacloud/models/ListAgentlessRiskUuidResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAgentlessRiskUuidResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentlessRiskUuidResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentlessRiskUuidResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAgentlessRiskUuidResponseBody() = default ;
    ListAgentlessRiskUuidResponseBody(const ListAgentlessRiskUuidResponseBody &) = default ;
    ListAgentlessRiskUuidResponseBody(ListAgentlessRiskUuidResponseBody &&) = default ;
    ListAgentlessRiskUuidResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentlessRiskUuidResponseBody() = default ;
    ListAgentlessRiskUuidResponseBody& operator=(const ListAgentlessRiskUuidResponseBody &) = default ;
    ListAgentlessRiskUuidResponseBody& operator=(ListAgentlessRiskUuidResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListAgentlessRiskUuidResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<ListAgentlessRiskUuidResponseBodyList>) };
    inline vector<ListAgentlessRiskUuidResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<ListAgentlessRiskUuidResponseBodyList>) };
    inline ListAgentlessRiskUuidResponseBody& setList(const vector<ListAgentlessRiskUuidResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListAgentlessRiskUuidResponseBody& setList(vector<ListAgentlessRiskUuidResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListAgentlessRiskUuidResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListAgentlessRiskUuidResponseBodyPageInfo) };
    inline ListAgentlessRiskUuidResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListAgentlessRiskUuidResponseBodyPageInfo) };
    inline ListAgentlessRiskUuidResponseBody& setPageInfo(const ListAgentlessRiskUuidResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListAgentlessRiskUuidResponseBody& setPageInfo(ListAgentlessRiskUuidResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentlessRiskUuidResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the hosts.
    std::shared_ptr<vector<ListAgentlessRiskUuidResponseBodyList>> list_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListAgentlessRiskUuidResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
