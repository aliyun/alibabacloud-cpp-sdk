// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEPROTECTRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEPROTECTRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFileProtectRuleResponseBodyFileProtectList.hpp>
#include <alibabacloud/models/ListFileProtectRuleResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListFileProtectRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileProtectRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileProtectList, fileProtectList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileProtectRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileProtectList, fileProtectList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFileProtectRuleResponseBody() = default ;
    ListFileProtectRuleResponseBody(const ListFileProtectRuleResponseBody &) = default ;
    ListFileProtectRuleResponseBody(ListFileProtectRuleResponseBody &&) = default ;
    ListFileProtectRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileProtectRuleResponseBody() = default ;
    ListFileProtectRuleResponseBody& operator=(const ListFileProtectRuleResponseBody &) = default ;
    ListFileProtectRuleResponseBody& operator=(ListFileProtectRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileProtectList_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // fileProtectList Field Functions 
    bool hasFileProtectList() const { return this->fileProtectList_ != nullptr;};
    void deleteFileProtectList() { this->fileProtectList_ = nullptr;};
    inline const vector<ListFileProtectRuleResponseBodyFileProtectList> & fileProtectList() const { DARABONBA_PTR_GET_CONST(fileProtectList_, vector<ListFileProtectRuleResponseBodyFileProtectList>) };
    inline vector<ListFileProtectRuleResponseBodyFileProtectList> fileProtectList() { DARABONBA_PTR_GET(fileProtectList_, vector<ListFileProtectRuleResponseBodyFileProtectList>) };
    inline ListFileProtectRuleResponseBody& setFileProtectList(const vector<ListFileProtectRuleResponseBodyFileProtectList> & fileProtectList) { DARABONBA_PTR_SET_VALUE(fileProtectList_, fileProtectList) };
    inline ListFileProtectRuleResponseBody& setFileProtectList(vector<ListFileProtectRuleResponseBodyFileProtectList> && fileProtectList) { DARABONBA_PTR_SET_RVALUE(fileProtectList_, fileProtectList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListFileProtectRuleResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListFileProtectRuleResponseBodyPageInfo) };
    inline ListFileProtectRuleResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListFileProtectRuleResponseBodyPageInfo) };
    inline ListFileProtectRuleResponseBody& setPageInfo(const ListFileProtectRuleResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListFileProtectRuleResponseBody& setPageInfo(ListFileProtectRuleResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFileProtectRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of returned data.
    std::shared_ptr<vector<ListFileProtectRuleResponseBodyFileProtectList>> fileProtectList_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListFileProtectRuleResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
