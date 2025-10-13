// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWEBAPPLICATIONSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTWEBAPPLICATIONSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WebApplicationWithInstanceCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListWebApplicationsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWebApplicationsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(WebApplicationWithInstanceCount, webApplicationWithInstanceCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListWebApplicationsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(WebApplicationWithInstanceCount, webApplicationWithInstanceCount_);
    };
    ListWebApplicationsOutput() = default ;
    ListWebApplicationsOutput(const ListWebApplicationsOutput &) = default ;
    ListWebApplicationsOutput(ListWebApplicationsOutput &&) = default ;
    ListWebApplicationsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWebApplicationsOutput() = default ;
    ListWebApplicationsOutput& operator=(const ListWebApplicationsOutput &) = default ;
    ListWebApplicationsOutput& operator=(ListWebApplicationsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->webApplicationWithInstanceCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWebApplicationsOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // webApplicationWithInstanceCount Field Functions 
    bool hasWebApplicationWithInstanceCount() const { return this->webApplicationWithInstanceCount_ != nullptr;};
    void deleteWebApplicationWithInstanceCount() { this->webApplicationWithInstanceCount_ = nullptr;};
    inline const vector<WebApplicationWithInstanceCount> & webApplicationWithInstanceCount() const { DARABONBA_PTR_GET_CONST(webApplicationWithInstanceCount_, vector<WebApplicationWithInstanceCount>) };
    inline vector<WebApplicationWithInstanceCount> webApplicationWithInstanceCount() { DARABONBA_PTR_GET(webApplicationWithInstanceCount_, vector<WebApplicationWithInstanceCount>) };
    inline ListWebApplicationsOutput& setWebApplicationWithInstanceCount(const vector<WebApplicationWithInstanceCount> & webApplicationWithInstanceCount) { DARABONBA_PTR_SET_VALUE(webApplicationWithInstanceCount_, webApplicationWithInstanceCount) };
    inline ListWebApplicationsOutput& setWebApplicationWithInstanceCount(vector<WebApplicationWithInstanceCount> && webApplicationWithInstanceCount) { DARABONBA_PTR_SET_RVALUE(webApplicationWithInstanceCount_, webApplicationWithInstanceCount) };


  protected:
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<WebApplicationWithInstanceCount>> webApplicationWithInstanceCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
