// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHSCHEDULERLISTRESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHSCHEDULERLISTRESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryPushSchedulerListResponseBodyResultContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryPushSchedulerListResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushSchedulerListResponseBodyResultContent& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushSchedulerListResponseBodyResultContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    QueryPushSchedulerListResponseBodyResultContent() = default ;
    QueryPushSchedulerListResponseBodyResultContent(const QueryPushSchedulerListResponseBodyResultContent &) = default ;
    QueryPushSchedulerListResponseBodyResultContent(QueryPushSchedulerListResponseBodyResultContent &&) = default ;
    QueryPushSchedulerListResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushSchedulerListResponseBodyResultContent() = default ;
    QueryPushSchedulerListResponseBodyResultContent& operator=(const QueryPushSchedulerListResponseBodyResultContent &) = default ;
    QueryPushSchedulerListResponseBodyResultContent& operator=(QueryPushSchedulerListResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::QueryPushSchedulerListResponseBodyResultContentData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::QueryPushSchedulerListResponseBodyResultContentData) };
    inline Models::QueryPushSchedulerListResponseBodyResultContentData data() { DARABONBA_PTR_GET(data_, Models::QueryPushSchedulerListResponseBodyResultContentData) };
    inline QueryPushSchedulerListResponseBodyResultContent& setData(const Models::QueryPushSchedulerListResponseBodyResultContentData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryPushSchedulerListResponseBodyResultContent& setData(Models::QueryPushSchedulerListResponseBodyResultContentData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<Models::QueryPushSchedulerListResponseBodyResultContentData> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
