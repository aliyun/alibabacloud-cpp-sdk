// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVLEXTRACTIONRESULTRESPONSEBODYDATAKVLISTINFO_HPP_
#define ALIBABACLOUD_MODELS_GETVLEXTRACTIONRESULTRESPONSEBODYDATAKVLISTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVLExtractionResultResponseBodyDataKvListInfoContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetVLExtractionResultResponseBodyDataKvListInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVLExtractionResultResponseBodyDataKvListInfo& obj) { 
      DARABONBA_PTR_TO_JSON(context, context_);
      DARABONBA_PTR_TO_JSON(keyName, keyName_);
      DARABONBA_PTR_TO_JSON(keyValue, keyValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetVLExtractionResultResponseBodyDataKvListInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(context, context_);
      DARABONBA_PTR_FROM_JSON(keyName, keyName_);
      DARABONBA_PTR_FROM_JSON(keyValue, keyValue_);
    };
    GetVLExtractionResultResponseBodyDataKvListInfo() = default ;
    GetVLExtractionResultResponseBodyDataKvListInfo(const GetVLExtractionResultResponseBodyDataKvListInfo &) = default ;
    GetVLExtractionResultResponseBodyDataKvListInfo(GetVLExtractionResultResponseBodyDataKvListInfo &&) = default ;
    GetVLExtractionResultResponseBodyDataKvListInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVLExtractionResultResponseBodyDataKvListInfo() = default ;
    GetVLExtractionResultResponseBodyDataKvListInfo& operator=(const GetVLExtractionResultResponseBodyDataKvListInfo &) = default ;
    GetVLExtractionResultResponseBodyDataKvListInfo& operator=(GetVLExtractionResultResponseBodyDataKvListInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->context_ == nullptr
        && return this->keyName_ == nullptr && return this->keyValue_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const Models::GetVLExtractionResultResponseBodyDataKvListInfoContext & context() const { DARABONBA_PTR_GET_CONST(context_, Models::GetVLExtractionResultResponseBodyDataKvListInfoContext) };
    inline Models::GetVLExtractionResultResponseBodyDataKvListInfoContext context() { DARABONBA_PTR_GET(context_, Models::GetVLExtractionResultResponseBodyDataKvListInfoContext) };
    inline GetVLExtractionResultResponseBodyDataKvListInfo& setContext(const Models::GetVLExtractionResultResponseBodyDataKvListInfoContext & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline GetVLExtractionResultResponseBodyDataKvListInfo& setContext(Models::GetVLExtractionResultResponseBodyDataKvListInfoContext && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string keyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline GetVLExtractionResultResponseBodyDataKvListInfo& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // keyValue Field Functions 
    bool hasKeyValue() const { return this->keyValue_ != nullptr;};
    void deleteKeyValue() { this->keyValue_ = nullptr;};
    inline string keyValue() const { DARABONBA_PTR_GET_DEFAULT(keyValue_, "") };
    inline GetVLExtractionResultResponseBodyDataKvListInfo& setKeyValue(string keyValue) { DARABONBA_PTR_SET_VALUE(keyValue_, keyValue) };


  protected:
    // Recall content
    std::shared_ptr<Models::GetVLExtractionResultResponseBodyDataKvListInfoContext> context_ = nullptr;
    // Field Key name
    std::shared_ptr<string> keyName_ = nullptr;
    // Field key value
    std::shared_ptr<string> keyValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
