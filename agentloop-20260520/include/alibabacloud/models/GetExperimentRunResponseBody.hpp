// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXPERIMENTRUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXPERIMENTRUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ExperimentRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class GetExperimentRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExperimentRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(record, record_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetExperimentRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(record, record_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetExperimentRunResponseBody() = default ;
    GetExperimentRunResponseBody(const GetExperimentRunResponseBody &) = default ;
    GetExperimentRunResponseBody(GetExperimentRunResponseBody &&) = default ;
    GetExperimentRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExperimentRunResponseBody() = default ;
    GetExperimentRunResponseBody& operator=(const GetExperimentRunResponseBody &) = default ;
    GetExperimentRunResponseBody& operator=(GetExperimentRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->record_ == nullptr
        && this->regionId_ == nullptr && this->requestId_ == nullptr; };
    // record Field Functions 
    bool hasRecord() const { return this->record_ != nullptr;};
    void deleteRecord() { this->record_ = nullptr;};
    inline const ExperimentRecord & getRecord() const { DARABONBA_PTR_GET_CONST(record_, ExperimentRecord) };
    inline ExperimentRecord getRecord() { DARABONBA_PTR_GET(record_, ExperimentRecord) };
    inline GetExperimentRunResponseBody& setRecord(const ExperimentRecord & record) { DARABONBA_PTR_SET_VALUE(record_, record) };
    inline GetExperimentRunResponseBody& setRecord(ExperimentRecord && record) { DARABONBA_PTR_SET_RVALUE(record_, record) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetExperimentRunResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExperimentRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The experiment run record details. Fields with null values are not returned.
    shared_ptr<ExperimentRecord> record_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
