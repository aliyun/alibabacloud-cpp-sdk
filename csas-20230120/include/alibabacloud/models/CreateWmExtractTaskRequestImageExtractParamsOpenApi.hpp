// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMEXTRACTTASKREQUESTIMAGEEXTRACTPARAMSOPENAPI_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMEXTRACTTASKREQUESTIMAGEEXTRACTPARAMSOPENAPI_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmExtractTaskRequestImageExtractParamsOpenApi : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmExtractTaskRequestImageExtractParamsOpenApi& obj) { 
      DARABONBA_PTR_TO_JSON(SrcLogoBase64, srcLogoBase64_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmExtractTaskRequestImageExtractParamsOpenApi& obj) { 
      DARABONBA_PTR_FROM_JSON(SrcLogoBase64, srcLogoBase64_);
    };
    CreateWmExtractTaskRequestImageExtractParamsOpenApi() = default ;
    CreateWmExtractTaskRequestImageExtractParamsOpenApi(const CreateWmExtractTaskRequestImageExtractParamsOpenApi &) = default ;
    CreateWmExtractTaskRequestImageExtractParamsOpenApi(CreateWmExtractTaskRequestImageExtractParamsOpenApi &&) = default ;
    CreateWmExtractTaskRequestImageExtractParamsOpenApi(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmExtractTaskRequestImageExtractParamsOpenApi() = default ;
    CreateWmExtractTaskRequestImageExtractParamsOpenApi& operator=(const CreateWmExtractTaskRequestImageExtractParamsOpenApi &) = default ;
    CreateWmExtractTaskRequestImageExtractParamsOpenApi& operator=(CreateWmExtractTaskRequestImageExtractParamsOpenApi &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->srcLogoBase64_ == nullptr; };
    // srcLogoBase64 Field Functions 
    bool hasSrcLogoBase64() const { return this->srcLogoBase64_ != nullptr;};
    void deleteSrcLogoBase64() { this->srcLogoBase64_ = nullptr;};
    inline string srcLogoBase64() const { DARABONBA_PTR_GET_DEFAULT(srcLogoBase64_, "") };
    inline CreateWmExtractTaskRequestImageExtractParamsOpenApi& setSrcLogoBase64(string srcLogoBase64) { DARABONBA_PTR_SET_VALUE(srcLogoBase64_, srcLogoBase64) };


  protected:
    std::shared_ptr<string> srcLogoBase64_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
