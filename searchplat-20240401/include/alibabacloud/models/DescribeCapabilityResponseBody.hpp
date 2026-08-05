// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECAPABILITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECAPABILITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class DescribeCapabilityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCapabilityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCapabilityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    DescribeCapabilityResponseBody() = default ;
    DescribeCapabilityResponseBody(const DescribeCapabilityResponseBody &) = default ;
    DescribeCapabilityResponseBody(DescribeCapabilityResponseBody &&) = default ;
    DescribeCapabilityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCapabilityResponseBody() = default ;
    DescribeCapabilityResponseBody& operator=(const DescribeCapabilityResponseBody &) = default ;
    DescribeCapabilityResponseBody& operator=(DescribeCapabilityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(isDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(itemCategory, itemCategory_);
        DARABONBA_PTR_TO_JSON(itemDesc, itemDesc_);
        DARABONBA_PTR_TO_JSON(itemName, itemName_);
        DARABONBA_ANY_TO_JSON(itemValue, itemValue_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(updated, updated_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(isDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(itemCategory, itemCategory_);
        DARABONBA_PTR_FROM_JSON(itemDesc, itemDesc_);
        DARABONBA_PTR_FROM_JSON(itemName, itemName_);
        DARABONBA_ANY_FROM_JSON(itemValue, itemValue_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(updated, updated_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->created_ == nullptr
        && this->isDefault_ == nullptr && this->itemCategory_ == nullptr && this->itemDesc_ == nullptr && this->itemName_ == nullptr && this->itemValue_ == nullptr
        && this->status_ == nullptr && this->updated_ == nullptr; };
      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline int64_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0L) };
      inline Result& setCreated(int64_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline Result& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // itemCategory Field Functions 
      bool hasItemCategory() const { return this->itemCategory_ != nullptr;};
      void deleteItemCategory() { this->itemCategory_ = nullptr;};
      inline string getItemCategory() const { DARABONBA_PTR_GET_DEFAULT(itemCategory_, "") };
      inline Result& setItemCategory(string itemCategory) { DARABONBA_PTR_SET_VALUE(itemCategory_, itemCategory) };


      // itemDesc Field Functions 
      bool hasItemDesc() const { return this->itemDesc_ != nullptr;};
      void deleteItemDesc() { this->itemDesc_ = nullptr;};
      inline string getItemDesc() const { DARABONBA_PTR_GET_DEFAULT(itemDesc_, "") };
      inline Result& setItemDesc(string itemDesc) { DARABONBA_PTR_SET_VALUE(itemDesc_, itemDesc) };


      // itemName Field Functions 
      bool hasItemName() const { return this->itemName_ != nullptr;};
      void deleteItemName() { this->itemName_ = nullptr;};
      inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
      inline Result& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


      // itemValue Field Functions 
      bool hasItemValue() const { return this->itemValue_ != nullptr;};
      void deleteItemValue() { this->itemValue_ = nullptr;};
      inline       const Darabonba::Json & getItemValue() const { DARABONBA_GET(itemValue_) };
      Darabonba::Json & getItemValue() { DARABONBA_GET(itemValue_) };
      inline Result& setItemValue(const Darabonba::Json & itemValue) { DARABONBA_SET_VALUE(itemValue_, itemValue) };
      inline Result& setItemValue(Darabonba::Json && itemValue) { DARABONBA_SET_RVALUE(itemValue_, itemValue) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline int64_t getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0L) };
      inline Result& setUpdated(int64_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    protected:
      // Timestamp of creation time
      shared_ptr<int64_t> created_ {};
      // Whether it is the default configuration
      shared_ptr<bool> isDefault_ {};
      // Configuration category
      shared_ptr<string> itemCategory_ {};
      // Configuration description
      shared_ptr<string> itemDesc_ {};
      // Configuration name
      shared_ptr<string> itemName_ {};
      // An object containing information such as endpoint and function, which describes the detailed configuration of the knowledge base.
      Darabonba::Json itemValue_ {};
      // Status
      shared_ptr<string> status_ {};
      // Update timestamp
      shared_ptr<int64_t> updated_ {};
    };

    virtual bool empty() const override { return this->httpCode_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr && this->status_ == nullptr; };
    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int64_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0L) };
    inline DescribeCapabilityResponseBody& setHttpCode(int64_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCapabilityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribeCapabilityResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DescribeCapabilityResponseBody::Result) };
    inline DescribeCapabilityResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DescribeCapabilityResponseBody::Result) };
    inline DescribeCapabilityResponseBody& setResult(const DescribeCapabilityResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeCapabilityResponseBody& setResult(DescribeCapabilityResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCapabilityResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // HTTP status code
    shared_ptr<int64_t> httpCode_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Response result
    shared_ptr<DescribeCapabilityResponseBody::Result> result_ {};
    // Request status
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
