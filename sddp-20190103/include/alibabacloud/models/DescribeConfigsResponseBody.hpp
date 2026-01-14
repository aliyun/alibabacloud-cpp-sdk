// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeConfigsResponseBody() = default ;
    DescribeConfigsResponseBody(const DescribeConfigsResponseBody &) = default ;
    DescribeConfigsResponseBody(DescribeConfigsResponseBody &&) = default ;
    DescribeConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigsResponseBody() = default ;
    DescribeConfigsResponseBody& operator=(const DescribeConfigsResponseBody &) = default ;
    DescribeConfigsResponseBody& operator=(DescribeConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      ConfigList() = default ;
      ConfigList(const ConfigList &) = default ;
      ConfigList(ConfigList &&) = default ;
      ConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigList() = default ;
      ConfigList& operator=(const ConfigList &) = default ;
      ConfigList& operator=(ConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->defaultValue_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->value_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline ConfigList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // defaultValue Field Functions 
      bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
      void deleteDefaultValue() { this->defaultValue_ = nullptr;};
      inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
      inline ConfigList& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ConfigList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ConfigList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ConfigList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The code of the common configuration item.
      shared_ptr<string> code_ {};
      // The description of the default value for the common configuration item.
      shared_ptr<string> defaultValue_ {};
      // The description of the common configuration item.
      shared_ptr<string> description_ {};
      // The unique ID of the common configuration item.
      shared_ptr<int64_t> id_ {};
      // The value of the common configuration item.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->configList_ == nullptr
        && this->requestId_ == nullptr; };
    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline const vector<DescribeConfigsResponseBody::ConfigList> & getConfigList() const { DARABONBA_PTR_GET_CONST(configList_, vector<DescribeConfigsResponseBody::ConfigList>) };
    inline vector<DescribeConfigsResponseBody::ConfigList> getConfigList() { DARABONBA_PTR_GET(configList_, vector<DescribeConfigsResponseBody::ConfigList>) };
    inline DescribeConfigsResponseBody& setConfigList(const vector<DescribeConfigsResponseBody::ConfigList> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
    inline DescribeConfigsResponseBody& setConfigList(vector<DescribeConfigsResponseBody::ConfigList> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of common configuration items for alerts.
    shared_ptr<vector<DescribeConfigsResponseBody::ConfigList>> configList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
