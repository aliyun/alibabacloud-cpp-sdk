// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECSLSPROJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECSLSPROJECTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecSlsProjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecSlsProjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Projects, projects_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecSlsProjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Projects, projects_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApisecSlsProjectsResponseBody() = default ;
    DescribeApisecSlsProjectsResponseBody(const DescribeApisecSlsProjectsResponseBody &) = default ;
    DescribeApisecSlsProjectsResponseBody(DescribeApisecSlsProjectsResponseBody &&) = default ;
    DescribeApisecSlsProjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecSlsProjectsResponseBody() = default ;
    DescribeApisecSlsProjectsResponseBody& operator=(const DescribeApisecSlsProjectsResponseBody &) = default ;
    DescribeApisecSlsProjectsResponseBody& operator=(DescribeApisecSlsProjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projects_ != nullptr
        && this->requestId_ != nullptr; };
    // projects Field Functions 
    bool hasProjects() const { return this->projects_ != nullptr;};
    void deleteProjects() { this->projects_ = nullptr;};
    inline const vector<string> & projects() const { DARABONBA_PTR_GET_CONST(projects_, vector<string>) };
    inline vector<string> projects() { DARABONBA_PTR_GET(projects_, vector<string>) };
    inline DescribeApisecSlsProjectsResponseBody& setProjects(const vector<string> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
    inline DescribeApisecSlsProjectsResponseBody& setProjects(vector<string> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisecSlsProjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The names of the projects in Simple Log Service.
    std::shared_ptr<vector<string>> projects_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
