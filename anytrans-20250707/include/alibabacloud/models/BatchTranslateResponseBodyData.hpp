// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHTRANSLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BATCHTRANSLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchTranslateResponseBodyDataTranslationList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class BatchTranslateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchTranslateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(translationList, translationList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchTranslateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(translationList, translationList_);
    };
    BatchTranslateResponseBodyData() = default ;
    BatchTranslateResponseBodyData(const BatchTranslateResponseBodyData &) = default ;
    BatchTranslateResponseBodyData(BatchTranslateResponseBodyData &&) = default ;
    BatchTranslateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchTranslateResponseBodyData() = default ;
    BatchTranslateResponseBodyData& operator=(const BatchTranslateResponseBodyData &) = default ;
    BatchTranslateResponseBodyData& operator=(BatchTranslateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->translationList_ != nullptr; };
    // translationList Field Functions 
    bool hasTranslationList() const { return this->translationList_ != nullptr;};
    void deleteTranslationList() { this->translationList_ = nullptr;};
    inline const vector<Models::BatchTranslateResponseBodyDataTranslationList> & translationList() const { DARABONBA_PTR_GET_CONST(translationList_, vector<Models::BatchTranslateResponseBodyDataTranslationList>) };
    inline vector<Models::BatchTranslateResponseBodyDataTranslationList> translationList() { DARABONBA_PTR_GET(translationList_, vector<Models::BatchTranslateResponseBodyDataTranslationList>) };
    inline BatchTranslateResponseBodyData& setTranslationList(const vector<Models::BatchTranslateResponseBodyDataTranslationList> & translationList) { DARABONBA_PTR_SET_VALUE(translationList_, translationList) };
    inline BatchTranslateResponseBodyData& setTranslationList(vector<Models::BatchTranslateResponseBodyDataTranslationList> && translationList) { DARABONBA_PTR_SET_RVALUE(translationList_, translationList) };


  protected:
    std::shared_ptr<vector<Models::BatchTranslateResponseBodyDataTranslationList>> translationList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
