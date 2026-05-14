// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAMOUNTINFO_HPP_
#define ALIBABACLOUD_MODELS_DATAMOUNTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DataMountInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataMountInfo& obj) { 
      DARABONBA_PTR_TO_JSON(MountFolderName, mountFolderName_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
      DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
    };
    friend void from_json(const Darabonba::Json& j, DataMountInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(MountFolderName, mountFolderName_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
    };
    DataMountInfo() = default ;
    DataMountInfo(const DataMountInfo &) = default ;
    DataMountInfo(DataMountInfo &&) = default ;
    DataMountInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataMountInfo() = default ;
    DataMountInfo& operator=(const DataMountInfo &) = default ;
    DataMountInfo& operator=(DataMountInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountFolderName_ == nullptr
        && this->ossBucket_ == nullptr && this->prefix_ == nullptr && this->readOnly_ == nullptr; };
    // mountFolderName Field Functions 
    bool hasMountFolderName() const { return this->mountFolderName_ != nullptr;};
    void deleteMountFolderName() { this->mountFolderName_ = nullptr;};
    inline string getMountFolderName() const { DARABONBA_PTR_GET_DEFAULT(mountFolderName_, "") };
    inline DataMountInfo& setMountFolderName(string mountFolderName) { DARABONBA_PTR_SET_VALUE(mountFolderName_, mountFolderName) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline DataMountInfo& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline DataMountInfo& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline DataMountInfo& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


  protected:
    shared_ptr<string> mountFolderName_ {};
    shared_ptr<string> ossBucket_ {};
    shared_ptr<string> prefix_ {};
    shared_ptr<bool> readOnly_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
