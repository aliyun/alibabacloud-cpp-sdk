// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSKAFKAHUDIJOBREQUESTCOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSKAFKAHUDIJOBREQUESTCOLUMNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateApsKafkaHudiJobRequestColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApsKafkaHudiJobRequestColumns& obj) { 
      DARABONBA_PTR_TO_JSON(MapName, mapName_);
      DARABONBA_PTR_TO_JSON(MapType, mapType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApsKafkaHudiJobRequestColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(MapName, mapName_);
      DARABONBA_PTR_FROM_JSON(MapType, mapType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateApsKafkaHudiJobRequestColumns() = default ;
    CreateApsKafkaHudiJobRequestColumns(const CreateApsKafkaHudiJobRequestColumns &) = default ;
    CreateApsKafkaHudiJobRequestColumns(CreateApsKafkaHudiJobRequestColumns &&) = default ;
    CreateApsKafkaHudiJobRequestColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApsKafkaHudiJobRequestColumns() = default ;
    CreateApsKafkaHudiJobRequestColumns& operator=(const CreateApsKafkaHudiJobRequestColumns &) = default ;
    CreateApsKafkaHudiJobRequestColumns& operator=(CreateApsKafkaHudiJobRequestColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mapName_ != nullptr
        && this->mapType_ != nullptr && this->name_ != nullptr && this->type_ != nullptr; };
    // mapName Field Functions 
    bool hasMapName() const { return this->mapName_ != nullptr;};
    void deleteMapName() { this->mapName_ = nullptr;};
    inline string mapName() const { DARABONBA_PTR_GET_DEFAULT(mapName_, "") };
    inline CreateApsKafkaHudiJobRequestColumns& setMapName(string mapName) { DARABONBA_PTR_SET_VALUE(mapName_, mapName) };


    // mapType Field Functions 
    bool hasMapType() const { return this->mapType_ != nullptr;};
    void deleteMapType() { this->mapType_ = nullptr;};
    inline string mapType() const { DARABONBA_PTR_GET_DEFAULT(mapType_, "") };
    inline CreateApsKafkaHudiJobRequestColumns& setMapType(string mapType) { DARABONBA_PTR_SET_VALUE(mapType_, mapType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateApsKafkaHudiJobRequestColumns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateApsKafkaHudiJobRequestColumns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> mapName_ = nullptr;
    std::shared_ptr<string> mapType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
