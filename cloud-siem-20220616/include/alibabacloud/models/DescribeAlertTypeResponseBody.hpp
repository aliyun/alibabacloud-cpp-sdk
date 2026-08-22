// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAlertTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAlertTypeResponseBody() = default ;
    DescribeAlertTypeResponseBody(const DescribeAlertTypeResponseBody &) = default ;
    DescribeAlertTypeResponseBody(DescribeAlertTypeResponseBody &&) = default ;
    DescribeAlertTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertTypeResponseBody() = default ;
    DescribeAlertTypeResponseBody& operator=(const DescribeAlertTypeResponseBody &) = default ;
    DescribeAlertTypeResponseBody& operator=(DescribeAlertTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AlertType, alertType_);
        DARABONBA_PTR_TO_JSON(AlertTypeCategory, alertTypeCategory_);
        DARABONBA_PTR_TO_JSON(AlertTypeCategoryMds, alertTypeCategoryMds_);
        DARABONBA_PTR_TO_JSON(AlertTypeCategoryOrder, alertTypeCategoryOrder_);
        DARABONBA_PTR_TO_JSON(AlertTypeMds, alertTypeMds_);
        DARABONBA_PTR_TO_JSON(AlertTypeNameEn, alertTypeNameEn_);
        DARABONBA_PTR_TO_JSON(AlertTypeNameZh, alertTypeNameZh_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
        DARABONBA_PTR_FROM_JSON(AlertTypeCategory, alertTypeCategory_);
        DARABONBA_PTR_FROM_JSON(AlertTypeCategoryMds, alertTypeCategoryMds_);
        DARABONBA_PTR_FROM_JSON(AlertTypeCategoryOrder, alertTypeCategoryOrder_);
        DARABONBA_PTR_FROM_JSON(AlertTypeMds, alertTypeMds_);
        DARABONBA_PTR_FROM_JSON(AlertTypeNameEn, alertTypeNameEn_);
        DARABONBA_PTR_FROM_JSON(AlertTypeNameZh, alertTypeNameZh_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertType_ == nullptr
        && this->alertTypeCategory_ == nullptr && this->alertTypeCategoryMds_ == nullptr && this->alertTypeCategoryOrder_ == nullptr && this->alertTypeMds_ == nullptr && this->alertTypeNameEn_ == nullptr
        && this->alertTypeNameZh_ == nullptr; };
      // alertType Field Functions 
      bool hasAlertType() const { return this->alertType_ != nullptr;};
      void deleteAlertType() { this->alertType_ = nullptr;};
      inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
      inline Data& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


      // alertTypeCategory Field Functions 
      bool hasAlertTypeCategory() const { return this->alertTypeCategory_ != nullptr;};
      void deleteAlertTypeCategory() { this->alertTypeCategory_ = nullptr;};
      inline string getAlertTypeCategory() const { DARABONBA_PTR_GET_DEFAULT(alertTypeCategory_, "") };
      inline Data& setAlertTypeCategory(string alertTypeCategory) { DARABONBA_PTR_SET_VALUE(alertTypeCategory_, alertTypeCategory) };


      // alertTypeCategoryMds Field Functions 
      bool hasAlertTypeCategoryMds() const { return this->alertTypeCategoryMds_ != nullptr;};
      void deleteAlertTypeCategoryMds() { this->alertTypeCategoryMds_ = nullptr;};
      inline string getAlertTypeCategoryMds() const { DARABONBA_PTR_GET_DEFAULT(alertTypeCategoryMds_, "") };
      inline Data& setAlertTypeCategoryMds(string alertTypeCategoryMds) { DARABONBA_PTR_SET_VALUE(alertTypeCategoryMds_, alertTypeCategoryMds) };


      // alertTypeCategoryOrder Field Functions 
      bool hasAlertTypeCategoryOrder() const { return this->alertTypeCategoryOrder_ != nullptr;};
      void deleteAlertTypeCategoryOrder() { this->alertTypeCategoryOrder_ = nullptr;};
      inline int32_t getAlertTypeCategoryOrder() const { DARABONBA_PTR_GET_DEFAULT(alertTypeCategoryOrder_, 0) };
      inline Data& setAlertTypeCategoryOrder(int32_t alertTypeCategoryOrder) { DARABONBA_PTR_SET_VALUE(alertTypeCategoryOrder_, alertTypeCategoryOrder) };


      // alertTypeMds Field Functions 
      bool hasAlertTypeMds() const { return this->alertTypeMds_ != nullptr;};
      void deleteAlertTypeMds() { this->alertTypeMds_ = nullptr;};
      inline string getAlertTypeMds() const { DARABONBA_PTR_GET_DEFAULT(alertTypeMds_, "") };
      inline Data& setAlertTypeMds(string alertTypeMds) { DARABONBA_PTR_SET_VALUE(alertTypeMds_, alertTypeMds) };


      // alertTypeNameEn Field Functions 
      bool hasAlertTypeNameEn() const { return this->alertTypeNameEn_ != nullptr;};
      void deleteAlertTypeNameEn() { this->alertTypeNameEn_ = nullptr;};
      inline string getAlertTypeNameEn() const { DARABONBA_PTR_GET_DEFAULT(alertTypeNameEn_, "") };
      inline Data& setAlertTypeNameEn(string alertTypeNameEn) { DARABONBA_PTR_SET_VALUE(alertTypeNameEn_, alertTypeNameEn) };


      // alertTypeNameZh Field Functions 
      bool hasAlertTypeNameZh() const { return this->alertTypeNameZh_ != nullptr;};
      void deleteAlertTypeNameZh() { this->alertTypeNameZh_ = nullptr;};
      inline string getAlertTypeNameZh() const { DARABONBA_PTR_GET_DEFAULT(alertTypeNameZh_, "") };
      inline Data& setAlertTypeNameZh(string alertTypeNameZh) { DARABONBA_PTR_SET_VALUE(alertTypeNameZh_, alertTypeNameZh) };


    protected:
      // The threat type.
      shared_ptr<string> alertType_ {};
      // The threat type category identifier.
      shared_ptr<string> alertTypeCategory_ {};
      // The threat type category name in the language of the current request. Empty if no translation is available.
      shared_ptr<string> alertTypeCategoryMds_ {};
      // The display order of the threat type category.
      shared_ptr<int32_t> alertTypeCategoryOrder_ {};
      // The Medusa code of the threat type.
      shared_ptr<string> alertTypeMds_ {};
      // The English name of the threat type. Empty if no translation is available.
      shared_ptr<string> alertTypeNameEn_ {};
      // The Chinese name of the threat type. Empty if no translation is available.
      shared_ptr<string> alertTypeNameZh_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeAlertTypeResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeAlertTypeResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeAlertTypeResponseBody::Data>) };
    inline vector<DescribeAlertTypeResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeAlertTypeResponseBody::Data>) };
    inline DescribeAlertTypeResponseBody& setData(const vector<DescribeAlertTypeResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAlertTypeResponseBody& setData(vector<DescribeAlertTypeResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAlertTypeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlertTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAlertTypeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request status code.
    shared_ptr<int32_t> code_ {};
    // The response data.
    shared_ptr<vector<DescribeAlertTypeResponseBody::Data>> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // - true: successful.
    // - false: failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
