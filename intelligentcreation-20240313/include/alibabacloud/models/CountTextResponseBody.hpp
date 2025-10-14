// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COUNTTEXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COUNTTEXTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CountTextResponseBodyCountTextCmdList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CountTextResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CountTextResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(countTextCmdList, countTextCmdList_);
    };
    friend void from_json(const Darabonba::Json& j, CountTextResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(countTextCmdList, countTextCmdList_);
    };
    CountTextResponseBody() = default ;
    CountTextResponseBody(const CountTextResponseBody &) = default ;
    CountTextResponseBody(CountTextResponseBody &&) = default ;
    CountTextResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CountTextResponseBody() = default ;
    CountTextResponseBody& operator=(const CountTextResponseBody &) = default ;
    CountTextResponseBody& operator=(CountTextResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->countTextCmdList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CountTextResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // countTextCmdList Field Functions 
    bool hasCountTextCmdList() const { return this->countTextCmdList_ != nullptr;};
    void deleteCountTextCmdList() { this->countTextCmdList_ = nullptr;};
    inline const vector<CountTextResponseBodyCountTextCmdList> & countTextCmdList() const { DARABONBA_PTR_GET_CONST(countTextCmdList_, vector<CountTextResponseBodyCountTextCmdList>) };
    inline vector<CountTextResponseBodyCountTextCmdList> countTextCmdList() { DARABONBA_PTR_GET(countTextCmdList_, vector<CountTextResponseBodyCountTextCmdList>) };
    inline CountTextResponseBody& setCountTextCmdList(const vector<CountTextResponseBodyCountTextCmdList> & countTextCmdList) { DARABONBA_PTR_SET_VALUE(countTextCmdList_, countTextCmdList) };
    inline CountTextResponseBody& setCountTextCmdList(vector<CountTextResponseBodyCountTextCmdList> && countTextCmdList) { DARABONBA_PTR_SET_RVALUE(countTextCmdList_, countTextCmdList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<CountTextResponseBodyCountTextCmdList>> countTextCmdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
