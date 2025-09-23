// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVALUEADDEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVALUEADDEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListValueAddedResponseBodyValueAddedList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class ListValueAddedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListValueAddedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ValueAddedList, valueAddedList_);
    };
    friend void from_json(const Darabonba::Json& j, ListValueAddedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ValueAddedList, valueAddedList_);
    };
    ListValueAddedResponseBody() = default ;
    ListValueAddedResponseBody(const ListValueAddedResponseBody &) = default ;
    ListValueAddedResponseBody(ListValueAddedResponseBody &&) = default ;
    ListValueAddedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListValueAddedResponseBody() = default ;
    ListValueAddedResponseBody& operator=(const ListValueAddedResponseBody &) = default ;
    ListValueAddedResponseBody& operator=(ListValueAddedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->valueAddedList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListValueAddedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // valueAddedList Field Functions 
    bool hasValueAddedList() const { return this->valueAddedList_ != nullptr;};
    void deleteValueAddedList() { this->valueAddedList_ = nullptr;};
    inline const vector<ListValueAddedResponseBodyValueAddedList> & valueAddedList() const { DARABONBA_PTR_GET_CONST(valueAddedList_, vector<ListValueAddedResponseBodyValueAddedList>) };
    inline vector<ListValueAddedResponseBodyValueAddedList> valueAddedList() { DARABONBA_PTR_GET(valueAddedList_, vector<ListValueAddedResponseBodyValueAddedList>) };
    inline ListValueAddedResponseBody& setValueAddedList(const vector<ListValueAddedResponseBodyValueAddedList> & valueAddedList) { DARABONBA_PTR_SET_VALUE(valueAddedList_, valueAddedList) };
    inline ListValueAddedResponseBody& setValueAddedList(vector<ListValueAddedResponseBodyValueAddedList> && valueAddedList) { DARABONBA_PTR_SET_RVALUE(valueAddedList_, valueAddedList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListValueAddedResponseBodyValueAddedList>> valueAddedList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
