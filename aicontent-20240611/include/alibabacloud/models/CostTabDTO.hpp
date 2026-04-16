// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COSTTABDTO_HPP_
#define ALIBABACLOUD_MODELS_COSTTABDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class CostTabDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CostTabDTO& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(label, label_);
      DARABONBA_PTR_TO_JSON(modelTypes, modelTypes_);
    };
    friend void from_json(const Darabonba::Json& j, CostTabDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(label, label_);
      DARABONBA_PTR_FROM_JSON(modelTypes, modelTypes_);
    };
    CostTabDTO() = default ;
    CostTabDTO(const CostTabDTO &) = default ;
    CostTabDTO(CostTabDTO &&) = default ;
    CostTabDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CostTabDTO() = default ;
    CostTabDTO& operator=(const CostTabDTO &) = default ;
    CostTabDTO& operator=(CostTabDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && this->label_ == nullptr && this->modelTypes_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CostTabDTO& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline CostTabDTO& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // modelTypes Field Functions 
    bool hasModelTypes() const { return this->modelTypes_ != nullptr;};
    void deleteModelTypes() { this->modelTypes_ = nullptr;};
    inline const vector<string> & getModelTypes() const { DARABONBA_PTR_GET_CONST(modelTypes_, vector<string>) };
    inline vector<string> getModelTypes() { DARABONBA_PTR_GET(modelTypes_, vector<string>) };
    inline CostTabDTO& setModelTypes(const vector<string> & modelTypes) { DARABONBA_PTR_SET_VALUE(modelTypes_, modelTypes) };
    inline CostTabDTO& setModelTypes(vector<string> && modelTypes) { DARABONBA_PTR_SET_RVALUE(modelTypes_, modelTypes) };


  protected:
    shared_ptr<string> key_ {};
    shared_ptr<string> label_ {};
    shared_ptr<vector<string>> modelTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
