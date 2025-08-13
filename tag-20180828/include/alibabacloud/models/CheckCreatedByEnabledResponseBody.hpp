// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCREATEDBYENABLEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKCREATEDBYENABLEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class CheckCreatedByEnabledResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCreatedByEnabledResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OpenStatus, openStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckCreatedByEnabledResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenStatus, openStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckCreatedByEnabledResponseBody() = default ;
    CheckCreatedByEnabledResponseBody(const CheckCreatedByEnabledResponseBody &) = default ;
    CheckCreatedByEnabledResponseBody(CheckCreatedByEnabledResponseBody &&) = default ;
    CheckCreatedByEnabledResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCreatedByEnabledResponseBody() = default ;
    CheckCreatedByEnabledResponseBody& operator=(const CheckCreatedByEnabledResponseBody &) = default ;
    CheckCreatedByEnabledResponseBody& operator=(CheckCreatedByEnabledResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->openStatus_ != nullptr
        && this->requestId_ != nullptr; };
    // openStatus Field Functions 
    bool hasOpenStatus() const { return this->openStatus_ != nullptr;};
    void deleteOpenStatus() { this->openStatus_ = nullptr;};
    inline bool openStatus() const { DARABONBA_PTR_GET_DEFAULT(openStatus_, false) };
    inline CheckCreatedByEnabledResponseBody& setOpenStatus(bool openStatus) { DARABONBA_PTR_SET_VALUE(openStatus_, openStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckCreatedByEnabledResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> openStatus_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
