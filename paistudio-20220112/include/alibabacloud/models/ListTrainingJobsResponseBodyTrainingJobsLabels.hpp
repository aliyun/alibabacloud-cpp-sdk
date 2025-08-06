// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBSRESPONSEBODYTRAININGJOBSLABELS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBSRESPONSEBODYTRAININGJOBSLABELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobsResponseBodyTrainingJobsLabels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobsResponseBodyTrainingJobsLabels& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobsResponseBodyTrainingJobsLabels& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListTrainingJobsResponseBodyTrainingJobsLabels() = default ;
    ListTrainingJobsResponseBodyTrainingJobsLabels(const ListTrainingJobsResponseBodyTrainingJobsLabels &) = default ;
    ListTrainingJobsResponseBodyTrainingJobsLabels(ListTrainingJobsResponseBodyTrainingJobsLabels &&) = default ;
    ListTrainingJobsResponseBodyTrainingJobsLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobsResponseBodyTrainingJobsLabels() = default ;
    ListTrainingJobsResponseBodyTrainingJobsLabels& operator=(const ListTrainingJobsResponseBodyTrainingJobsLabels &) = default ;
    ListTrainingJobsResponseBodyTrainingJobsLabels& operator=(ListTrainingJobsResponseBodyTrainingJobsLabels &&) = default ;
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
    inline ListTrainingJobsResponseBodyTrainingJobsLabels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobsLabels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
