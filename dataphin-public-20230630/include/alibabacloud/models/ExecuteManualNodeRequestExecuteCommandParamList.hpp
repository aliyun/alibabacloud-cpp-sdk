// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEMANUALNODEREQUESTEXECUTECOMMANDPARAMLIST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEMANUALNODEREQUESTEXECUTECOMMANDPARAMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ExecuteManualNodeRequestExecuteCommandParamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteManualNodeRequestExecuteCommandParamList& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteManualNodeRequestExecuteCommandParamList& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ExecuteManualNodeRequestExecuteCommandParamList() = default ;
    ExecuteManualNodeRequestExecuteCommandParamList(const ExecuteManualNodeRequestExecuteCommandParamList &) = default ;
    ExecuteManualNodeRequestExecuteCommandParamList(ExecuteManualNodeRequestExecuteCommandParamList &&) = default ;
    ExecuteManualNodeRequestExecuteCommandParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteManualNodeRequestExecuteCommandParamList() = default ;
    ExecuteManualNodeRequestExecuteCommandParamList& operator=(const ExecuteManualNodeRequestExecuteCommandParamList &) = default ;
    ExecuteManualNodeRequestExecuteCommandParamList& operator=(ExecuteManualNodeRequestExecuteCommandParamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ExecuteManualNodeRequestExecuteCommandParamList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ExecuteManualNodeRequestExecuteCommandParamList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
