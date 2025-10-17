// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTANALYSISTAGDETAILBYTASKIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTANALYSISTAGDETAILBYTASKIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class ExportAnalysisTagDetailByTaskIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportAnalysisTagDetailByTaskIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(categories, categories_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportAnalysisTagDetailByTaskIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(categories, categories_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    ExportAnalysisTagDetailByTaskIdRequest() = default ;
    ExportAnalysisTagDetailByTaskIdRequest(const ExportAnalysisTagDetailByTaskIdRequest &) = default ;
    ExportAnalysisTagDetailByTaskIdRequest(ExportAnalysisTagDetailByTaskIdRequest &&) = default ;
    ExportAnalysisTagDetailByTaskIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportAnalysisTagDetailByTaskIdRequest() = default ;
    ExportAnalysisTagDetailByTaskIdRequest& operator=(const ExportAnalysisTagDetailByTaskIdRequest &) = default ;
    ExportAnalysisTagDetailByTaskIdRequest& operator=(ExportAnalysisTagDetailByTaskIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categories_ == nullptr
        && return this->category_ == nullptr && return this->taskId_ == nullptr; };
    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<string> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
    inline vector<string> categories() { DARABONBA_PTR_GET(categories_, vector<string>) };
    inline ExportAnalysisTagDetailByTaskIdRequest& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline ExportAnalysisTagDetailByTaskIdRequest& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ExportAnalysisTagDetailByTaskIdRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ExportAnalysisTagDetailByTaskIdRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<vector<string>> categories_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
