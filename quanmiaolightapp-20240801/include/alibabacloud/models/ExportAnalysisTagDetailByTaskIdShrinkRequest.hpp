// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTANALYSISTAGDETAILBYTASKIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTANALYSISTAGDETAILBYTASKIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class ExportAnalysisTagDetailByTaskIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportAnalysisTagDetailByTaskIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(categories, categoriesShrink_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportAnalysisTagDetailByTaskIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(categories, categoriesShrink_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    ExportAnalysisTagDetailByTaskIdShrinkRequest() = default ;
    ExportAnalysisTagDetailByTaskIdShrinkRequest(const ExportAnalysisTagDetailByTaskIdShrinkRequest &) = default ;
    ExportAnalysisTagDetailByTaskIdShrinkRequest(ExportAnalysisTagDetailByTaskIdShrinkRequest &&) = default ;
    ExportAnalysisTagDetailByTaskIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportAnalysisTagDetailByTaskIdShrinkRequest() = default ;
    ExportAnalysisTagDetailByTaskIdShrinkRequest& operator=(const ExportAnalysisTagDetailByTaskIdShrinkRequest &) = default ;
    ExportAnalysisTagDetailByTaskIdShrinkRequest& operator=(ExportAnalysisTagDetailByTaskIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoriesShrink_ == nullptr
        && return this->category_ == nullptr && return this->taskId_ == nullptr; };
    // categoriesShrink Field Functions 
    bool hasCategoriesShrink() const { return this->categoriesShrink_ != nullptr;};
    void deleteCategoriesShrink() { this->categoriesShrink_ = nullptr;};
    inline string categoriesShrink() const { DARABONBA_PTR_GET_DEFAULT(categoriesShrink_, "") };
    inline ExportAnalysisTagDetailByTaskIdShrinkRequest& setCategoriesShrink(string categoriesShrink) { DARABONBA_PTR_SET_VALUE(categoriesShrink_, categoriesShrink) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ExportAnalysisTagDetailByTaskIdShrinkRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ExportAnalysisTagDetailByTaskIdShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> categoriesShrink_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
