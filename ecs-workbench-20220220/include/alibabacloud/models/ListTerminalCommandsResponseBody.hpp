// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTERMINALCOMMANDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTERMINALCOMMANDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTerminalCommandsResponseBodyTerminalCommandList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class ListTerminalCommandsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTerminalCommandsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TerminalCommandList, terminalCommandList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTerminalCommandsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TerminalCommandList, terminalCommandList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTerminalCommandsResponseBody() = default ;
    ListTerminalCommandsResponseBody(const ListTerminalCommandsResponseBody &) = default ;
    ListTerminalCommandsResponseBody(ListTerminalCommandsResponseBody &&) = default ;
    ListTerminalCommandsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTerminalCommandsResponseBody() = default ;
    ListTerminalCommandsResponseBody& operator=(const ListTerminalCommandsResponseBody &) = default ;
    ListTerminalCommandsResponseBody& operator=(ListTerminalCommandsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->terminalCommandList_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTerminalCommandsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTerminalCommandsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTerminalCommandsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // terminalCommandList Field Functions 
    bool hasTerminalCommandList() const { return this->terminalCommandList_ != nullptr;};
    void deleteTerminalCommandList() { this->terminalCommandList_ = nullptr;};
    inline const vector<ListTerminalCommandsResponseBodyTerminalCommandList> & terminalCommandList() const { DARABONBA_PTR_GET_CONST(terminalCommandList_, vector<ListTerminalCommandsResponseBodyTerminalCommandList>) };
    inline vector<ListTerminalCommandsResponseBodyTerminalCommandList> terminalCommandList() { DARABONBA_PTR_GET(terminalCommandList_, vector<ListTerminalCommandsResponseBodyTerminalCommandList>) };
    inline ListTerminalCommandsResponseBody& setTerminalCommandList(const vector<ListTerminalCommandsResponseBodyTerminalCommandList> & terminalCommandList) { DARABONBA_PTR_SET_VALUE(terminalCommandList_, terminalCommandList) };
    inline ListTerminalCommandsResponseBody& setTerminalCommandList(vector<ListTerminalCommandsResponseBodyTerminalCommandList> && terminalCommandList) { DARABONBA_PTR_SET_RVALUE(terminalCommandList_, terminalCommandList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTerminalCommandsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListTerminalCommandsResponseBodyTerminalCommandList>> terminalCommandList_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
