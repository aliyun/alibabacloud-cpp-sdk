// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVLEXTRACTIONRESULTRESPONSEBODYDATAKVLISTINFOCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_GETVLEXTRACTIONRESULTRESPONSEBODYDATAKVLISTINFOCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence.hpp>
#include <vector>
#include <alibabacloud/models/ContentItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetVLExtractionResultResponseBodyDataKvListInfoContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVLExtractionResultResponseBodyDataKvListInfoContext& obj) { 
      DARABONBA_PTR_TO_JSON(confidence, confidence_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetVLExtractionResultResponseBodyDataKvListInfoContext& obj) { 
      DARABONBA_PTR_FROM_JSON(confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    GetVLExtractionResultResponseBodyDataKvListInfoContext() = default ;
    GetVLExtractionResultResponseBodyDataKvListInfoContext(const GetVLExtractionResultResponseBodyDataKvListInfoContext &) = default ;
    GetVLExtractionResultResponseBodyDataKvListInfoContext(GetVLExtractionResultResponseBodyDataKvListInfoContext &&) = default ;
    GetVLExtractionResultResponseBodyDataKvListInfoContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVLExtractionResultResponseBodyDataKvListInfoContext() = default ;
    GetVLExtractionResultResponseBodyDataKvListInfoContext& operator=(const GetVLExtractionResultResponseBodyDataKvListInfoContext &) = default ;
    GetVLExtractionResultResponseBodyDataKvListInfoContext& operator=(GetVLExtractionResultResponseBodyDataKvListInfoContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->confidence_ != nullptr
        && this->key_ != nullptr && this->value_ != nullptr; };
    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline const Models::GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence & confidence() const { DARABONBA_PTR_GET_CONST(confidence_, Models::GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence) };
    inline Models::GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence confidence() { DARABONBA_PTR_GET(confidence_, Models::GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence) };
    inline GetVLExtractionResultResponseBodyDataKvListInfoContext& setConfidence(const Models::GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence & confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };
    inline GetVLExtractionResultResponseBodyDataKvListInfoContext& setConfidence(Models::GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence && confidence) { DARABONBA_PTR_SET_RVALUE(confidence_, confidence) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline const vector<Models::ContentItem> & key() const { DARABONBA_PTR_GET_CONST(key_, vector<Models::ContentItem>) };
    inline vector<Models::ContentItem> key() { DARABONBA_PTR_GET(key_, vector<Models::ContentItem>) };
    inline GetVLExtractionResultResponseBodyDataKvListInfoContext& setKey(const vector<Models::ContentItem> & key) { DARABONBA_PTR_SET_VALUE(key_, key) };
    inline GetVLExtractionResultResponseBodyDataKvListInfoContext& setKey(vector<Models::ContentItem> && key) { DARABONBA_PTR_SET_RVALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<Models::ContentItem> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<Models::ContentItem>) };
    inline vector<Models::ContentItem> value() { DARABONBA_PTR_GET(value_, vector<Models::ContentItem>) };
    inline GetVLExtractionResultResponseBodyDataKvListInfoContext& setValue(const vector<Models::ContentItem> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline GetVLExtractionResultResponseBodyDataKvListInfoContext& setValue(vector<Models::ContentItem> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // Confidence
    std::shared_ptr<Models::GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence> confidence_ = nullptr;
    // Key recall information details
    std::shared_ptr<vector<Models::ContentItem>> key_ = nullptr;
    // Value Recall Information
    std::shared_ptr<vector<Models::ContentItem>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
