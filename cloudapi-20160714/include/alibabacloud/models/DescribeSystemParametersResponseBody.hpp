// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMPARAMETERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeSystemParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SystemParams, systemParams_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SystemParams, systemParams_);
    };
    DescribeSystemParametersResponseBody() = default ;
    DescribeSystemParametersResponseBody(const DescribeSystemParametersResponseBody &) = default ;
    DescribeSystemParametersResponseBody(DescribeSystemParametersResponseBody &&) = default ;
    DescribeSystemParametersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemParametersResponseBody() = default ;
    DescribeSystemParametersResponseBody& operator=(const DescribeSystemParametersResponseBody &) = default ;
    DescribeSystemParametersResponseBody& operator=(DescribeSystemParametersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SystemParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemParams& obj) { 
        DARABONBA_PTR_TO_JSON(SystemParamItem, systemParamItem_);
      };
      friend void from_json(const Darabonba::Json& j, SystemParams& obj) { 
        DARABONBA_PTR_FROM_JSON(SystemParamItem, systemParamItem_);
      };
      SystemParams() = default ;
      SystemParams(const SystemParams &) = default ;
      SystemParams(SystemParams &&) = default ;
      SystemParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemParams() = default ;
      SystemParams& operator=(const SystemParams &) = default ;
      SystemParams& operator=(SystemParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SystemParamItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SystemParamItem& obj) { 
          DARABONBA_PTR_TO_JSON(DemoValue, demoValue_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ParamName, paramName_);
          DARABONBA_PTR_TO_JSON(ParamType, paramType_);
        };
        friend void from_json(const Darabonba::Json& j, SystemParamItem& obj) { 
          DARABONBA_PTR_FROM_JSON(DemoValue, demoValue_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
          DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
        };
        SystemParamItem() = default ;
        SystemParamItem(const SystemParamItem &) = default ;
        SystemParamItem(SystemParamItem &&) = default ;
        SystemParamItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SystemParamItem() = default ;
        SystemParamItem& operator=(const SystemParamItem &) = default ;
        SystemParamItem& operator=(SystemParamItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->demoValue_ == nullptr
        && this->description_ == nullptr && this->paramName_ == nullptr && this->paramType_ == nullptr; };
        // demoValue Field Functions 
        bool hasDemoValue() const { return this->demoValue_ != nullptr;};
        void deleteDemoValue() { this->demoValue_ = nullptr;};
        inline string getDemoValue() const { DARABONBA_PTR_GET_DEFAULT(demoValue_, "") };
        inline SystemParamItem& setDemoValue(string demoValue) { DARABONBA_PTR_SET_VALUE(demoValue_, demoValue) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline SystemParamItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // paramName Field Functions 
        bool hasParamName() const { return this->paramName_ != nullptr;};
        void deleteParamName() { this->paramName_ = nullptr;};
        inline string getParamName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
        inline SystemParamItem& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


        // paramType Field Functions 
        bool hasParamType() const { return this->paramType_ != nullptr;};
        void deleteParamType() { this->paramType_ = nullptr;};
        inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
        inline SystemParamItem& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


      protected:
        // Examples
        shared_ptr<string> demoValue_ {};
        // The description of a parameter.
        shared_ptr<string> description_ {};
        // The name of the parameter.
        shared_ptr<string> paramName_ {};
        // The type of the parameter.
        shared_ptr<string> paramType_ {};
      };

      virtual bool empty() const override { return this->systemParamItem_ == nullptr; };
      // systemParamItem Field Functions 
      bool hasSystemParamItem() const { return this->systemParamItem_ != nullptr;};
      void deleteSystemParamItem() { this->systemParamItem_ = nullptr;};
      inline const vector<SystemParams::SystemParamItem> & getSystemParamItem() const { DARABONBA_PTR_GET_CONST(systemParamItem_, vector<SystemParams::SystemParamItem>) };
      inline vector<SystemParams::SystemParamItem> getSystemParamItem() { DARABONBA_PTR_GET(systemParamItem_, vector<SystemParams::SystemParamItem>) };
      inline SystemParams& setSystemParamItem(const vector<SystemParams::SystemParamItem> & systemParamItem) { DARABONBA_PTR_SET_VALUE(systemParamItem_, systemParamItem) };
      inline SystemParams& setSystemParamItem(vector<SystemParams::SystemParamItem> && systemParamItem) { DARABONBA_PTR_SET_RVALUE(systemParamItem_, systemParamItem) };


    protected:
      shared_ptr<vector<SystemParams::SystemParamItem>> systemParamItem_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->systemParams_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSystemParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // systemParams Field Functions 
    bool hasSystemParams() const { return this->systemParams_ != nullptr;};
    void deleteSystemParams() { this->systemParams_ = nullptr;};
    inline const DescribeSystemParametersResponseBody::SystemParams & getSystemParams() const { DARABONBA_PTR_GET_CONST(systemParams_, DescribeSystemParametersResponseBody::SystemParams) };
    inline DescribeSystemParametersResponseBody::SystemParams getSystemParams() { DARABONBA_PTR_GET(systemParams_, DescribeSystemParametersResponseBody::SystemParams) };
    inline DescribeSystemParametersResponseBody& setSystemParams(const DescribeSystemParametersResponseBody::SystemParams & systemParams) { DARABONBA_PTR_SET_VALUE(systemParams_, systemParams) };
    inline DescribeSystemParametersResponseBody& setSystemParams(DescribeSystemParametersResponseBody::SystemParams && systemParams) { DARABONBA_PTR_SET_RVALUE(systemParams_, systemParams) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned information about system parameters. It is an array that consists of SystemParam data.
    shared_ptr<DescribeSystemParametersResponseBody::SystemParams> systemParams_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
