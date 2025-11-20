// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYBINDINGSREQUESTPOLICYBINDINGLISTADVANCEDOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYBINDINGSREQUESTPOLICYBINDINGLISTADVANCEDOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonFileSystemDetail.hpp>
#include <alibabacloud/models/CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail.hpp>
#include <alibabacloud/models/CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail.hpp>
#include <alibabacloud/models/CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail.hpp>
#include <alibabacloud/models/CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions& obj) { 
      DARABONBA_PTR_TO_JSON(CommonFileSystemDetail, commonFileSystemDetail_);
      DARABONBA_PTR_TO_JSON(CommonNasDetail, commonNasDetail_);
      DARABONBA_PTR_TO_JSON(FileDetail, fileDetail_);
      DARABONBA_PTR_TO_JSON(OssDetail, ossDetail_);
      DARABONBA_PTR_TO_JSON(UdmDetail, udmDetail_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonFileSystemDetail, commonFileSystemDetail_);
      DARABONBA_PTR_FROM_JSON(CommonNasDetail, commonNasDetail_);
      DARABONBA_PTR_FROM_JSON(FileDetail, fileDetail_);
      DARABONBA_PTR_FROM_JSON(OssDetail, ossDetail_);
      DARABONBA_PTR_FROM_JSON(UdmDetail, udmDetail_);
    };
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions() = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions(const CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions &) = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions(CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions &&) = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions() = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions& operator=(const CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions &) = default ;
    CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions& operator=(CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonFileSystemDetail_ == nullptr
        && return this->commonNasDetail_ == nullptr && return this->fileDetail_ == nullptr && return this->ossDetail_ == nullptr && return this->udmDetail_ == nullptr; };
    // commonFileSystemDetail Field Functions 
    bool hasCommonFileSystemDetail() const { return this->commonFileSystemDetail_ != nullptr;};
    void deleteCommonFileSystemDetail() { this->commonFileSystemDetail_ = nullptr;};
    inline const Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonFileSystemDetail & commonFileSystemDetail() const { DARABONBA_PTR_GET_CONST(commonFileSystemDetail_, Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonFileSystemDetail) };
    inline Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonFileSystemDetail commonFileSystemDetail() { DARABONBA_PTR_GET(commonFileSystemDetail_, Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonFileSystemDetail) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions& setCommonFileSystemDetail(const Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonFileSystemDetail & commonFileSystemDetail) { DARABONBA_PTR_SET_VALUE(commonFileSystemDetail_, commonFileSystemDetail) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions& setCommonFileSystemDetail(Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonFileSystemDetail && commonFileSystemDetail) { DARABONBA_PTR_SET_RVALUE(commonFileSystemDetail_, commonFileSystemDetail) };


    // commonNasDetail Field Functions 
    bool hasCommonNasDetail() const { return this->commonNasDetail_ != nullptr;};
    void deleteCommonNasDetail() { this->commonNasDetail_ = nullptr;};
    inline const Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail & commonNasDetail() const { DARABONBA_PTR_GET_CONST(commonNasDetail_, Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail) };
    inline Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail commonNasDetail() { DARABONBA_PTR_GET(commonNasDetail_, Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions& setCommonNasDetail(const Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail & commonNasDetail) { DARABONBA_PTR_SET_VALUE(commonNasDetail_, commonNasDetail) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions& setCommonNasDetail(Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail && commonNasDetail) { DARABONBA_PTR_SET_RVALUE(commonNasDetail_, commonNasDetail) };


    // fileDetail Field Functions 
    bool hasFileDetail() const { return this->fileDetail_ != nullptr;};
    void deleteFileDetail() { this->fileDetail_ = nullptr;};
    inline const Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail & fileDetail() const { DARABONBA_PTR_GET_CONST(fileDetail_, Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail) };
    inline Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail fileDetail() { DARABONBA_PTR_GET(fileDetail_, Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions& setFileDetail(const Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail & fileDetail) { DARABONBA_PTR_SET_VALUE(fileDetail_, fileDetail) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions& setFileDetail(Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail && fileDetail) { DARABONBA_PTR_SET_RVALUE(fileDetail_, fileDetail) };


    // ossDetail Field Functions 
    bool hasOssDetail() const { return this->ossDetail_ != nullptr;};
    void deleteOssDetail() { this->ossDetail_ = nullptr;};
    inline const Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail & ossDetail() const { DARABONBA_PTR_GET_CONST(ossDetail_, Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail) };
    inline Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail ossDetail() { DARABONBA_PTR_GET(ossDetail_, Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions& setOssDetail(const Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail & ossDetail) { DARABONBA_PTR_SET_VALUE(ossDetail_, ossDetail) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions& setOssDetail(Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail && ossDetail) { DARABONBA_PTR_SET_RVALUE(ossDetail_, ossDetail) };


    // udmDetail Field Functions 
    bool hasUdmDetail() const { return this->udmDetail_ != nullptr;};
    void deleteUdmDetail() { this->udmDetail_ = nullptr;};
    inline const Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail & udmDetail() const { DARABONBA_PTR_GET_CONST(udmDetail_, Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail) };
    inline Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail udmDetail() { DARABONBA_PTR_GET(udmDetail_, Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions& setUdmDetail(const Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail & udmDetail) { DARABONBA_PTR_SET_VALUE(udmDetail_, udmDetail) };
    inline CreatePolicyBindingsRequestPolicyBindingListAdvancedOptions& setUdmDetail(Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail && udmDetail) { DARABONBA_PTR_SET_RVALUE(udmDetail_, udmDetail) };


  protected:
    // The advanced options for CPFS backup.
    std::shared_ptr<Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonFileSystemDetail> commonFileSystemDetail_ = nullptr;
    // The advanced options for on-premises NAS backup.
    std::shared_ptr<Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsCommonNasDetail> commonNasDetail_ = nullptr;
    // The advanced options for file backup.
    std::shared_ptr<Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsFileDetail> fileDetail_ = nullptr;
    // The advanced options for Object Storage Service (OSS) backup.
    std::shared_ptr<Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsOssDetail> ossDetail_ = nullptr;
    // The advanced options for ECS instance backup.
    std::shared_ptr<Models::CreatePolicyBindingsRequestPolicyBindingListAdvancedOptionsUdmDetail> udmDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
