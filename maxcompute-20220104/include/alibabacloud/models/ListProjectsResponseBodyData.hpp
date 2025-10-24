// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProjectsResponseBodyDataProjects.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListProjectsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(marker, marker_);
      DARABONBA_PTR_TO_JSON(maxItem, maxItem_);
      DARABONBA_PTR_TO_JSON(projects, projects_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(marker, marker_);
      DARABONBA_PTR_FROM_JSON(maxItem, maxItem_);
      DARABONBA_PTR_FROM_JSON(projects, projects_);
    };
    ListProjectsResponseBodyData() = default ;
    ListProjectsResponseBodyData(const ListProjectsResponseBodyData &) = default ;
    ListProjectsResponseBodyData(ListProjectsResponseBodyData &&) = default ;
    ListProjectsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsResponseBodyData() = default ;
    ListProjectsResponseBodyData& operator=(const ListProjectsResponseBodyData &) = default ;
    ListProjectsResponseBodyData& operator=(ListProjectsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->marker_ == nullptr && return this->maxItem_ == nullptr && return this->projects_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProjectsResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline ListProjectsResponseBodyData& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // maxItem Field Functions 
    bool hasMaxItem() const { return this->maxItem_ != nullptr;};
    void deleteMaxItem() { this->maxItem_ = nullptr;};
    inline int32_t maxItem() const { DARABONBA_PTR_GET_DEFAULT(maxItem_, 0) };
    inline ListProjectsResponseBodyData& setMaxItem(int32_t maxItem) { DARABONBA_PTR_SET_VALUE(maxItem_, maxItem) };


    // projects Field Functions 
    bool hasProjects() const { return this->projects_ != nullptr;};
    void deleteProjects() { this->projects_ = nullptr;};
    inline const vector<Models::ListProjectsResponseBodyDataProjects> & projects() const { DARABONBA_PTR_GET_CONST(projects_, vector<Models::ListProjectsResponseBodyDataProjects>) };
    inline vector<Models::ListProjectsResponseBodyDataProjects> projects() { DARABONBA_PTR_GET(projects_, vector<Models::ListProjectsResponseBodyDataProjects>) };
    inline ListProjectsResponseBodyData& setProjects(const vector<Models::ListProjectsResponseBodyDataProjects> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
    inline ListProjectsResponseBodyData& setProjects(vector<Models::ListProjectsResponseBodyDataProjects> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


  protected:
    // A pagination token. Only continuous page turning is supported. If NextToken is not empty, the next page exists. The value of NextToken can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Indicates the marker after which the returned list begins.
    std::shared_ptr<string> marker_ = nullptr;
    // The maximum number of entries returned per page.
    std::shared_ptr<int32_t> maxItem_ = nullptr;
    // The list of projects.
    std::shared_ptr<vector<Models::ListProjectsResponseBodyDataProjects>> projects_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
