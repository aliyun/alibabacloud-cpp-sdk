// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTINEWITHASSETSCODEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTINEWITHASSETSCODEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateRoutineWithAssetsCodeVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoutineWithAssetsCodeVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_TO_JSON(OssPostConfig, ossPostConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoutineWithAssetsCodeVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeVersion, codeVersion_);
      DARABONBA_PTR_FROM_JSON(OssPostConfig, ossPostConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateRoutineWithAssetsCodeVersionResponseBody() = default ;
    CreateRoutineWithAssetsCodeVersionResponseBody(const CreateRoutineWithAssetsCodeVersionResponseBody &) = default ;
    CreateRoutineWithAssetsCodeVersionResponseBody(CreateRoutineWithAssetsCodeVersionResponseBody &&) = default ;
    CreateRoutineWithAssetsCodeVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoutineWithAssetsCodeVersionResponseBody() = default ;
    CreateRoutineWithAssetsCodeVersionResponseBody& operator=(const CreateRoutineWithAssetsCodeVersionResponseBody &) = default ;
    CreateRoutineWithAssetsCodeVersionResponseBody& operator=(CreateRoutineWithAssetsCodeVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeVersion_ != nullptr
        && this->ossPostConfig_ != nullptr && this->requestId_ != nullptr && this->status_ != nullptr; };
    // codeVersion Field Functions 
    bool hasCodeVersion() const { return this->codeVersion_ != nullptr;};
    void deleteCodeVersion() { this->codeVersion_ = nullptr;};
    inline string codeVersion() const { DARABONBA_PTR_GET_DEFAULT(codeVersion_, "") };
    inline CreateRoutineWithAssetsCodeVersionResponseBody& setCodeVersion(string codeVersion) { DARABONBA_PTR_SET_VALUE(codeVersion_, codeVersion) };


    // ossPostConfig Field Functions 
    bool hasOssPostConfig() const { return this->ossPostConfig_ != nullptr;};
    void deleteOssPostConfig() { this->ossPostConfig_ = nullptr;};
    inline const CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig & ossPostConfig() const { DARABONBA_PTR_GET_CONST(ossPostConfig_, CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig) };
    inline CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig ossPostConfig() { DARABONBA_PTR_GET(ossPostConfig_, CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig) };
    inline CreateRoutineWithAssetsCodeVersionResponseBody& setOssPostConfig(const CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig & ossPostConfig) { DARABONBA_PTR_SET_VALUE(ossPostConfig_, ossPostConfig) };
    inline CreateRoutineWithAssetsCodeVersionResponseBody& setOssPostConfig(CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig && ossPostConfig) { DARABONBA_PTR_SET_RVALUE(ossPostConfig_, ossPostConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRoutineWithAssetsCodeVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateRoutineWithAssetsCodeVersionResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> codeVersion_ = nullptr;
    std::shared_ptr<CreateRoutineWithAssetsCodeVersionResponseBodyOssPostConfig> ossPostConfig_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
