// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACKNODESELECTOR_HPP_
#define ALIBABACLOUD_MODELS_ACKNODESELECTOR_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class AckNodeSelector : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AckNodeSelector& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Taints, taints_);
    };
    friend void from_json(const Darabonba::Json& j, AckNodeSelector& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Taints, taints_);
    };
    AckNodeSelector() = default ;
    AckNodeSelector(const AckNodeSelector &) = default ;
    AckNodeSelector(AckNodeSelector &&) = default ;
    AckNodeSelector(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AckNodeSelector() = default ;
    AckNodeSelector& operator=(const AckNodeSelector &) = default ;
    AckNodeSelector& operator=(AckNodeSelector &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Taints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Taints& obj) { 
        DARABONBA_PTR_TO_JSON(Effect, effect_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Taints& obj) { 
        DARABONBA_PTR_FROM_JSON(Effect, effect_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Taints() = default ;
      Taints(const Taints &) = default ;
      Taints(Taints &&) = default ;
      Taints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Taints() = default ;
      Taints& operator=(const Taints &) = default ;
      Taints& operator=(Taints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->effect_ == nullptr
        && this->key_ == nullptr && this->value_ == nullptr; };
      // effect Field Functions 
      bool hasEffect() const { return this->effect_ != nullptr;};
      void deleteEffect() { this->effect_ = nullptr;};
      inline string getEffect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
      inline Taints& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Taints& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Taints& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // 污点效果。
      shared_ptr<string> effect_ {};
      // 污点键。
      shared_ptr<string> key_ {};
      // 污点值。
      shared_ptr<string> value_ {};
    };

    class Labels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Labels& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Labels& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Labels() = default ;
      Labels(const Labels &) = default ;
      Labels(Labels &&) = default ;
      Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Labels() = default ;
      Labels& operator=(const Labels &) = default ;
      Labels& operator=(Labels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Labels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Labels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // 标签键。
      shared_ptr<string> key_ {};
      // 标签值。
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->labels_ == nullptr
        && this->taints_ == nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<AckNodeSelector::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<AckNodeSelector::Labels>) };
    inline vector<AckNodeSelector::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<AckNodeSelector::Labels>) };
    inline AckNodeSelector& setLabels(const vector<AckNodeSelector::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline AckNodeSelector& setLabels(vector<AckNodeSelector::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // taints Field Functions 
    bool hasTaints() const { return this->taints_ != nullptr;};
    void deleteTaints() { this->taints_ = nullptr;};
    inline const vector<AckNodeSelector::Taints> & getTaints() const { DARABONBA_PTR_GET_CONST(taints_, vector<AckNodeSelector::Taints>) };
    inline vector<AckNodeSelector::Taints> getTaints() { DARABONBA_PTR_GET(taints_, vector<AckNodeSelector::Taints>) };
    inline AckNodeSelector& setTaints(const vector<AckNodeSelector::Taints> & taints) { DARABONBA_PTR_SET_VALUE(taints_, taints) };
    inline AckNodeSelector& setTaints(vector<AckNodeSelector::Taints> && taints) { DARABONBA_PTR_SET_RVALUE(taints_, taints) };


  protected:
    // 污点列表。
    shared_ptr<vector<AckNodeSelector::Labels>> labels_ {};
    // 污点列表。
    shared_ptr<vector<AckNodeSelector::Taints>> taints_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
