// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGUIDTASKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYGUIDTASKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryGuidTaskListResponseBodyGuideTaskConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class QueryGuidTaskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGuidTaskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GuideTaskConfigList, guideTaskConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGuidTaskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GuideTaskConfigList, guideTaskConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryGuidTaskListResponseBody() = default ;
    QueryGuidTaskListResponseBody(const QueryGuidTaskListResponseBody &) = default ;
    QueryGuidTaskListResponseBody(QueryGuidTaskListResponseBody &&) = default ;
    QueryGuidTaskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGuidTaskListResponseBody() = default ;
    QueryGuidTaskListResponseBody& operator=(const QueryGuidTaskListResponseBody &) = default ;
    QueryGuidTaskListResponseBody& operator=(QueryGuidTaskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->guideTaskConfigList_ != nullptr
        && this->requestId_ != nullptr; };
    // guideTaskConfigList Field Functions 
    bool hasGuideTaskConfigList() const { return this->guideTaskConfigList_ != nullptr;};
    void deleteGuideTaskConfigList() { this->guideTaskConfigList_ = nullptr;};
    inline const vector<QueryGuidTaskListResponseBodyGuideTaskConfigList> & guideTaskConfigList() const { DARABONBA_PTR_GET_CONST(guideTaskConfigList_, vector<QueryGuidTaskListResponseBodyGuideTaskConfigList>) };
    inline vector<QueryGuidTaskListResponseBodyGuideTaskConfigList> guideTaskConfigList() { DARABONBA_PTR_GET(guideTaskConfigList_, vector<QueryGuidTaskListResponseBodyGuideTaskConfigList>) };
    inline QueryGuidTaskListResponseBody& setGuideTaskConfigList(const vector<QueryGuidTaskListResponseBodyGuideTaskConfigList> & guideTaskConfigList) { DARABONBA_PTR_SET_VALUE(guideTaskConfigList_, guideTaskConfigList) };
    inline QueryGuidTaskListResponseBody& setGuideTaskConfigList(vector<QueryGuidTaskListResponseBodyGuideTaskConfigList> && guideTaskConfigList) { DARABONBA_PTR_SET_RVALUE(guideTaskConfigList_, guideTaskConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryGuidTaskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of beginner tasks.
    std::shared_ptr<vector<QueryGuidTaskListResponseBodyGuideTaskConfigList>> guideTaskConfigList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
