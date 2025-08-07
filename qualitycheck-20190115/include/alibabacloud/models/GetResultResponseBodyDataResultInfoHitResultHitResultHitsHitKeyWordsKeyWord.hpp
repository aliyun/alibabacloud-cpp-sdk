// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTHITSHITKEYWORDSKEYWORD_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTHITSHITKEYWORDSKEYWORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord& obj) { 
      DARABONBA_PTR_TO_JSON(Cid, cid_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(To, to_);
      DARABONBA_PTR_TO_JSON(Val, val_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord& obj) { 
      DARABONBA_PTR_FROM_JSON(Cid, cid_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(To, to_);
      DARABONBA_PTR_FROM_JSON(Val, val_);
    };
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord(const GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord(GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord &&) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord& operator=(const GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord& operator=(GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cid_ != nullptr
        && this->from_ != nullptr && this->to_ != nullptr && this->val_ != nullptr; };
    // cid Field Functions 
    bool hasCid() const { return this->cid_ != nullptr;};
    void deleteCid() { this->cid_ = nullptr;};
    inline string cid() const { DARABONBA_PTR_GET_DEFAULT(cid_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord& setCid(string cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int32_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int32_t to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // val Field Functions 
    bool hasVal() const { return this->val_ != nullptr;};
    void deleteVal() { this->val_ = nullptr;};
    inline string val() const { DARABONBA_PTR_GET_DEFAULT(val_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultHitsHitKeyWordsKeyWord& setVal(string val) { DARABONBA_PTR_SET_VALUE(val_, val) };


  protected:
    std::shared_ptr<string> cid_ = nullptr;
    std::shared_ptr<int32_t> from_ = nullptr;
    std::shared_ptr<int32_t> to_ = nullptr;
    std::shared_ptr<string> val_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
