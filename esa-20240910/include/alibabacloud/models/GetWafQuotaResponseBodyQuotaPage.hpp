// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAFQUOTARESPONSEBODYQUOTAPAGE_HPP_
#define ALIBABACLOUD_MODELS_GETWAFQUOTARESPONSEBODYQUOTAPAGE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/QuotaPageContentTypesValue.hpp>
#include <alibabacloud/models/WafQuotaInteger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetWafQuotaResponseBodyQuotaPage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWafQuotaResponseBodyQuotaPage& obj) { 
      DARABONBA_PTR_TO_JSON(ContentTypes, contentTypes_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(NumberTotal, numberTotal_);
    };
    friend void from_json(const Darabonba::Json& j, GetWafQuotaResponseBodyQuotaPage& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentTypes, contentTypes_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(NumberTotal, numberTotal_);
    };
    GetWafQuotaResponseBodyQuotaPage() = default ;
    GetWafQuotaResponseBodyQuotaPage(const GetWafQuotaResponseBodyQuotaPage &) = default ;
    GetWafQuotaResponseBodyQuotaPage(GetWafQuotaResponseBodyQuotaPage &&) = default ;
    GetWafQuotaResponseBodyQuotaPage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWafQuotaResponseBodyQuotaPage() = default ;
    GetWafQuotaResponseBodyQuotaPage& operator=(const GetWafQuotaResponseBodyQuotaPage &) = default ;
    GetWafQuotaResponseBodyQuotaPage& operator=(GetWafQuotaResponseBodyQuotaPage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentTypes_ == nullptr
        && return this->enable_ == nullptr && return this->numberTotal_ == nullptr; };
    // contentTypes Field Functions 
    bool hasContentTypes() const { return this->contentTypes_ != nullptr;};
    void deleteContentTypes() { this->contentTypes_ = nullptr;};
    inline const map<string, Models::QuotaPageContentTypesValue> & contentTypes() const { DARABONBA_PTR_GET_CONST(contentTypes_, map<string, Models::QuotaPageContentTypesValue>) };
    inline map<string, Models::QuotaPageContentTypesValue> contentTypes() { DARABONBA_PTR_GET(contentTypes_, map<string, Models::QuotaPageContentTypesValue>) };
    inline GetWafQuotaResponseBodyQuotaPage& setContentTypes(const map<string, Models::QuotaPageContentTypesValue> & contentTypes) { DARABONBA_PTR_SET_VALUE(contentTypes_, contentTypes) };
    inline GetWafQuotaResponseBodyQuotaPage& setContentTypes(map<string, Models::QuotaPageContentTypesValue> && contentTypes) { DARABONBA_PTR_SET_RVALUE(contentTypes_, contentTypes) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetWafQuotaResponseBodyQuotaPage& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // numberTotal Field Functions 
    bool hasNumberTotal() const { return this->numberTotal_ != nullptr;};
    void deleteNumberTotal() { this->numberTotal_ = nullptr;};
    inline const Models::WafQuotaInteger & numberTotal() const { DARABONBA_PTR_GET_CONST(numberTotal_, Models::WafQuotaInteger) };
    inline Models::WafQuotaInteger numberTotal() { DARABONBA_PTR_GET(numberTotal_, Models::WafQuotaInteger) };
    inline GetWafQuotaResponseBodyQuotaPage& setNumberTotal(const Models::WafQuotaInteger & numberTotal) { DARABONBA_PTR_SET_VALUE(numberTotal_, numberTotal) };
    inline GetWafQuotaResponseBodyQuotaPage& setNumberTotal(Models::WafQuotaInteger && numberTotal) { DARABONBA_PTR_SET_RVALUE(numberTotal_, numberTotal) };


  protected:
    // An object containing quota information for each Content-Type in custom response pages.
    std::shared_ptr<map<string, Models::QuotaPageContentTypesValue>> contentTypes_ = nullptr;
    // Indicates whether the custom response page is enabled.
    std::shared_ptr<bool> enable_ = nullptr;
    // The total number quota allowed for custom response pages.
    std::shared_ptr<Models::WafQuotaInteger> numberTotal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
