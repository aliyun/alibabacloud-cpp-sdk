// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METRICDEFRESPDTO_HPP_
#define ALIBABACLOUD_MODELS_METRICDEFRESPDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class MetricDefRespDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetricDefRespDTO& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(label, label_);
      DARABONBA_PTR_TO_JSON(sortable, sortable_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, MetricDefRespDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(label, label_);
      DARABONBA_PTR_FROM_JSON(sortable, sortable_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
    };
    MetricDefRespDTO() = default ;
    MetricDefRespDTO(const MetricDefRespDTO &) = default ;
    MetricDefRespDTO(MetricDefRespDTO &&) = default ;
    MetricDefRespDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetricDefRespDTO() = default ;
    MetricDefRespDTO& operator=(const MetricDefRespDTO &) = default ;
    MetricDefRespDTO& operator=(MetricDefRespDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && this->label_ == nullptr && this->sortable_ == nullptr && this->unit_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline MetricDefRespDTO& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline MetricDefRespDTO& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // sortable Field Functions 
    bool hasSortable() const { return this->sortable_ != nullptr;};
    void deleteSortable() { this->sortable_ = nullptr;};
    inline bool getSortable() const { DARABONBA_PTR_GET_DEFAULT(sortable_, false) };
    inline MetricDefRespDTO& setSortable(bool sortable) { DARABONBA_PTR_SET_VALUE(sortable_, sortable) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline MetricDefRespDTO& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    shared_ptr<string> key_ {};
    shared_ptr<string> label_ {};
    shared_ptr<bool> sortable_ {};
    shared_ptr<string> unit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
