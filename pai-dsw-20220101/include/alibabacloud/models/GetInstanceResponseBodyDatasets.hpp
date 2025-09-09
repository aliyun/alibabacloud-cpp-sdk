// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATASETS_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATASETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetInstanceResponseBodyDatasets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyDatasets& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_TO_JSON(Dynamic, dynamic_);
      DARABONBA_PTR_TO_JSON(MountAccess, mountAccess_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(OptionType, optionType_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyDatasets& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_FROM_JSON(Dynamic, dynamic_);
      DARABONBA_PTR_FROM_JSON(MountAccess, mountAccess_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(OptionType, optionType_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    GetInstanceResponseBodyDatasets() = default ;
    GetInstanceResponseBodyDatasets(const GetInstanceResponseBodyDatasets &) = default ;
    GetInstanceResponseBodyDatasets(GetInstanceResponseBodyDatasets &&) = default ;
    GetInstanceResponseBodyDatasets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyDatasets() = default ;
    GetInstanceResponseBodyDatasets& operator=(const GetInstanceResponseBodyDatasets &) = default ;
    GetInstanceResponseBodyDatasets& operator=(GetInstanceResponseBodyDatasets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasetId_ != nullptr
        && this->datasetVersion_ != nullptr && this->dynamic_ != nullptr && this->mountAccess_ != nullptr && this->mountPath_ != nullptr && this->optionType_ != nullptr
        && this->options_ != nullptr && this->uri_ != nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline GetInstanceResponseBodyDatasets& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetVersion Field Functions 
    bool hasDatasetVersion() const { return this->datasetVersion_ != nullptr;};
    void deleteDatasetVersion() { this->datasetVersion_ = nullptr;};
    inline string datasetVersion() const { DARABONBA_PTR_GET_DEFAULT(datasetVersion_, "") };
    inline GetInstanceResponseBodyDatasets& setDatasetVersion(string datasetVersion) { DARABONBA_PTR_SET_VALUE(datasetVersion_, datasetVersion) };


    // dynamic Field Functions 
    bool hasDynamic() const { return this->dynamic_ != nullptr;};
    void deleteDynamic() { this->dynamic_ = nullptr;};
    inline bool dynamic() const { DARABONBA_PTR_GET_DEFAULT(dynamic_, false) };
    inline GetInstanceResponseBodyDatasets& setDynamic(bool dynamic) { DARABONBA_PTR_SET_VALUE(dynamic_, dynamic) };


    // mountAccess Field Functions 
    bool hasMountAccess() const { return this->mountAccess_ != nullptr;};
    void deleteMountAccess() { this->mountAccess_ = nullptr;};
    inline string mountAccess() const { DARABONBA_PTR_GET_DEFAULT(mountAccess_, "") };
    inline GetInstanceResponseBodyDatasets& setMountAccess(string mountAccess) { DARABONBA_PTR_SET_VALUE(mountAccess_, mountAccess) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline GetInstanceResponseBodyDatasets& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // optionType Field Functions 
    bool hasOptionType() const { return this->optionType_ != nullptr;};
    void deleteOptionType() { this->optionType_ = nullptr;};
    inline string optionType() const { DARABONBA_PTR_GET_DEFAULT(optionType_, "") };
    inline GetInstanceResponseBodyDatasets& setOptionType(string optionType) { DARABONBA_PTR_SET_VALUE(optionType_, optionType) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline GetInstanceResponseBodyDatasets& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline GetInstanceResponseBodyDatasets& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    // The dataset ID.
    std::shared_ptr<string> datasetId_ = nullptr;
    // The dataset version.
    std::shared_ptr<string> datasetVersion_ = nullptr;
    // Indicates whether dynamic mounting is enabled. Default value: false.
    std::shared_ptr<bool> dynamic_ = nullptr;
    // The read and write permissions. Valid values: RW and RO.
    std::shared_ptr<string> mountAccess_ = nullptr;
    // The mount path in the container.
    std::shared_ptr<string> mountPath_ = nullptr;
    // The mount type of the dataset (deprecated).
    std::shared_ptr<string> optionType_ = nullptr;
    // The mount type of the dataset.
    std::shared_ptr<string> options_ = nullptr;
    // The dataset URI.
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
