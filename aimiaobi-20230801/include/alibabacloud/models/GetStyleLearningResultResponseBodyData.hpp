// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTYLELEARNINGRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSTYLELEARNINGRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetStyleLearningResultResponseBodyDataContentList.hpp>
#include <alibabacloud/models/GetStyleLearningResultResponseBodyDataMaterialInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetStyleLearningResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStyleLearningResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AigcResult, aigcResult_);
      DARABONBA_PTR_TO_JSON(ContentList, contentList_);
      DARABONBA_PTR_TO_JSON(CustomTextIdList, customTextIdList_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MaterialIdList, materialIdList_);
      DARABONBA_PTR_TO_JSON(MaterialInfoList, materialInfoList_);
      DARABONBA_PTR_TO_JSON(RewriteResult, rewriteResult_);
      DARABONBA_PTR_TO_JSON(StyleName, styleName_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStyleLearningResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AigcResult, aigcResult_);
      DARABONBA_PTR_FROM_JSON(ContentList, contentList_);
      DARABONBA_PTR_FROM_JSON(CustomTextIdList, customTextIdList_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MaterialIdList, materialIdList_);
      DARABONBA_PTR_FROM_JSON(MaterialInfoList, materialInfoList_);
      DARABONBA_PTR_FROM_JSON(RewriteResult, rewriteResult_);
      DARABONBA_PTR_FROM_JSON(StyleName, styleName_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetStyleLearningResultResponseBodyData() = default ;
    GetStyleLearningResultResponseBodyData(const GetStyleLearningResultResponseBodyData &) = default ;
    GetStyleLearningResultResponseBodyData(GetStyleLearningResultResponseBodyData &&) = default ;
    GetStyleLearningResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStyleLearningResultResponseBodyData() = default ;
    GetStyleLearningResultResponseBodyData& operator=(const GetStyleLearningResultResponseBodyData &) = default ;
    GetStyleLearningResultResponseBodyData& operator=(GetStyleLearningResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aigcResult_ == nullptr
        && return this->contentList_ == nullptr && return this->customTextIdList_ == nullptr && return this->id_ == nullptr && return this->materialIdList_ == nullptr && return this->materialInfoList_ == nullptr
        && return this->rewriteResult_ == nullptr && return this->styleName_ == nullptr && return this->taskId_ == nullptr; };
    // aigcResult Field Functions 
    bool hasAigcResult() const { return this->aigcResult_ != nullptr;};
    void deleteAigcResult() { this->aigcResult_ = nullptr;};
    inline string aigcResult() const { DARABONBA_PTR_GET_DEFAULT(aigcResult_, "") };
    inline GetStyleLearningResultResponseBodyData& setAigcResult(string aigcResult) { DARABONBA_PTR_SET_VALUE(aigcResult_, aigcResult) };


    // contentList Field Functions 
    bool hasContentList() const { return this->contentList_ != nullptr;};
    void deleteContentList() { this->contentList_ = nullptr;};
    inline const vector<Models::GetStyleLearningResultResponseBodyDataContentList> & contentList() const { DARABONBA_PTR_GET_CONST(contentList_, vector<Models::GetStyleLearningResultResponseBodyDataContentList>) };
    inline vector<Models::GetStyleLearningResultResponseBodyDataContentList> contentList() { DARABONBA_PTR_GET(contentList_, vector<Models::GetStyleLearningResultResponseBodyDataContentList>) };
    inline GetStyleLearningResultResponseBodyData& setContentList(const vector<Models::GetStyleLearningResultResponseBodyDataContentList> & contentList) { DARABONBA_PTR_SET_VALUE(contentList_, contentList) };
    inline GetStyleLearningResultResponseBodyData& setContentList(vector<Models::GetStyleLearningResultResponseBodyDataContentList> && contentList) { DARABONBA_PTR_SET_RVALUE(contentList_, contentList) };


    // customTextIdList Field Functions 
    bool hasCustomTextIdList() const { return this->customTextIdList_ != nullptr;};
    void deleteCustomTextIdList() { this->customTextIdList_ = nullptr;};
    inline const vector<int64_t> & customTextIdList() const { DARABONBA_PTR_GET_CONST(customTextIdList_, vector<int64_t>) };
    inline vector<int64_t> customTextIdList() { DARABONBA_PTR_GET(customTextIdList_, vector<int64_t>) };
    inline GetStyleLearningResultResponseBodyData& setCustomTextIdList(const vector<int64_t> & customTextIdList) { DARABONBA_PTR_SET_VALUE(customTextIdList_, customTextIdList) };
    inline GetStyleLearningResultResponseBodyData& setCustomTextIdList(vector<int64_t> && customTextIdList) { DARABONBA_PTR_SET_RVALUE(customTextIdList_, customTextIdList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetStyleLearningResultResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // materialIdList Field Functions 
    bool hasMaterialIdList() const { return this->materialIdList_ != nullptr;};
    void deleteMaterialIdList() { this->materialIdList_ = nullptr;};
    inline const vector<int64_t> & materialIdList() const { DARABONBA_PTR_GET_CONST(materialIdList_, vector<int64_t>) };
    inline vector<int64_t> materialIdList() { DARABONBA_PTR_GET(materialIdList_, vector<int64_t>) };
    inline GetStyleLearningResultResponseBodyData& setMaterialIdList(const vector<int64_t> & materialIdList) { DARABONBA_PTR_SET_VALUE(materialIdList_, materialIdList) };
    inline GetStyleLearningResultResponseBodyData& setMaterialIdList(vector<int64_t> && materialIdList) { DARABONBA_PTR_SET_RVALUE(materialIdList_, materialIdList) };


    // materialInfoList Field Functions 
    bool hasMaterialInfoList() const { return this->materialInfoList_ != nullptr;};
    void deleteMaterialInfoList() { this->materialInfoList_ = nullptr;};
    inline const vector<Models::GetStyleLearningResultResponseBodyDataMaterialInfoList> & materialInfoList() const { DARABONBA_PTR_GET_CONST(materialInfoList_, vector<Models::GetStyleLearningResultResponseBodyDataMaterialInfoList>) };
    inline vector<Models::GetStyleLearningResultResponseBodyDataMaterialInfoList> materialInfoList() { DARABONBA_PTR_GET(materialInfoList_, vector<Models::GetStyleLearningResultResponseBodyDataMaterialInfoList>) };
    inline GetStyleLearningResultResponseBodyData& setMaterialInfoList(const vector<Models::GetStyleLearningResultResponseBodyDataMaterialInfoList> & materialInfoList) { DARABONBA_PTR_SET_VALUE(materialInfoList_, materialInfoList) };
    inline GetStyleLearningResultResponseBodyData& setMaterialInfoList(vector<Models::GetStyleLearningResultResponseBodyDataMaterialInfoList> && materialInfoList) { DARABONBA_PTR_SET_RVALUE(materialInfoList_, materialInfoList) };


    // rewriteResult Field Functions 
    bool hasRewriteResult() const { return this->rewriteResult_ != nullptr;};
    void deleteRewriteResult() { this->rewriteResult_ = nullptr;};
    inline string rewriteResult() const { DARABONBA_PTR_GET_DEFAULT(rewriteResult_, "") };
    inline GetStyleLearningResultResponseBodyData& setRewriteResult(string rewriteResult) { DARABONBA_PTR_SET_VALUE(rewriteResult_, rewriteResult) };


    // styleName Field Functions 
    bool hasStyleName() const { return this->styleName_ != nullptr;};
    void deleteStyleName() { this->styleName_ = nullptr;};
    inline string styleName() const { DARABONBA_PTR_GET_DEFAULT(styleName_, "") };
    inline GetStyleLearningResultResponseBodyData& setStyleName(string styleName) { DARABONBA_PTR_SET_VALUE(styleName_, styleName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetStyleLearningResultResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> aigcResult_ = nullptr;
    std::shared_ptr<vector<Models::GetStyleLearningResultResponseBodyDataContentList>> contentList_ = nullptr;
    std::shared_ptr<vector<int64_t>> customTextIdList_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<vector<int64_t>> materialIdList_ = nullptr;
    std::shared_ptr<vector<Models::GetStyleLearningResultResponseBodyDataMaterialInfoList>> materialInfoList_ = nullptr;
    std::shared_ptr<string> rewriteResult_ = nullptr;
    std::shared_ptr<string> styleName_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
