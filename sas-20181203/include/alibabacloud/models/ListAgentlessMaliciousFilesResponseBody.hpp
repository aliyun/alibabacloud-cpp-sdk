// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTLESSMALICIOUSFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTLESSMALICIOUSFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAgentlessMaliciousFilesResponseBodyList.hpp>
#include <alibabacloud/models/ListAgentlessMaliciousFilesResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAgentlessMaliciousFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentlessMaliciousFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentlessMaliciousFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAgentlessMaliciousFilesResponseBody() = default ;
    ListAgentlessMaliciousFilesResponseBody(const ListAgentlessMaliciousFilesResponseBody &) = default ;
    ListAgentlessMaliciousFilesResponseBody(ListAgentlessMaliciousFilesResponseBody &&) = default ;
    ListAgentlessMaliciousFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentlessMaliciousFilesResponseBody() = default ;
    ListAgentlessMaliciousFilesResponseBody& operator=(const ListAgentlessMaliciousFilesResponseBody &) = default ;
    ListAgentlessMaliciousFilesResponseBody& operator=(ListAgentlessMaliciousFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListAgentlessMaliciousFilesResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<ListAgentlessMaliciousFilesResponseBodyList>) };
    inline vector<ListAgentlessMaliciousFilesResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<ListAgentlessMaliciousFilesResponseBodyList>) };
    inline ListAgentlessMaliciousFilesResponseBody& setList(const vector<ListAgentlessMaliciousFilesResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListAgentlessMaliciousFilesResponseBody& setList(vector<ListAgentlessMaliciousFilesResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListAgentlessMaliciousFilesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListAgentlessMaliciousFilesResponseBodyPageInfo) };
    inline ListAgentlessMaliciousFilesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListAgentlessMaliciousFilesResponseBodyPageInfo) };
    inline ListAgentlessMaliciousFilesResponseBody& setPageInfo(const ListAgentlessMaliciousFilesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListAgentlessMaliciousFilesResponseBody& setPageInfo(ListAgentlessMaliciousFilesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentlessMaliciousFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The malicious files.
    std::shared_ptr<vector<ListAgentlessMaliciousFilesResponseBodyList>> list_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListAgentlessMaliciousFilesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
