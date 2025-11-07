// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNISINSPECTIONTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNISINSPECTIONTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class ListNisInspectionTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNisInspectionTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InspectionName, inspectionName_);
      DARABONBA_PTR_TO_JSON(InspectionProject, inspectionProject_);
      DARABONBA_PTR_TO_JSON(InspectionTaskId, inspectionTaskId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListNisInspectionTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InspectionName, inspectionName_);
      DARABONBA_PTR_FROM_JSON(InspectionProject, inspectionProject_);
      DARABONBA_PTR_FROM_JSON(InspectionTaskId, inspectionTaskId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListNisInspectionTasksRequest() = default ;
    ListNisInspectionTasksRequest(const ListNisInspectionTasksRequest &) = default ;
    ListNisInspectionTasksRequest(ListNisInspectionTasksRequest &&) = default ;
    ListNisInspectionTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNisInspectionTasksRequest() = default ;
    ListNisInspectionTasksRequest& operator=(const ListNisInspectionTasksRequest &) = default ;
    ListNisInspectionTasksRequest& operator=(ListNisInspectionTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inspectionName_ == nullptr
        && return this->inspectionProject_ == nullptr && return this->inspectionTaskId_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->status_ == nullptr; };
    // inspectionName Field Functions 
    bool hasInspectionName() const { return this->inspectionName_ != nullptr;};
    void deleteInspectionName() { this->inspectionName_ = nullptr;};
    inline string inspectionName() const { DARABONBA_PTR_GET_DEFAULT(inspectionName_, "") };
    inline ListNisInspectionTasksRequest& setInspectionName(string inspectionName) { DARABONBA_PTR_SET_VALUE(inspectionName_, inspectionName) };


    // inspectionProject Field Functions 
    bool hasInspectionProject() const { return this->inspectionProject_ != nullptr;};
    void deleteInspectionProject() { this->inspectionProject_ = nullptr;};
    inline string inspectionProject() const { DARABONBA_PTR_GET_DEFAULT(inspectionProject_, "") };
    inline ListNisInspectionTasksRequest& setInspectionProject(string inspectionProject) { DARABONBA_PTR_SET_VALUE(inspectionProject_, inspectionProject) };


    // inspectionTaskId Field Functions 
    bool hasInspectionTaskId() const { return this->inspectionTaskId_ != nullptr;};
    void deleteInspectionTaskId() { this->inspectionTaskId_ = nullptr;};
    inline string inspectionTaskId() const { DARABONBA_PTR_GET_DEFAULT(inspectionTaskId_, "") };
    inline ListNisInspectionTasksRequest& setInspectionTaskId(string inspectionTaskId) { DARABONBA_PTR_SET_VALUE(inspectionTaskId_, inspectionTaskId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNisInspectionTasksRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNisInspectionTasksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListNisInspectionTasksRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> inspectionName_ = nullptr;
    std::shared_ptr<string> inspectionProject_ = nullptr;
    std::shared_ptr<string> inspectionTaskId_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
