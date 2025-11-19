// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHEDITINGPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHEDITINGPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchEditingProjectResponseBodyProjectList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SearchEditingProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchEditingProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectList, projectList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, SearchEditingProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectList, projectList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    SearchEditingProjectResponseBody() = default ;
    SearchEditingProjectResponseBody(const SearchEditingProjectResponseBody &) = default ;
    SearchEditingProjectResponseBody(SearchEditingProjectResponseBody &&) = default ;
    SearchEditingProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchEditingProjectResponseBody() = default ;
    SearchEditingProjectResponseBody& operator=(const SearchEditingProjectResponseBody &) = default ;
    SearchEditingProjectResponseBody& operator=(SearchEditingProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectList_ == nullptr
        && return this->requestId_ == nullptr && return this->total_ == nullptr; };
    // projectList Field Functions 
    bool hasProjectList() const { return this->projectList_ != nullptr;};
    void deleteProjectList() { this->projectList_ = nullptr;};
    inline const SearchEditingProjectResponseBodyProjectList & projectList() const { DARABONBA_PTR_GET_CONST(projectList_, SearchEditingProjectResponseBodyProjectList) };
    inline SearchEditingProjectResponseBodyProjectList projectList() { DARABONBA_PTR_GET(projectList_, SearchEditingProjectResponseBodyProjectList) };
    inline SearchEditingProjectResponseBody& setProjectList(const SearchEditingProjectResponseBodyProjectList & projectList) { DARABONBA_PTR_SET_VALUE(projectList_, projectList) };
    inline SearchEditingProjectResponseBody& setProjectList(SearchEditingProjectResponseBodyProjectList && projectList) { DARABONBA_PTR_SET_RVALUE(projectList_, projectList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchEditingProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline SearchEditingProjectResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The list of online editing projects.
    std::shared_ptr<SearchEditingProjectResponseBodyProjectList> projectList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of online editing projects returned.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
