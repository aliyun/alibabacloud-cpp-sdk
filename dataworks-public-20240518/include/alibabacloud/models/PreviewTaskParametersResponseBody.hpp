// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWTASKPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWTASKPARAMETERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class PreviewTaskParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewTaskParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewTaskParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PreviewTaskParametersResponseBody() = default ;
    PreviewTaskParametersResponseBody(const PreviewTaskParametersResponseBody &) = default ;
    PreviewTaskParametersResponseBody(PreviewTaskParametersResponseBody &&) = default ;
    PreviewTaskParametersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewTaskParametersResponseBody() = default ;
    PreviewTaskParametersResponseBody& operator=(const PreviewTaskParametersResponseBody &) = default ;
    PreviewTaskParametersResponseBody& operator=(PreviewTaskParametersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(TriggerTime, triggerTime_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(TriggerTime, triggerTime_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bizdate_ == nullptr
        && this->errorMessage_ == nullptr && this->parameters_ == nullptr && this->success_ == nullptr && this->triggerTime_ == nullptr; };
      // bizdate Field Functions 
      bool hasBizdate() const { return this->bizdate_ != nullptr;};
      void deleteBizdate() { this->bizdate_ = nullptr;};
      inline int64_t getBizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
      inline Items& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Items& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
      inline Items& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Items& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // triggerTime Field Functions 
      bool hasTriggerTime() const { return this->triggerTime_ != nullptr;};
      void deleteTriggerTime() { this->triggerTime_ = nullptr;};
      inline int64_t getTriggerTime() const { DARABONBA_PTR_GET_DEFAULT(triggerTime_, 0L) };
      inline Items& setTriggerTime(int64_t triggerTime) { DARABONBA_PTR_SET_VALUE(triggerTime_, triggerTime) };


    protected:
      // The business date of the cycle. The value is a 13-digit UNIX timestamp in milliseconds.
      shared_ptr<int64_t> bizdate_ {};
      // The error message returned when the parsing for the cycle fails. This parameter is returned when Success is false and is not returned when Success is true.
      shared_ptr<string> errorMessage_ {};
      // The complete script parameter string parsed for the cycle. Multiple parameters are separated by spaces. This parameter is returned when Success is true.
      shared_ptr<string> parameters_ {};
      // Specifies whether the scheduling parameters for the cycle are parsed successfully. Valid values:
      // - true: The parsing is successful.
      // - false: The parsing fails.
      shared_ptr<bool> success_ {};
      // The simulated scheduled trigger time. The value is a 13-digit UNIX timestamp in milliseconds.
      shared_ptr<int64_t> triggerTime_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<PreviewTaskParametersResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<PreviewTaskParametersResponseBody::Items>) };
    inline vector<PreviewTaskParametersResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<PreviewTaskParametersResponseBody::Items>) };
    inline PreviewTaskParametersResponseBody& setItems(const vector<PreviewTaskParametersResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline PreviewTaskParametersResponseBody& setItems(vector<PreviewTaskParametersResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreviewTaskParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The parameter preview results for each cycle.
    shared_ptr<vector<PreviewTaskParametersResponseBody::Items>> items_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
