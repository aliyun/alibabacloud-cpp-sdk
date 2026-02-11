// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMPORTEDLOGCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMPORTEDLOGCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeImportedLogCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImportedLogCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImportedLogCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImportedLogCountResponseBody() = default ;
    DescribeImportedLogCountResponseBody(const DescribeImportedLogCountResponseBody &) = default ;
    DescribeImportedLogCountResponseBody(DescribeImportedLogCountResponseBody &&) = default ;
    DescribeImportedLogCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImportedLogCountResponseBody() = default ;
    DescribeImportedLogCountResponseBody& operator=(const DescribeImportedLogCountResponseBody &) = default ;
    DescribeImportedLogCountResponseBody& operator=(DescribeImportedLogCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ImportedLogCount, importedLogCount_);
        DARABONBA_PTR_TO_JSON(TotalLogCount, totalLogCount_);
        DARABONBA_PTR_TO_JSON(UnImportedLogCount, unImportedLogCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ImportedLogCount, importedLogCount_);
        DARABONBA_PTR_FROM_JSON(TotalLogCount, totalLogCount_);
        DARABONBA_PTR_FROM_JSON(UnImportedLogCount, unImportedLogCount_);
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
      virtual bool empty() const override { return this->importedLogCount_ == nullptr
        && this->totalLogCount_ == nullptr && this->unImportedLogCount_ == nullptr; };
      // importedLogCount Field Functions 
      bool hasImportedLogCount() const { return this->importedLogCount_ != nullptr;};
      void deleteImportedLogCount() { this->importedLogCount_ = nullptr;};
      inline int32_t getImportedLogCount() const { DARABONBA_PTR_GET_DEFAULT(importedLogCount_, 0) };
      inline Data& setImportedLogCount(int32_t importedLogCount) { DARABONBA_PTR_SET_VALUE(importedLogCount_, importedLogCount) };


      // totalLogCount Field Functions 
      bool hasTotalLogCount() const { return this->totalLogCount_ != nullptr;};
      void deleteTotalLogCount() { this->totalLogCount_ = nullptr;};
      inline int32_t getTotalLogCount() const { DARABONBA_PTR_GET_DEFAULT(totalLogCount_, 0) };
      inline Data& setTotalLogCount(int32_t totalLogCount) { DARABONBA_PTR_SET_VALUE(totalLogCount_, totalLogCount) };


      // unImportedLogCount Field Functions 
      bool hasUnImportedLogCount() const { return this->unImportedLogCount_ != nullptr;};
      void deleteUnImportedLogCount() { this->unImportedLogCount_ = nullptr;};
      inline int32_t getUnImportedLogCount() const { DARABONBA_PTR_GET_DEFAULT(unImportedLogCount_, 0) };
      inline Data& setUnImportedLogCount(int32_t unImportedLogCount) { DARABONBA_PTR_SET_VALUE(unImportedLogCount_, unImportedLogCount) };


    protected:
      // The number of logs that are added.
      shared_ptr<int32_t> importedLogCount_ {};
      // The total number of logs.
      shared_ptr<int32_t> totalLogCount_ {};
      // The number of logs that are not added.
      shared_ptr<int32_t> unImportedLogCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeImportedLogCountResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeImportedLogCountResponseBody::Data) };
    inline DescribeImportedLogCountResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeImportedLogCountResponseBody::Data) };
    inline DescribeImportedLogCountResponseBody& setData(const DescribeImportedLogCountResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeImportedLogCountResponseBody& setData(DescribeImportedLogCountResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImportedLogCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<DescribeImportedLogCountResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
