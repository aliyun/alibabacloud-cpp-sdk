// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPRESSFILEDETECTRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPRESSFILEDETECTRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCompressFileDetectResultResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/ListCompressFileDetectResultResponseBodyResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCompressFileDetectResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCompressFileDetectResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultList, resultList_);
    };
    friend void from_json(const Darabonba::Json& j, ListCompressFileDetectResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultList, resultList_);
    };
    ListCompressFileDetectResultResponseBody() = default ;
    ListCompressFileDetectResultResponseBody(const ListCompressFileDetectResultResponseBody &) = default ;
    ListCompressFileDetectResultResponseBody(ListCompressFileDetectResultResponseBody &&) = default ;
    ListCompressFileDetectResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCompressFileDetectResultResponseBody() = default ;
    ListCompressFileDetectResultResponseBody& operator=(const ListCompressFileDetectResultResponseBody &) = default ;
    ListCompressFileDetectResultResponseBody& operator=(ListCompressFileDetectResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->requestId_ != nullptr && this->resultList_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListCompressFileDetectResultResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListCompressFileDetectResultResponseBodyPageInfo) };
    inline ListCompressFileDetectResultResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListCompressFileDetectResultResponseBodyPageInfo) };
    inline ListCompressFileDetectResultResponseBody& setPageInfo(const ListCompressFileDetectResultResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCompressFileDetectResultResponseBody& setPageInfo(ListCompressFileDetectResultResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCompressFileDetectResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultList Field Functions 
    bool hasResultList() const { return this->resultList_ != nullptr;};
    void deleteResultList() { this->resultList_ = nullptr;};
    inline const vector<ListCompressFileDetectResultResponseBodyResultList> & resultList() const { DARABONBA_PTR_GET_CONST(resultList_, vector<ListCompressFileDetectResultResponseBodyResultList>) };
    inline vector<ListCompressFileDetectResultResponseBodyResultList> resultList() { DARABONBA_PTR_GET(resultList_, vector<ListCompressFileDetectResultResponseBodyResultList>) };
    inline ListCompressFileDetectResultResponseBody& setResultList(const vector<ListCompressFileDetectResultResponseBodyResultList> & resultList) { DARABONBA_PTR_SET_VALUE(resultList_, resultList) };
    inline ListCompressFileDetectResultResponseBody& setResultList(vector<ListCompressFileDetectResultResponseBodyResultList> && resultList) { DARABONBA_PTR_SET_RVALUE(resultList_, resultList) };


  protected:
    // The pagination information.
    std::shared_ptr<ListCompressFileDetectResultResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The detection results of files.
    std::shared_ptr<vector<ListCompressFileDetectResultResponseBodyResultList>> resultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
