// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ICEBERGPARTITIONFIELD_HPP_
#define ALIBABACLOUD_MODELS_ICEBERGPARTITIONFIELD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class IcebergPartitionField : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IcebergPartitionField& obj) { 
      DARABONBA_PTR_TO_JSON(fieldId, fieldId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(transform, transform_);
    };
    friend void from_json(const Darabonba::Json& j, IcebergPartitionField& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldId, fieldId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(transform, transform_);
    };
    IcebergPartitionField() = default ;
    IcebergPartitionField(const IcebergPartitionField &) = default ;
    IcebergPartitionField(IcebergPartitionField &&) = default ;
    IcebergPartitionField(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IcebergPartitionField() = default ;
    IcebergPartitionField& operator=(const IcebergPartitionField &) = default ;
    IcebergPartitionField& operator=(IcebergPartitionField &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldId_ == nullptr
        && return this->name_ == nullptr && return this->sourceId_ == nullptr && return this->transform_ == nullptr; };
    // fieldId Field Functions 
    bool hasFieldId() const { return this->fieldId_ != nullptr;};
    void deleteFieldId() { this->fieldId_ = nullptr;};
    inline int64_t fieldId() const { DARABONBA_PTR_GET_DEFAULT(fieldId_, 0L) };
    inline IcebergPartitionField& setFieldId(int64_t fieldId) { DARABONBA_PTR_SET_VALUE(fieldId_, fieldId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline IcebergPartitionField& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline IcebergPartitionField& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // transform Field Functions 
    bool hasTransform() const { return this->transform_ != nullptr;};
    void deleteTransform() { this->transform_ = nullptr;};
    inline string transform() const { DARABONBA_PTR_GET_DEFAULT(transform_, "") };
    inline IcebergPartitionField& setTransform(string transform) { DARABONBA_PTR_SET_VALUE(transform_, transform) };


  protected:
    std::shared_ptr<int64_t> fieldId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> sourceId_ = nullptr;
    std::shared_ptr<string> transform_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
