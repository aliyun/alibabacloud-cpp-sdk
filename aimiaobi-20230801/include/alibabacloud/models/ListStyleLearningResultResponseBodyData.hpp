// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTYLELEARNINGRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSTYLELEARNINGRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListStyleLearningResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStyleLearningResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AigcResult, aigcResult_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RewriteResult, rewriteResult_);
      DARABONBA_PTR_TO_JSON(StyleName, styleName_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListStyleLearningResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AigcResult, aigcResult_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RewriteResult, rewriteResult_);
      DARABONBA_PTR_FROM_JSON(StyleName, styleName_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ListStyleLearningResultResponseBodyData() = default ;
    ListStyleLearningResultResponseBodyData(const ListStyleLearningResultResponseBodyData &) = default ;
    ListStyleLearningResultResponseBodyData(ListStyleLearningResultResponseBodyData &&) = default ;
    ListStyleLearningResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStyleLearningResultResponseBodyData() = default ;
    ListStyleLearningResultResponseBodyData& operator=(const ListStyleLearningResultResponseBodyData &) = default ;
    ListStyleLearningResultResponseBodyData& operator=(ListStyleLearningResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aigcResult_ != nullptr
        && this->id_ != nullptr && this->rewriteResult_ != nullptr && this->styleName_ != nullptr && this->taskId_ != nullptr; };
    // aigcResult Field Functions 
    bool hasAigcResult() const { return this->aigcResult_ != nullptr;};
    void deleteAigcResult() { this->aigcResult_ = nullptr;};
    inline string aigcResult() const { DARABONBA_PTR_GET_DEFAULT(aigcResult_, "") };
    inline ListStyleLearningResultResponseBodyData& setAigcResult(string aigcResult) { DARABONBA_PTR_SET_VALUE(aigcResult_, aigcResult) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListStyleLearningResultResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // rewriteResult Field Functions 
    bool hasRewriteResult() const { return this->rewriteResult_ != nullptr;};
    void deleteRewriteResult() { this->rewriteResult_ = nullptr;};
    inline string rewriteResult() const { DARABONBA_PTR_GET_DEFAULT(rewriteResult_, "") };
    inline ListStyleLearningResultResponseBodyData& setRewriteResult(string rewriteResult) { DARABONBA_PTR_SET_VALUE(rewriteResult_, rewriteResult) };


    // styleName Field Functions 
    bool hasStyleName() const { return this->styleName_ != nullptr;};
    void deleteStyleName() { this->styleName_ = nullptr;};
    inline string styleName() const { DARABONBA_PTR_GET_DEFAULT(styleName_, "") };
    inline ListStyleLearningResultResponseBodyData& setStyleName(string styleName) { DARABONBA_PTR_SET_VALUE(styleName_, styleName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListStyleLearningResultResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> aigcResult_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> rewriteResult_ = nullptr;
    std::shared_ptr<string> styleName_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
