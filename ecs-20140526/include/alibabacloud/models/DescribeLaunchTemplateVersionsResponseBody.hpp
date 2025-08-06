// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAUNCHTEMPLATEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAUNCHTEMPLATEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeLaunchTemplateVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLaunchTemplateVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersionSets, launchTemplateVersionSets_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLaunchTemplateVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersionSets, launchTemplateVersionSets_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLaunchTemplateVersionsResponseBody() = default ;
    DescribeLaunchTemplateVersionsResponseBody(const DescribeLaunchTemplateVersionsResponseBody &) = default ;
    DescribeLaunchTemplateVersionsResponseBody(DescribeLaunchTemplateVersionsResponseBody &&) = default ;
    DescribeLaunchTemplateVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLaunchTemplateVersionsResponseBody() = default ;
    DescribeLaunchTemplateVersionsResponseBody& operator=(const DescribeLaunchTemplateVersionsResponseBody &) = default ;
    DescribeLaunchTemplateVersionsResponseBody& operator=(DescribeLaunchTemplateVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->launchTemplateVersionSets_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // launchTemplateVersionSets Field Functions 
    bool hasLaunchTemplateVersionSets() const { return this->launchTemplateVersionSets_ != nullptr;};
    void deleteLaunchTemplateVersionSets() { this->launchTemplateVersionSets_ = nullptr;};
    inline const DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets & launchTemplateVersionSets() const { DARABONBA_PTR_GET_CONST(launchTemplateVersionSets_, DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets) };
    inline DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets launchTemplateVersionSets() { DARABONBA_PTR_GET(launchTemplateVersionSets_, DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets) };
    inline DescribeLaunchTemplateVersionsResponseBody& setLaunchTemplateVersionSets(const DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets & launchTemplateVersionSets) { DARABONBA_PTR_SET_VALUE(launchTemplateVersionSets_, launchTemplateVersionSets) };
    inline DescribeLaunchTemplateVersionsResponseBody& setLaunchTemplateVersionSets(DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets && launchTemplateVersionSets) { DARABONBA_PTR_SET_RVALUE(launchTemplateVersionSets_, launchTemplateVersionSets) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLaunchTemplateVersionsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLaunchTemplateVersionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLaunchTemplateVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLaunchTemplateVersionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the launch template versions.
    std::shared_ptr<DescribeLaunchTemplateVersionsResponseBodyLaunchTemplateVersionSets> launchTemplateVersionSets_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of launch templates.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
