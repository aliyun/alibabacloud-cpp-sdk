// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKMAXYEAROFSERVERLOCKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKMAXYEAROFSERVERLOCKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class CheckMaxYearOfServerLockResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckMaxYearOfServerLockResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxYear, maxYear_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckMaxYearOfServerLockResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxYear, maxYear_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckMaxYearOfServerLockResponseBody() = default ;
    CheckMaxYearOfServerLockResponseBody(const CheckMaxYearOfServerLockResponseBody &) = default ;
    CheckMaxYearOfServerLockResponseBody(CheckMaxYearOfServerLockResponseBody &&) = default ;
    CheckMaxYearOfServerLockResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckMaxYearOfServerLockResponseBody() = default ;
    CheckMaxYearOfServerLockResponseBody& operator=(const CheckMaxYearOfServerLockResponseBody &) = default ;
    CheckMaxYearOfServerLockResponseBody& operator=(CheckMaxYearOfServerLockResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxYear_ == nullptr
        && return this->requestId_ == nullptr; };
    // maxYear Field Functions 
    bool hasMaxYear() const { return this->maxYear_ != nullptr;};
    void deleteMaxYear() { this->maxYear_ = nullptr;};
    inline int32_t maxYear() const { DARABONBA_PTR_GET_DEFAULT(maxYear_, 0) };
    inline CheckMaxYearOfServerLockResponseBody& setMaxYear(int32_t maxYear) { DARABONBA_PTR_SET_VALUE(maxYear_, maxYear) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckMaxYearOfServerLockResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int32_t> maxYear_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
