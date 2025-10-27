// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSASCONTAINERWEBDEFENSERULECRITERIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSASCONTAINERWEBDEFENSERULECRITERIARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSasContainerWebDefenseRuleCriteriaResponseBodyCriteriaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSasContainerWebDefenseRuleCriteriaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSasContainerWebDefenseRuleCriteriaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CriteriaList, criteriaList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSasContainerWebDefenseRuleCriteriaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CriteriaList, criteriaList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSasContainerWebDefenseRuleCriteriaResponseBody() = default ;
    GetSasContainerWebDefenseRuleCriteriaResponseBody(const GetSasContainerWebDefenseRuleCriteriaResponseBody &) = default ;
    GetSasContainerWebDefenseRuleCriteriaResponseBody(GetSasContainerWebDefenseRuleCriteriaResponseBody &&) = default ;
    GetSasContainerWebDefenseRuleCriteriaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSasContainerWebDefenseRuleCriteriaResponseBody() = default ;
    GetSasContainerWebDefenseRuleCriteriaResponseBody& operator=(const GetSasContainerWebDefenseRuleCriteriaResponseBody &) = default ;
    GetSasContainerWebDefenseRuleCriteriaResponseBody& operator=(GetSasContainerWebDefenseRuleCriteriaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->criteriaList_ == nullptr
        && return this->requestId_ == nullptr; };
    // criteriaList Field Functions 
    bool hasCriteriaList() const { return this->criteriaList_ != nullptr;};
    void deleteCriteriaList() { this->criteriaList_ = nullptr;};
    inline const vector<GetSasContainerWebDefenseRuleCriteriaResponseBodyCriteriaList> & criteriaList() const { DARABONBA_PTR_GET_CONST(criteriaList_, vector<GetSasContainerWebDefenseRuleCriteriaResponseBodyCriteriaList>) };
    inline vector<GetSasContainerWebDefenseRuleCriteriaResponseBodyCriteriaList> criteriaList() { DARABONBA_PTR_GET(criteriaList_, vector<GetSasContainerWebDefenseRuleCriteriaResponseBodyCriteriaList>) };
    inline GetSasContainerWebDefenseRuleCriteriaResponseBody& setCriteriaList(const vector<GetSasContainerWebDefenseRuleCriteriaResponseBodyCriteriaList> & criteriaList) { DARABONBA_PTR_SET_VALUE(criteriaList_, criteriaList) };
    inline GetSasContainerWebDefenseRuleCriteriaResponseBody& setCriteriaList(vector<GetSasContainerWebDefenseRuleCriteriaResponseBodyCriteriaList> && criteriaList) { DARABONBA_PTR_SET_RVALUE(criteriaList_, criteriaList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSasContainerWebDefenseRuleCriteriaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The search conditions.
    std::shared_ptr<vector<GetSasContainerWebDefenseRuleCriteriaResponseBodyCriteriaList>> criteriaList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
