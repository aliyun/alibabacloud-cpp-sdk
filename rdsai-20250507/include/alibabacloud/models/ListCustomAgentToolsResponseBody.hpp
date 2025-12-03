// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMAGENTTOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMAGENTTOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCustomAgentToolsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ListCustomAgentToolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomAgentToolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomAgentToolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCustomAgentToolsResponseBody() = default ;
    ListCustomAgentToolsResponseBody(const ListCustomAgentToolsResponseBody &) = default ;
    ListCustomAgentToolsResponseBody(ListCustomAgentToolsResponseBody &&) = default ;
    ListCustomAgentToolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomAgentToolsResponseBody() = default ;
    ListCustomAgentToolsResponseBody& operator=(const ListCustomAgentToolsResponseBody &) = default ;
    ListCustomAgentToolsResponseBody& operator=(ListCustomAgentToolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListCustomAgentToolsResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListCustomAgentToolsResponseBodyData>) };
    inline vector<ListCustomAgentToolsResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListCustomAgentToolsResponseBodyData>) };
    inline ListCustomAgentToolsResponseBody& setData(const vector<ListCustomAgentToolsResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCustomAgentToolsResponseBody& setData(vector<ListCustomAgentToolsResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomAgentToolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListCustomAgentToolsResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
