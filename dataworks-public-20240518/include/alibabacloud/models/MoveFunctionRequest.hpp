// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVEFUNCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOVEFUNCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class MoveFunctionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveFunctionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, MoveFunctionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    MoveFunctionRequest() = default ;
    MoveFunctionRequest(const MoveFunctionRequest &) = default ;
    MoveFunctionRequest(MoveFunctionRequest &&) = default ;
    MoveFunctionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveFunctionRequest() = default ;
    MoveFunctionRequest& operator=(const MoveFunctionRequest &) = default ;
    MoveFunctionRequest& operator=(MoveFunctionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->path_ != nullptr && this->projectId_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline MoveFunctionRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline MoveFunctionRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline MoveFunctionRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The ID of the UDF.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The path to which you want to move the UDF. You do not need to specify a UDF name in the path.
    // 
    // For example, if you want to move the test UDF to root/demo/test, you must set this parameter to root/demo.
    // 
    // This parameter is required.
    std::shared_ptr<string> path_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to obtain the ID.
    // 
    // This parameter indicates the DataWorks workspace to which the API operation is applied.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
