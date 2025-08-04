// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCQARESPONSEBODYPAYLOADOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCQARESPONSEBODYPAYLOADOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunDocQaResponseBodyPayloadOutputMediaUrlList.hpp>
#include <alibabacloud/models/RunDocQaResponseBodyPayloadOutputRecommends.hpp>
#include <alibabacloud/models/RunDocQaResponseBodyPayloadOutputReferences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocQaResponseBodyPayloadOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocQaResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(InterveneContent, interveneContent_);
      DARABONBA_PTR_TO_JSON(IsReject, isReject_);
      DARABONBA_PTR_TO_JSON(MediaUrlList, mediaUrlList_);
      DARABONBA_PTR_TO_JSON(Recommends, recommends_);
      DARABONBA_PTR_TO_JSON(References, references_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocQaResponseBodyPayloadOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(InterveneContent, interveneContent_);
      DARABONBA_PTR_FROM_JSON(IsReject, isReject_);
      DARABONBA_PTR_FROM_JSON(MediaUrlList, mediaUrlList_);
      DARABONBA_PTR_FROM_JSON(Recommends, recommends_);
      DARABONBA_PTR_FROM_JSON(References, references_);
    };
    RunDocQaResponseBodyPayloadOutput() = default ;
    RunDocQaResponseBodyPayloadOutput(const RunDocQaResponseBodyPayloadOutput &) = default ;
    RunDocQaResponseBodyPayloadOutput(RunDocQaResponseBodyPayloadOutput &&) = default ;
    RunDocQaResponseBodyPayloadOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocQaResponseBodyPayloadOutput() = default ;
    RunDocQaResponseBodyPayloadOutput& operator=(const RunDocQaResponseBodyPayloadOutput &) = default ;
    RunDocQaResponseBodyPayloadOutput& operator=(RunDocQaResponseBodyPayloadOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->interveneContent_ != nullptr && this->isReject_ != nullptr && this->mediaUrlList_ != nullptr && this->recommends_ != nullptr && this->references_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunDocQaResponseBodyPayloadOutput& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // interveneContent Field Functions 
    bool hasInterveneContent() const { return this->interveneContent_ != nullptr;};
    void deleteInterveneContent() { this->interveneContent_ = nullptr;};
    inline string interveneContent() const { DARABONBA_PTR_GET_DEFAULT(interveneContent_, "") };
    inline RunDocQaResponseBodyPayloadOutput& setInterveneContent(string interveneContent) { DARABONBA_PTR_SET_VALUE(interveneContent_, interveneContent) };


    // isReject Field Functions 
    bool hasIsReject() const { return this->isReject_ != nullptr;};
    void deleteIsReject() { this->isReject_ = nullptr;};
    inline bool isReject() const { DARABONBA_PTR_GET_DEFAULT(isReject_, false) };
    inline RunDocQaResponseBodyPayloadOutput& setIsReject(bool isReject) { DARABONBA_PTR_SET_VALUE(isReject_, isReject) };


    // mediaUrlList Field Functions 
    bool hasMediaUrlList() const { return this->mediaUrlList_ != nullptr;};
    void deleteMediaUrlList() { this->mediaUrlList_ = nullptr;};
    inline const vector<Models::RunDocQaResponseBodyPayloadOutputMediaUrlList> & mediaUrlList() const { DARABONBA_PTR_GET_CONST(mediaUrlList_, vector<Models::RunDocQaResponseBodyPayloadOutputMediaUrlList>) };
    inline vector<Models::RunDocQaResponseBodyPayloadOutputMediaUrlList> mediaUrlList() { DARABONBA_PTR_GET(mediaUrlList_, vector<Models::RunDocQaResponseBodyPayloadOutputMediaUrlList>) };
    inline RunDocQaResponseBodyPayloadOutput& setMediaUrlList(const vector<Models::RunDocQaResponseBodyPayloadOutputMediaUrlList> & mediaUrlList) { DARABONBA_PTR_SET_VALUE(mediaUrlList_, mediaUrlList) };
    inline RunDocQaResponseBodyPayloadOutput& setMediaUrlList(vector<Models::RunDocQaResponseBodyPayloadOutputMediaUrlList> && mediaUrlList) { DARABONBA_PTR_SET_RVALUE(mediaUrlList_, mediaUrlList) };


    // recommends Field Functions 
    bool hasRecommends() const { return this->recommends_ != nullptr;};
    void deleteRecommends() { this->recommends_ = nullptr;};
    inline const vector<Models::RunDocQaResponseBodyPayloadOutputRecommends> & recommends() const { DARABONBA_PTR_GET_CONST(recommends_, vector<Models::RunDocQaResponseBodyPayloadOutputRecommends>) };
    inline vector<Models::RunDocQaResponseBodyPayloadOutputRecommends> recommends() { DARABONBA_PTR_GET(recommends_, vector<Models::RunDocQaResponseBodyPayloadOutputRecommends>) };
    inline RunDocQaResponseBodyPayloadOutput& setRecommends(const vector<Models::RunDocQaResponseBodyPayloadOutputRecommends> & recommends) { DARABONBA_PTR_SET_VALUE(recommends_, recommends) };
    inline RunDocQaResponseBodyPayloadOutput& setRecommends(vector<Models::RunDocQaResponseBodyPayloadOutputRecommends> && recommends) { DARABONBA_PTR_SET_RVALUE(recommends_, recommends) };


    // references Field Functions 
    bool hasReferences() const { return this->references_ != nullptr;};
    void deleteReferences() { this->references_ = nullptr;};
    inline const vector<Models::RunDocQaResponseBodyPayloadOutputReferences> & references() const { DARABONBA_PTR_GET_CONST(references_, vector<Models::RunDocQaResponseBodyPayloadOutputReferences>) };
    inline vector<Models::RunDocQaResponseBodyPayloadOutputReferences> references() { DARABONBA_PTR_GET(references_, vector<Models::RunDocQaResponseBodyPayloadOutputReferences>) };
    inline RunDocQaResponseBodyPayloadOutput& setReferences(const vector<Models::RunDocQaResponseBodyPayloadOutputReferences> & references) { DARABONBA_PTR_SET_VALUE(references_, references) };
    inline RunDocQaResponseBodyPayloadOutput& setReferences(vector<Models::RunDocQaResponseBodyPayloadOutputReferences> && references) { DARABONBA_PTR_SET_RVALUE(references_, references) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> interveneContent_ = nullptr;
    std::shared_ptr<bool> isReject_ = nullptr;
    std::shared_ptr<vector<Models::RunDocQaResponseBodyPayloadOutputMediaUrlList>> mediaUrlList_ = nullptr;
    std::shared_ptr<vector<Models::RunDocQaResponseBodyPayloadOutputRecommends>> recommends_ = nullptr;
    std::shared_ptr<vector<Models::RunDocQaResponseBodyPayloadOutputReferences>> references_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
