// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHTMLTRANSLATETASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHTMLTRANSLATETASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetHtmlTranslateTaskResponseBodyDataUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class GetHtmlTranslateTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHtmlTranslateTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(translation, translation_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, GetHtmlTranslateTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(translation, translation_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    GetHtmlTranslateTaskResponseBodyData() = default ;
    GetHtmlTranslateTaskResponseBodyData(const GetHtmlTranslateTaskResponseBodyData &) = default ;
    GetHtmlTranslateTaskResponseBodyData(GetHtmlTranslateTaskResponseBodyData &&) = default ;
    GetHtmlTranslateTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHtmlTranslateTaskResponseBodyData() = default ;
    GetHtmlTranslateTaskResponseBodyData& operator=(const GetHtmlTranslateTaskResponseBodyData &) = default ;
    GetHtmlTranslateTaskResponseBodyData& operator=(GetHtmlTranslateTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->translation_ != nullptr
        && this->usage_ != nullptr; };
    // translation Field Functions 
    bool hasTranslation() const { return this->translation_ != nullptr;};
    void deleteTranslation() { this->translation_ = nullptr;};
    inline string translation() const { DARABONBA_PTR_GET_DEFAULT(translation_, "") };
    inline GetHtmlTranslateTaskResponseBodyData& setTranslation(string translation) { DARABONBA_PTR_SET_VALUE(translation_, translation) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::GetHtmlTranslateTaskResponseBodyDataUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::GetHtmlTranslateTaskResponseBodyDataUsage) };
    inline Models::GetHtmlTranslateTaskResponseBodyDataUsage usage() { DARABONBA_PTR_GET(usage_, Models::GetHtmlTranslateTaskResponseBodyDataUsage) };
    inline GetHtmlTranslateTaskResponseBodyData& setUsage(const Models::GetHtmlTranslateTaskResponseBodyDataUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline GetHtmlTranslateTaskResponseBodyData& setUsage(Models::GetHtmlTranslateTaskResponseBodyDataUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<string> translation_ = nullptr;
    std::shared_ptr<Models::GetHtmlTranslateTaskResponseBodyDataUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
