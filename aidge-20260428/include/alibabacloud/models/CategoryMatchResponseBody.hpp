// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATEGORYMATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CATEGORYMATCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class CategoryMatchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CategoryMatchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CategoryMatchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CategoryMatchResponseBody() = default ;
    CategoryMatchResponseBody(const CategoryMatchResponseBody &) = default ;
    CategoryMatchResponseBody(CategoryMatchResponseBody &&) = default ;
    CategoryMatchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CategoryMatchResponseBody() = default ;
    CategoryMatchResponseBody& operator=(const CategoryMatchResponseBody &) = default ;
    CategoryMatchResponseBody& operator=(CategoryMatchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_TO_JSON(CategoryPath, categoryPath_);
        DARABONBA_PTR_TO_JSON(Confidence, confidence_);
        DARABONBA_PTR_TO_JSON(MatchSuccessful, matchSuccessful_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(UsageMap, usageMap_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_FROM_JSON(CategoryPath, categoryPath_);
        DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
        DARABONBA_PTR_FROM_JSON(MatchSuccessful, matchSuccessful_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(UsageMap, usageMap_);
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
      virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->categoryName_ == nullptr && this->categoryPath_ == nullptr && this->confidence_ == nullptr && this->matchSuccessful_ == nullptr && this->reason_ == nullptr
        && this->usageMap_ == nullptr; };
      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
      inline Data& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // categoryName Field Functions 
      bool hasCategoryName() const { return this->categoryName_ != nullptr;};
      void deleteCategoryName() { this->categoryName_ = nullptr;};
      inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
      inline Data& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


      // categoryPath Field Functions 
      bool hasCategoryPath() const { return this->categoryPath_ != nullptr;};
      void deleteCategoryPath() { this->categoryPath_ = nullptr;};
      inline string getCategoryPath() const { DARABONBA_PTR_GET_DEFAULT(categoryPath_, "") };
      inline Data& setCategoryPath(string categoryPath) { DARABONBA_PTR_SET_VALUE(categoryPath_, categoryPath) };


      // confidence Field Functions 
      bool hasConfidence() const { return this->confidence_ != nullptr;};
      void deleteConfidence() { this->confidence_ = nullptr;};
      inline int32_t getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0) };
      inline Data& setConfidence(int32_t confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


      // matchSuccessful Field Functions 
      bool hasMatchSuccessful() const { return this->matchSuccessful_ != nullptr;};
      void deleteMatchSuccessful() { this->matchSuccessful_ = nullptr;};
      inline bool getMatchSuccessful() const { DARABONBA_PTR_GET_DEFAULT(matchSuccessful_, false) };
      inline Data& setMatchSuccessful(bool matchSuccessful) { DARABONBA_PTR_SET_VALUE(matchSuccessful_, matchSuccessful) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Data& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // usageMap Field Functions 
      bool hasUsageMap() const { return this->usageMap_ != nullptr;};
      void deleteUsageMap() { this->usageMap_ = nullptr;};
      inline const map<string, int32_t> & getUsageMap() const { DARABONBA_PTR_GET_CONST(usageMap_, map<string, int32_t>) };
      inline map<string, int32_t> getUsageMap() { DARABONBA_PTR_GET(usageMap_, map<string, int32_t>) };
      inline Data& setUsageMap(const map<string, int32_t> & usageMap) { DARABONBA_PTR_SET_VALUE(usageMap_, usageMap) };
      inline Data& setUsageMap(map<string, int32_t> && usageMap) { DARABONBA_PTR_SET_RVALUE(usageMap_, usageMap) };


    protected:
      // The ID of the matched category.
      shared_ptr<string> categoryId_ {};
      // The name of the matched category.
      shared_ptr<string> categoryName_ {};
      // The full path of the category, separated by forward slashes (/).
      shared_ptr<string> categoryPath_ {};
      // The matching confidence score, ranging from 0 to 100.
      shared_ptr<int32_t> confidence_ {};
      // Indicates whether the match is successful.
      shared_ptr<bool> matchSuccessful_ {};
      // The reason for the match.
      shared_ptr<string> reason_ {};
      // The usage information.
      shared_ptr<map<string, int32_t>> usageMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CategoryMatchResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CategoryMatchResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CategoryMatchResponseBody::Data) };
    inline CategoryMatchResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CategoryMatchResponseBody::Data) };
    inline CategoryMatchResponseBody& setData(const CategoryMatchResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CategoryMatchResponseBody& setData(CategoryMatchResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CategoryMatchResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CategoryMatchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CategoryMatchResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. The value "success" is returned for a successful call.
    shared_ptr<string> code_ {};
    // The product category matching result.
    shared_ptr<CategoryMatchResponseBody::Data> data_ {};
    // The error message. The value "Success" is returned for a successful call.
    shared_ptr<string> message_ {};
    // The request ID, which uniquely identifies the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values: true and false.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
