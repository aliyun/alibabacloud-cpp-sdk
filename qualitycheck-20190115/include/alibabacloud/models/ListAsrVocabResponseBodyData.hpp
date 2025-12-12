// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASRVOCABRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTASRVOCABRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAsrVocabResponseBodyDataAsrVocab.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListAsrVocabResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAsrVocabResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AsrVocab, asrVocab_);
    };
    friend void from_json(const Darabonba::Json& j, ListAsrVocabResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrVocab, asrVocab_);
    };
    ListAsrVocabResponseBodyData() = default ;
    ListAsrVocabResponseBodyData(const ListAsrVocabResponseBodyData &) = default ;
    ListAsrVocabResponseBodyData(ListAsrVocabResponseBodyData &&) = default ;
    ListAsrVocabResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAsrVocabResponseBodyData() = default ;
    ListAsrVocabResponseBodyData& operator=(const ListAsrVocabResponseBodyData &) = default ;
    ListAsrVocabResponseBodyData& operator=(ListAsrVocabResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asrVocab_ == nullptr; };
    // asrVocab Field Functions 
    bool hasAsrVocab() const { return this->asrVocab_ != nullptr;};
    void deleteAsrVocab() { this->asrVocab_ = nullptr;};
    inline const vector<Models::ListAsrVocabResponseBodyDataAsrVocab> & asrVocab() const { DARABONBA_PTR_GET_CONST(asrVocab_, vector<Models::ListAsrVocabResponseBodyDataAsrVocab>) };
    inline vector<Models::ListAsrVocabResponseBodyDataAsrVocab> asrVocab() { DARABONBA_PTR_GET(asrVocab_, vector<Models::ListAsrVocabResponseBodyDataAsrVocab>) };
    inline ListAsrVocabResponseBodyData& setAsrVocab(const vector<Models::ListAsrVocabResponseBodyDataAsrVocab> & asrVocab) { DARABONBA_PTR_SET_VALUE(asrVocab_, asrVocab) };
    inline ListAsrVocabResponseBodyData& setAsrVocab(vector<Models::ListAsrVocabResponseBodyDataAsrVocab> && asrVocab) { DARABONBA_PTR_SET_RVALUE(asrVocab_, asrVocab) };


  protected:
    std::shared_ptr<vector<Models::ListAsrVocabResponseBodyDataAsrVocab>> asrVocab_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
