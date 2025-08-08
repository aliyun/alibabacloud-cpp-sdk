// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALUATETEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_VALUATETEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ValuateTemplateResponseBodyDataResourceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class ValuateTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValuateTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
    };
    friend void from_json(const Darabonba::Json& j, ValuateTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
    };
    ValuateTemplateResponseBodyData() = default ;
    ValuateTemplateResponseBodyData(const ValuateTemplateResponseBodyData &) = default ;
    ValuateTemplateResponseBodyData(ValuateTemplateResponseBodyData &&) = default ;
    ValuateTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValuateTemplateResponseBodyData() = default ;
    ValuateTemplateResponseBodyData& operator=(const ValuateTemplateResponseBodyData &) = default ;
    ValuateTemplateResponseBodyData& operator=(ValuateTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceList_ != nullptr; };
    // resourceList Field Functions 
    bool hasResourceList() const { return this->resourceList_ != nullptr;};
    void deleteResourceList() { this->resourceList_ = nullptr;};
    inline const vector<Models::ValuateTemplateResponseBodyDataResourceList> & resourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<Models::ValuateTemplateResponseBodyDataResourceList>) };
    inline vector<Models::ValuateTemplateResponseBodyDataResourceList> resourceList() { DARABONBA_PTR_GET(resourceList_, vector<Models::ValuateTemplateResponseBodyDataResourceList>) };
    inline ValuateTemplateResponseBodyData& setResourceList(const vector<Models::ValuateTemplateResponseBodyDataResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
    inline ValuateTemplateResponseBodyData& setResourceList(vector<Models::ValuateTemplateResponseBodyDataResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


  protected:
    // The result set of the inquiry.
    std::shared_ptr<vector<Models::ValuateTemplateResponseBodyDataResourceList>> resourceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
