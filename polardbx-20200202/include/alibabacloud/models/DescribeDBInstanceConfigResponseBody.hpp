// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
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
        DARABONBA_PTR_TO_JSON(ConfigName, configName_);
        DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
        DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigName, configName_);
        DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
        DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
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
      virtual bool empty() const override { return this->configName_ == nullptr
        && this->configValue_ == nullptr && this->dbInstanceName_ == nullptr; };
      // configName Field Functions 
      bool hasConfigName() const { return this->configName_ != nullptr;};
      void deleteConfigName() { this->configName_ = nullptr;};
      inline string getConfigName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
      inline Data& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


      // configValue Field Functions 
      bool hasConfigValue() const { return this->configValue_ != nullptr;};
      void deleteConfigValue() { this->configValue_ = nullptr;};
      inline string getConfigValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
      inline Data& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


      // dbInstanceName Field Functions 
      bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
      void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
      inline string getDbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
      inline Data& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


    protected:
      shared_ptr<string> configName_ {};
      shared_ptr<string> configValue_ {};
      shared_ptr<string> dbInstanceName_ {};
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
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
