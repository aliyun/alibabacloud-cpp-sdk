// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHTRANSLATEFORHTMLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BATCHTRANSLATEFORHTMLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchTranslateForHtmlResponseBodyDataTranslationList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class BatchTranslateForHtmlResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchTranslateForHtmlResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(translationList, translationList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchTranslateForHtmlResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(translationList, translationList_);
    };
    BatchTranslateForHtmlResponseBodyData() = default ;
    BatchTranslateForHtmlResponseBodyData(const BatchTranslateForHtmlResponseBodyData &) = default ;
    BatchTranslateForHtmlResponseBodyData(BatchTranslateForHtmlResponseBodyData &&) = default ;
    BatchTranslateForHtmlResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchTranslateForHtmlResponseBodyData() = default ;
    BatchTranslateForHtmlResponseBodyData& operator=(const BatchTranslateForHtmlResponseBodyData &) = default ;
    BatchTranslateForHtmlResponseBodyData& operator=(BatchTranslateForHtmlResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->translationList_ == nullptr; };
    // translationList Field Functions 
    bool hasTranslationList() const { return this->translationList_ != nullptr;};
    void deleteTranslationList() { this->translationList_ = nullptr;};
    inline const vector<Models::BatchTranslateForHtmlResponseBodyDataTranslationList> & translationList() const { DARABONBA_PTR_GET_CONST(translationList_, vector<Models::BatchTranslateForHtmlResponseBodyDataTranslationList>) };
    inline vector<Models::BatchTranslateForHtmlResponseBodyDataTranslationList> translationList() { DARABONBA_PTR_GET(translationList_, vector<Models::BatchTranslateForHtmlResponseBodyDataTranslationList>) };
    inline BatchTranslateForHtmlResponseBodyData& setTranslationList(const vector<Models::BatchTranslateForHtmlResponseBodyDataTranslationList> & translationList) { DARABONBA_PTR_SET_VALUE(translationList_, translationList) };
    inline BatchTranslateForHtmlResponseBodyData& setTranslationList(vector<Models::BatchTranslateForHtmlResponseBodyDataTranslationList> && translationList) { DARABONBA_PTR_SET_RVALUE(translationList_, translationList) };


  protected:
    std::shared_ptr<vector<Models::BatchTranslateForHtmlResponseBodyDataTranslationList>> translationList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
