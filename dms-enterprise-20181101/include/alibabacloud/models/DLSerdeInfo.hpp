// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DLSERDEINFO_HPP_
#define ALIBABACLOUD_MODELS_DLSERDEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DLSerdeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DLSerdeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DeserializerClass, deserializerClass_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_ANY_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(SerdeType, serdeType_);
      DARABONBA_PTR_TO_JSON(SerializationLib, serializationLib_);
      DARABONBA_PTR_TO_JSON(SerializerClass, serializerClass_);
    };
    friend void from_json(const Darabonba::Json& j, DLSerdeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DeserializerClass, deserializerClass_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(SerdeType, serdeType_);
      DARABONBA_PTR_FROM_JSON(SerializationLib, serializationLib_);
      DARABONBA_PTR_FROM_JSON(SerializerClass, serializerClass_);
    };
    DLSerdeInfo() = default ;
    DLSerdeInfo(const DLSerdeInfo &) = default ;
    DLSerdeInfo(DLSerdeInfo &&) = default ;
    DLSerdeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DLSerdeInfo() = default ;
    DLSerdeInfo& operator=(const DLSerdeInfo &) = default ;
    DLSerdeInfo& operator=(DLSerdeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->deserializerClass_ == nullptr && this->name_ == nullptr && this->parameters_ == nullptr && this->serdeType_ == nullptr && this->serializationLib_ == nullptr
        && this->serializerClass_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DLSerdeInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // deserializerClass Field Functions 
    bool hasDeserializerClass() const { return this->deserializerClass_ != nullptr;};
    void deleteDeserializerClass() { this->deserializerClass_ = nullptr;};
    inline string getDeserializerClass() const { DARABONBA_PTR_GET_DEFAULT(deserializerClass_, "") };
    inline DLSerdeInfo& setDeserializerClass(string deserializerClass) { DARABONBA_PTR_SET_VALUE(deserializerClass_, deserializerClass) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DLSerdeInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
    inline DLSerdeInfo& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline DLSerdeInfo& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // serdeType Field Functions 
    bool hasSerdeType() const { return this->serdeType_ != nullptr;};
    void deleteSerdeType() { this->serdeType_ = nullptr;};
    inline int32_t getSerdeType() const { DARABONBA_PTR_GET_DEFAULT(serdeType_, 0) };
    inline DLSerdeInfo& setSerdeType(int32_t serdeType) { DARABONBA_PTR_SET_VALUE(serdeType_, serdeType) };


    // serializationLib Field Functions 
    bool hasSerializationLib() const { return this->serializationLib_ != nullptr;};
    void deleteSerializationLib() { this->serializationLib_ = nullptr;};
    inline string getSerializationLib() const { DARABONBA_PTR_GET_DEFAULT(serializationLib_, "") };
    inline DLSerdeInfo& setSerializationLib(string serializationLib) { DARABONBA_PTR_SET_VALUE(serializationLib_, serializationLib) };


    // serializerClass Field Functions 
    bool hasSerializerClass() const { return this->serializerClass_ != nullptr;};
    void deleteSerializerClass() { this->serializerClass_ = nullptr;};
    inline string getSerializerClass() const { DARABONBA_PTR_GET_DEFAULT(serializerClass_, "") };
    inline DLSerdeInfo& setSerializerClass(string serializerClass) { DARABONBA_PTR_SET_VALUE(serializerClass_, serializerClass) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> deserializerClass_ {};
    shared_ptr<string> name_ {};
    Darabonba::Json parameters_ {};
    shared_ptr<int32_t> serdeType_ {};
    shared_ptr<string> serializationLib_ {};
    shared_ptr<string> serializerClass_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
