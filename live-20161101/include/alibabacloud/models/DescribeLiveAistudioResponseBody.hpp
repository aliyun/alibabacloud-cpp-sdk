// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAISTUDIORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAISTUDIORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveAIStudioResponseBodyStudioConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAIStudioResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAIStudioResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StudioConfigs, studioConfigs_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAIStudioResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StudioConfigs, studioConfigs_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeLiveAIStudioResponseBody() = default ;
    DescribeLiveAIStudioResponseBody(const DescribeLiveAIStudioResponseBody &) = default ;
    DescribeLiveAIStudioResponseBody(DescribeLiveAIStudioResponseBody &&) = default ;
    DescribeLiveAIStudioResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAIStudioResponseBody() = default ;
    DescribeLiveAIStudioResponseBody& operator=(const DescribeLiveAIStudioResponseBody &) = default ;
    DescribeLiveAIStudioResponseBody& operator=(DescribeLiveAIStudioResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->studioConfigs_ != nullptr && this->total_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLiveAIStudioResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLiveAIStudioResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveAIStudioResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // studioConfigs Field Functions 
    bool hasStudioConfigs() const { return this->studioConfigs_ != nullptr;};
    void deleteStudioConfigs() { this->studioConfigs_ = nullptr;};
    inline const DescribeLiveAIStudioResponseBodyStudioConfigs & studioConfigs() const { DARABONBA_PTR_GET_CONST(studioConfigs_, DescribeLiveAIStudioResponseBodyStudioConfigs) };
    inline DescribeLiveAIStudioResponseBodyStudioConfigs studioConfigs() { DARABONBA_PTR_GET(studioConfigs_, DescribeLiveAIStudioResponseBodyStudioConfigs) };
    inline DescribeLiveAIStudioResponseBody& setStudioConfigs(const DescribeLiveAIStudioResponseBodyStudioConfigs & studioConfigs) { DARABONBA_PTR_SET_VALUE(studioConfigs_, studioConfigs) };
    inline DescribeLiveAIStudioResponseBody& setStudioConfigs(DescribeLiveAIStudioResponseBodyStudioConfigs && studioConfigs) { DARABONBA_PTR_SET_RVALUE(studioConfigs_, studioConfigs) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeLiveAIStudioResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Valid values: 1 to 50.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The virtual studio templates.
    std::shared_ptr<DescribeLiveAIStudioResponseBodyStudioConfigs> studioConfigs_ = nullptr;
    // The total number of templates.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
