// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICPRECHECKIMAGESCANTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_PUBLICPRECHECKIMAGESCANTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class PublicPreCheckImageScanTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicPreCheckImageScanTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(NeedAuthCount, needAuthCount_);
      DARABONBA_PTR_TO_JSON(ScanImageCount, scanImageCount_);
    };
    friend void from_json(const Darabonba::Json& j, PublicPreCheckImageScanTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(NeedAuthCount, needAuthCount_);
      DARABONBA_PTR_FROM_JSON(ScanImageCount, scanImageCount_);
    };
    PublicPreCheckImageScanTaskResponseBodyData() = default ;
    PublicPreCheckImageScanTaskResponseBodyData(const PublicPreCheckImageScanTaskResponseBodyData &) = default ;
    PublicPreCheckImageScanTaskResponseBodyData(PublicPreCheckImageScanTaskResponseBodyData &&) = default ;
    PublicPreCheckImageScanTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicPreCheckImageScanTaskResponseBodyData() = default ;
    PublicPreCheckImageScanTaskResponseBodyData& operator=(const PublicPreCheckImageScanTaskResponseBodyData &) = default ;
    PublicPreCheckImageScanTaskResponseBodyData& operator=(PublicPreCheckImageScanTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->needAuthCount_ == nullptr
        && return this->scanImageCount_ == nullptr; };
    // needAuthCount Field Functions 
    bool hasNeedAuthCount() const { return this->needAuthCount_ != nullptr;};
    void deleteNeedAuthCount() { this->needAuthCount_ = nullptr;};
    inline int32_t needAuthCount() const { DARABONBA_PTR_GET_DEFAULT(needAuthCount_, 0) };
    inline PublicPreCheckImageScanTaskResponseBodyData& setNeedAuthCount(int32_t needAuthCount) { DARABONBA_PTR_SET_VALUE(needAuthCount_, needAuthCount) };


    // scanImageCount Field Functions 
    bool hasScanImageCount() const { return this->scanImageCount_ != nullptr;};
    void deleteScanImageCount() { this->scanImageCount_ = nullptr;};
    inline int32_t scanImageCount() const { DARABONBA_PTR_GET_DEFAULT(scanImageCount_, 0) };
    inline PublicPreCheckImageScanTaskResponseBodyData& setScanImageCount(int32_t scanImageCount) { DARABONBA_PTR_SET_VALUE(scanImageCount_, scanImageCount) };


  protected:
    // The number of images to scan in the task.
    std::shared_ptr<int32_t> needAuthCount_ = nullptr;
    // The quota for container image scan to be consumed by the task.
    std::shared_ptr<int32_t> scanImageCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
