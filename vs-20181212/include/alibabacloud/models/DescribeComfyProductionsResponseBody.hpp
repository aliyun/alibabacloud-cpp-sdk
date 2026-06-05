// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMFYPRODUCTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMFYPRODUCTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeComfyProductionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComfyProductionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Productions, productions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComfyProductionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Productions, productions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeComfyProductionsResponseBody() = default ;
    DescribeComfyProductionsResponseBody(const DescribeComfyProductionsResponseBody &) = default ;
    DescribeComfyProductionsResponseBody(DescribeComfyProductionsResponseBody &&) = default ;
    DescribeComfyProductionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComfyProductionsResponseBody() = default ;
    DescribeComfyProductionsResponseBody& operator=(const DescribeComfyProductionsResponseBody &) = default ;
    DescribeComfyProductionsResponseBody& operator=(DescribeComfyProductionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Productions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Productions& obj) { 
        DARABONBA_PTR_TO_JSON(ComfyTaskId, comfyTaskId_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(ProductionId, productionId_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      };
      friend void from_json(const Darabonba::Json& j, Productions& obj) { 
        DARABONBA_PTR_FROM_JSON(ComfyTaskId, comfyTaskId_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(ProductionId, productionId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      };
      Productions() = default ;
      Productions(const Productions &) = default ;
      Productions(Productions &&) = default ;
      Productions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Productions() = default ;
      Productions& operator=(const Productions &) = default ;
      Productions& operator=(Productions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comfyTaskId_ == nullptr
        && this->creationTime_ == nullptr && this->fileName_ == nullptr && this->productionId_ == nullptr && this->state_ == nullptr && this->updatedTime_ == nullptr; };
      // comfyTaskId Field Functions 
      bool hasComfyTaskId() const { return this->comfyTaskId_ != nullptr;};
      void deleteComfyTaskId() { this->comfyTaskId_ = nullptr;};
      inline string getComfyTaskId() const { DARABONBA_PTR_GET_DEFAULT(comfyTaskId_, "") };
      inline Productions& setComfyTaskId(string comfyTaskId) { DARABONBA_PTR_SET_VALUE(comfyTaskId_, comfyTaskId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Productions& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Productions& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // productionId Field Functions 
      bool hasProductionId() const { return this->productionId_ != nullptr;};
      void deleteProductionId() { this->productionId_ = nullptr;};
      inline string getProductionId() const { DARABONBA_PTR_GET_DEFAULT(productionId_, "") };
      inline Productions& setProductionId(string productionId) { DARABONBA_PTR_SET_VALUE(productionId_, productionId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Productions& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline string getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
      inline Productions& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    protected:
      shared_ptr<string> comfyTaskId_ {};
      shared_ptr<string> creationTime_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<string> productionId_ {};
      shared_ptr<string> state_ {};
      shared_ptr<string> updatedTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->productions_ == nullptr && this->requestId_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline DescribeComfyProductionsResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeComfyProductionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeComfyProductionsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeComfyProductionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productions Field Functions 
    bool hasProductions() const { return this->productions_ != nullptr;};
    void deleteProductions() { this->productions_ = nullptr;};
    inline const vector<DescribeComfyProductionsResponseBody::Productions> & getProductions() const { DARABONBA_PTR_GET_CONST(productions_, vector<DescribeComfyProductionsResponseBody::Productions>) };
    inline vector<DescribeComfyProductionsResponseBody::Productions> getProductions() { DARABONBA_PTR_GET(productions_, vector<DescribeComfyProductionsResponseBody::Productions>) };
    inline DescribeComfyProductionsResponseBody& setProductions(const vector<DescribeComfyProductionsResponseBody::Productions> & productions) { DARABONBA_PTR_SET_VALUE(productions_, productions) };
    inline DescribeComfyProductionsResponseBody& setProductions(vector<DescribeComfyProductionsResponseBody::Productions> && productions) { DARABONBA_PTR_SET_RVALUE(productions_, productions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeComfyProductionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeComfyProductionsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<vector<DescribeComfyProductionsResponseBody::Productions>> productions_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
