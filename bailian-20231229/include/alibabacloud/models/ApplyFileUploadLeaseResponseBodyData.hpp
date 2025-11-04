// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYFILEUPLOADLEASERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_APPLYFILEUPLOADLEASERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ApplyFileUploadLeaseResponseBodyDataParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ApplyFileUploadLeaseResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyFileUploadLeaseResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FileUploadLeaseId, fileUploadLeaseId_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyFileUploadLeaseResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FileUploadLeaseId, fileUploadLeaseId_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ApplyFileUploadLeaseResponseBodyData() = default ;
    ApplyFileUploadLeaseResponseBodyData(const ApplyFileUploadLeaseResponseBodyData &) = default ;
    ApplyFileUploadLeaseResponseBodyData(ApplyFileUploadLeaseResponseBodyData &&) = default ;
    ApplyFileUploadLeaseResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyFileUploadLeaseResponseBodyData() = default ;
    ApplyFileUploadLeaseResponseBodyData& operator=(const ApplyFileUploadLeaseResponseBodyData &) = default ;
    ApplyFileUploadLeaseResponseBodyData& operator=(ApplyFileUploadLeaseResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileUploadLeaseId_ == nullptr
        && return this->param_ == nullptr && return this->type_ == nullptr; };
    // fileUploadLeaseId Field Functions 
    bool hasFileUploadLeaseId() const { return this->fileUploadLeaseId_ != nullptr;};
    void deleteFileUploadLeaseId() { this->fileUploadLeaseId_ = nullptr;};
    inline string fileUploadLeaseId() const { DARABONBA_PTR_GET_DEFAULT(fileUploadLeaseId_, "") };
    inline ApplyFileUploadLeaseResponseBodyData& setFileUploadLeaseId(string fileUploadLeaseId) { DARABONBA_PTR_SET_VALUE(fileUploadLeaseId_, fileUploadLeaseId) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline const Models::ApplyFileUploadLeaseResponseBodyDataParam & param() const { DARABONBA_PTR_GET_CONST(param_, Models::ApplyFileUploadLeaseResponseBodyDataParam) };
    inline Models::ApplyFileUploadLeaseResponseBodyDataParam param() { DARABONBA_PTR_GET(param_, Models::ApplyFileUploadLeaseResponseBodyDataParam) };
    inline ApplyFileUploadLeaseResponseBodyData& setParam(const Models::ApplyFileUploadLeaseResponseBodyDataParam & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
    inline ApplyFileUploadLeaseResponseBodyData& setParam(Models::ApplyFileUploadLeaseResponseBodyDataParam && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ApplyFileUploadLeaseResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The unique ID of the lease.
    std::shared_ptr<string> fileUploadLeaseId_ = nullptr;
    // The HTTP request parameters used to upload the document.
    std::shared_ptr<Models::ApplyFileUploadLeaseResponseBodyDataParam> param_ = nullptr;
    // The upload method of the document. Valid values:
    // 
    // *   OSS.PreSignedURL
    // *   HTTP
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
