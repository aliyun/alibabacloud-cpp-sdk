// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANALYSISTAGDETAILBYTASKIDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTANALYSISTAGDETAILBYTASKIDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class ListAnalysisTagDetailByTaskIdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnalysisTagDetailByTaskIdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(contentTags, contentTags_);
      DARABONBA_PTR_TO_JSON(originResponse, originResponse_);
      DARABONBA_PTR_TO_JSON(sourceList, sourceList_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnalysisTagDetailByTaskIdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(contentTags, contentTags_);
      DARABONBA_PTR_FROM_JSON(originResponse, originResponse_);
      DARABONBA_PTR_FROM_JSON(sourceList, sourceList_);
    };
    ListAnalysisTagDetailByTaskIdResponseBodyData() = default ;
    ListAnalysisTagDetailByTaskIdResponseBodyData(const ListAnalysisTagDetailByTaskIdResponseBodyData &) = default ;
    ListAnalysisTagDetailByTaskIdResponseBodyData(ListAnalysisTagDetailByTaskIdResponseBodyData &&) = default ;
    ListAnalysisTagDetailByTaskIdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnalysisTagDetailByTaskIdResponseBodyData() = default ;
    ListAnalysisTagDetailByTaskIdResponseBodyData& operator=(const ListAnalysisTagDetailByTaskIdResponseBodyData &) = default ;
    ListAnalysisTagDetailByTaskIdResponseBodyData& operator=(ListAnalysisTagDetailByTaskIdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->contentTags_ != nullptr && this->originResponse_ != nullptr && this->sourceList_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListAnalysisTagDetailByTaskIdResponseBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentTags Field Functions 
    bool hasContentTags() const { return this->contentTags_ != nullptr;};
    void deleteContentTags() { this->contentTags_ = nullptr;};
    inline const vector<Models::ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags> & contentTags() const { DARABONBA_PTR_GET_CONST(contentTags_, vector<Models::ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags>) };
    inline vector<Models::ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags> contentTags() { DARABONBA_PTR_GET(contentTags_, vector<Models::ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags>) };
    inline ListAnalysisTagDetailByTaskIdResponseBodyData& setContentTags(const vector<Models::ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags> & contentTags) { DARABONBA_PTR_SET_VALUE(contentTags_, contentTags) };
    inline ListAnalysisTagDetailByTaskIdResponseBodyData& setContentTags(vector<Models::ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags> && contentTags) { DARABONBA_PTR_SET_RVALUE(contentTags_, contentTags) };


    // originResponse Field Functions 
    bool hasOriginResponse() const { return this->originResponse_ != nullptr;};
    void deleteOriginResponse() { this->originResponse_ = nullptr;};
    inline string originResponse() const { DARABONBA_PTR_GET_DEFAULT(originResponse_, "") };
    inline ListAnalysisTagDetailByTaskIdResponseBodyData& setOriginResponse(string originResponse) { DARABONBA_PTR_SET_VALUE(originResponse_, originResponse) };


    // sourceList Field Functions 
    bool hasSourceList() const { return this->sourceList_ != nullptr;};
    void deleteSourceList() { this->sourceList_ = nullptr;};
    inline const vector<string> & sourceList() const { DARABONBA_PTR_GET_CONST(sourceList_, vector<string>) };
    inline vector<string> sourceList() { DARABONBA_PTR_GET(sourceList_, vector<string>) };
    inline ListAnalysisTagDetailByTaskIdResponseBodyData& setSourceList(const vector<string> & sourceList) { DARABONBA_PTR_SET_VALUE(sourceList_, sourceList) };
    inline ListAnalysisTagDetailByTaskIdResponseBodyData& setSourceList(vector<string> && sourceList) { DARABONBA_PTR_SET_RVALUE(sourceList_, sourceList) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<vector<Models::ListAnalysisTagDetailByTaskIdResponseBodyDataContentTags>> contentTags_ = nullptr;
    std::shared_ptr<string> originResponse_ = nullptr;
    std::shared_ptr<vector<string>> sourceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
