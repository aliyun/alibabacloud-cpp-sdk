// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISTINCTRELEASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISTINCTRELEASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeDistinctReleasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDistinctReleasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDistinctReleasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDistinctReleasesResponseBody() = default ;
    DescribeDistinctReleasesResponseBody(const DescribeDistinctReleasesResponseBody &) = default ;
    DescribeDistinctReleasesResponseBody(DescribeDistinctReleasesResponseBody &&) = default ;
    DescribeDistinctReleasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDistinctReleasesResponseBody() = default ;
    DescribeDistinctReleasesResponseBody& operator=(const DescribeDistinctReleasesResponseBody &) = default ;
    DescribeDistinctReleasesResponseBody& operator=(DescribeDistinctReleasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(TaskflowMd5, taskflowMd5_);
        DARABONBA_PTR_TO_JSON(TaskflowType, taskflowType_);
      };
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(TaskflowMd5, taskflowMd5_);
        DARABONBA_PTR_FROM_JSON(TaskflowType, taskflowType_);
      };
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->taskflowMd5_ == nullptr && this->taskflowType_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Records& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // taskflowMd5 Field Functions 
      bool hasTaskflowMd5() const { return this->taskflowMd5_ != nullptr;};
      void deleteTaskflowMd5() { this->taskflowMd5_ = nullptr;};
      inline string getTaskflowMd5() const { DARABONBA_PTR_GET_DEFAULT(taskflowMd5_, "") };
      inline Records& setTaskflowMd5(string taskflowMd5) { DARABONBA_PTR_SET_VALUE(taskflowMd5_, taskflowMd5) };


      // taskflowType Field Functions 
      bool hasTaskflowType() const { return this->taskflowType_ != nullptr;};
      void deleteTaskflowType() { this->taskflowType_ = nullptr;};
      inline string getTaskflowType() const { DARABONBA_PTR_GET_DEFAULT(taskflowType_, "") };
      inline Records& setTaskflowType(string taskflowType) { DARABONBA_PTR_SET_VALUE(taskflowType_, taskflowType) };


    protected:
      // The version description.
      shared_ptr<string> description_ {};
      // The MD5 value of the version XML configuration.
      shared_ptr<string> taskflowMd5_ {};
      // The format of the playbook. Valid values:
      // 
      // *   **xml**: XML format.
      // *   **x6**: JSON format.
      shared_ptr<string> taskflowType_ {};
    };

    virtual bool empty() const override { return this->records_ == nullptr
        && this->requestId_ == nullptr; };
    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<DescribeDistinctReleasesResponseBody::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<DescribeDistinctReleasesResponseBody::Records>) };
    inline vector<DescribeDistinctReleasesResponseBody::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<DescribeDistinctReleasesResponseBody::Records>) };
    inline DescribeDistinctReleasesResponseBody& setRecords(const vector<DescribeDistinctReleasesResponseBody::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline DescribeDistinctReleasesResponseBody& setRecords(vector<DescribeDistinctReleasesResponseBody::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDistinctReleasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about versions.
    shared_ptr<vector<DescribeDistinctReleasesResponseBody::Records>> records_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
