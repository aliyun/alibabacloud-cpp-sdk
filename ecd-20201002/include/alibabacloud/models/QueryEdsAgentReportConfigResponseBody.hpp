// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEDSAGENTREPORTCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYEDSAGENTREPORTCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryEdsAgentReportConfigResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class QueryEdsAgentReportConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEdsAgentReportConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEdsAgentReportConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryEdsAgentReportConfigResponseBody() = default ;
    QueryEdsAgentReportConfigResponseBody(const QueryEdsAgentReportConfigResponseBody &) = default ;
    QueryEdsAgentReportConfigResponseBody(QueryEdsAgentReportConfigResponseBody &&) = default ;
    QueryEdsAgentReportConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEdsAgentReportConfigResponseBody() = default ;
    QueryEdsAgentReportConfigResponseBody& operator=(const QueryEdsAgentReportConfigResponseBody &) = default ;
    QueryEdsAgentReportConfigResponseBody& operator=(QueryEdsAgentReportConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryEdsAgentReportConfigResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, QueryEdsAgentReportConfigResponseBodyData) };
    inline QueryEdsAgentReportConfigResponseBodyData data() { DARABONBA_PTR_GET(data_, QueryEdsAgentReportConfigResponseBodyData) };
    inline QueryEdsAgentReportConfigResponseBody& setData(const QueryEdsAgentReportConfigResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryEdsAgentReportConfigResponseBody& setData(QueryEdsAgentReportConfigResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryEdsAgentReportConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<QueryEdsAgentReportConfigResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
