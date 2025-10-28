// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListComponentsResponseBodyComponentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListComponentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ComponentList, componentList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ComponentList, componentList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    ListComponentsResponseBody() = default ;
    ListComponentsResponseBody(const ListComponentsResponseBody &) = default ;
    ListComponentsResponseBody(ListComponentsResponseBody &&) = default ;
    ListComponentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentsResponseBody() = default ;
    ListComponentsResponseBody& operator=(const ListComponentsResponseBody &) = default ;
    ListComponentsResponseBody& operator=(ListComponentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->componentList_ == nullptr && return this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListComponentsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // componentList Field Functions 
    bool hasComponentList() const { return this->componentList_ != nullptr;};
    void deleteComponentList() { this->componentList_ = nullptr;};
    inline const ListComponentsResponseBodyComponentList & componentList() const { DARABONBA_PTR_GET_CONST(componentList_, ListComponentsResponseBodyComponentList) };
    inline ListComponentsResponseBodyComponentList componentList() { DARABONBA_PTR_GET(componentList_, ListComponentsResponseBodyComponentList) };
    inline ListComponentsResponseBody& setComponentList(const ListComponentsResponseBodyComponentList & componentList) { DARABONBA_PTR_SET_VALUE(componentList_, componentList) };
    inline ListComponentsResponseBody& setComponentList(ListComponentsResponseBodyComponentList && componentList) { DARABONBA_PTR_SET_RVALUE(componentList_, componentList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListComponentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The components.
    std::shared_ptr<ListComponentsResponseBodyComponentList> componentList_ = nullptr;
    // The message that is returned.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
