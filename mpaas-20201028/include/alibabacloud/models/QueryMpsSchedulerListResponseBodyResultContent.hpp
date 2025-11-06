// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMPSSCHEDULERLISTRESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMPSSCHEDULERLISTRESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMpsSchedulerListResponseBodyResultContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMpsSchedulerListResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMpsSchedulerListResponseBodyResultContent& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMpsSchedulerListResponseBodyResultContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    QueryMpsSchedulerListResponseBodyResultContent() = default ;
    QueryMpsSchedulerListResponseBodyResultContent(const QueryMpsSchedulerListResponseBodyResultContent &) = default ;
    QueryMpsSchedulerListResponseBodyResultContent(QueryMpsSchedulerListResponseBodyResultContent &&) = default ;
    QueryMpsSchedulerListResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMpsSchedulerListResponseBodyResultContent() = default ;
    QueryMpsSchedulerListResponseBodyResultContent& operator=(const QueryMpsSchedulerListResponseBodyResultContent &) = default ;
    QueryMpsSchedulerListResponseBodyResultContent& operator=(QueryMpsSchedulerListResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::QueryMpsSchedulerListResponseBodyResultContentData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::QueryMpsSchedulerListResponseBodyResultContentData) };
    inline Models::QueryMpsSchedulerListResponseBodyResultContentData data() { DARABONBA_PTR_GET(data_, Models::QueryMpsSchedulerListResponseBodyResultContentData) };
    inline QueryMpsSchedulerListResponseBodyResultContent& setData(const Models::QueryMpsSchedulerListResponseBodyResultContentData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryMpsSchedulerListResponseBodyResultContent& setData(Models::QueryMpsSchedulerListResponseBodyResultContentData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<Models::QueryMpsSchedulerListResponseBodyResultContentData> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
