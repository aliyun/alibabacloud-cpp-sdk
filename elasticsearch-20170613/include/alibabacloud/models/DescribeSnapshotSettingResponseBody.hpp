// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeSnapshotSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribeSnapshotSettingResponseBody() = default ;
    DescribeSnapshotSettingResponseBody(const DescribeSnapshotSettingResponseBody &) = default ;
    DescribeSnapshotSettingResponseBody(DescribeSnapshotSettingResponseBody &&) = default ;
    DescribeSnapshotSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotSettingResponseBody() = default ;
    DescribeSnapshotSettingResponseBody& operator=(const DescribeSnapshotSettingResponseBody &) = default ;
    DescribeSnapshotSettingResponseBody& operator=(DescribeSnapshotSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(QuartzRegex, quartzRegex_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(QuartzRegex, quartzRegex_);
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
      virtual bool empty() const override { return this->enable_ == nullptr
        && this->quartzRegex_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Result& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // quartzRegex Field Functions 
      bool hasQuartzRegex() const { return this->quartzRegex_ != nullptr;};
      void deleteQuartzRegex() { this->quartzRegex_ = nullptr;};
      inline string getQuartzRegex() const { DARABONBA_PTR_GET_DEFAULT(quartzRegex_, "") };
      inline Result& setQuartzRegex(string quartzRegex) { DARABONBA_PTR_SET_VALUE(quartzRegex_, quartzRegex) };


    protected:
      // Whether to enable automatic backup.
      shared_ptr<bool> enable_ {};
      // Automatic backup time configuration, using Quartz Cron expression.
      shared_ptr<string> quartzRegex_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSnapshotSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribeSnapshotSettingResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DescribeSnapshotSettingResponseBody::Result) };
    inline DescribeSnapshotSettingResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DescribeSnapshotSettingResponseBody::Result) };
    inline DescribeSnapshotSettingResponseBody& setResult(const DescribeSnapshotSettingResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeSnapshotSettingResponseBody& setResult(DescribeSnapshotSettingResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The return results.
    shared_ptr<DescribeSnapshotSettingResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
