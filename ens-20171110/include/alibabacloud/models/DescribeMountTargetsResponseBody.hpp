// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMountTargetsResponseBodyMountTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeMountTargetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMountTargetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MountTargets, mountTargets_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMountTargetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MountTargets, mountTargets_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeMountTargetsResponseBody() = default ;
    DescribeMountTargetsResponseBody(const DescribeMountTargetsResponseBody &) = default ;
    DescribeMountTargetsResponseBody(DescribeMountTargetsResponseBody &&) = default ;
    DescribeMountTargetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMountTargetsResponseBody() = default ;
    DescribeMountTargetsResponseBody& operator=(const DescribeMountTargetsResponseBody &) = default ;
    DescribeMountTargetsResponseBody& operator=(DescribeMountTargetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mountTargets_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // mountTargets Field Functions 
    bool hasMountTargets() const { return this->mountTargets_ != nullptr;};
    void deleteMountTargets() { this->mountTargets_ = nullptr;};
    inline const vector<DescribeMountTargetsResponseBodyMountTargets> & mountTargets() const { DARABONBA_PTR_GET_CONST(mountTargets_, vector<DescribeMountTargetsResponseBodyMountTargets>) };
    inline vector<DescribeMountTargetsResponseBodyMountTargets> mountTargets() { DARABONBA_PTR_GET(mountTargets_, vector<DescribeMountTargetsResponseBodyMountTargets>) };
    inline DescribeMountTargetsResponseBody& setMountTargets(const vector<DescribeMountTargetsResponseBodyMountTargets> & mountTargets) { DARABONBA_PTR_SET_VALUE(mountTargets_, mountTargets) };
    inline DescribeMountTargetsResponseBody& setMountTargets(vector<DescribeMountTargetsResponseBodyMountTargets> && mountTargets) { DARABONBA_PTR_SET_RVALUE(mountTargets_, mountTargets) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeMountTargetsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMountTargetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMountTargetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeMountTargetsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about mount targets.
    std::shared_ptr<vector<DescribeMountTargetsResponseBodyMountTargets>> mountTargets_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of mount targets.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
