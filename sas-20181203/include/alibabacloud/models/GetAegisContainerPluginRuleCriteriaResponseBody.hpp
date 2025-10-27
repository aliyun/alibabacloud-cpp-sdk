// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAEGISCONTAINERPLUGINRULECRITERIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAEGISCONTAINERPLUGINRULECRITERIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAegisContainerPluginRuleCriteriaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAegisContainerPluginRuleCriteriaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CriteriaList, criteriaList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAegisContainerPluginRuleCriteriaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CriteriaList, criteriaList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAegisContainerPluginRuleCriteriaResponseBody() = default ;
    GetAegisContainerPluginRuleCriteriaResponseBody(const GetAegisContainerPluginRuleCriteriaResponseBody &) = default ;
    GetAegisContainerPluginRuleCriteriaResponseBody(GetAegisContainerPluginRuleCriteriaResponseBody &&) = default ;
    GetAegisContainerPluginRuleCriteriaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAegisContainerPluginRuleCriteriaResponseBody() = default ;
    GetAegisContainerPluginRuleCriteriaResponseBody& operator=(const GetAegisContainerPluginRuleCriteriaResponseBody &) = default ;
    GetAegisContainerPluginRuleCriteriaResponseBody& operator=(GetAegisContainerPluginRuleCriteriaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->criteriaList_ == nullptr
        && return this->requestId_ == nullptr; };
    // criteriaList Field Functions 
    bool hasCriteriaList() const { return this->criteriaList_ != nullptr;};
    void deleteCriteriaList() { this->criteriaList_ = nullptr;};
    inline const vector<GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList> & criteriaList() const { DARABONBA_PTR_GET_CONST(criteriaList_, vector<GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList>) };
    inline vector<GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList> criteriaList() { DARABONBA_PTR_GET(criteriaList_, vector<GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList>) };
    inline GetAegisContainerPluginRuleCriteriaResponseBody& setCriteriaList(const vector<GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList> & criteriaList) { DARABONBA_PTR_SET_VALUE(criteriaList_, criteriaList) };
    inline GetAegisContainerPluginRuleCriteriaResponseBody& setCriteriaList(vector<GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList> && criteriaList) { DARABONBA_PTR_SET_RVALUE(criteriaList_, criteriaList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAegisContainerPluginRuleCriteriaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the search condition.
    std::shared_ptr<vector<GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList>> criteriaList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
