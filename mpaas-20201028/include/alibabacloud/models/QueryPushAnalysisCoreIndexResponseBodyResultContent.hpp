// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHANALYSISCOREINDEXRESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHANALYSISCOREINDEXRESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryPushAnalysisCoreIndexResponseBodyResultContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryPushAnalysisCoreIndexResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushAnalysisCoreIndexResponseBodyResultContent& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushAnalysisCoreIndexResponseBodyResultContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    QueryPushAnalysisCoreIndexResponseBodyResultContent() = default ;
    QueryPushAnalysisCoreIndexResponseBodyResultContent(const QueryPushAnalysisCoreIndexResponseBodyResultContent &) = default ;
    QueryPushAnalysisCoreIndexResponseBodyResultContent(QueryPushAnalysisCoreIndexResponseBodyResultContent &&) = default ;
    QueryPushAnalysisCoreIndexResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushAnalysisCoreIndexResponseBodyResultContent() = default ;
    QueryPushAnalysisCoreIndexResponseBodyResultContent& operator=(const QueryPushAnalysisCoreIndexResponseBodyResultContent &) = default ;
    QueryPushAnalysisCoreIndexResponseBodyResultContent& operator=(QueryPushAnalysisCoreIndexResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::QueryPushAnalysisCoreIndexResponseBodyResultContentData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::QueryPushAnalysisCoreIndexResponseBodyResultContentData) };
    inline Models::QueryPushAnalysisCoreIndexResponseBodyResultContentData data() { DARABONBA_PTR_GET(data_, Models::QueryPushAnalysisCoreIndexResponseBodyResultContentData) };
    inline QueryPushAnalysisCoreIndexResponseBodyResultContent& setData(const Models::QueryPushAnalysisCoreIndexResponseBodyResultContentData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryPushAnalysisCoreIndexResponseBodyResultContent& setData(Models::QueryPushAnalysisCoreIndexResponseBodyResultContentData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<Models::QueryPushAnalysisCoreIndexResponseBodyResultContentData> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
