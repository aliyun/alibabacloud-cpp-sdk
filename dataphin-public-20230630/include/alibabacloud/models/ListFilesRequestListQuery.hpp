// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILESREQUESTLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTFILESREQUESTLISTQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListFilesRequestListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFilesRequestListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Directory, directory_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Recursive, recursive_);
    };
    friend void from_json(const Darabonba::Json& j, ListFilesRequestListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Directory, directory_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Recursive, recursive_);
    };
    ListFilesRequestListQuery() = default ;
    ListFilesRequestListQuery(const ListFilesRequestListQuery &) = default ;
    ListFilesRequestListQuery(ListFilesRequestListQuery &&) = default ;
    ListFilesRequestListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFilesRequestListQuery() = default ;
    ListFilesRequestListQuery& operator=(const ListFilesRequestListQuery &) = default ;
    ListFilesRequestListQuery& operator=(ListFilesRequestListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->directory_ != nullptr && this->env_ != nullptr && this->projectId_ != nullptr && this->recursive_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListFilesRequestListQuery& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline string directory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
    inline ListFilesRequestListQuery& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ListFilesRequestListQuery& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListFilesRequestListQuery& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // recursive Field Functions 
    bool hasRecursive() const { return this->recursive_ != nullptr;};
    void deleteRecursive() { this->recursive_ = nullptr;};
    inline bool recursive() const { DARABONBA_PTR_GET_DEFAULT(recursive_, false) };
    inline ListFilesRequestListQuery& setRecursive(bool recursive) { DARABONBA_PTR_SET_VALUE(recursive_, recursive) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> category_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> directory_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> recursive_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
