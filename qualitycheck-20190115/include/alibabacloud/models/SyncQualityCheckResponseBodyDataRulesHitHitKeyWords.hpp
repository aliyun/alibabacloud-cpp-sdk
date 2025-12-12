// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCQUALITYCHECKRESPONSEBODYDATARULESHITHITKEYWORDS_HPP_
#define ALIBABACLOUD_MODELS_SYNCQUALITYCHECKRESPONSEBODYDATARULESHITHITKEYWORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class SyncQualityCheckResponseBodyDataRulesHitHitKeyWords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncQualityCheckResponseBodyDataRulesHitHitKeyWords& obj) { 
      DARABONBA_PTR_TO_JSON(Cid, cid_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(To, to_);
      DARABONBA_PTR_TO_JSON(Val, val_);
    };
    friend void from_json(const Darabonba::Json& j, SyncQualityCheckResponseBodyDataRulesHitHitKeyWords& obj) { 
      DARABONBA_PTR_FROM_JSON(Cid, cid_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(To, to_);
      DARABONBA_PTR_FROM_JSON(Val, val_);
    };
    SyncQualityCheckResponseBodyDataRulesHitHitKeyWords() = default ;
    SyncQualityCheckResponseBodyDataRulesHitHitKeyWords(const SyncQualityCheckResponseBodyDataRulesHitHitKeyWords &) = default ;
    SyncQualityCheckResponseBodyDataRulesHitHitKeyWords(SyncQualityCheckResponseBodyDataRulesHitHitKeyWords &&) = default ;
    SyncQualityCheckResponseBodyDataRulesHitHitKeyWords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncQualityCheckResponseBodyDataRulesHitHitKeyWords() = default ;
    SyncQualityCheckResponseBodyDataRulesHitHitKeyWords& operator=(const SyncQualityCheckResponseBodyDataRulesHitHitKeyWords &) = default ;
    SyncQualityCheckResponseBodyDataRulesHitHitKeyWords& operator=(SyncQualityCheckResponseBodyDataRulesHitHitKeyWords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cid_ == nullptr
        && return this->from_ == nullptr && return this->pid_ == nullptr && return this->to_ == nullptr && return this->val_ == nullptr; };
    // cid Field Functions 
    bool hasCid() const { return this->cid_ != nullptr;};
    void deleteCid() { this->cid_ = nullptr;};
    inline int32_t cid() const { DARABONBA_PTR_GET_DEFAULT(cid_, 0) };
    inline SyncQualityCheckResponseBodyDataRulesHitHitKeyWords& setCid(int32_t cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int32_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
    inline SyncQualityCheckResponseBodyDataRulesHitHitKeyWords& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline int32_t pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0) };
    inline SyncQualityCheckResponseBodyDataRulesHitHitKeyWords& setPid(int32_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int32_t to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
    inline SyncQualityCheckResponseBodyDataRulesHitHitKeyWords& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // val Field Functions 
    bool hasVal() const { return this->val_ != nullptr;};
    void deleteVal() { this->val_ = nullptr;};
    inline string val() const { DARABONBA_PTR_GET_DEFAULT(val_, "") };
    inline SyncQualityCheckResponseBodyDataRulesHitHitKeyWords& setVal(string val) { DARABONBA_PTR_SET_VALUE(val_, val) };


  protected:
    std::shared_ptr<int32_t> cid_ = nullptr;
    std::shared_ptr<int32_t> from_ = nullptr;
    std::shared_ptr<int32_t> pid_ = nullptr;
    std::shared_ptr<int32_t> to_ = nullptr;
    std::shared_ptr<string> val_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
