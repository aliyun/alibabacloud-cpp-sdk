// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECOGNITIONSAMPLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECOGNITIONSAMPLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRecognitionSamplesResponseBodySamples.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListRecognitionSamplesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecognitionSamplesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Samples, samples_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecognitionSamplesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Samples, samples_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRecognitionSamplesResponseBody() = default ;
    ListRecognitionSamplesResponseBody(const ListRecognitionSamplesResponseBody &) = default ;
    ListRecognitionSamplesResponseBody(ListRecognitionSamplesResponseBody &&) = default ;
    ListRecognitionSamplesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecognitionSamplesResponseBody() = default ;
    ListRecognitionSamplesResponseBody& operator=(const ListRecognitionSamplesResponseBody &) = default ;
    ListRecognitionSamplesResponseBody& operator=(ListRecognitionSamplesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->samples_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListRecognitionSamplesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRecognitionSamplesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecognitionSamplesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // samples Field Functions 
    bool hasSamples() const { return this->samples_ != nullptr;};
    void deleteSamples() { this->samples_ = nullptr;};
    inline const ListRecognitionSamplesResponseBodySamples & samples() const { DARABONBA_PTR_GET_CONST(samples_, ListRecognitionSamplesResponseBodySamples) };
    inline ListRecognitionSamplesResponseBodySamples samples() { DARABONBA_PTR_GET(samples_, ListRecognitionSamplesResponseBodySamples) };
    inline ListRecognitionSamplesResponseBody& setSamples(const ListRecognitionSamplesResponseBodySamples & samples) { DARABONBA_PTR_SET_VALUE(samples_, samples) };
    inline ListRecognitionSamplesResponseBody& setSamples(ListRecognitionSamplesResponseBodySamples && samples) { DARABONBA_PTR_SET_RVALUE(samples_, samples) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRecognitionSamplesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The samples.
    std::shared_ptr<ListRecognitionSamplesResponseBodySamples> samples_ = nullptr;
    // The total number of samples.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
