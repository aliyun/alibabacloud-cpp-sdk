// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKINSTANCERESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKINSTANCERESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCheckInstanceResultResponseBodyBasicData.hpp>
#include <alibabacloud/models/ListCheckInstanceResultResponseBodyColumns.hpp>
#include <alibabacloud/models/ListCheckInstanceResultResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckInstanceResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckInstanceResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BasicData, basicData_);
      DARABONBA_PTR_TO_JSON(Checks, checks_);
      DARABONBA_PTR_TO_JSON(Columns, columns_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckInstanceResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BasicData, basicData_);
      DARABONBA_PTR_FROM_JSON(Checks, checks_);
      DARABONBA_PTR_FROM_JSON(Columns, columns_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCheckInstanceResultResponseBody() = default ;
    ListCheckInstanceResultResponseBody(const ListCheckInstanceResultResponseBody &) = default ;
    ListCheckInstanceResultResponseBody(ListCheckInstanceResultResponseBody &&) = default ;
    ListCheckInstanceResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckInstanceResultResponseBody() = default ;
    ListCheckInstanceResultResponseBody& operator=(const ListCheckInstanceResultResponseBody &) = default ;
    ListCheckInstanceResultResponseBody& operator=(ListCheckInstanceResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basicData_ == nullptr
        && return this->checks_ == nullptr && return this->columns_ == nullptr && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // basicData Field Functions 
    bool hasBasicData() const { return this->basicData_ != nullptr;};
    void deleteBasicData() { this->basicData_ = nullptr;};
    inline const vector<ListCheckInstanceResultResponseBodyBasicData> & basicData() const { DARABONBA_PTR_GET_CONST(basicData_, vector<ListCheckInstanceResultResponseBodyBasicData>) };
    inline vector<ListCheckInstanceResultResponseBodyBasicData> basicData() { DARABONBA_PTR_GET(basicData_, vector<ListCheckInstanceResultResponseBodyBasicData>) };
    inline ListCheckInstanceResultResponseBody& setBasicData(const vector<ListCheckInstanceResultResponseBodyBasicData> & basicData) { DARABONBA_PTR_SET_VALUE(basicData_, basicData) };
    inline ListCheckInstanceResultResponseBody& setBasicData(vector<ListCheckInstanceResultResponseBodyBasicData> && basicData) { DARABONBA_PTR_SET_RVALUE(basicData_, basicData) };


    // checks Field Functions 
    bool hasChecks() const { return this->checks_ != nullptr;};
    void deleteChecks() { this->checks_ = nullptr;};
    inline const vector<Darabonba::Json> & checks() const { DARABONBA_PTR_GET_CONST(checks_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> checks() { DARABONBA_PTR_GET(checks_, vector<Darabonba::Json>) };
    inline ListCheckInstanceResultResponseBody& setChecks(const vector<Darabonba::Json> & checks) { DARABONBA_PTR_SET_VALUE(checks_, checks) };
    inline ListCheckInstanceResultResponseBody& setChecks(vector<Darabonba::Json> && checks) { DARABONBA_PTR_SET_RVALUE(checks_, checks) };


    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<ListCheckInstanceResultResponseBodyColumns> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<ListCheckInstanceResultResponseBodyColumns>) };
    inline vector<ListCheckInstanceResultResponseBodyColumns> columns() { DARABONBA_PTR_GET(columns_, vector<ListCheckInstanceResultResponseBodyColumns>) };
    inline ListCheckInstanceResultResponseBody& setColumns(const vector<ListCheckInstanceResultResponseBodyColumns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline ListCheckInstanceResultResponseBody& setColumns(vector<ListCheckInstanceResultResponseBodyColumns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListCheckInstanceResultResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListCheckInstanceResultResponseBodyPageInfo) };
    inline ListCheckInstanceResultResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListCheckInstanceResultResponseBodyPageInfo) };
    inline ListCheckInstanceResultResponseBody& setPageInfo(const ListCheckInstanceResultResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCheckInstanceResultResponseBody& setPageInfo(ListCheckInstanceResultResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCheckInstanceResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The basic information about the affected instances.
    std::shared_ptr<vector<ListCheckInstanceResultResponseBodyBasicData>> basicData_ = nullptr;
    // The extended information about the instances.
    std::shared_ptr<vector<Darabonba::Json>> checks_ = nullptr;
    // The metadata information about the search conditions that can be used to filter instances.
    std::shared_ptr<vector<ListCheckInstanceResultResponseBodyColumns>> columns_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListCheckInstanceResultResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
