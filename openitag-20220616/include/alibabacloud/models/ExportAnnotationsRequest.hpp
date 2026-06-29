// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTANNOTATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTANNOTATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class ExportAnnotationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportAnnotationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OssPath, ossPath_);
      DARABONBA_PTR_TO_JSON(RegisterDataset, registerDataset_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, ExportAnnotationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OssPath, ossPath_);
      DARABONBA_PTR_FROM_JSON(RegisterDataset, registerDataset_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    ExportAnnotationsRequest() = default ;
    ExportAnnotationsRequest(const ExportAnnotationsRequest &) = default ;
    ExportAnnotationsRequest(ExportAnnotationsRequest &&) = default ;
    ExportAnnotationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportAnnotationsRequest() = default ;
    ExportAnnotationsRequest& operator=(const ExportAnnotationsRequest &) = default ;
    ExportAnnotationsRequest& operator=(ExportAnnotationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ossPath_ == nullptr
        && this->registerDataset_ == nullptr && this->target_ == nullptr; };
    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string getOssPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline ExportAnnotationsRequest& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    // registerDataset Field Functions 
    bool hasRegisterDataset() const { return this->registerDataset_ != nullptr;};
    void deleteRegisterDataset() { this->registerDataset_ = nullptr;};
    inline string getRegisterDataset() const { DARABONBA_PTR_GET_DEFAULT(registerDataset_, "") };
    inline ExportAnnotationsRequest& setRegisterDataset(string registerDataset) { DARABONBA_PTR_SET_VALUE(registerDataset_, registerDataset) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ExportAnnotationsRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    // OSS path.
    // 
    // This parameter is required.
    shared_ptr<string> ossPath_ {};
    // Specifies whether to register the result as a PAI dataset. Valid values:
    // - true: Registers the annotation result as a PAI dataset.
    // - false: Exports the annotation result directly to an OSS folder without registering it as a dataset.
    shared_ptr<string> registerDataset_ {};
    // Target.
    shared_ptr<string> target_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
