// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRENDERINGPROJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRENDERINGPROJECTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRenderingProjectsResponseBodyProjects.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListRenderingProjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRenderingProjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Projects, projects_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRenderingProjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Projects, projects_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRenderingProjectsResponseBody() = default ;
    ListRenderingProjectsResponseBody(const ListRenderingProjectsResponseBody &) = default ;
    ListRenderingProjectsResponseBody(ListRenderingProjectsResponseBody &&) = default ;
    ListRenderingProjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRenderingProjectsResponseBody() = default ;
    ListRenderingProjectsResponseBody& operator=(const ListRenderingProjectsResponseBody &) = default ;
    ListRenderingProjectsResponseBody& operator=(ListRenderingProjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projects_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // projects Field Functions 
    bool hasProjects() const { return this->projects_ != nullptr;};
    void deleteProjects() { this->projects_ = nullptr;};
    inline const vector<ListRenderingProjectsResponseBodyProjects> & projects() const { DARABONBA_PTR_GET_CONST(projects_, vector<ListRenderingProjectsResponseBodyProjects>) };
    inline vector<ListRenderingProjectsResponseBodyProjects> projects() { DARABONBA_PTR_GET(projects_, vector<ListRenderingProjectsResponseBodyProjects>) };
    inline ListRenderingProjectsResponseBody& setProjects(const vector<ListRenderingProjectsResponseBodyProjects> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
    inline ListRenderingProjectsResponseBody& setProjects(vector<ListRenderingProjectsResponseBodyProjects> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRenderingProjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRenderingProjectsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListRenderingProjectsResponseBodyProjects>> projects_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
