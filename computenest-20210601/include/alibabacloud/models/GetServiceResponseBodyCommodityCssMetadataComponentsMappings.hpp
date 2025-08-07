// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITYCSSMETADATACOMPONENTSMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITYCSSMETADATACOMPONENTSMAPPINGS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceResponseBodyCommodityCssMetadataComponentsMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyCommodityCssMetadataComponentsMappings& obj) { 
      DARABONBA_PTR_TO_JSON(Mappings, mappings_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyCommodityCssMetadataComponentsMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(Mappings, mappings_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    GetServiceResponseBodyCommodityCssMetadataComponentsMappings() = default ;
    GetServiceResponseBodyCommodityCssMetadataComponentsMappings(const GetServiceResponseBodyCommodityCssMetadataComponentsMappings &) = default ;
    GetServiceResponseBodyCommodityCssMetadataComponentsMappings(GetServiceResponseBodyCommodityCssMetadataComponentsMappings &&) = default ;
    GetServiceResponseBodyCommodityCssMetadataComponentsMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBodyCommodityCssMetadataComponentsMappings() = default ;
    GetServiceResponseBodyCommodityCssMetadataComponentsMappings& operator=(const GetServiceResponseBodyCommodityCssMetadataComponentsMappings &) = default ;
    GetServiceResponseBodyCommodityCssMetadataComponentsMappings& operator=(GetServiceResponseBodyCommodityCssMetadataComponentsMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mappings_ != nullptr
        && this->templateName_ != nullptr; };
    // mappings Field Functions 
    bool hasMappings() const { return this->mappings_ != nullptr;};
    void deleteMappings() { this->mappings_ = nullptr;};
    inline const map<string, string> & mappings() const { DARABONBA_PTR_GET_CONST(mappings_, map<string, string>) };
    inline map<string, string> mappings() { DARABONBA_PTR_GET(mappings_, map<string, string>) };
    inline GetServiceResponseBodyCommodityCssMetadataComponentsMappings& setMappings(const map<string, string> & mappings) { DARABONBA_PTR_SET_VALUE(mappings_, mappings) };
    inline GetServiceResponseBodyCommodityCssMetadataComponentsMappings& setMappings(map<string, string> && mappings) { DARABONBA_PTR_SET_RVALUE(mappings_, mappings) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetServiceResponseBodyCommodityCssMetadataComponentsMappings& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The mappings.
    std::shared_ptr<map<string, string>> mappings_ = nullptr;
    // The template name.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
