// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHANALYSISTASKDETAILRESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHANALYSISTASKDETAILRESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryPushAnalysisTaskDetailResponseBodyResultContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryPushAnalysisTaskDetailResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushAnalysisTaskDetailResponseBodyResultContent& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushAnalysisTaskDetailResponseBodyResultContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    QueryPushAnalysisTaskDetailResponseBodyResultContent() = default ;
    QueryPushAnalysisTaskDetailResponseBodyResultContent(const QueryPushAnalysisTaskDetailResponseBodyResultContent &) = default ;
    QueryPushAnalysisTaskDetailResponseBodyResultContent(QueryPushAnalysisTaskDetailResponseBodyResultContent &&) = default ;
    QueryPushAnalysisTaskDetailResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushAnalysisTaskDetailResponseBodyResultContent() = default ;
    QueryPushAnalysisTaskDetailResponseBodyResultContent& operator=(const QueryPushAnalysisTaskDetailResponseBodyResultContent &) = default ;
    QueryPushAnalysisTaskDetailResponseBodyResultContent& operator=(QueryPushAnalysisTaskDetailResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::QueryPushAnalysisTaskDetailResponseBodyResultContentData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::QueryPushAnalysisTaskDetailResponseBodyResultContentData) };
    inline Models::QueryPushAnalysisTaskDetailResponseBodyResultContentData data() { DARABONBA_PTR_GET(data_, Models::QueryPushAnalysisTaskDetailResponseBodyResultContentData) };
    inline QueryPushAnalysisTaskDetailResponseBodyResultContent& setData(const Models::QueryPushAnalysisTaskDetailResponseBodyResultContentData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryPushAnalysisTaskDetailResponseBodyResultContent& setData(Models::QueryPushAnalysisTaskDetailResponseBodyResultContentData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<Models::QueryPushAnalysisTaskDetailResponseBodyResultContentData> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
