// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBOUTPUTMODELSRESPONSEBODYOUTPUTMODELSLABELS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBOUTPUTMODELSRESPONSEBODYOUTPUTMODELSLABELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobOutputModelsResponseBodyOutputModelsLabels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobOutputModelsResponseBodyOutputModelsLabels& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobOutputModelsResponseBodyOutputModelsLabels& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListTrainingJobOutputModelsResponseBodyOutputModelsLabels() = default ;
    ListTrainingJobOutputModelsResponseBodyOutputModelsLabels(const ListTrainingJobOutputModelsResponseBodyOutputModelsLabels &) = default ;
    ListTrainingJobOutputModelsResponseBodyOutputModelsLabels(ListTrainingJobOutputModelsResponseBodyOutputModelsLabels &&) = default ;
    ListTrainingJobOutputModelsResponseBodyOutputModelsLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobOutputModelsResponseBodyOutputModelsLabels() = default ;
    ListTrainingJobOutputModelsResponseBodyOutputModelsLabels& operator=(const ListTrainingJobOutputModelsResponseBodyOutputModelsLabels &) = default ;
    ListTrainingJobOutputModelsResponseBodyOutputModelsLabels& operator=(ListTrainingJobOutputModelsResponseBodyOutputModelsLabels &&) = default ;
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
    inline ListTrainingJobOutputModelsResponseBodyOutputModelsLabels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListTrainingJobOutputModelsResponseBodyOutputModelsLabels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
