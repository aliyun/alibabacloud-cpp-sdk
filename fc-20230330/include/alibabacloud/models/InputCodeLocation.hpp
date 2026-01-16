// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INPUTCODELOCATION_HPP_
#define ALIBABACLOUD_MODELS_INPUTCODELOCATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class InputCodeLocation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InputCodeLocation& obj) { 
      DARABONBA_PTR_TO_JSON(checksum, checksum_);
      DARABONBA_PTR_TO_JSON(ossBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(ossObjectName, ossObjectName_);
      DARABONBA_PTR_TO_JSON(zipFile, zipFile_);
    };
    friend void from_json(const Darabonba::Json& j, InputCodeLocation& obj) { 
      DARABONBA_PTR_FROM_JSON(checksum, checksum_);
      DARABONBA_PTR_FROM_JSON(ossBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(ossObjectName, ossObjectName_);
      DARABONBA_PTR_FROM_JSON(zipFile, zipFile_);
    };
    InputCodeLocation() = default ;
    InputCodeLocation(const InputCodeLocation &) = default ;
    InputCodeLocation(InputCodeLocation &&) = default ;
    InputCodeLocation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InputCodeLocation() = default ;
    InputCodeLocation& operator=(const InputCodeLocation &) = default ;
    InputCodeLocation& operator=(InputCodeLocation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checksum_ == nullptr
        && this->ossBucketName_ == nullptr && this->ossObjectName_ == nullptr && this->zipFile_ == nullptr; };
    // checksum Field Functions 
    bool hasChecksum() const { return this->checksum_ != nullptr;};
    void deleteChecksum() { this->checksum_ = nullptr;};
    inline string getChecksum() const { DARABONBA_PTR_GET_DEFAULT(checksum_, "") };
    inline InputCodeLocation& setChecksum(string checksum) { DARABONBA_PTR_SET_VALUE(checksum_, checksum) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string getOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline InputCodeLocation& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // ossObjectName Field Functions 
    bool hasOssObjectName() const { return this->ossObjectName_ != nullptr;};
    void deleteOssObjectName() { this->ossObjectName_ = nullptr;};
    inline string getOssObjectName() const { DARABONBA_PTR_GET_DEFAULT(ossObjectName_, "") };
    inline InputCodeLocation& setOssObjectName(string ossObjectName) { DARABONBA_PTR_SET_VALUE(ossObjectName_, ossObjectName) };


    // zipFile Field Functions 
    bool hasZipFile() const { return this->zipFile_ != nullptr;};
    void deleteZipFile() { this->zipFile_ = nullptr;};
    inline string getZipFile() const { DARABONBA_PTR_GET_DEFAULT(zipFile_, "") };
    inline InputCodeLocation& setZipFile(string zipFile) { DARABONBA_PTR_SET_VALUE(zipFile_, zipFile) };


  protected:
    shared_ptr<string> checksum_ {};
    shared_ptr<string> ossBucketName_ {};
    shared_ptr<string> ossObjectName_ {};
    shared_ptr<string> zipFile_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
