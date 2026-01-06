// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPACTIONSERVICESWITCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPACTIONSERVICESWITCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeCompactionServiceSwitchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCompactionServiceSwitchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCompactionServiceSwitchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCompactionServiceSwitchResponseBody() = default ;
    DescribeCompactionServiceSwitchResponseBody(const DescribeCompactionServiceSwitchResponseBody &) = default ;
    DescribeCompactionServiceSwitchResponseBody(DescribeCompactionServiceSwitchResponseBody &&) = default ;
    DescribeCompactionServiceSwitchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCompactionServiceSwitchResponseBody() = default ;
    DescribeCompactionServiceSwitchResponseBody& operator=(const DescribeCompactionServiceSwitchResponseBody &) = default ;
    DescribeCompactionServiceSwitchResponseBody& operator=(DescribeCompactionServiceSwitchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EnableCompactionService, enableCompactionService_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableCompactionService, enableCompactionService_);
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
      virtual bool empty() const override { return this->enableCompactionService_ == nullptr; };
      // enableCompactionService Field Functions 
      bool hasEnableCompactionService() const { return this->enableCompactionService_ != nullptr;};
      void deleteEnableCompactionService() { this->enableCompactionService_ = nullptr;};
      inline bool getEnableCompactionService() const { DARABONBA_PTR_GET_DEFAULT(enableCompactionService_, false) };
      inline Data& setEnableCompactionService(bool enableCompactionService) { DARABONBA_PTR_SET_VALUE(enableCompactionService_, enableCompactionService) };


    protected:
      // Indicates whether the remote build feature is enabled.
      // 
      // Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> enableCompactionService_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCompactionServiceSwitchResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCompactionServiceSwitchResponseBody::Data) };
    inline DescribeCompactionServiceSwitchResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCompactionServiceSwitchResponseBody::Data) };
    inline DescribeCompactionServiceSwitchResponseBody& setData(const DescribeCompactionServiceSwitchResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCompactionServiceSwitchResponseBody& setData(DescribeCompactionServiceSwitchResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCompactionServiceSwitchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<DescribeCompactionServiceSwitchResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
