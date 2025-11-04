// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECOGNITIONLIBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECOGNITIONLIBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRecognitionLibsResponseBodyLibs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListRecognitionLibsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecognitionLibsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Libs, libs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecognitionLibsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Libs, libs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRecognitionLibsResponseBody() = default ;
    ListRecognitionLibsResponseBody(const ListRecognitionLibsResponseBody &) = default ;
    ListRecognitionLibsResponseBody(ListRecognitionLibsResponseBody &&) = default ;
    ListRecognitionLibsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecognitionLibsResponseBody() = default ;
    ListRecognitionLibsResponseBody& operator=(const ListRecognitionLibsResponseBody &) = default ;
    ListRecognitionLibsResponseBody& operator=(ListRecognitionLibsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->libs_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // libs Field Functions 
    bool hasLibs() const { return this->libs_ != nullptr;};
    void deleteLibs() { this->libs_ = nullptr;};
    inline const ListRecognitionLibsResponseBodyLibs & libs() const { DARABONBA_PTR_GET_CONST(libs_, ListRecognitionLibsResponseBodyLibs) };
    inline ListRecognitionLibsResponseBodyLibs libs() { DARABONBA_PTR_GET(libs_, ListRecognitionLibsResponseBodyLibs) };
    inline ListRecognitionLibsResponseBody& setLibs(const ListRecognitionLibsResponseBodyLibs & libs) { DARABONBA_PTR_SET_VALUE(libs_, libs) };
    inline ListRecognitionLibsResponseBody& setLibs(ListRecognitionLibsResponseBodyLibs && libs) { DARABONBA_PTR_SET_RVALUE(libs_, libs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListRecognitionLibsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRecognitionLibsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecognitionLibsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRecognitionLibsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The recognition libraries.
    std::shared_ptr<ListRecognitionLibsResponseBodyLibs> libs_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
