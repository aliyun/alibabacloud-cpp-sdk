// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGELABELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGELABELSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class AddImageLabelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddImageLabelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, AddImageLabelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
    };
    AddImageLabelsRequest() = default ;
    AddImageLabelsRequest(const AddImageLabelsRequest &) = default ;
    AddImageLabelsRequest(AddImageLabelsRequest &&) = default ;
    AddImageLabelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddImageLabelsRequest() = default ;
    AddImageLabelsRequest& operator=(const AddImageLabelsRequest &) = default ;
    AddImageLabelsRequest& operator=(AddImageLabelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->labels_ == nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<AddImageLabelsRequest::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<AddImageLabelsRequest::Labels>) };
    inline vector<AddImageLabelsRequest::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<AddImageLabelsRequest::Labels>) };
    inline AddImageLabelsRequest& setLabels(const vector<AddImageLabelsRequest::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline AddImageLabelsRequest& setLabels(vector<AddImageLabelsRequest::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


  protected:
    // The list of image tags.
    // 
    // This parameter is required.
    shared_ptr<vector<AddImageLabelsRequest::Labels>> labels_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
