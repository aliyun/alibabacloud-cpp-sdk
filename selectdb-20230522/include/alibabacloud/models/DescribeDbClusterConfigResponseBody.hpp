// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeDBClusterConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterConfigResponseBody() = default ;
    DescribeDBClusterConfigResponseBody(const DescribeDBClusterConfigResponseBody &) = default ;
    DescribeDBClusterConfigResponseBody(DescribeDBClusterConfigResponseBody &&) = default ;
    DescribeDBClusterConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterConfigResponseBody() = default ;
    DescribeDBClusterConfigResponseBody& operator=(const DescribeDBClusterConfigResponseBody &) = default ;
    DescribeDBClusterConfigResponseBody& operator=(DescribeDBClusterConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DbClusterId, dbClusterId_);
        DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
        DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
        DARABONBA_PTR_TO_JSON(Params, params_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DbClusterId, dbClusterId_);
        DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
        DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
        DARABONBA_PTR_FROM_JSON(Params, params_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Params : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Params& obj) { 
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(IsDynamic, isDynamic_);
          DARABONBA_PTR_TO_JSON(IsUserModifiable, isUserModifiable_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Optional, optional_);
          DARABONBA_PTR_TO_JSON(ParamCategory, paramCategory_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Params& obj) { 
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(IsDynamic, isDynamic_);
          DARABONBA_PTR_FROM_JSON(IsUserModifiable, isUserModifiable_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Optional, optional_);
          DARABONBA_PTR_FROM_JSON(ParamCategory, paramCategory_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Params() = default ;
        Params(const Params &) = default ;
        Params(Params &&) = default ;
        Params(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Params() = default ;
        Params& operator=(const Params &) = default ;
        Params& operator=(Params &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comment_ == nullptr
        && this->defaultValue_ == nullptr && this->isDynamic_ == nullptr && this->isUserModifiable_ == nullptr && this->name_ == nullptr && this->optional_ == nullptr
        && this->paramCategory_ == nullptr && this->value_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline Params& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // defaultValue Field Functions 
        bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
        void deleteDefaultValue() { this->defaultValue_ = nullptr;};
        inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
        inline Params& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


        // isDynamic Field Functions 
        bool hasIsDynamic() const { return this->isDynamic_ != nullptr;};
        void deleteIsDynamic() { this->isDynamic_ = nullptr;};
        inline int32_t getIsDynamic() const { DARABONBA_PTR_GET_DEFAULT(isDynamic_, 0) };
        inline Params& setIsDynamic(int32_t isDynamic) { DARABONBA_PTR_SET_VALUE(isDynamic_, isDynamic) };


        // isUserModifiable Field Functions 
        bool hasIsUserModifiable() const { return this->isUserModifiable_ != nullptr;};
        void deleteIsUserModifiable() { this->isUserModifiable_ = nullptr;};
        inline int32_t getIsUserModifiable() const { DARABONBA_PTR_GET_DEFAULT(isUserModifiable_, 0) };
        inline Params& setIsUserModifiable(int32_t isUserModifiable) { DARABONBA_PTR_SET_VALUE(isUserModifiable_, isUserModifiable) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Params& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // optional Field Functions 
        bool hasOptional() const { return this->optional_ != nullptr;};
        void deleteOptional() { this->optional_ = nullptr;};
        inline string getOptional() const { DARABONBA_PTR_GET_DEFAULT(optional_, "") };
        inline Params& setOptional(string optional) { DARABONBA_PTR_SET_VALUE(optional_, optional) };


        // paramCategory Field Functions 
        bool hasParamCategory() const { return this->paramCategory_ != nullptr;};
        void deleteParamCategory() { this->paramCategory_ = nullptr;};
        inline string getParamCategory() const { DARABONBA_PTR_GET_DEFAULT(paramCategory_, "") };
        inline Params& setParamCategory(string paramCategory) { DARABONBA_PTR_SET_VALUE(paramCategory_, paramCategory) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Params& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The comments on the parameter.
        shared_ptr<string> comment_ {};
        // The default value of the parameter.
        shared_ptr<string> defaultValue_ {};
        // Indicates whether the parameter immediately takes effect without requiring a restart.
        shared_ptr<int32_t> isDynamic_ {};
        // Indicates whether the parameter is modifiable.
        shared_ptr<int32_t> isUserModifiable_ {};
        // The name of the parameter.
        shared_ptr<string> name_ {};
        // The value range of the parameter.
        shared_ptr<string> optional_ {};
        // The category of the parameter.
        shared_ptr<string> paramCategory_ {};
        // The current value of the parameter.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->dbClusterId_ == nullptr
        && this->dbInstanceId_ == nullptr && this->dbInstanceName_ == nullptr && this->params_ == nullptr && this->taskId_ == nullptr; };
      // dbClusterId Field Functions 
      bool hasDbClusterId() const { return this->dbClusterId_ != nullptr;};
      void deleteDbClusterId() { this->dbClusterId_ = nullptr;};
      inline string getDbClusterId() const { DARABONBA_PTR_GET_DEFAULT(dbClusterId_, "") };
      inline Data& setDbClusterId(string dbClusterId) { DARABONBA_PTR_SET_VALUE(dbClusterId_, dbClusterId) };


      // dbInstanceId Field Functions 
      bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
      void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
      inline string getDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
      inline Data& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


      // dbInstanceName Field Functions 
      bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
      void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
      inline string getDbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
      inline Data& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


      // params Field Functions 
      bool hasParams() const { return this->params_ != nullptr;};
      void deleteParams() { this->params_ = nullptr;};
      inline const vector<Data::Params> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<Data::Params>) };
      inline vector<Data::Params> getParams() { DARABONBA_PTR_GET(params_, vector<Data::Params>) };
      inline Data& setParams(const vector<Data::Params> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
      inline Data& setParams(vector<Data::Params> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int32_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
      inline Data& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The cluster ID.
      shared_ptr<string> dbClusterId_ {};
      // The numeric ID of the instance.
      shared_ptr<string> dbInstanceId_ {};
      // The instance ID.
      shared_ptr<string> dbInstanceName_ {};
      // The details about each parameter returned.
      shared_ptr<vector<Data::Params>> params_ {};
      // The task ID.
      shared_ptr<int32_t> taskId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeDBClusterConfigResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDBClusterConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDBClusterConfigResponseBody::Data) };
    inline DescribeDBClusterConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDBClusterConfigResponseBody::Data) };
    inline DescribeDBClusterConfigResponseBody& setData(const DescribeDBClusterConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDBClusterConfigResponseBody& setData(DescribeDBClusterConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeDBClusterConfigResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeDBClusterConfigResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial. This parameter is returned only if Resource Access Management (RAM) authentication failed.
    shared_ptr<string> accessDeniedDetail_ {};
    // The information returned.
    shared_ptr<DescribeDBClusterConfigResponseBody::Data> data_ {};
    // The dynamic code. This parameter is not returned.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic message. This parameter is not returned.
    shared_ptr<string> dynamicMessage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
