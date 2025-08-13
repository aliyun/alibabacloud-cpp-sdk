// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONFIGRULESFORTARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONFIGRULESFORTARGETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListConfigRulesForTargetResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListConfigRulesForTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConfigRulesForTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConfigRulesForTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListConfigRulesForTargetResponseBody() = default ;
    ListConfigRulesForTargetResponseBody(const ListConfigRulesForTargetResponseBody &) = default ;
    ListConfigRulesForTargetResponseBody(ListConfigRulesForTargetResponseBody &&) = default ;
    ListConfigRulesForTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConfigRulesForTargetResponseBody() = default ;
    ListConfigRulesForTargetResponseBody& operator=(const ListConfigRulesForTargetResponseBody &) = default ;
    ListConfigRulesForTargetResponseBody& operator=(ListConfigRulesForTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListConfigRulesForTargetResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListConfigRulesForTargetResponseBodyData>) };
    inline vector<ListConfigRulesForTargetResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListConfigRulesForTargetResponseBodyData>) };
    inline ListConfigRulesForTargetResponseBody& setData(const vector<ListConfigRulesForTargetResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListConfigRulesForTargetResponseBody& setData(vector<ListConfigRulesForTargetResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListConfigRulesForTargetResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConfigRulesForTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The tag detection tasks.
    std::shared_ptr<vector<ListConfigRulesForTargetResponseBodyData>> data_ = nullptr;
    // Indicates whether the next query is required.
    // 
    // *   If the value of this parameter is empty (`"NextToken": ""`), all results are returned, and the next query is not required.
    // *   If the value of this parameter is not empty, the next query is required, and the value is the token used to start the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
