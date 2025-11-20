// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLICYBINDINGREQUESTADVANCEDOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLICYBINDINGREQUESTADVANCEDOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail.hpp>
#include <alibabacloud/models/UpdatePolicyBindingRequestAdvancedOptionsOssDetail.hpp>
#include <alibabacloud/models/UpdatePolicyBindingRequestAdvancedOptionsUdmDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UpdatePolicyBindingRequestAdvancedOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolicyBindingRequestAdvancedOptions& obj) { 
      DARABONBA_PTR_TO_JSON(CommonFileSystemDetail, commonFileSystemDetail_);
      DARABONBA_PTR_TO_JSON(OssDetail, ossDetail_);
      DARABONBA_PTR_TO_JSON(UdmDetail, udmDetail_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolicyBindingRequestAdvancedOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonFileSystemDetail, commonFileSystemDetail_);
      DARABONBA_PTR_FROM_JSON(OssDetail, ossDetail_);
      DARABONBA_PTR_FROM_JSON(UdmDetail, udmDetail_);
    };
    UpdatePolicyBindingRequestAdvancedOptions() = default ;
    UpdatePolicyBindingRequestAdvancedOptions(const UpdatePolicyBindingRequestAdvancedOptions &) = default ;
    UpdatePolicyBindingRequestAdvancedOptions(UpdatePolicyBindingRequestAdvancedOptions &&) = default ;
    UpdatePolicyBindingRequestAdvancedOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolicyBindingRequestAdvancedOptions() = default ;
    UpdatePolicyBindingRequestAdvancedOptions& operator=(const UpdatePolicyBindingRequestAdvancedOptions &) = default ;
    UpdatePolicyBindingRequestAdvancedOptions& operator=(UpdatePolicyBindingRequestAdvancedOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonFileSystemDetail_ == nullptr
        && return this->ossDetail_ == nullptr && return this->udmDetail_ == nullptr; };
    // commonFileSystemDetail Field Functions 
    bool hasCommonFileSystemDetail() const { return this->commonFileSystemDetail_ != nullptr;};
    void deleteCommonFileSystemDetail() { this->commonFileSystemDetail_ = nullptr;};
    inline const Models::UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail & commonFileSystemDetail() const { DARABONBA_PTR_GET_CONST(commonFileSystemDetail_, Models::UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail) };
    inline Models::UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail commonFileSystemDetail() { DARABONBA_PTR_GET(commonFileSystemDetail_, Models::UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail) };
    inline UpdatePolicyBindingRequestAdvancedOptions& setCommonFileSystemDetail(const Models::UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail & commonFileSystemDetail) { DARABONBA_PTR_SET_VALUE(commonFileSystemDetail_, commonFileSystemDetail) };
    inline UpdatePolicyBindingRequestAdvancedOptions& setCommonFileSystemDetail(Models::UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail && commonFileSystemDetail) { DARABONBA_PTR_SET_RVALUE(commonFileSystemDetail_, commonFileSystemDetail) };


    // ossDetail Field Functions 
    bool hasOssDetail() const { return this->ossDetail_ != nullptr;};
    void deleteOssDetail() { this->ossDetail_ = nullptr;};
    inline const Models::UpdatePolicyBindingRequestAdvancedOptionsOssDetail & ossDetail() const { DARABONBA_PTR_GET_CONST(ossDetail_, Models::UpdatePolicyBindingRequestAdvancedOptionsOssDetail) };
    inline Models::UpdatePolicyBindingRequestAdvancedOptionsOssDetail ossDetail() { DARABONBA_PTR_GET(ossDetail_, Models::UpdatePolicyBindingRequestAdvancedOptionsOssDetail) };
    inline UpdatePolicyBindingRequestAdvancedOptions& setOssDetail(const Models::UpdatePolicyBindingRequestAdvancedOptionsOssDetail & ossDetail) { DARABONBA_PTR_SET_VALUE(ossDetail_, ossDetail) };
    inline UpdatePolicyBindingRequestAdvancedOptions& setOssDetail(Models::UpdatePolicyBindingRequestAdvancedOptionsOssDetail && ossDetail) { DARABONBA_PTR_SET_RVALUE(ossDetail_, ossDetail) };


    // udmDetail Field Functions 
    bool hasUdmDetail() const { return this->udmDetail_ != nullptr;};
    void deleteUdmDetail() { this->udmDetail_ = nullptr;};
    inline const Models::UpdatePolicyBindingRequestAdvancedOptionsUdmDetail & udmDetail() const { DARABONBA_PTR_GET_CONST(udmDetail_, Models::UpdatePolicyBindingRequestAdvancedOptionsUdmDetail) };
    inline Models::UpdatePolicyBindingRequestAdvancedOptionsUdmDetail udmDetail() { DARABONBA_PTR_GET(udmDetail_, Models::UpdatePolicyBindingRequestAdvancedOptionsUdmDetail) };
    inline UpdatePolicyBindingRequestAdvancedOptions& setUdmDetail(const Models::UpdatePolicyBindingRequestAdvancedOptionsUdmDetail & udmDetail) { DARABONBA_PTR_SET_VALUE(udmDetail_, udmDetail) };
    inline UpdatePolicyBindingRequestAdvancedOptions& setUdmDetail(Models::UpdatePolicyBindingRequestAdvancedOptionsUdmDetail && udmDetail) { DARABONBA_PTR_SET_RVALUE(udmDetail_, udmDetail) };


  protected:
    // The details about large-scale file system backup.
    std::shared_ptr<Models::UpdatePolicyBindingRequestAdvancedOptionsCommonFileSystemDetail> commonFileSystemDetail_ = nullptr;
    // The details about Object Storage Service (OSS) backup.
    std::shared_ptr<Models::UpdatePolicyBindingRequestAdvancedOptionsOssDetail> ossDetail_ = nullptr;
    // The details about Elastic Compute Service (ECS) instance backup.
    std::shared_ptr<Models::UpdatePolicyBindingRequestAdvancedOptionsUdmDetail> udmDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
