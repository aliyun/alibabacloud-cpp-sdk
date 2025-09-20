// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELSPECIFICATION_HPP_
#define ALIBABACLOUD_MODELS_MODELSPECIFICATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MetaData.hpp>
#include <alibabacloud/models/Spec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ModelSpecification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelSpecification& obj) { 
      DARABONBA_PTR_TO_JSON(MetaData, metaData_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, ModelSpecification& obj) { 
      DARABONBA_PTR_FROM_JSON(MetaData, metaData_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
    };
    ModelSpecification() = default ;
    ModelSpecification(const ModelSpecification &) = default ;
    ModelSpecification(ModelSpecification &&) = default ;
    ModelSpecification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelSpecification() = default ;
    ModelSpecification& operator=(const ModelSpecification &) = default ;
    ModelSpecification& operator=(ModelSpecification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metaData_ != nullptr
        && this->spec_ != nullptr; };
    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline const MetaData & metaData() const { DARABONBA_PTR_GET_CONST(metaData_, MetaData) };
    inline MetaData metaData() { DARABONBA_PTR_GET(metaData_, MetaData) };
    inline ModelSpecification& setMetaData(const MetaData & metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };
    inline ModelSpecification& setMetaData(MetaData && metaData) { DARABONBA_PTR_SET_RVALUE(metaData_, metaData) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline const Spec & spec() const { DARABONBA_PTR_GET_CONST(spec_, Spec) };
    inline Spec spec() { DARABONBA_PTR_GET(spec_, Spec) };
    inline ModelSpecification& setSpec(const Spec & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
    inline ModelSpecification& setSpec(Spec && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


  protected:
    // This parameter is required.
    std::shared_ptr<MetaData> metaData_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Spec> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
