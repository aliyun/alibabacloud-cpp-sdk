// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSSLSADBJOBREQUESTCOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSSLSADBJOBREQUESTCOLUMNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateApsSlsADBJobRequestColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApsSlsADBJobRequestColumns& obj) { 
      DARABONBA_PTR_TO_JSON(MapName, mapName_);
      DARABONBA_PTR_TO_JSON(MapType, mapType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApsSlsADBJobRequestColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(MapName, mapName_);
      DARABONBA_PTR_FROM_JSON(MapType, mapType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateApsSlsADBJobRequestColumns() = default ;
    CreateApsSlsADBJobRequestColumns(const CreateApsSlsADBJobRequestColumns &) = default ;
    CreateApsSlsADBJobRequestColumns(CreateApsSlsADBJobRequestColumns &&) = default ;
    CreateApsSlsADBJobRequestColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApsSlsADBJobRequestColumns() = default ;
    CreateApsSlsADBJobRequestColumns& operator=(const CreateApsSlsADBJobRequestColumns &) = default ;
    CreateApsSlsADBJobRequestColumns& operator=(CreateApsSlsADBJobRequestColumns &&) = default ;
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
    inline CreateApsSlsADBJobRequestColumns& setMapName(string mapName) { DARABONBA_PTR_SET_VALUE(mapName_, mapName) };


    // mapType Field Functions 
    bool hasMapType() const { return this->mapType_ != nullptr;};
    void deleteMapType() { this->mapType_ = nullptr;};
    inline string mapType() const { DARABONBA_PTR_GET_DEFAULT(mapType_, "") };
    inline CreateApsSlsADBJobRequestColumns& setMapType(string mapType) { DARABONBA_PTR_SET_VALUE(mapType_, mapType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateApsSlsADBJobRequestColumns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateApsSlsADBJobRequestColumns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the mapping.
    std::shared_ptr<string> mapName_ = nullptr;
    // The type of the mapping.
    std::shared_ptr<string> mapType_ = nullptr;
    // The name of the column.
    std::shared_ptr<string> name_ = nullptr;
    // The data type of the column.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
