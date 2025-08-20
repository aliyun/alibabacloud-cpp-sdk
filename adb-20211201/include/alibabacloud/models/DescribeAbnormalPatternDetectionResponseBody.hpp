// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEABNORMALPATTERNDETECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEABNORMALPATTERNDETECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAbnormalPatternDetectionResponseBodyDetectionItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAbnormalPatternDetectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAbnormalPatternDetectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAbnormalPatternDetectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAbnormalPatternDetectionResponseBody() = default ;
    DescribeAbnormalPatternDetectionResponseBody(const DescribeAbnormalPatternDetectionResponseBody &) = default ;
    DescribeAbnormalPatternDetectionResponseBody(DescribeAbnormalPatternDetectionResponseBody &&) = default ;
    DescribeAbnormalPatternDetectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAbnormalPatternDetectionResponseBody() = default ;
    DescribeAbnormalPatternDetectionResponseBody& operator=(const DescribeAbnormalPatternDetectionResponseBody &) = default ;
    DescribeAbnormalPatternDetectionResponseBody& operator=(DescribeAbnormalPatternDetectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->detectionItems_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAbnormalPatternDetectionResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // detectionItems Field Functions 
    bool hasDetectionItems() const { return this->detectionItems_ != nullptr;};
    void deleteDetectionItems() { this->detectionItems_ = nullptr;};
    inline const vector<DescribeAbnormalPatternDetectionResponseBodyDetectionItems> & detectionItems() const { DARABONBA_PTR_GET_CONST(detectionItems_, vector<DescribeAbnormalPatternDetectionResponseBodyDetectionItems>) };
    inline vector<DescribeAbnormalPatternDetectionResponseBodyDetectionItems> detectionItems() { DARABONBA_PTR_GET(detectionItems_, vector<DescribeAbnormalPatternDetectionResponseBodyDetectionItems>) };
    inline DescribeAbnormalPatternDetectionResponseBody& setDetectionItems(const vector<DescribeAbnormalPatternDetectionResponseBodyDetectionItems> & detectionItems) { DARABONBA_PTR_SET_VALUE(detectionItems_, detectionItems) };
    inline DescribeAbnormalPatternDetectionResponseBody& setDetectionItems(vector<DescribeAbnormalPatternDetectionResponseBodyDetectionItems> && detectionItems) { DARABONBA_PTR_SET_RVALUE(detectionItems_, detectionItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAbnormalPatternDetectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeAbnormalPatternDetectionResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The queried detection items and detection results.
    std::shared_ptr<vector<DescribeAbnormalPatternDetectionResponseBodyDetectionItems>> detectionItems_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
