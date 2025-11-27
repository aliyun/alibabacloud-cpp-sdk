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
        && return this->withStatistics_ == nullptr; };
    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetProjectRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // withStatistics Field Functions 
    bool hasWithStatistics() const { return this->withStatistics_ != nullptr;};
    void deleteWithStatistics() { this->withStatistics_ = nullptr;};
    inline bool withStatistics() const { DARABONBA_PTR_GET_DEFAULT(withStatistics_, false) };
    inline GetProjectRequest& setWithStatistics(bool withStatistics) { DARABONBA_PTR_SET_VALUE(withStatistics_, withStatistics) };


  protected:
    // The name of the project. You can obtain the name from the response of the [CreateProject](https://help.aliyun.com/document_detail/478153.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // Specifies whether to enable real-time retrieval of file statistics. Default value: false.
    // 
    // *   If you set the value to true, the returned values of FileCount and TotalFileSize in the response are valid.
    // *   If you set the value to false, the returned values of FileCount and TotalFileSize in the response are invalid or equal to 0.
    std::shared_ptr<bool> withStatistics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
