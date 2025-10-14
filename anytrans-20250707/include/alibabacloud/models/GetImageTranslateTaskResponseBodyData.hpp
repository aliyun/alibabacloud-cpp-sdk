// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGETRANSLATETASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGETRANSLATETASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetImageTranslateTaskResponseBodyDataTranslation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class GetImageTranslateTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageTranslateTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
      DARABONBA_PTR_TO_JSON(translation, translation_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageTranslateTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
      DARABONBA_PTR_FROM_JSON(translation, translation_);
    };
    GetImageTranslateTaskResponseBodyData() = default ;
    GetImageTranslateTaskResponseBodyData(const GetImageTranslateTaskResponseBodyData &) = default ;
    GetImageTranslateTaskResponseBodyData(GetImageTranslateTaskResponseBodyData &&) = default ;
    GetImageTranslateTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageTranslateTaskResponseBodyData() = default ;
    GetImageTranslateTaskResponseBodyData& operator=(const GetImageTranslateTaskResponseBodyData &) = default ;
    GetImageTranslateTaskResponseBodyData& operator=(GetImageTranslateTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->traceId_ == nullptr
        && return this->translation_ == nullptr; };
    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline GetImageTranslateTaskResponseBodyData& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    // translation Field Functions 
    bool hasTranslation() const { return this->translation_ != nullptr;};
    void deleteTranslation() { this->translation_ = nullptr;};
    inline const Models::GetImageTranslateTaskResponseBodyDataTranslation & translation() const { DARABONBA_PTR_GET_CONST(translation_, Models::GetImageTranslateTaskResponseBodyDataTranslation) };
    inline Models::GetImageTranslateTaskResponseBodyDataTranslation translation() { DARABONBA_PTR_GET(translation_, Models::GetImageTranslateTaskResponseBodyDataTranslation) };
    inline GetImageTranslateTaskResponseBodyData& setTranslation(const Models::GetImageTranslateTaskResponseBodyDataTranslation & translation) { DARABONBA_PTR_SET_VALUE(translation_, translation) };
    inline GetImageTranslateTaskResponseBodyData& setTranslation(Models::GetImageTranslateTaskResponseBodyDataTranslation && translation) { DARABONBA_PTR_SET_RVALUE(translation_, translation) };


  protected:
    std::shared_ptr<string> traceId_ = nullptr;
    std::shared_ptr<Models::GetImageTranslateTaskResponseBodyDataTranslation> translation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
