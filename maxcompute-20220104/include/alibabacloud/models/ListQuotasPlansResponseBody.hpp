// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTASPLANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTASPLANSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListQuotasPlansResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListQuotasPlansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotasPlansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotasPlansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListQuotasPlansResponseBody() = default ;
    ListQuotasPlansResponseBody(const ListQuotasPlansResponseBody &) = default ;
    ListQuotasPlansResponseBody(ListQuotasPlansResponseBody &&) = default ;
    ListQuotasPlansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotasPlansResponseBody() = default ;
    ListQuotasPlansResponseBody& operator=(const ListQuotasPlansResponseBody &) = default ;
    ListQuotasPlansResponseBody& operator=(ListQuotasPlansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListQuotasPlansResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListQuotasPlansResponseBodyData) };
    inline ListQuotasPlansResponseBodyData data() { DARABONBA_PTR_GET(data_, ListQuotasPlansResponseBodyData) };
    inline ListQuotasPlansResponseBody& setData(const ListQuotasPlansResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListQuotasPlansResponseBody& setData(ListQuotasPlansResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQuotasPlansResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<ListQuotasPlansResponseBodyData> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
