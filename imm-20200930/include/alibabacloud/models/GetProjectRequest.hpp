// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(WithStatistics, withStatistics_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(WithStatistics, withStatistics_);
    };
    GetProjectRequest() = default ;
    GetProjectRequest(const GetProjectRequest &) = default ;
    GetProjectRequest(GetProjectRequest &&) = default ;
    GetProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectRequest() = default ;
    GetProjectRequest& operator=(const GetProjectRequest &) = default ;
    GetProjectRequest& operator=(GetProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectName_ == nullptr
        && this->withStatistics_ == nullptr; };
    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetProjectRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // withStatistics Field Functions 
    bool hasWithStatistics() const { return this->withStatistics_ != nullptr;};
    void deleteWithStatistics() { this->withStatistics_ = nullptr;};
    inline bool getWithStatistics() const { DARABONBA_PTR_GET_DEFAULT(withStatistics_, false) };
    inline GetProjectRequest& setWithStatistics(bool withStatistics) { DARABONBA_PTR_SET_VALUE(withStatistics_, withStatistics) };


  protected:
    // The project name. For information about how to obtain the project name, see [创建项目](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // Specifies whether to collect file statistics. Default value: false, which indicates that file statistics are not collected.
    // 
    // - File statistics are collected. The FileCount and TotalFileSize values in the returned Project struct are valid.
    // 
    // - File statistics are not collected. The FileCount and TotalFileSize values in the returned Project struct may be inaccurate or both may be 0.
    // 
    // >Notice: Only files in datasets created before December 20, 2025 can be counted..
    shared_ptr<bool> withStatistics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
