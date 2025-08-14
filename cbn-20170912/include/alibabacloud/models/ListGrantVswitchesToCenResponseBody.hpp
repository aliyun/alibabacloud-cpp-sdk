// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGRANTVSWITCHESTOCENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGRANTVSWITCHESTOCENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGrantVSwitchesToCenResponseBodyVSwitches.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListGrantVSwitchesToCenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGrantVSwitchesToCenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
    };
    friend void from_json(const Darabonba::Json& j, ListGrantVSwitchesToCenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
    };
    ListGrantVSwitchesToCenResponseBody() = default ;
    ListGrantVSwitchesToCenResponseBody(const ListGrantVSwitchesToCenResponseBody &) = default ;
    ListGrantVSwitchesToCenResponseBody(ListGrantVSwitchesToCenResponseBody &&) = default ;
    ListGrantVSwitchesToCenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGrantVSwitchesToCenResponseBody() = default ;
    ListGrantVSwitchesToCenResponseBody& operator=(const ListGrantVSwitchesToCenResponseBody &) = default ;
    ListGrantVSwitchesToCenResponseBody& operator=(ListGrantVSwitchesToCenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->vSwitches_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListGrantVSwitchesToCenResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListGrantVSwitchesToCenResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGrantVSwitchesToCenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListGrantVSwitchesToCenResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const vector<ListGrantVSwitchesToCenResponseBodyVSwitches> & vSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<ListGrantVSwitchesToCenResponseBodyVSwitches>) };
    inline vector<ListGrantVSwitchesToCenResponseBodyVSwitches> vSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<ListGrantVSwitchesToCenResponseBodyVSwitches>) };
    inline ListGrantVSwitchesToCenResponseBody& setVSwitches(const vector<ListGrantVSwitchesToCenResponseBodyVSwitches> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline ListGrantVSwitchesToCenResponseBody& setVSwitches(vector<ListGrantVSwitchesToCenResponseBodyVSwitches> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The list of vSwitches.
    std::shared_ptr<vector<ListGrantVSwitchesToCenResponseBodyVSwitches>> vSwitches_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
