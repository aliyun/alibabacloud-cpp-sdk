// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISSETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISSETTINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeDiagnosisSettingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisSettingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisSettingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribeDiagnosisSettingsResponseBody() = default ;
    DescribeDiagnosisSettingsResponseBody(const DescribeDiagnosisSettingsResponseBody &) = default ;
    DescribeDiagnosisSettingsResponseBody(DescribeDiagnosisSettingsResponseBody &&) = default ;
    DescribeDiagnosisSettingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisSettingsResponseBody() = default ;
    DescribeDiagnosisSettingsResponseBody& operator=(const DescribeDiagnosisSettingsResponseBody &) = default ;
    DescribeDiagnosisSettingsResponseBody& operator=(DescribeDiagnosisSettingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(scene, scene_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(scene, scene_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->scene_ == nullptr
        && this->updateTime_ == nullptr; };
      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
      inline Result& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Result& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // Scenarios of intelligent maintenance.
      shared_ptr<string> scene_ {};
      // The timestamp of the last update for Intelligent Maintenance scenarios.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiagnosisSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribeDiagnosisSettingsResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DescribeDiagnosisSettingsResponseBody::Result) };
    inline DescribeDiagnosisSettingsResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DescribeDiagnosisSettingsResponseBody::Result) };
    inline DescribeDiagnosisSettingsResponseBody& setResult(const DescribeDiagnosisSettingsResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeDiagnosisSettingsResponseBody& setResult(DescribeDiagnosisSettingsResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The return results.
    shared_ptr<DescribeDiagnosisSettingsResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
