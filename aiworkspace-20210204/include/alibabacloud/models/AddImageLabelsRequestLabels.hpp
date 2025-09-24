// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGELABELSREQUESTLABELS_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGELABELSREQUESTLABELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class AddImageLabelsRequestLabels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddImageLabelsRequestLabels& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, AddImageLabelsRequestLabels& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    AddImageLabelsRequestLabels() = default ;
    AddImageLabelsRequestLabels(const AddImageLabelsRequestLabels &) = default ;
    AddImageLabelsRequestLabels(AddImageLabelsRequestLabels &&) = default ;
    AddImageLabelsRequestLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddImageLabelsRequestLabels() = default ;
    AddImageLabelsRequestLabels& operator=(const AddImageLabelsRequestLabels &) = default ;
    AddImageLabelsRequestLabels& operator=(AddImageLabelsRequestLabels &&) = default ;
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
    inline AddImageLabelsRequestLabels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AddImageLabelsRequestLabels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key. The following keys can be added:
    // 
    // *   system.chipType
    // *   system.dsw.cudaVersion
    // *   system.dsw.fromImageId
    // *   system.dsw.fromInstanceId
    // *   system.dsw.id
    // *   system.dsw.os
    // *   system.dsw.osVersion
    // *   system.dsw.resourceType
    // *   system.dsw.rootImageId
    // *   system.dsw.stage
    // *   system.dsw.tag
    // *   system.dsw.type
    // *   system.framework
    // *   system.origin
    // *   system.pythonVersion
    // *   system.source
    // *   system.supported.dlc
    // *   system.supported.dsw
    std::shared_ptr<string> key_ = nullptr;
    // The tag value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
