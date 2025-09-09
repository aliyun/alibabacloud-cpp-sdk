// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESQLFLASHBACKMATCHSWITCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENABLESQLFLASHBACKMATCHSWITCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class EnableSqlFlashbackMatchSwitchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableSqlFlashbackMatchSwitchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, EnableSqlFlashbackMatchSwitchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    EnableSqlFlashbackMatchSwitchResponseBody() = default ;
    EnableSqlFlashbackMatchSwitchResponseBody(const EnableSqlFlashbackMatchSwitchResponseBody &) = default ;
    EnableSqlFlashbackMatchSwitchResponseBody(EnableSqlFlashbackMatchSwitchResponseBody &&) = default ;
    EnableSqlFlashbackMatchSwitchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableSqlFlashbackMatchSwitchResponseBody() = default ;
    EnableSqlFlashbackMatchSwitchResponseBody& operator=(const EnableSqlFlashbackMatchSwitchResponseBody &) = default ;
    EnableSqlFlashbackMatchSwitchResponseBody& operator=(EnableSqlFlashbackMatchSwitchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr && this->success_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnableSqlFlashbackMatchSwitchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline EnableSqlFlashbackMatchSwitchResponseBody& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EnableSqlFlashbackMatchSwitchResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether SqlFlashbackMatchSwitch is enabled or not.
    std::shared_ptr<bool> result_ = nullptr;
    // Indicates whether the request was sent successfully or not.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
