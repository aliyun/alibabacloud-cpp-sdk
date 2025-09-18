// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACKNODESELECTORLABELS_HPP_
#define ALIBABACLOUD_MODELS_ACKNODESELECTORLABELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class AckNodeSelectorLabels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AckNodeSelectorLabels& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, AckNodeSelectorLabels& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    AckNodeSelectorLabels() = default ;
    AckNodeSelectorLabels(const AckNodeSelectorLabels &) = default ;
    AckNodeSelectorLabels(AckNodeSelectorLabels &&) = default ;
    AckNodeSelectorLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AckNodeSelectorLabels() = default ;
    AckNodeSelectorLabels& operator=(const AckNodeSelectorLabels &) = default ;
    AckNodeSelectorLabels& operator=(AckNodeSelectorLabels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline AckNodeSelectorLabels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AckNodeSelectorLabels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // 标签键。
    std::shared_ptr<string> key_ = nullptr;
    // 标签值。
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
