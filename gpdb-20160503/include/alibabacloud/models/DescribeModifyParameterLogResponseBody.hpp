// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODIFYPARAMETERLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODIFYPARAMETERLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeModifyParameterLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModifyParameterLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Changelogs, changelogs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModifyParameterLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Changelogs, changelogs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeModifyParameterLogResponseBody() = default ;
    DescribeModifyParameterLogResponseBody(const DescribeModifyParameterLogResponseBody &) = default ;
    DescribeModifyParameterLogResponseBody(DescribeModifyParameterLogResponseBody &&) = default ;
    DescribeModifyParameterLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModifyParameterLogResponseBody() = default ;
    DescribeModifyParameterLogResponseBody& operator=(const DescribeModifyParameterLogResponseBody &) = default ;
    DescribeModifyParameterLogResponseBody& operator=(DescribeModifyParameterLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Changelogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Changelogs& obj) { 
        DARABONBA_PTR_TO_JSON(EffectTime, effectTime_);
        DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
        DARABONBA_PTR_TO_JSON(ParameterValid, parameterValid_);
        DARABONBA_PTR_TO_JSON(ParameterValueAfter, parameterValueAfter_);
        DARABONBA_PTR_TO_JSON(ParameterValueBefore, parameterValueBefore_);
      };
      friend void from_json(const Darabonba::Json& j, Changelogs& obj) { 
        DARABONBA_PTR_FROM_JSON(EffectTime, effectTime_);
        DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
        DARABONBA_PTR_FROM_JSON(ParameterValid, parameterValid_);
        DARABONBA_PTR_FROM_JSON(ParameterValueAfter, parameterValueAfter_);
        DARABONBA_PTR_FROM_JSON(ParameterValueBefore, parameterValueBefore_);
      };
      Changelogs() = default ;
      Changelogs(const Changelogs &) = default ;
      Changelogs(Changelogs &&) = default ;
      Changelogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Changelogs() = default ;
      Changelogs& operator=(const Changelogs &) = default ;
      Changelogs& operator=(Changelogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->effectTime_ == nullptr
        && this->parameterName_ == nullptr && this->parameterValid_ == nullptr && this->parameterValueAfter_ == nullptr && this->parameterValueBefore_ == nullptr; };
      // effectTime Field Functions 
      bool hasEffectTime() const { return this->effectTime_ != nullptr;};
      void deleteEffectTime() { this->effectTime_ = nullptr;};
      inline string getEffectTime() const { DARABONBA_PTR_GET_DEFAULT(effectTime_, "") };
      inline Changelogs& setEffectTime(string effectTime) { DARABONBA_PTR_SET_VALUE(effectTime_, effectTime) };


      // parameterName Field Functions 
      bool hasParameterName() const { return this->parameterName_ != nullptr;};
      void deleteParameterName() { this->parameterName_ = nullptr;};
      inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
      inline Changelogs& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


      // parameterValid Field Functions 
      bool hasParameterValid() const { return this->parameterValid_ != nullptr;};
      void deleteParameterValid() { this->parameterValid_ = nullptr;};
      inline string getParameterValid() const { DARABONBA_PTR_GET_DEFAULT(parameterValid_, "") };
      inline Changelogs& setParameterValid(string parameterValid) { DARABONBA_PTR_SET_VALUE(parameterValid_, parameterValid) };


      // parameterValueAfter Field Functions 
      bool hasParameterValueAfter() const { return this->parameterValueAfter_ != nullptr;};
      void deleteParameterValueAfter() { this->parameterValueAfter_ = nullptr;};
      inline string getParameterValueAfter() const { DARABONBA_PTR_GET_DEFAULT(parameterValueAfter_, "") };
      inline Changelogs& setParameterValueAfter(string parameterValueAfter) { DARABONBA_PTR_SET_VALUE(parameterValueAfter_, parameterValueAfter) };


      // parameterValueBefore Field Functions 
      bool hasParameterValueBefore() const { return this->parameterValueBefore_ != nullptr;};
      void deleteParameterValueBefore() { this->parameterValueBefore_ = nullptr;};
      inline string getParameterValueBefore() const { DARABONBA_PTR_GET_DEFAULT(parameterValueBefore_, "") };
      inline Changelogs& setParameterValueBefore(string parameterValueBefore) { DARABONBA_PTR_SET_VALUE(parameterValueBefore_, parameterValueBefore) };


    protected:
      // The effective time.
      shared_ptr<string> effectTime_ {};
      // The name of the parameter.
      shared_ptr<string> parameterName_ {};
      // Indicates whether the modification takes effect.
      shared_ptr<string> parameterValid_ {};
      // The original value of the parameter.
      shared_ptr<string> parameterValueAfter_ {};
      // The new value of the parameter.
      shared_ptr<string> parameterValueBefore_ {};
    };

    virtual bool empty() const override { return this->changelogs_ == nullptr
        && this->requestId_ == nullptr; };
    // changelogs Field Functions 
    bool hasChangelogs() const { return this->changelogs_ != nullptr;};
    void deleteChangelogs() { this->changelogs_ = nullptr;};
    inline const vector<DescribeModifyParameterLogResponseBody::Changelogs> & getChangelogs() const { DARABONBA_PTR_GET_CONST(changelogs_, vector<DescribeModifyParameterLogResponseBody::Changelogs>) };
    inline vector<DescribeModifyParameterLogResponseBody::Changelogs> getChangelogs() { DARABONBA_PTR_GET(changelogs_, vector<DescribeModifyParameterLogResponseBody::Changelogs>) };
    inline DescribeModifyParameterLogResponseBody& setChangelogs(const vector<DescribeModifyParameterLogResponseBody::Changelogs> & changelogs) { DARABONBA_PTR_SET_VALUE(changelogs_, changelogs) };
    inline DescribeModifyParameterLogResponseBody& setChangelogs(vector<DescribeModifyParameterLogResponseBody::Changelogs> && changelogs) { DARABONBA_PTR_SET_RVALUE(changelogs_, changelogs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeModifyParameterLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried parameter modification logs.
    shared_ptr<vector<DescribeModifyParameterLogResponseBody::Changelogs>> changelogs_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
