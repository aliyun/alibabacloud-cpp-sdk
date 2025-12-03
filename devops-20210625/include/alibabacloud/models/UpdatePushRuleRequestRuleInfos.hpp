// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPUSHRULEREQUESTRULEINFOS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPUSHRULEREQUESTRULEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdatePushRuleRequestRuleInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePushRuleRequestRuleInfos& obj) { 
      DARABONBA_PTR_TO_JSON(checkerName, checkerName_);
      DARABONBA_PTR_TO_JSON(checkerType, checkerType_);
      DARABONBA_PTR_TO_JSON(extraMessage, extraMessage_);
      DARABONBA_PTR_TO_JSON(fileRuleRegexes, fileRuleRegexes_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePushRuleRequestRuleInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(checkerName, checkerName_);
      DARABONBA_PTR_FROM_JSON(checkerType, checkerType_);
      DARABONBA_PTR_FROM_JSON(extraMessage, extraMessage_);
      DARABONBA_PTR_FROM_JSON(fileRuleRegexes, fileRuleRegexes_);
    };
    UpdatePushRuleRequestRuleInfos() = default ;
    UpdatePushRuleRequestRuleInfos(const UpdatePushRuleRequestRuleInfos &) = default ;
    UpdatePushRuleRequestRuleInfos(UpdatePushRuleRequestRuleInfos &&) = default ;
    UpdatePushRuleRequestRuleInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePushRuleRequestRuleInfos() = default ;
    UpdatePushRuleRequestRuleInfos& operator=(const UpdatePushRuleRequestRuleInfos &) = default ;
    UpdatePushRuleRequestRuleInfos& operator=(UpdatePushRuleRequestRuleInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkerName_ == nullptr
        && return this->checkerType_ == nullptr && return this->extraMessage_ == nullptr && return this->fileRuleRegexes_ == nullptr; };
    // checkerName Field Functions 
    bool hasCheckerName() const { return this->checkerName_ != nullptr;};
    void deleteCheckerName() { this->checkerName_ = nullptr;};
    inline string checkerName() const { DARABONBA_PTR_GET_DEFAULT(checkerName_, "") };
    inline UpdatePushRuleRequestRuleInfos& setCheckerName(string checkerName) { DARABONBA_PTR_SET_VALUE(checkerName_, checkerName) };


    // checkerType Field Functions 
    bool hasCheckerType() const { return this->checkerType_ != nullptr;};
    void deleteCheckerType() { this->checkerType_ = nullptr;};
    inline string checkerType() const { DARABONBA_PTR_GET_DEFAULT(checkerType_, "") };
    inline UpdatePushRuleRequestRuleInfos& setCheckerType(string checkerType) { DARABONBA_PTR_SET_VALUE(checkerType_, checkerType) };


    // extraMessage Field Functions 
    bool hasExtraMessage() const { return this->extraMessage_ != nullptr;};
    void deleteExtraMessage() { this->extraMessage_ = nullptr;};
    inline string extraMessage() const { DARABONBA_PTR_GET_DEFAULT(extraMessage_, "") };
    inline UpdatePushRuleRequestRuleInfos& setExtraMessage(string extraMessage) { DARABONBA_PTR_SET_VALUE(extraMessage_, extraMessage) };


    // fileRuleRegexes Field Functions 
    bool hasFileRuleRegexes() const { return this->fileRuleRegexes_ != nullptr;};
    void deleteFileRuleRegexes() { this->fileRuleRegexes_ = nullptr;};
    inline const vector<string> & fileRuleRegexes() const { DARABONBA_PTR_GET_CONST(fileRuleRegexes_, vector<string>) };
    inline vector<string> fileRuleRegexes() { DARABONBA_PTR_GET(fileRuleRegexes_, vector<string>) };
    inline UpdatePushRuleRequestRuleInfos& setFileRuleRegexes(const vector<string> & fileRuleRegexes) { DARABONBA_PTR_SET_VALUE(fileRuleRegexes_, fileRuleRegexes) };
    inline UpdatePushRuleRequestRuleInfos& setFileRuleRegexes(vector<string> && fileRuleRegexes) { DARABONBA_PTR_SET_RVALUE(fileRuleRegexes_, fileRuleRegexes) };


  protected:
    std::shared_ptr<string> checkerName_ = nullptr;
    std::shared_ptr<string> checkerType_ = nullptr;
    std::shared_ptr<string> extraMessage_ = nullptr;
    std::shared_ptr<vector<string>> fileRuleRegexes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
