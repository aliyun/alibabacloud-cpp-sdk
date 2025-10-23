// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTANALYZERESULTRESPONSEBODYDATAKVLISTINFOCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTANALYZERESULTRESPONSEBODYDATAKVLISTINFOCONTEXT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDocumentAnalyzeResultResponseBodyDataKvListInfoContextConfidence.hpp>
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
  class GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext& obj) { 
      DARABONBA_PTR_TO_JSON(confidence, confidence_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext& obj) { 
      DARABONBA_PTR_FROM_JSON(confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext() = default ;
    GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext(const GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext &) = default ;
    GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext(GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext &&) = default ;
    GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext() = default ;
    GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext& operator=(const GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext &) = default ;
    GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext& operator=(GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confidence_ == nullptr
        && return this->key_ == nullptr && return this->value_ == nullptr; };
    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline const Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfoContextConfidence & confidence() const { DARABONBA_PTR_GET_CONST(confidence_, Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfoContextConfidence) };
    inline Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfoContextConfidence confidence() { DARABONBA_PTR_GET(confidence_, Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfoContextConfidence) };
    inline GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext& setConfidence(const Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfoContextConfidence & confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };
    inline GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext& setConfidence(Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfoContextConfidence && confidence) { DARABONBA_PTR_SET_RVALUE(confidence_, confidence) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline const vector<Models::ContentItem> & key() const { DARABONBA_PTR_GET_CONST(key_, vector<Models::ContentItem>) };
    inline vector<Models::ContentItem> key() { DARABONBA_PTR_GET(key_, vector<Models::ContentItem>) };
    inline GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext& setKey(const vector<Models::ContentItem> & key) { DARABONBA_PTR_SET_VALUE(key_, key) };
    inline GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext& setKey(vector<Models::ContentItem> && key) { DARABONBA_PTR_SET_RVALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<Models::ContentItem> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<Models::ContentItem>) };
    inline vector<Models::ContentItem> value() { DARABONBA_PTR_GET(value_, vector<Models::ContentItem>) };
    inline GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext& setValue(const vector<Models::ContentItem> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext& setValue(vector<Models::ContentItem> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // Confidence
    std::shared_ptr<Models::GetDocumentAnalyzeResultResponseBodyDataKvListInfoContextConfidence> confidence_ = nullptr;
    // Key Recall Information
    std::shared_ptr<vector<Models::ContentItem>> key_ = nullptr;
    // Value Recall Information
    std::shared_ptr<vector<Models::ContentItem>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
