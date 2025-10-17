// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STORAGEDESCRIPTORMODEL_HPP_
#define ALIBABACLOUD_MODELS_STORAGEDESCRIPTORMODEL_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/SerDeInfoModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class StorageDescriptorModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StorageDescriptorModel& obj) { 
      DARABONBA_PTR_TO_JSON(Compressed, compressed_);
      DARABONBA_PTR_TO_JSON(InputFormat, inputFormat_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(NumBuckets, numBuckets_);
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(SdId, sdId_);
      DARABONBA_PTR_TO_JSON(SerDeInfo, serDeInfo_);
      DARABONBA_PTR_TO_JSON(StoredAsSubDirectories, storedAsSubDirectories_);
    };
    friend void from_json(const Darabonba::Json& j, StorageDescriptorModel& obj) { 
      DARABONBA_PTR_FROM_JSON(Compressed, compressed_);
      DARABONBA_PTR_FROM_JSON(InputFormat, inputFormat_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(NumBuckets, numBuckets_);
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(SdId, sdId_);
      DARABONBA_PTR_FROM_JSON(SerDeInfo, serDeInfo_);
      DARABONBA_PTR_FROM_JSON(StoredAsSubDirectories, storedAsSubDirectories_);
    };
    StorageDescriptorModel() = default ;
    StorageDescriptorModel(const StorageDescriptorModel &) = default ;
    StorageDescriptorModel(StorageDescriptorModel &&) = default ;
    StorageDescriptorModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StorageDescriptorModel() = default ;
    StorageDescriptorModel& operator=(const StorageDescriptorModel &) = default ;
    StorageDescriptorModel& operator=(StorageDescriptorModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compressed_ == nullptr
        && return this->inputFormat_ == nullptr && return this->location_ == nullptr && return this->numBuckets_ == nullptr && return this->outputFormat_ == nullptr && return this->parameters_ == nullptr
        && return this->sdId_ == nullptr && return this->serDeInfo_ == nullptr && return this->storedAsSubDirectories_ == nullptr; };
    // compressed Field Functions 
    bool hasCompressed() const { return this->compressed_ != nullptr;};
    void deleteCompressed() { this->compressed_ = nullptr;};
    inline bool compressed() const { DARABONBA_PTR_GET_DEFAULT(compressed_, false) };
    inline StorageDescriptorModel& setCompressed(bool compressed) { DARABONBA_PTR_SET_VALUE(compressed_, compressed) };


    // inputFormat Field Functions 
    bool hasInputFormat() const { return this->inputFormat_ != nullptr;};
    void deleteInputFormat() { this->inputFormat_ = nullptr;};
    inline string inputFormat() const { DARABONBA_PTR_GET_DEFAULT(inputFormat_, "") };
    inline StorageDescriptorModel& setInputFormat(string inputFormat) { DARABONBA_PTR_SET_VALUE(inputFormat_, inputFormat) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline StorageDescriptorModel& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // numBuckets Field Functions 
    bool hasNumBuckets() const { return this->numBuckets_ != nullptr;};
    void deleteNumBuckets() { this->numBuckets_ = nullptr;};
    inline int64_t numBuckets() const { DARABONBA_PTR_GET_DEFAULT(numBuckets_, 0L) };
    inline StorageDescriptorModel& setNumBuckets(int64_t numBuckets) { DARABONBA_PTR_SET_VALUE(numBuckets_, numBuckets) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline StorageDescriptorModel& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const map<string, string> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
    inline map<string, string> parameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
    inline StorageDescriptorModel& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline StorageDescriptorModel& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // sdId Field Functions 
    bool hasSdId() const { return this->sdId_ != nullptr;};
    void deleteSdId() { this->sdId_ = nullptr;};
    inline int64_t sdId() const { DARABONBA_PTR_GET_DEFAULT(sdId_, 0L) };
    inline StorageDescriptorModel& setSdId(int64_t sdId) { DARABONBA_PTR_SET_VALUE(sdId_, sdId) };


    // serDeInfo Field Functions 
    bool hasSerDeInfo() const { return this->serDeInfo_ != nullptr;};
    void deleteSerDeInfo() { this->serDeInfo_ = nullptr;};
    inline const SerDeInfoModel & serDeInfo() const { DARABONBA_PTR_GET_CONST(serDeInfo_, SerDeInfoModel) };
    inline SerDeInfoModel serDeInfo() { DARABONBA_PTR_GET(serDeInfo_, SerDeInfoModel) };
    inline StorageDescriptorModel& setSerDeInfo(const SerDeInfoModel & serDeInfo) { DARABONBA_PTR_SET_VALUE(serDeInfo_, serDeInfo) };
    inline StorageDescriptorModel& setSerDeInfo(SerDeInfoModel && serDeInfo) { DARABONBA_PTR_SET_RVALUE(serDeInfo_, serDeInfo) };


    // storedAsSubDirectories Field Functions 
    bool hasStoredAsSubDirectories() const { return this->storedAsSubDirectories_ != nullptr;};
    void deleteStoredAsSubDirectories() { this->storedAsSubDirectories_ = nullptr;};
    inline bool storedAsSubDirectories() const { DARABONBA_PTR_GET_DEFAULT(storedAsSubDirectories_, false) };
    inline StorageDescriptorModel& setStoredAsSubDirectories(bool storedAsSubDirectories) { DARABONBA_PTR_SET_VALUE(storedAsSubDirectories_, storedAsSubDirectories) };


  protected:
    std::shared_ptr<bool> compressed_ = nullptr;
    std::shared_ptr<string> inputFormat_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<int64_t> numBuckets_ = nullptr;
    std::shared_ptr<string> outputFormat_ = nullptr;
    std::shared_ptr<map<string, string>> parameters_ = nullptr;
    std::shared_ptr<int64_t> sdId_ = nullptr;
    std::shared_ptr<SerDeInfoModel> serDeInfo_ = nullptr;
    std::shared_ptr<bool> storedAsSubDirectories_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
