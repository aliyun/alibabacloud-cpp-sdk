// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGSRESPONSEBODYCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGSRESPONSEBODYCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeConfigsResponseBodyConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigsResponseBodyConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigsResponseBodyConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeConfigsResponseBodyConfigList() = default ;
    DescribeConfigsResponseBodyConfigList(const DescribeConfigsResponseBodyConfigList &) = default ;
    DescribeConfigsResponseBodyConfigList(DescribeConfigsResponseBodyConfigList &&) = default ;
    DescribeConfigsResponseBodyConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigsResponseBodyConfigList() = default ;
    DescribeConfigsResponseBodyConfigList& operator=(const DescribeConfigsResponseBodyConfigList &) = default ;
    DescribeConfigsResponseBodyConfigList& operator=(DescribeConfigsResponseBodyConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->defaultValue_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr && return this->value_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeConfigsResponseBodyConfigList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline DescribeConfigsResponseBodyConfigList& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeConfigsResponseBodyConfigList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeConfigsResponseBodyConfigList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeConfigsResponseBodyConfigList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The code of the common configuration item.
    std::shared_ptr<string> code_ = nullptr;
    // The description of the default value for the common configuration item.
    std::shared_ptr<string> defaultValue_ = nullptr;
    // The description of the common configuration item.
    std::shared_ptr<string> description_ = nullptr;
    // The unique ID of the common configuration item.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The value of the common configuration item.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
