// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKINSTANCEEXISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKINSTANCEEXISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CheckInstanceExistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckInstanceExistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsExistInstance, isExistInstance_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckInstanceExistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsExistInstance, isExistInstance_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckInstanceExistResponseBody() = default ;
    CheckInstanceExistResponseBody(const CheckInstanceExistResponseBody &) = default ;
    CheckInstanceExistResponseBody(CheckInstanceExistResponseBody &&) = default ;
    CheckInstanceExistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckInstanceExistResponseBody() = default ;
    CheckInstanceExistResponseBody& operator=(const CheckInstanceExistResponseBody &) = default ;
    CheckInstanceExistResponseBody& operator=(CheckInstanceExistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isExistInstance_ == nullptr
        && return this->requestId_ == nullptr; };
    // isExistInstance Field Functions 
    bool hasIsExistInstance() const { return this->isExistInstance_ != nullptr;};
    void deleteIsExistInstance() { this->isExistInstance_ = nullptr;};
    inline bool isExistInstance() const { DARABONBA_PTR_GET_DEFAULT(isExistInstance_, false) };
    inline CheckInstanceExistResponseBody& setIsExistInstance(bool isExistInstance) { DARABONBA_PTR_SET_VALUE(isExistInstance_, isExistInstance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckInstanceExistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> isExistInstance_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
