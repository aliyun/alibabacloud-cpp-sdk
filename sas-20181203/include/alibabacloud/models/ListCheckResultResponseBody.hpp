// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCheckResultResponseBodyChecks.hpp>
#include <alibabacloud/models/ListCheckResultResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Checks, checks_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Checks, checks_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCheckResultResponseBody() = default ;
    ListCheckResultResponseBody(const ListCheckResultResponseBody &) = default ;
    ListCheckResultResponseBody(ListCheckResultResponseBody &&) = default ;
    ListCheckResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckResultResponseBody() = default ;
    ListCheckResultResponseBody& operator=(const ListCheckResultResponseBody &) = default ;
    ListCheckResultResponseBody& operator=(ListCheckResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checks_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // checks Field Functions 
    bool hasChecks() const { return this->checks_ != nullptr;};
    void deleteChecks() { this->checks_ = nullptr;};
    inline const vector<ListCheckResultResponseBodyChecks> & checks() const { DARABONBA_PTR_GET_CONST(checks_, vector<ListCheckResultResponseBodyChecks>) };
    inline vector<ListCheckResultResponseBodyChecks> checks() { DARABONBA_PTR_GET(checks_, vector<ListCheckResultResponseBodyChecks>) };
    inline ListCheckResultResponseBody& setChecks(const vector<ListCheckResultResponseBodyChecks> & checks) { DARABONBA_PTR_SET_VALUE(checks_, checks) };
    inline ListCheckResultResponseBody& setChecks(vector<ListCheckResultResponseBodyChecks> && checks) { DARABONBA_PTR_SET_RVALUE(checks_, checks) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListCheckResultResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListCheckResultResponseBodyPageInfo) };
    inline ListCheckResultResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListCheckResultResponseBodyPageInfo) };
    inline ListCheckResultResponseBody& setPageInfo(const ListCheckResultResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCheckResultResponseBody& setPageInfo(ListCheckResultResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCheckResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The check items.
    std::shared_ptr<vector<ListCheckResultResponseBodyChecks>> checks_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListCheckResultResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
