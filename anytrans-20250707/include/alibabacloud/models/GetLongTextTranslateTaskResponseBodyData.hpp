// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLONGTEXTTRANSLATETASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETLONGTEXTTRANSLATETASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLongTextTranslateTaskResponseBodyDataUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class GetLongTextTranslateTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLongTextTranslateTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(translation, translation_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, GetLongTextTranslateTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(translation, translation_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    GetLongTextTranslateTaskResponseBodyData() = default ;
    GetLongTextTranslateTaskResponseBodyData(const GetLongTextTranslateTaskResponseBodyData &) = default ;
    GetLongTextTranslateTaskResponseBodyData(GetLongTextTranslateTaskResponseBodyData &&) = default ;
    GetLongTextTranslateTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLongTextTranslateTaskResponseBodyData() = default ;
    GetLongTextTranslateTaskResponseBodyData& operator=(const GetLongTextTranslateTaskResponseBodyData &) = default ;
    GetLongTextTranslateTaskResponseBodyData& operator=(GetLongTextTranslateTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->translation_ == nullptr
        && return this->usage_ == nullptr; };
    // translation Field Functions 
    bool hasTranslation() const { return this->translation_ != nullptr;};
    void deleteTranslation() { this->translation_ = nullptr;};
    inline string translation() const { DARABONBA_PTR_GET_DEFAULT(translation_, "") };
    inline GetLongTextTranslateTaskResponseBodyData& setTranslation(string translation) { DARABONBA_PTR_SET_VALUE(translation_, translation) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const Models::GetLongTextTranslateTaskResponseBodyDataUsage & usage() const { DARABONBA_PTR_GET_CONST(usage_, Models::GetLongTextTranslateTaskResponseBodyDataUsage) };
    inline Models::GetLongTextTranslateTaskResponseBodyDataUsage usage() { DARABONBA_PTR_GET(usage_, Models::GetLongTextTranslateTaskResponseBodyDataUsage) };
    inline GetLongTextTranslateTaskResponseBodyData& setUsage(const Models::GetLongTextTranslateTaskResponseBodyDataUsage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline GetLongTextTranslateTaskResponseBodyData& setUsage(Models::GetLongTextTranslateTaskResponseBodyDataUsage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<string> translation_ = nullptr;
    std::shared_ptr<Models::GetLongTextTranslateTaskResponseBodyDataUsage> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
