// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAlertsResponseBodyPageBean.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListAlertsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAlertsResponseBody() = default ;
    ListAlertsResponseBody(const ListAlertsResponseBody &) = default ;
    ListAlertsResponseBody(ListAlertsResponseBody &&) = default ;
    ListAlertsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertsResponseBody() = default ;
    ListAlertsResponseBody& operator=(const ListAlertsResponseBody &) = default ;
    ListAlertsResponseBody& operator=(ListAlertsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->pageBean_ != nullptr && this->requestId_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAlertsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageBean Field Functions 
    bool hasPageBean() const { return this->pageBean_ != nullptr;};
    void deletePageBean() { this->pageBean_ = nullptr;};
    inline const ListAlertsResponseBodyPageBean & pageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, ListAlertsResponseBodyPageBean) };
    inline ListAlertsResponseBodyPageBean pageBean() { DARABONBA_PTR_GET(pageBean_, ListAlertsResponseBodyPageBean) };
    inline ListAlertsResponseBody& setPageBean(const ListAlertsResponseBodyPageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline ListAlertsResponseBody& setPageBean(ListAlertsResponseBodyPageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlertsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned error message.
    std::shared_ptr<string> message_ = nullptr;
    // The struct returned.
    std::shared_ptr<ListAlertsResponseBodyPageBean> pageBean_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
