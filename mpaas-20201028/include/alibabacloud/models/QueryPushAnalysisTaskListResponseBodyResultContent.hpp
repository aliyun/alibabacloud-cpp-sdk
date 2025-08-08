// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHANALYSISTASKLISTRESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHANALYSISTASKLISTRESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryPushAnalysisTaskListResponseBodyResultContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryPushAnalysisTaskListResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushAnalysisTaskListResponseBodyResultContent& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushAnalysisTaskListResponseBodyResultContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    QueryPushAnalysisTaskListResponseBodyResultContent() = default ;
    QueryPushAnalysisTaskListResponseBodyResultContent(const QueryPushAnalysisTaskListResponseBodyResultContent &) = default ;
    QueryPushAnalysisTaskListResponseBodyResultContent(QueryPushAnalysisTaskListResponseBodyResultContent &&) = default ;
    QueryPushAnalysisTaskListResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushAnalysisTaskListResponseBodyResultContent() = default ;
    QueryPushAnalysisTaskListResponseBodyResultContent& operator=(const QueryPushAnalysisTaskListResponseBodyResultContent &) = default ;
    QueryPushAnalysisTaskListResponseBodyResultContent& operator=(QueryPushAnalysisTaskListResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::QueryPushAnalysisTaskListResponseBodyResultContentData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::QueryPushAnalysisTaskListResponseBodyResultContentData>) };
    inline vector<Models::QueryPushAnalysisTaskListResponseBodyResultContentData> data() { DARABONBA_PTR_GET(data_, vector<Models::QueryPushAnalysisTaskListResponseBodyResultContentData>) };
    inline QueryPushAnalysisTaskListResponseBodyResultContent& setData(const vector<Models::QueryPushAnalysisTaskListResponseBodyResultContentData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryPushAnalysisTaskListResponseBodyResultContent& setData(vector<Models::QueryPushAnalysisTaskListResponseBodyResultContentData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<Models::QueryPushAnalysisTaskListResponseBodyResultContentData>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
