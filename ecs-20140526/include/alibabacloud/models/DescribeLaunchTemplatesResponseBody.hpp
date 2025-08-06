// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAUNCHTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAUNCHTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLaunchTemplatesResponseBodyLaunchTemplateSets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeLaunchTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLaunchTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LaunchTemplateSets, launchTemplateSets_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLaunchTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LaunchTemplateSets, launchTemplateSets_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLaunchTemplatesResponseBody() = default ;
    DescribeLaunchTemplatesResponseBody(const DescribeLaunchTemplatesResponseBody &) = default ;
    DescribeLaunchTemplatesResponseBody(DescribeLaunchTemplatesResponseBody &&) = default ;
    DescribeLaunchTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLaunchTemplatesResponseBody() = default ;
    DescribeLaunchTemplatesResponseBody& operator=(const DescribeLaunchTemplatesResponseBody &) = default ;
    DescribeLaunchTemplatesResponseBody& operator=(DescribeLaunchTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->launchTemplateSets_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // launchTemplateSets Field Functions 
    bool hasLaunchTemplateSets() const { return this->launchTemplateSets_ != nullptr;};
    void deleteLaunchTemplateSets() { this->launchTemplateSets_ = nullptr;};
    inline const DescribeLaunchTemplatesResponseBodyLaunchTemplateSets & launchTemplateSets() const { DARABONBA_PTR_GET_CONST(launchTemplateSets_, DescribeLaunchTemplatesResponseBodyLaunchTemplateSets) };
    inline DescribeLaunchTemplatesResponseBodyLaunchTemplateSets launchTemplateSets() { DARABONBA_PTR_GET(launchTemplateSets_, DescribeLaunchTemplatesResponseBodyLaunchTemplateSets) };
    inline DescribeLaunchTemplatesResponseBody& setLaunchTemplateSets(const DescribeLaunchTemplatesResponseBodyLaunchTemplateSets & launchTemplateSets) { DARABONBA_PTR_SET_VALUE(launchTemplateSets_, launchTemplateSets) };
    inline DescribeLaunchTemplatesResponseBody& setLaunchTemplateSets(DescribeLaunchTemplatesResponseBodyLaunchTemplateSets && launchTemplateSets) { DARABONBA_PTR_SET_RVALUE(launchTemplateSets_, launchTemplateSets) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLaunchTemplatesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLaunchTemplatesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLaunchTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLaunchTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried launch templates.
    std::shared_ptr<DescribeLaunchTemplatesResponseBodyLaunchTemplateSets> launchTemplateSets_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of launch templates.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
