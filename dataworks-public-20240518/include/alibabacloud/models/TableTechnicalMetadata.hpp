// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLETECHNICALMETADATA_HPP_
#define ALIBABACLOUD_MODELS_TABLETECHNICALMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class TableTechnicalMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableTechnicalMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(Compressed, compressed_);
      DARABONBA_PTR_TO_JSON(InputFormat, inputFormat_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(SerializationLibrary, serializationLibrary_);
    };
    friend void from_json(const Darabonba::Json& j, TableTechnicalMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(Compressed, compressed_);
      DARABONBA_PTR_FROM_JSON(InputFormat, inputFormat_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(SerializationLibrary, serializationLibrary_);
    };
    TableTechnicalMetadata() = default ;
    TableTechnicalMetadata(const TableTechnicalMetadata &) = default ;
    TableTechnicalMetadata(TableTechnicalMetadata &&) = default ;
    TableTechnicalMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableTechnicalMetadata() = default ;
    TableTechnicalMetadata& operator=(const TableTechnicalMetadata &) = default ;
    TableTechnicalMetadata& operator=(TableTechnicalMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compressed_ == nullptr
        && return this->inputFormat_ == nullptr && return this->location_ == nullptr && return this->outputFormat_ == nullptr && return this->owner_ == nullptr && return this->parameters_ == nullptr
        && return this->serializationLibrary_ == nullptr; };
    // compressed Field Functions 
    bool hasCompressed() const { return this->compressed_ != nullptr;};
    void deleteCompressed() { this->compressed_ = nullptr;};
    inline bool compressed() const { DARABONBA_PTR_GET_DEFAULT(compressed_, false) };
    inline TableTechnicalMetadata& setCompressed(bool compressed) { DARABONBA_PTR_SET_VALUE(compressed_, compressed) };


    // inputFormat Field Functions 
    bool hasInputFormat() const { return this->inputFormat_ != nullptr;};
    void deleteInputFormat() { this->inputFormat_ = nullptr;};
    inline string inputFormat() const { DARABONBA_PTR_GET_DEFAULT(inputFormat_, "") };
    inline TableTechnicalMetadata& setInputFormat(string inputFormat) { DARABONBA_PTR_SET_VALUE(inputFormat_, inputFormat) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline TableTechnicalMetadata& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline TableTechnicalMetadata& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline TableTechnicalMetadata& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const map<string, string> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
    inline map<string, string> parameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
    inline TableTechnicalMetadata& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline TableTechnicalMetadata& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // serializationLibrary Field Functions 
    bool hasSerializationLibrary() const { return this->serializationLibrary_ != nullptr;};
    void deleteSerializationLibrary() { this->serializationLibrary_ = nullptr;};
    inline string serializationLibrary() const { DARABONBA_PTR_GET_DEFAULT(serializationLibrary_, "") };
    inline TableTechnicalMetadata& setSerializationLibrary(string serializationLibrary) { DARABONBA_PTR_SET_VALUE(serializationLibrary_, serializationLibrary) };


  protected:
    std::shared_ptr<bool> compressed_ = nullptr;
    std::shared_ptr<string> inputFormat_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> outputFormat_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<map<string, string>> parameters_ = nullptr;
    std::shared_ptr<string> serializationLibrary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
