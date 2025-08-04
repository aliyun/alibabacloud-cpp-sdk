// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCINTRODUCTIONRESPONSEBODYPAYLOADOUTPUTINTRODUCTIONS_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCINTRODUCTIONRESPONSEBODYPAYLOADOUTPUTINTRODUCTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocIntroductionResponseBodyPayloadOutputIntroductions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocIntroductionResponseBodyPayloadOutputIntroductions& obj) { 
      DARABONBA_PTR_TO_JSON(Blocks, blocks_);
      DARABONBA_PTR_TO_JSON(StartPageId, startPageId_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocIntroductionResponseBodyPayloadOutputIntroductions& obj) { 
      DARABONBA_PTR_FROM_JSON(Blocks, blocks_);
      DARABONBA_PTR_FROM_JSON(StartPageId, startPageId_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    RunDocIntroductionResponseBodyPayloadOutputIntroductions() = default ;
    RunDocIntroductionResponseBodyPayloadOutputIntroductions(const RunDocIntroductionResponseBodyPayloadOutputIntroductions &) = default ;
    RunDocIntroductionResponseBodyPayloadOutputIntroductions(RunDocIntroductionResponseBodyPayloadOutputIntroductions &&) = default ;
    RunDocIntroductionResponseBodyPayloadOutputIntroductions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocIntroductionResponseBodyPayloadOutputIntroductions() = default ;
    RunDocIntroductionResponseBodyPayloadOutputIntroductions& operator=(const RunDocIntroductionResponseBodyPayloadOutputIntroductions &) = default ;
    RunDocIntroductionResponseBodyPayloadOutputIntroductions& operator=(RunDocIntroductionResponseBodyPayloadOutputIntroductions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blocks_ != nullptr
        && this->startPageId_ != nullptr && this->summary_ != nullptr && this->title_ != nullptr; };
    // blocks Field Functions 
    bool hasBlocks() const { return this->blocks_ != nullptr;};
    void deleteBlocks() { this->blocks_ = nullptr;};
    inline const vector<Models::RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks> & blocks() const { DARABONBA_PTR_GET_CONST(blocks_, vector<Models::RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks>) };
    inline vector<Models::RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks> blocks() { DARABONBA_PTR_GET(blocks_, vector<Models::RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks>) };
    inline RunDocIntroductionResponseBodyPayloadOutputIntroductions& setBlocks(const vector<Models::RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks> & blocks) { DARABONBA_PTR_SET_VALUE(blocks_, blocks) };
    inline RunDocIntroductionResponseBodyPayloadOutputIntroductions& setBlocks(vector<Models::RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks> && blocks) { DARABONBA_PTR_SET_RVALUE(blocks_, blocks) };


    // startPageId Field Functions 
    bool hasStartPageId() const { return this->startPageId_ != nullptr;};
    void deleteStartPageId() { this->startPageId_ = nullptr;};
    inline int32_t startPageId() const { DARABONBA_PTR_GET_DEFAULT(startPageId_, 0) };
    inline RunDocIntroductionResponseBodyPayloadOutputIntroductions& setStartPageId(int32_t startPageId) { DARABONBA_PTR_SET_VALUE(startPageId_, startPageId) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline RunDocIntroductionResponseBodyPayloadOutputIntroductions& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline RunDocIntroductionResponseBodyPayloadOutputIntroductions& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<vector<Models::RunDocIntroductionResponseBodyPayloadOutputIntroductionsBlocks>> blocks_ = nullptr;
    std::shared_ptr<int32_t> startPageId_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
