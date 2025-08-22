// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCENARIORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCENARIORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListScenarioResponseBodyArmsScenarios.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListScenarioResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScenarioResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ArmsScenarios, armsScenarios_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListScenarioResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ArmsScenarios, armsScenarios_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListScenarioResponseBody() = default ;
    ListScenarioResponseBody(const ListScenarioResponseBody &) = default ;
    ListScenarioResponseBody(ListScenarioResponseBody &&) = default ;
    ListScenarioResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScenarioResponseBody() = default ;
    ListScenarioResponseBody& operator=(const ListScenarioResponseBody &) = default ;
    ListScenarioResponseBody& operator=(ListScenarioResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->armsScenarios_ != nullptr
        && this->requestId_ != nullptr; };
    // armsScenarios Field Functions 
    bool hasArmsScenarios() const { return this->armsScenarios_ != nullptr;};
    void deleteArmsScenarios() { this->armsScenarios_ = nullptr;};
    inline const vector<ListScenarioResponseBodyArmsScenarios> & armsScenarios() const { DARABONBA_PTR_GET_CONST(armsScenarios_, vector<ListScenarioResponseBodyArmsScenarios>) };
    inline vector<ListScenarioResponseBodyArmsScenarios> armsScenarios() { DARABONBA_PTR_GET(armsScenarios_, vector<ListScenarioResponseBodyArmsScenarios>) };
    inline ListScenarioResponseBody& setArmsScenarios(const vector<ListScenarioResponseBodyArmsScenarios> & armsScenarios) { DARABONBA_PTR_SET_VALUE(armsScenarios_, armsScenarios) };
    inline ListScenarioResponseBody& setArmsScenarios(vector<ListScenarioResponseBodyArmsScenarios> && armsScenarios) { DARABONBA_PTR_SET_RVALUE(armsScenarios_, armsScenarios) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScenarioResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The detailed information of the business monitoring job.
    std::shared_ptr<vector<ListScenarioResponseBodyArmsScenarios>> armsScenarios_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
