// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPERFORMANCEVIEWATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPERFORMANCEVIEWATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePerformanceViewAttributeResponseBodyViewDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribePerformanceViewAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePerformanceViewAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(CreateFromViewType, createFromViewType_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FillOriginViewKeys, fillOriginViewKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ViewDetail, viewDetail_);
      DARABONBA_PTR_TO_JSON(ViewName, viewName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePerformanceViewAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(CreateFromViewType, createFromViewType_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FillOriginViewKeys, fillOriginViewKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ViewDetail, viewDetail_);
      DARABONBA_PTR_FROM_JSON(ViewName, viewName_);
    };
    DescribePerformanceViewAttributeResponseBody() = default ;
    DescribePerformanceViewAttributeResponseBody(const DescribePerformanceViewAttributeResponseBody &) = default ;
    DescribePerformanceViewAttributeResponseBody(DescribePerformanceViewAttributeResponseBody &&) = default ;
    DescribePerformanceViewAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePerformanceViewAttributeResponseBody() = default ;
    DescribePerformanceViewAttributeResponseBody& operator=(const DescribePerformanceViewAttributeResponseBody &) = default ;
    DescribePerformanceViewAttributeResponseBody& operator=(DescribePerformanceViewAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->createFromViewType_ == nullptr && return this->DBClusterId_ == nullptr && return this->fillOriginViewKeys_ == nullptr && return this->requestId_ == nullptr && return this->viewDetail_ == nullptr
        && return this->viewName_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribePerformanceViewAttributeResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // createFromViewType Field Functions 
    bool hasCreateFromViewType() const { return this->createFromViewType_ != nullptr;};
    void deleteCreateFromViewType() { this->createFromViewType_ = nullptr;};
    inline string createFromViewType() const { DARABONBA_PTR_GET_DEFAULT(createFromViewType_, "") };
    inline DescribePerformanceViewAttributeResponseBody& setCreateFromViewType(string createFromViewType) { DARABONBA_PTR_SET_VALUE(createFromViewType_, createFromViewType) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribePerformanceViewAttributeResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // fillOriginViewKeys Field Functions 
    bool hasFillOriginViewKeys() const { return this->fillOriginViewKeys_ != nullptr;};
    void deleteFillOriginViewKeys() { this->fillOriginViewKeys_ = nullptr;};
    inline bool fillOriginViewKeys() const { DARABONBA_PTR_GET_DEFAULT(fillOriginViewKeys_, false) };
    inline DescribePerformanceViewAttributeResponseBody& setFillOriginViewKeys(bool fillOriginViewKeys) { DARABONBA_PTR_SET_VALUE(fillOriginViewKeys_, fillOriginViewKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePerformanceViewAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // viewDetail Field Functions 
    bool hasViewDetail() const { return this->viewDetail_ != nullptr;};
    void deleteViewDetail() { this->viewDetail_ = nullptr;};
    inline const DescribePerformanceViewAttributeResponseBodyViewDetail & viewDetail() const { DARABONBA_PTR_GET_CONST(viewDetail_, DescribePerformanceViewAttributeResponseBodyViewDetail) };
    inline DescribePerformanceViewAttributeResponseBodyViewDetail viewDetail() { DARABONBA_PTR_GET(viewDetail_, DescribePerformanceViewAttributeResponseBodyViewDetail) };
    inline DescribePerformanceViewAttributeResponseBody& setViewDetail(const DescribePerformanceViewAttributeResponseBodyViewDetail & viewDetail) { DARABONBA_PTR_SET_VALUE(viewDetail_, viewDetail) };
    inline DescribePerformanceViewAttributeResponseBody& setViewDetail(DescribePerformanceViewAttributeResponseBodyViewDetail && viewDetail) { DARABONBA_PTR_SET_RVALUE(viewDetail_, viewDetail) };


    // viewName Field Functions 
    bool hasViewName() const { return this->viewName_ != nullptr;};
    void deleteViewName() { this->viewName_ = nullptr;};
    inline string viewName() const { DARABONBA_PTR_GET_DEFAULT(viewName_, "") };
    inline DescribePerformanceViewAttributeResponseBody& setViewName(string viewName) { DARABONBA_PTR_SET_VALUE(viewName_, viewName) };


  protected:
    // The details about the access denial.
    // 
    // >  This parameter is returned only if Resource Access Management (RAM) permission verification failed.
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    // The type of the view.
    std::shared_ptr<string> createFromViewType_ = nullptr;
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the information about all AnalyticDB for MySQL clusters within a region, including cluster IDs.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Specifies whether to populate the names of the metrics in the original monitoring view when you view the monitoring view. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> fillOriginViewKeys_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the monitoring view.
    std::shared_ptr<DescribePerformanceViewAttributeResponseBodyViewDetail> viewDetail_ = nullptr;
    // The name of the view.
    std::shared_ptr<string> viewName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
