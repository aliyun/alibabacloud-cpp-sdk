// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DBVERSIONDETAILSPECSCOMPONENTSPECS_HPP_
#define ALIBABACLOUD_MODELS_DBVERSIONDETAILSPECSCOMPONENTSPECS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class DBVersionDetailSpecsComponentSpecs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DBVersionDetailSpecsComponentSpecs& obj) { 
      DARABONBA_PTR_TO_JSON(defaultReplicas, defaultReplicas_);
      DARABONBA_PTR_TO_JSON(maxReplicas, maxReplicas_);
      DARABONBA_PTR_TO_JSON(minReplicas, minReplicas_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(specs, specs_);
      DARABONBA_PTR_TO_JSON(step, step_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DBVersionDetailSpecsComponentSpecs& obj) { 
      DARABONBA_PTR_FROM_JSON(defaultReplicas, defaultReplicas_);
      DARABONBA_PTR_FROM_JSON(maxReplicas, maxReplicas_);
      DARABONBA_PTR_FROM_JSON(minReplicas, minReplicas_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(specs, specs_);
      DARABONBA_PTR_FROM_JSON(step, step_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DBVersionDetailSpecsComponentSpecs() = default ;
    DBVersionDetailSpecsComponentSpecs(const DBVersionDetailSpecsComponentSpecs &) = default ;
    DBVersionDetailSpecsComponentSpecs(DBVersionDetailSpecsComponentSpecs &&) = default ;
    DBVersionDetailSpecsComponentSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DBVersionDetailSpecsComponentSpecs() = default ;
    DBVersionDetailSpecsComponentSpecs& operator=(const DBVersionDetailSpecsComponentSpecs &) = default ;
    DBVersionDetailSpecsComponentSpecs& operator=(DBVersionDetailSpecsComponentSpecs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultReplicas_ == nullptr
        && return this->maxReplicas_ == nullptr && return this->minReplicas_ == nullptr && return this->name_ == nullptr && return this->specs_ == nullptr && return this->step_ == nullptr
        && return this->type_ == nullptr; };
    // defaultReplicas Field Functions 
    bool hasDefaultReplicas() const { return this->defaultReplicas_ != nullptr;};
    void deleteDefaultReplicas() { this->defaultReplicas_ = nullptr;};
    inline int32_t defaultReplicas() const { DARABONBA_PTR_GET_DEFAULT(defaultReplicas_, 0) };
    inline DBVersionDetailSpecsComponentSpecs& setDefaultReplicas(int32_t defaultReplicas) { DARABONBA_PTR_SET_VALUE(defaultReplicas_, defaultReplicas) };


    // maxReplicas Field Functions 
    bool hasMaxReplicas() const { return this->maxReplicas_ != nullptr;};
    void deleteMaxReplicas() { this->maxReplicas_ = nullptr;};
    inline int32_t maxReplicas() const { DARABONBA_PTR_GET_DEFAULT(maxReplicas_, 0) };
    inline DBVersionDetailSpecsComponentSpecs& setMaxReplicas(int32_t maxReplicas) { DARABONBA_PTR_SET_VALUE(maxReplicas_, maxReplicas) };


    // minReplicas Field Functions 
    bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
    void deleteMinReplicas() { this->minReplicas_ = nullptr;};
    inline int32_t minReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, 0) };
    inline DBVersionDetailSpecsComponentSpecs& setMinReplicas(int32_t minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DBVersionDetailSpecsComponentSpecs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // specs Field Functions 
    bool hasSpecs() const { return this->specs_ != nullptr;};
    void deleteSpecs() { this->specs_ = nullptr;};
    inline const vector<string> & specs() const { DARABONBA_PTR_GET_CONST(specs_, vector<string>) };
    inline vector<string> specs() { DARABONBA_PTR_GET(specs_, vector<string>) };
    inline DBVersionDetailSpecsComponentSpecs& setSpecs(const vector<string> & specs) { DARABONBA_PTR_SET_VALUE(specs_, specs) };
    inline DBVersionDetailSpecsComponentSpecs& setSpecs(vector<string> && specs) { DARABONBA_PTR_SET_RVALUE(specs_, specs) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline int32_t step() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
    inline DBVersionDetailSpecsComponentSpecs& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DBVersionDetailSpecsComponentSpecs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> defaultReplicas_ = nullptr;
    std::shared_ptr<int32_t> maxReplicas_ = nullptr;
    std::shared_ptr<int32_t> minReplicas_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<string>> specs_ = nullptr;
    std::shared_ptr<int32_t> step_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
