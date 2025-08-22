// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSALERTTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSALERTTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListPrometheusAlertTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusAlertTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PrometheusAlertTemplates, prometheusAlertTemplates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusAlertTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PrometheusAlertTemplates, prometheusAlertTemplates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPrometheusAlertTemplatesResponseBody() = default ;
    ListPrometheusAlertTemplatesResponseBody(const ListPrometheusAlertTemplatesResponseBody &) = default ;
    ListPrometheusAlertTemplatesResponseBody(ListPrometheusAlertTemplatesResponseBody &&) = default ;
    ListPrometheusAlertTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusAlertTemplatesResponseBody() = default ;
    ListPrometheusAlertTemplatesResponseBody& operator=(const ListPrometheusAlertTemplatesResponseBody &) = default ;
    ListPrometheusAlertTemplatesResponseBody& operator=(ListPrometheusAlertTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->prometheusAlertTemplates_ != nullptr
        && this->requestId_ != nullptr; };
    // prometheusAlertTemplates Field Functions 
    bool hasPrometheusAlertTemplates() const { return this->prometheusAlertTemplates_ != nullptr;};
    void deletePrometheusAlertTemplates() { this->prometheusAlertTemplates_ = nullptr;};
    inline const vector<ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates> & prometheusAlertTemplates() const { DARABONBA_PTR_GET_CONST(prometheusAlertTemplates_, vector<ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates>) };
    inline vector<ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates> prometheusAlertTemplates() { DARABONBA_PTR_GET(prometheusAlertTemplates_, vector<ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates>) };
    inline ListPrometheusAlertTemplatesResponseBody& setPrometheusAlertTemplates(const vector<ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates> & prometheusAlertTemplates) { DARABONBA_PTR_SET_VALUE(prometheusAlertTemplates_, prometheusAlertTemplates) };
    inline ListPrometheusAlertTemplatesResponseBody& setPrometheusAlertTemplates(vector<ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates> && prometheusAlertTemplates) { DARABONBA_PTR_SET_RVALUE(prometheusAlertTemplates_, prometheusAlertTemplates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrometheusAlertTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned struct.
    std::shared_ptr<vector<ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates>> prometheusAlertTemplates_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
