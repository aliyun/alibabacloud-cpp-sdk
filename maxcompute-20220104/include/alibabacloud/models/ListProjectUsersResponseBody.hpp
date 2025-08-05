// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListProjectUsersResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListProjectUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListProjectUsersResponseBody() = default ;
    ListProjectUsersResponseBody(const ListProjectUsersResponseBody &) = default ;
    ListProjectUsersResponseBody(ListProjectUsersResponseBody &&) = default ;
    ListProjectUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectUsersResponseBody() = default ;
    ListProjectUsersResponseBody& operator=(const ListProjectUsersResponseBody &) = default ;
    ListProjectUsersResponseBody& operator=(ListProjectUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListProjectUsersResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListProjectUsersResponseBodyData) };
    inline ListProjectUsersResponseBodyData data() { DARABONBA_PTR_GET(data_, ListProjectUsersResponseBodyData) };
    inline ListProjectUsersResponseBody& setData(const ListProjectUsersResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListProjectUsersResponseBody& setData(ListProjectUsersResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProjectUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<ListProjectUsersResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
