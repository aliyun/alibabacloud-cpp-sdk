// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSRESPONSEBODYPOLICYBINDINGSADVANCEDOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSRESPONSEBODYPOLICYBINDINGSADVANCEDOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail.hpp>
#include <alibabacloud/models/DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail.hpp>
#include <alibabacloud/models/DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail.hpp>
#include <alibabacloud/models/DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail.hpp>
#include <alibabacloud/models/DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions& obj) { 
      DARABONBA_PTR_TO_JSON(CommonFileSystemDetail, commonFileSystemDetail_);
      DARABONBA_PTR_TO_JSON(CommonNasDetail, commonNasDetail_);
      DARABONBA_PTR_TO_JSON(FileDetail, fileDetail_);
      DARABONBA_PTR_TO_JSON(OssDetail, ossDetail_);
      DARABONBA_PTR_TO_JSON(UdmDetail, udmDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonFileSystemDetail, commonFileSystemDetail_);
      DARABONBA_PTR_FROM_JSON(CommonNasDetail, commonNasDetail_);
      DARABONBA_PTR_FROM_JSON(FileDetail, fileDetail_);
      DARABONBA_PTR_FROM_JSON(OssDetail, ossDetail_);
      DARABONBA_PTR_FROM_JSON(UdmDetail, udmDetail_);
    };
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions() = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions(const DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions &) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions(DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions &&) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions() = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions& operator=(const DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions &) = default ;
    DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions& operator=(DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonFileSystemDetail_ != nullptr
        && this->commonNasDetail_ != nullptr && this->fileDetail_ != nullptr && this->ossDetail_ != nullptr && this->udmDetail_ != nullptr; };
    // commonFileSystemDetail Field Functions 
    bool hasCommonFileSystemDetail() const { return this->commonFileSystemDetail_ != nullptr;};
    void deleteCommonFileSystemDetail() { this->commonFileSystemDetail_ = nullptr;};
    inline const Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail & commonFileSystemDetail() const { DARABONBA_PTR_GET_CONST(commonFileSystemDetail_, Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail) };
    inline Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail commonFileSystemDetail() { DARABONBA_PTR_GET(commonFileSystemDetail_, Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions& setCommonFileSystemDetail(const Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail & commonFileSystemDetail) { DARABONBA_PTR_SET_VALUE(commonFileSystemDetail_, commonFileSystemDetail) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions& setCommonFileSystemDetail(Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail && commonFileSystemDetail) { DARABONBA_PTR_SET_RVALUE(commonFileSystemDetail_, commonFileSystemDetail) };


    // commonNasDetail Field Functions 
    bool hasCommonNasDetail() const { return this->commonNasDetail_ != nullptr;};
    void deleteCommonNasDetail() { this->commonNasDetail_ = nullptr;};
    inline const Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail & commonNasDetail() const { DARABONBA_PTR_GET_CONST(commonNasDetail_, Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail) };
    inline Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail commonNasDetail() { DARABONBA_PTR_GET(commonNasDetail_, Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions& setCommonNasDetail(const Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail & commonNasDetail) { DARABONBA_PTR_SET_VALUE(commonNasDetail_, commonNasDetail) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions& setCommonNasDetail(Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail && commonNasDetail) { DARABONBA_PTR_SET_RVALUE(commonNasDetail_, commonNasDetail) };


    // fileDetail Field Functions 
    bool hasFileDetail() const { return this->fileDetail_ != nullptr;};
    void deleteFileDetail() { this->fileDetail_ = nullptr;};
    inline const Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail & fileDetail() const { DARABONBA_PTR_GET_CONST(fileDetail_, Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail) };
    inline Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail fileDetail() { DARABONBA_PTR_GET(fileDetail_, Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions& setFileDetail(const Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail & fileDetail) { DARABONBA_PTR_SET_VALUE(fileDetail_, fileDetail) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions& setFileDetail(Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail && fileDetail) { DARABONBA_PTR_SET_RVALUE(fileDetail_, fileDetail) };


    // ossDetail Field Functions 
    bool hasOssDetail() const { return this->ossDetail_ != nullptr;};
    void deleteOssDetail() { this->ossDetail_ = nullptr;};
    inline const Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail & ossDetail() const { DARABONBA_PTR_GET_CONST(ossDetail_, Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail) };
    inline Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail ossDetail() { DARABONBA_PTR_GET(ossDetail_, Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions& setOssDetail(const Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail & ossDetail) { DARABONBA_PTR_SET_VALUE(ossDetail_, ossDetail) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions& setOssDetail(Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail && ossDetail) { DARABONBA_PTR_SET_RVALUE(ossDetail_, ossDetail) };


    // udmDetail Field Functions 
    bool hasUdmDetail() const { return this->udmDetail_ != nullptr;};
    void deleteUdmDetail() { this->udmDetail_ = nullptr;};
    inline const Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail & udmDetail() const { DARABONBA_PTR_GET_CONST(udmDetail_, Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail) };
    inline Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail udmDetail() { DARABONBA_PTR_GET(udmDetail_, Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions& setUdmDetail(const Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail & udmDetail) { DARABONBA_PTR_SET_VALUE(udmDetail_, udmDetail) };
    inline DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptions& setUdmDetail(Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail && udmDetail) { DARABONBA_PTR_SET_RVALUE(udmDetail_, udmDetail) };


  protected:
    // Advanced options for large-scale file system backup.
    std::shared_ptr<Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonFileSystemDetail> commonFileSystemDetail_ = nullptr;
    // Advanced options for local NAS.
    std::shared_ptr<Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsCommonNasDetail> commonNasDetail_ = nullptr;
    // Advanced options for file backup.
    std::shared_ptr<Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsFileDetail> fileDetail_ = nullptr;
    // Advanced options for OSS backup.
    std::shared_ptr<Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsOssDetail> ossDetail_ = nullptr;
    // Advanced options for full machine backup.
    std::shared_ptr<Models::DescribePolicyBindingsResponseBodyPolicyBindingsAdvancedOptionsUdmDetail> udmDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
