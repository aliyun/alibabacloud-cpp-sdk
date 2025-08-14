// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHLIBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHLIBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSearchLibResponseBodySearchLibInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSearchLibResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchLibResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SearchLibInfoList, searchLibInfoList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchLibResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SearchLibInfoList, searchLibInfoList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListSearchLibResponseBody() = default ;
    ListSearchLibResponseBody(const ListSearchLibResponseBody &) = default ;
    ListSearchLibResponseBody(ListSearchLibResponseBody &&) = default ;
    ListSearchLibResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchLibResponseBody() = default ;
    ListSearchLibResponseBody& operator=(const ListSearchLibResponseBody &) = default ;
    ListSearchLibResponseBody& operator=(ListSearchLibResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->requestId_ != nullptr && this->searchLibInfoList_ != nullptr && this->success_ != nullptr && this->total_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSearchLibResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSearchLibResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchLibInfoList Field Functions 
    bool hasSearchLibInfoList() const { return this->searchLibInfoList_ != nullptr;};
    void deleteSearchLibInfoList() { this->searchLibInfoList_ = nullptr;};
    inline const vector<ListSearchLibResponseBodySearchLibInfoList> & searchLibInfoList() const { DARABONBA_PTR_GET_CONST(searchLibInfoList_, vector<ListSearchLibResponseBodySearchLibInfoList>) };
    inline vector<ListSearchLibResponseBodySearchLibInfoList> searchLibInfoList() { DARABONBA_PTR_GET(searchLibInfoList_, vector<ListSearchLibResponseBodySearchLibInfoList>) };
    inline ListSearchLibResponseBody& setSearchLibInfoList(const vector<ListSearchLibResponseBodySearchLibInfoList> & searchLibInfoList) { DARABONBA_PTR_SET_VALUE(searchLibInfoList_, searchLibInfoList) };
    inline ListSearchLibResponseBody& setSearchLibInfoList(vector<ListSearchLibResponseBodySearchLibInfoList> && searchLibInfoList) { DARABONBA_PTR_SET_RVALUE(searchLibInfoList_, searchLibInfoList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ListSearchLibResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListSearchLibResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code returned.
    std::shared_ptr<string> code_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Information about search libraries.
    std::shared_ptr<vector<ListSearchLibResponseBodySearchLibInfoList>> searchLibInfoList_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<string> success_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
