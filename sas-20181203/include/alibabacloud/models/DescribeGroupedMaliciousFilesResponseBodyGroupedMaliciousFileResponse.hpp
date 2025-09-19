// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEDMALICIOUSFILESRESPONSEBODYGROUPEDMALICIOUSFILERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEDMALICIOUSFILESRESPONSEBODYGROUPEDMALICIOUSFILERESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse& obj) { 
      DARABONBA_PTR_TO_JSON(FirstScanTimestamp, firstScanTimestamp_);
      DARABONBA_PTR_TO_JSON(ImageCount, imageCount_);
      DARABONBA_PTR_TO_JSON(LatestScanTimestamp, latestScanTimestamp_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(MaliciousKey, maliciousKey_);
      DARABONBA_PTR_TO_JSON(MaliciousMd5, maliciousMd5_);
      DARABONBA_PTR_TO_JSON(MaliciousName, maliciousName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(FirstScanTimestamp, firstScanTimestamp_);
      DARABONBA_PTR_FROM_JSON(ImageCount, imageCount_);
      DARABONBA_PTR_FROM_JSON(LatestScanTimestamp, latestScanTimestamp_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(MaliciousKey, maliciousKey_);
      DARABONBA_PTR_FROM_JSON(MaliciousMd5, maliciousMd5_);
      DARABONBA_PTR_FROM_JSON(MaliciousName, maliciousName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse() = default ;
    DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse(const DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse &) = default ;
    DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse(DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse &&) = default ;
    DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse() = default ;
    DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse& operator=(const DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse &) = default ;
    DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse& operator=(DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->firstScanTimestamp_ != nullptr
        && this->imageCount_ != nullptr && this->latestScanTimestamp_ != nullptr && this->level_ != nullptr && this->maliciousKey_ != nullptr && this->maliciousMd5_ != nullptr
        && this->maliciousName_ != nullptr && this->status_ != nullptr; };
    // firstScanTimestamp Field Functions 
    bool hasFirstScanTimestamp() const { return this->firstScanTimestamp_ != nullptr;};
    void deleteFirstScanTimestamp() { this->firstScanTimestamp_ = nullptr;};
    inline int64_t firstScanTimestamp() const { DARABONBA_PTR_GET_DEFAULT(firstScanTimestamp_, 0L) };
    inline DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse& setFirstScanTimestamp(int64_t firstScanTimestamp) { DARABONBA_PTR_SET_VALUE(firstScanTimestamp_, firstScanTimestamp) };


    // imageCount Field Functions 
    bool hasImageCount() const { return this->imageCount_ != nullptr;};
    void deleteImageCount() { this->imageCount_ = nullptr;};
    inline int64_t imageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0L) };
    inline DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse& setImageCount(int64_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


    // latestScanTimestamp Field Functions 
    bool hasLatestScanTimestamp() const { return this->latestScanTimestamp_ != nullptr;};
    void deleteLatestScanTimestamp() { this->latestScanTimestamp_ = nullptr;};
    inline int64_t latestScanTimestamp() const { DARABONBA_PTR_GET_DEFAULT(latestScanTimestamp_, 0L) };
    inline DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse& setLatestScanTimestamp(int64_t latestScanTimestamp) { DARABONBA_PTR_SET_VALUE(latestScanTimestamp_, latestScanTimestamp) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // maliciousKey Field Functions 
    bool hasMaliciousKey() const { return this->maliciousKey_ != nullptr;};
    void deleteMaliciousKey() { this->maliciousKey_ = nullptr;};
    inline string maliciousKey() const { DARABONBA_PTR_GET_DEFAULT(maliciousKey_, "") };
    inline DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse& setMaliciousKey(string maliciousKey) { DARABONBA_PTR_SET_VALUE(maliciousKey_, maliciousKey) };


    // maliciousMd5 Field Functions 
    bool hasMaliciousMd5() const { return this->maliciousMd5_ != nullptr;};
    void deleteMaliciousMd5() { this->maliciousMd5_ = nullptr;};
    inline string maliciousMd5() const { DARABONBA_PTR_GET_DEFAULT(maliciousMd5_, "") };
    inline DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse& setMaliciousMd5(string maliciousMd5) { DARABONBA_PTR_SET_VALUE(maliciousMd5_, maliciousMd5) };


    // maliciousName Field Functions 
    bool hasMaliciousName() const { return this->maliciousName_ != nullptr;};
    void deleteMaliciousName() { this->maliciousName_ = nullptr;};
    inline string maliciousName() const { DARABONBA_PTR_GET_DEFAULT(maliciousName_, "") };
    inline DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse& setMaliciousName(string maliciousName) { DARABONBA_PTR_SET_VALUE(maliciousName_, maliciousName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeGroupedMaliciousFilesResponseBodyGroupedMaliciousFileResponse& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The timestamp generated when the first scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> firstScanTimestamp_ = nullptr;
    // The number of affected images.
    std::shared_ptr<int64_t> imageCount_ = nullptr;
    // The timestamp generated when the last scan was performed. Unit: milliseconds.
    std::shared_ptr<int64_t> latestScanTimestamp_ = nullptr;
    // The severity of the malicious image sample. Valid values:
    // 
    // *   **serious**
    // *   **suspicious**
    // *   **remind**
    std::shared_ptr<string> level_ = nullptr;
    // The keyword of the malicious image sample.
    std::shared_ptr<string> maliciousKey_ = nullptr;
    // The MD5 hash value of the malicious image sample.
    std::shared_ptr<string> maliciousMd5_ = nullptr;
    // The name of the malicious image sample.
    std::shared_ptr<string> maliciousName_ = nullptr;
    // The handling status of the malicious image sample. Valid values:
    // 
    // *   **0**: unhandled
    // *   **1**: handled
    // *   **2**: verifying
    // *   **3**: whitelisted
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
