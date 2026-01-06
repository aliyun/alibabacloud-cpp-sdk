// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTROLLERDETECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTROLLERDETECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeControllerDetectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeControllerDetectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeControllerDetectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeControllerDetectionResponseBody() = default ;
    DescribeControllerDetectionResponseBody(const DescribeControllerDetectionResponseBody &) = default ;
    DescribeControllerDetectionResponseBody(DescribeControllerDetectionResponseBody &&) = default ;
    DescribeControllerDetectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeControllerDetectionResponseBody() = default ;
    DescribeControllerDetectionResponseBody& operator=(const DescribeControllerDetectionResponseBody &) = default ;
    DescribeControllerDetectionResponseBody& operator=(DescribeControllerDetectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DetectionItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetectionItems& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DetectionItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DetectionItems() = default ;
      DetectionItems(const DetectionItems &) = default ;
      DetectionItems(DetectionItems &&) = default ;
      DetectionItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetectionItems() = default ;
      DetectionItems& operator=(const DetectionItems &) = default ;
      DetectionItems& operator=(DetectionItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr
        && this->name_ == nullptr && this->status_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline DetectionItems& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DetectionItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DetectionItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The information about the detection result.
      shared_ptr<string> message_ {};
      // The name of the detection item.
      shared_ptr<string> name_ {};
      // The severity level of the detection result. Valid values:
      // 
      // *   NORMAL
      // *   WARNING
      // *   CRITICAL
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->detectionItems_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeControllerDetectionResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // detectionItems Field Functions 
    bool hasDetectionItems() const { return this->detectionItems_ != nullptr;};
    void deleteDetectionItems() { this->detectionItems_ = nullptr;};
    inline const vector<DescribeControllerDetectionResponseBody::DetectionItems> & getDetectionItems() const { DARABONBA_PTR_GET_CONST(detectionItems_, vector<DescribeControllerDetectionResponseBody::DetectionItems>) };
    inline vector<DescribeControllerDetectionResponseBody::DetectionItems> getDetectionItems() { DARABONBA_PTR_GET(detectionItems_, vector<DescribeControllerDetectionResponseBody::DetectionItems>) };
    inline DescribeControllerDetectionResponseBody& setDetectionItems(const vector<DescribeControllerDetectionResponseBody::DetectionItems> & detectionItems) { DARABONBA_PTR_SET_VALUE(detectionItems_, detectionItems) };
    inline DescribeControllerDetectionResponseBody& setDetectionItems(vector<DescribeControllerDetectionResponseBody::DetectionItems> && detectionItems) { DARABONBA_PTR_SET_RVALUE(detectionItems_, detectionItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeControllerDetectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeControllerDetectionResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The queried detection items and detection results.
    shared_ptr<vector<DescribeControllerDetectionResponseBody::DetectionItems>> detectionItems_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
