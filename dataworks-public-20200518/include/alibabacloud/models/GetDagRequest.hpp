// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
    };
    friend void from_json(const Darabonba::Json& j, GetDagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
    };
    GetDagRequest() = default ;
    GetDagRequest(const GetDagRequest &) = default ;
    GetDagRequest(GetDagRequest &&) = default ;
    GetDagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDagRequest() = default ;
    GetDagRequest& operator=(const GetDagRequest &) = default ;
    GetDagRequest& operator=(GetDagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagId_ != nullptr
        && this->projectEnv_ != nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline GetDagRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline GetDagRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


  protected:
    // The ID of the DAG. You can use one of the following method to obtain the ID:
    // 
    // *   Call the [RunCycleDagNodes](https://help.aliyun.com/document_detail/2780209.html) operation and obtain the value of the **Data** response parameter.
    // *   Call the [RunSmokeTest](https://help.aliyun.com/document_detail/2780210.html) operation and obtain the value of the **Data** response parameter.
    // *   Call the [RunManualDagNodes](https://help.aliyun.com/document_detail/2780218.html) operation and obtain the value of the **DagId** response parameter.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The environment of the workspace. Valid values: PROD and DEV.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectEnv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
