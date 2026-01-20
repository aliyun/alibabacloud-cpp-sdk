// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeDBInstanceConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceConfigResponseBody() = default ;
    DescribeDBInstanceConfigResponseBody(const DescribeDBInstanceConfigResponseBody &) = default ;
    DescribeDBInstanceConfigResponseBody(DescribeDBInstanceConfigResponseBody &&) = default ;
    DescribeDBInstanceConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceConfigResponseBody() = default ;
    DescribeDBInstanceConfigResponseBody& operator=(const DescribeDBInstanceConfigResponseBody &) = default ;
    DescribeDBInstanceConfigResponseBody& operator=(DescribeDBInstanceConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_TO_JSON(Params, params_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
        DARABONBA_PTR_FROM_JSON(Params, params_);
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
          DARABONBA_PTR_TO_JSON(ParamRelyRule, paramRelyRule_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Params& obj) { 
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(IsDynamic, isDynamic_);
          DARABONBA_PTR_FROM_JSON(IsUserModifiable, isUserModifiable_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Optional, optional_);
          DARABONBA_PTR_FROM_JSON(ParamRelyRule, paramRelyRule_);
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
        && this->paramRelyRule_ == nullptr && this->value_ == nullptr; };
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


        // paramRelyRule Field Functions 
        bool hasParamRelyRule() const { return this->paramRelyRule_ != nullptr;};
        void deleteParamRelyRule() { this->paramRelyRule_ = nullptr;};
        inline string getParamRelyRule() const { DARABONBA_PTR_GET_DEFAULT(paramRelyRule_, "") };
        inline Params& setParamRelyRule(string paramRelyRule) { DARABONBA_PTR_SET_VALUE(paramRelyRule_, paramRelyRule) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Params& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> comment_ {};
        shared_ptr<string> defaultValue_ {};
        shared_ptr<int32_t> isDynamic_ {};
        shared_ptr<int32_t> isUserModifiable_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> optional_ {};
        shared_ptr<string> paramRelyRule_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->params_ == nullptr; };
      // DBInstanceId Field Functions 
      bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
      void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
      inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
      inline Data& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


      // params Field Functions 
      bool hasParams() const { return this->params_ != nullptr;};
      void deleteParams() { this->params_ = nullptr;};
      inline const vector<Data::Params> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<Data::Params>) };
      inline vector<Data::Params> getParams() { DARABONBA_PTR_GET(params_, vector<Data::Params>) };
      inline Data& setParams(const vector<Data::Params> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
      inline Data& setParams(vector<Data::Params> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    protected:
      shared_ptr<string> DBInstanceId_ {};
      shared_ptr<vector<Data::Params>> params_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDBInstanceConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDBInstanceConfigResponseBody::Data) };
    inline DescribeDBInstanceConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDBInstanceConfigResponseBody::Data) };
    inline DescribeDBInstanceConfigResponseBody& setData(const DescribeDBInstanceConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDBInstanceConfigResponseBody& setData(DescribeDBInstanceConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeDBInstanceConfigResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
