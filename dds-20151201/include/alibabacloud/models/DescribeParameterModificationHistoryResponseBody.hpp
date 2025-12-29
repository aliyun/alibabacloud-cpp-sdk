// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERMODIFICATIONHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERMODIFICATIONHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeParameterModificationHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterModificationHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HistoricalParameters, historicalParameters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterModificationHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HistoricalParameters, historicalParameters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeParameterModificationHistoryResponseBody() = default ;
    DescribeParameterModificationHistoryResponseBody(const DescribeParameterModificationHistoryResponseBody &) = default ;
    DescribeParameterModificationHistoryResponseBody(DescribeParameterModificationHistoryResponseBody &&) = default ;
    DescribeParameterModificationHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterModificationHistoryResponseBody() = default ;
    DescribeParameterModificationHistoryResponseBody& operator=(const DescribeParameterModificationHistoryResponseBody &) = default ;
    DescribeParameterModificationHistoryResponseBody& operator=(DescribeParameterModificationHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HistoricalParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HistoricalParameters& obj) { 
        DARABONBA_PTR_TO_JSON(HistoricalParameter, historicalParameter_);
      };
      friend void from_json(const Darabonba::Json& j, HistoricalParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(HistoricalParameter, historicalParameter_);
      };
      HistoricalParameters() = default ;
      HistoricalParameters(const HistoricalParameters &) = default ;
      HistoricalParameters(HistoricalParameters &&) = default ;
      HistoricalParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HistoricalParameters() = default ;
      HistoricalParameters& operator=(const HistoricalParameters &) = default ;
      HistoricalParameters& operator=(HistoricalParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HistoricalParameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HistoricalParameter& obj) { 
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(NewParameterValue, newParameterValue_);
          DARABONBA_PTR_TO_JSON(OldParameterValue, oldParameterValue_);
          DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
        };
        friend void from_json(const Darabonba::Json& j, HistoricalParameter& obj) { 
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(NewParameterValue, newParameterValue_);
          DARABONBA_PTR_FROM_JSON(OldParameterValue, oldParameterValue_);
          DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
        };
        HistoricalParameter() = default ;
        HistoricalParameter(const HistoricalParameter &) = default ;
        HistoricalParameter(HistoricalParameter &&) = default ;
        HistoricalParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HistoricalParameter() = default ;
        HistoricalParameter& operator=(const HistoricalParameter &) = default ;
        HistoricalParameter& operator=(HistoricalParameter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->modifyTime_ == nullptr
        && this->newParameterValue_ == nullptr && this->oldParameterValue_ == nullptr && this->parameterName_ == nullptr; };
        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
        inline HistoricalParameter& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // newParameterValue Field Functions 
        bool hasNewParameterValue() const { return this->newParameterValue_ != nullptr;};
        void deleteNewParameterValue() { this->newParameterValue_ = nullptr;};
        inline string getNewParameterValue() const { DARABONBA_PTR_GET_DEFAULT(newParameterValue_, "") };
        inline HistoricalParameter& setNewParameterValue(string newParameterValue) { DARABONBA_PTR_SET_VALUE(newParameterValue_, newParameterValue) };


        // oldParameterValue Field Functions 
        bool hasOldParameterValue() const { return this->oldParameterValue_ != nullptr;};
        void deleteOldParameterValue() { this->oldParameterValue_ = nullptr;};
        inline string getOldParameterValue() const { DARABONBA_PTR_GET_DEFAULT(oldParameterValue_, "") };
        inline HistoricalParameter& setOldParameterValue(string oldParameterValue) { DARABONBA_PTR_SET_VALUE(oldParameterValue_, oldParameterValue) };


        // parameterName Field Functions 
        bool hasParameterName() const { return this->parameterName_ != nullptr;};
        void deleteParameterName() { this->parameterName_ = nullptr;};
        inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
        inline HistoricalParameter& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


      protected:
        // The time when the parameter was modified. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> modifyTime_ {};
        // The parameter value after modification.
        shared_ptr<string> newParameterValue_ {};
        // The parameter value before modification.
        shared_ptr<string> oldParameterValue_ {};
        // The name of the modified parameter.
        shared_ptr<string> parameterName_ {};
      };

      virtual bool empty() const override { return this->historicalParameter_ == nullptr; };
      // historicalParameter Field Functions 
      bool hasHistoricalParameter() const { return this->historicalParameter_ != nullptr;};
      void deleteHistoricalParameter() { this->historicalParameter_ = nullptr;};
      inline const vector<HistoricalParameters::HistoricalParameter> & getHistoricalParameter() const { DARABONBA_PTR_GET_CONST(historicalParameter_, vector<HistoricalParameters::HistoricalParameter>) };
      inline vector<HistoricalParameters::HistoricalParameter> getHistoricalParameter() { DARABONBA_PTR_GET(historicalParameter_, vector<HistoricalParameters::HistoricalParameter>) };
      inline HistoricalParameters& setHistoricalParameter(const vector<HistoricalParameters::HistoricalParameter> & historicalParameter) { DARABONBA_PTR_SET_VALUE(historicalParameter_, historicalParameter) };
      inline HistoricalParameters& setHistoricalParameter(vector<HistoricalParameters::HistoricalParameter> && historicalParameter) { DARABONBA_PTR_SET_RVALUE(historicalParameter_, historicalParameter) };


    protected:
      shared_ptr<vector<HistoricalParameters::HistoricalParameter>> historicalParameter_ {};
    };

    virtual bool empty() const override { return this->historicalParameters_ == nullptr
        && this->requestId_ == nullptr; };
    // historicalParameters Field Functions 
    bool hasHistoricalParameters() const { return this->historicalParameters_ != nullptr;};
    void deleteHistoricalParameters() { this->historicalParameters_ = nullptr;};
    inline const DescribeParameterModificationHistoryResponseBody::HistoricalParameters & getHistoricalParameters() const { DARABONBA_PTR_GET_CONST(historicalParameters_, DescribeParameterModificationHistoryResponseBody::HistoricalParameters) };
    inline DescribeParameterModificationHistoryResponseBody::HistoricalParameters getHistoricalParameters() { DARABONBA_PTR_GET(historicalParameters_, DescribeParameterModificationHistoryResponseBody::HistoricalParameters) };
    inline DescribeParameterModificationHistoryResponseBody& setHistoricalParameters(const DescribeParameterModificationHistoryResponseBody::HistoricalParameters & historicalParameters) { DARABONBA_PTR_SET_VALUE(historicalParameters_, historicalParameters) };
    inline DescribeParameterModificationHistoryResponseBody& setHistoricalParameters(DescribeParameterModificationHistoryResponseBody::HistoricalParameters && historicalParameters) { DARABONBA_PTR_SET_RVALUE(historicalParameters_, historicalParameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeParameterModificationHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the parameter modification records.
    shared_ptr<DescribeParameterModificationHistoryResponseBody::HistoricalParameters> historicalParameters_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
