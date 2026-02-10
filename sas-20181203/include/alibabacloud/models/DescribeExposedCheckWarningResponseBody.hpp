// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDCHECKWARNINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDCHECKWARNINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExposedCheckWarningResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExposedCheckWarningResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WarningList, warningList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExposedCheckWarningResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WarningList, warningList_);
    };
    DescribeExposedCheckWarningResponseBody() = default ;
    DescribeExposedCheckWarningResponseBody(const DescribeExposedCheckWarningResponseBody &) = default ;
    DescribeExposedCheckWarningResponseBody(DescribeExposedCheckWarningResponseBody &&) = default ;
    DescribeExposedCheckWarningResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExposedCheckWarningResponseBody() = default ;
    DescribeExposedCheckWarningResponseBody& operator=(const DescribeExposedCheckWarningResponseBody &) = default ;
    DescribeExposedCheckWarningResponseBody& operator=(DescribeExposedCheckWarningResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WarningList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WarningList& obj) { 
        DARABONBA_PTR_TO_JSON(RiskId, riskId_);
        DARABONBA_PTR_TO_JSON(RiskName, riskName_);
        DARABONBA_PTR_TO_JSON(SubTypeAlias, subTypeAlias_);
        DARABONBA_PTR_TO_JSON(TypeAlias, typeAlias_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, WarningList& obj) { 
        DARABONBA_PTR_FROM_JSON(RiskId, riskId_);
        DARABONBA_PTR_FROM_JSON(RiskName, riskName_);
        DARABONBA_PTR_FROM_JSON(SubTypeAlias, subTypeAlias_);
        DARABONBA_PTR_FROM_JSON(TypeAlias, typeAlias_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      WarningList() = default ;
      WarningList(const WarningList &) = default ;
      WarningList(WarningList &&) = default ;
      WarningList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WarningList() = default ;
      WarningList& operator=(const WarningList &) = default ;
      WarningList& operator=(WarningList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->riskId_ == nullptr
        && this->riskName_ == nullptr && this->subTypeAlias_ == nullptr && this->typeAlias_ == nullptr && this->uuid_ == nullptr; };
      // riskId Field Functions 
      bool hasRiskId() const { return this->riskId_ != nullptr;};
      void deleteRiskId() { this->riskId_ = nullptr;};
      inline int64_t getRiskId() const { DARABONBA_PTR_GET_DEFAULT(riskId_, 0L) };
      inline WarningList& setRiskId(int64_t riskId) { DARABONBA_PTR_SET_VALUE(riskId_, riskId) };


      // riskName Field Functions 
      bool hasRiskName() const { return this->riskName_ != nullptr;};
      void deleteRiskName() { this->riskName_ = nullptr;};
      inline string getRiskName() const { DARABONBA_PTR_GET_DEFAULT(riskName_, "") };
      inline WarningList& setRiskName(string riskName) { DARABONBA_PTR_SET_VALUE(riskName_, riskName) };


      // subTypeAlias Field Functions 
      bool hasSubTypeAlias() const { return this->subTypeAlias_ != nullptr;};
      void deleteSubTypeAlias() { this->subTypeAlias_ = nullptr;};
      inline string getSubTypeAlias() const { DARABONBA_PTR_GET_DEFAULT(subTypeAlias_, "") };
      inline WarningList& setSubTypeAlias(string subTypeAlias) { DARABONBA_PTR_SET_VALUE(subTypeAlias_, subTypeAlias) };


      // typeAlias Field Functions 
      bool hasTypeAlias() const { return this->typeAlias_ != nullptr;};
      void deleteTypeAlias() { this->typeAlias_ = nullptr;};
      inline string getTypeAlias() const { DARABONBA_PTR_GET_DEFAULT(typeAlias_, "") };
      inline WarningList& setTypeAlias(string typeAlias) { DARABONBA_PTR_SET_VALUE(typeAlias_, typeAlias) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline WarningList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The ID of the baseline.
      // 
      // >  You can call the [DescribeCheckWarningSummary](https://help.aliyun.com/document_detail/116179.html) operation to query the IDs of baselines.
      shared_ptr<int64_t> riskId_ {};
      // The name of the baseline.
      shared_ptr<string> riskName_ {};
      // The display name of the baseline sub type.
      shared_ptr<string> subTypeAlias_ {};
      // The display name of the baseline type.
      shared_ptr<string> typeAlias_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->requestId_ == nullptr && this->warningList_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeExposedCheckWarningResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExposedCheckWarningResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // warningList Field Functions 
    bool hasWarningList() const { return this->warningList_ != nullptr;};
    void deleteWarningList() { this->warningList_ = nullptr;};
    inline const vector<DescribeExposedCheckWarningResponseBody::WarningList> & getWarningList() const { DARABONBA_PTR_GET_CONST(warningList_, vector<DescribeExposedCheckWarningResponseBody::WarningList>) };
    inline vector<DescribeExposedCheckWarningResponseBody::WarningList> getWarningList() { DARABONBA_PTR_GET(warningList_, vector<DescribeExposedCheckWarningResponseBody::WarningList>) };
    inline DescribeExposedCheckWarningResponseBody& setWarningList(const vector<DescribeExposedCheckWarningResponseBody::WarningList> & warningList) { DARABONBA_PTR_SET_VALUE(warningList_, warningList) };
    inline DescribeExposedCheckWarningResponseBody& setWarningList(vector<DescribeExposedCheckWarningResponseBody::WarningList> && warningList) { DARABONBA_PTR_SET_RVALUE(warningList_, warningList) };


  protected:
    // The total number of entries returned.
    shared_ptr<int32_t> count_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array that consists of the baseline risk items of the exposed server.
    shared_ptr<vector<DescribeExposedCheckWarningResponseBody::WarningList>> warningList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
