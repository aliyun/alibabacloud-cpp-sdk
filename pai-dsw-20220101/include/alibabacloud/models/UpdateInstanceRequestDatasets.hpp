// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTDATASETS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUESTDATASETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class UpdateInstanceRequestDatasets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequestDatasets& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_TO_JSON(Dynamic, dynamic_);
      DARABONBA_PTR_TO_JSON(MountAccess, mountAccess_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(OptionType, optionType_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequestDatasets& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_FROM_JSON(Dynamic, dynamic_);
      DARABONBA_PTR_FROM_JSON(MountAccess, mountAccess_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(OptionType, optionType_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    UpdateInstanceRequestDatasets() = default ;
    UpdateInstanceRequestDatasets(const UpdateInstanceRequestDatasets &) = default ;
    UpdateInstanceRequestDatasets(UpdateInstanceRequestDatasets &&) = default ;
    UpdateInstanceRequestDatasets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequestDatasets() = default ;
    UpdateInstanceRequestDatasets& operator=(const UpdateInstanceRequestDatasets &) = default ;
    UpdateInstanceRequestDatasets& operator=(UpdateInstanceRequestDatasets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetId_ == nullptr
        && return this->datasetVersion_ == nullptr && return this->dynamic_ == nullptr && return this->mountAccess_ == nullptr && return this->mountPath_ == nullptr && return this->optionType_ == nullptr
        && return this->options_ == nullptr && return this->uri_ == nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline UpdateInstanceRequestDatasets& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetVersion Field Functions 
    bool hasDatasetVersion() const { return this->datasetVersion_ != nullptr;};
    void deleteDatasetVersion() { this->datasetVersion_ = nullptr;};
    inline string datasetVersion() const { DARABONBA_PTR_GET_DEFAULT(datasetVersion_, "") };
    inline UpdateInstanceRequestDatasets& setDatasetVersion(string datasetVersion) { DARABONBA_PTR_SET_VALUE(datasetVersion_, datasetVersion) };


    // dynamic Field Functions 
    bool hasDynamic() const { return this->dynamic_ != nullptr;};
    void deleteDynamic() { this->dynamic_ = nullptr;};
    inline bool dynamic() const { DARABONBA_PTR_GET_DEFAULT(dynamic_, false) };
    inline UpdateInstanceRequestDatasets& setDynamic(bool dynamic) { DARABONBA_PTR_SET_VALUE(dynamic_, dynamic) };


    // mountAccess Field Functions 
    bool hasMountAccess() const { return this->mountAccess_ != nullptr;};
    void deleteMountAccess() { this->mountAccess_ = nullptr;};
    inline string mountAccess() const { DARABONBA_PTR_GET_DEFAULT(mountAccess_, "") };
    inline UpdateInstanceRequestDatasets& setMountAccess(string mountAccess) { DARABONBA_PTR_SET_VALUE(mountAccess_, mountAccess) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline UpdateInstanceRequestDatasets& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // optionType Field Functions 
    bool hasOptionType() const { return this->optionType_ != nullptr;};
    void deleteOptionType() { this->optionType_ = nullptr;};
    inline string optionType() const { DARABONBA_PTR_GET_DEFAULT(optionType_, "") };
    inline UpdateInstanceRequestDatasets& setOptionType(string optionType) { DARABONBA_PTR_SET_VALUE(optionType_, optionType) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline UpdateInstanceRequestDatasets& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline UpdateInstanceRequestDatasets& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    // The dataset ID. If the dataset is read-only, you cannot change the dataset pemission from read-only to read and write by using MountAccess.
    // 
    // You can call [ListDatasets](https://help.aliyun.com/document_detail/457222.html) to obtain the dataset ID. If you configure the dataset ID, you cannot configure the dataset URI.
    std::shared_ptr<string> datasetId_ = nullptr;
    // The dataset version. You must also configure DatasetId. If you leave this parameter empty, the value v1 is used by default.
    std::shared_ptr<string> datasetVersion_ = nullptr;
    // Specifies whether dynamic mounting is enabled. Default value: false.
    // 
    // *   Currently, only instances using general-purpose computing resources are supported.
    // *   Currently, only OSS datasets are supported. The mounted datasets are read-only.
    // *   The MountPath of the dynamically mounted dataset must be a subpath of the root path. Example: /mnt/dynamic/data1/
    // *   A dynamically mounted dataset must be after non-dynamic datasets.
    std::shared_ptr<bool> dynamic_ = nullptr;
    // The read and write permissions of the dataset. If the dataset is read-only, it cannot be changed to read and write.
    std::shared_ptr<string> mountAccess_ = nullptr;
    // The mount path of the dataset.
    std::shared_ptr<string> mountPath_ = nullptr;
    // The mount type. You cannot specify Options at the same time. This is deprecated, you can use Options instead.
    std::shared_ptr<string> optionType_ = nullptr;
    // The custom dataset mount options. Only OSS is supported. You cannot specify OptionType at the same time. For more information, see [DSW mount configurations](https://www.alibabacloud.com/help/en/pai/user-guide/read-and-write-dataset-data).
    std::shared_ptr<string> options_ = nullptr;
    // The URI of the storage service directory, which can be directly mounted. This parameter is mutually exclusive with DatasetId.
    // 
    // URI formats of different types of storage:
    // 
    // *   OSS: oss://bucket-name.oss-cn-shanghai-internal.aliyuncs.com/data/path/
    // *   NAS: nas://29\\*\\*d-b12\\*\\*\\*\\*446.cn-hangzhou.nas.aliyuncs.com/data/path/
    // *   Extreme NAS: nas://29\\*\\*\\*\\*123-y\\*\\*r.cn-hangzhou.extreme.nas.aliyuncs.com/data/path/
    // *   CPFS: cpfs://cpfs-213\\*\\*\\*\\*87.cn-wulanchabu/ptc-292\\*\\*\\*\\*\\*cbb/exp-290\\*\\*\\*\\*\\*\\*\\*\\*03e/data/path/
    // *   Lingjun CPFS: bmcpfs://cpfs-290\\*\\*\\*\\*\\*\\*foflh-vpc-x\\*\\*\\*\\*8r.cn-wulanchabu.cpfs.aliyuncs.com/data/path/
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
