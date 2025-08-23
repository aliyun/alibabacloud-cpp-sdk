// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANALYSISTAGDETAILBYTASKIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTANALYSISTAGDETAILBYTASKIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class ListAnalysisTagDetailByTaskIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnalysisTagDetailByTaskIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnalysisTagDetailByTaskIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    ListAnalysisTagDetailByTaskIdRequest() = default ;
    ListAnalysisTagDetailByTaskIdRequest(const ListAnalysisTagDetailByTaskIdRequest &) = default ;
    ListAnalysisTagDetailByTaskIdRequest(ListAnalysisTagDetailByTaskIdRequest &&) = default ;
    ListAnalysisTagDetailByTaskIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnalysisTagDetailByTaskIdRequest() = default ;
    ListAnalysisTagDetailByTaskIdRequest& operator=(const ListAnalysisTagDetailByTaskIdRequest &) = default ;
    ListAnalysisTagDetailByTaskIdRequest& operator=(ListAnalysisTagDetailByTaskIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->taskId_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAnalysisTagDetailByTaskIdRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAnalysisTagDetailByTaskIdRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListAnalysisTagDetailByTaskIdRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
