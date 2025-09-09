// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEREQUESTCOMMODITYCOMPONENTSMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEREQUESTCOMMODITYCOMPONENTSMAPPINGS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateServiceRequestCommodityComponentsMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceRequestCommodityComponentsMappings& obj) { 
      DARABONBA_PTR_TO_JSON(Mappings, mappings_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceRequestCommodityComponentsMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(Mappings, mappings_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    UpdateServiceRequestCommodityComponentsMappings() = default ;
    UpdateServiceRequestCommodityComponentsMappings(const UpdateServiceRequestCommodityComponentsMappings &) = default ;
    UpdateServiceRequestCommodityComponentsMappings(UpdateServiceRequestCommodityComponentsMappings &&) = default ;
    UpdateServiceRequestCommodityComponentsMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceRequestCommodityComponentsMappings() = default ;
    UpdateServiceRequestCommodityComponentsMappings& operator=(const UpdateServiceRequestCommodityComponentsMappings &) = default ;
    UpdateServiceRequestCommodityComponentsMappings& operator=(UpdateServiceRequestCommodityComponentsMappings &&) = default ;
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
    inline UpdateServiceRequestCommodityComponentsMappings& setMappings(const map<string, string> & mappings) { DARABONBA_PTR_SET_VALUE(mappings_, mappings) };
    inline UpdateServiceRequestCommodityComponentsMappings& setMappings(map<string, string> && mappings) { DARABONBA_PTR_SET_RVALUE(mappings_, mappings) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline UpdateServiceRequestCommodityComponentsMappings& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // This parameter is not available to the public.
    std::shared_ptr<map<string, string>> mappings_ = nullptr;
    // This parameter is not available to the public.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
