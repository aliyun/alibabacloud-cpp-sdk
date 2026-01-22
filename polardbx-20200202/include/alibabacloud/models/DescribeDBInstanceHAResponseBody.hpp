// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEHARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEHARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceHAResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceHAResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceHAResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDBInstanceHAResponseBody() = default ;
    DescribeDBInstanceHAResponseBody(const DescribeDBInstanceHAResponseBody &) = default ;
    DescribeDBInstanceHAResponseBody(DescribeDBInstanceHAResponseBody &&) = default ;
    DescribeDBInstanceHAResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceHAResponseBody() = default ;
    DescribeDBInstanceHAResponseBody& operator=(const DescribeDBInstanceHAResponseBody &) = default ;
    DescribeDBInstanceHAResponseBody& operator=(DescribeDBInstanceHAResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PrimaryAzoneId, primaryAzoneId_);
        DARABONBA_PTR_TO_JSON(PrimaryRegionId, primaryRegionId_);
        DARABONBA_PTR_TO_JSON(SecondaryAzoneId, secondaryAzoneId_);
        DARABONBA_PTR_TO_JSON(SecondaryRegionId, secondaryRegionId_);
        DARABONBA_PTR_TO_JSON(TopologyType, topologyType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PrimaryAzoneId, primaryAzoneId_);
        DARABONBA_PTR_FROM_JSON(PrimaryRegionId, primaryRegionId_);
        DARABONBA_PTR_FROM_JSON(SecondaryAzoneId, secondaryAzoneId_);
        DARABONBA_PTR_FROM_JSON(SecondaryRegionId, secondaryRegionId_);
        DARABONBA_PTR_FROM_JSON(TopologyType, topologyType_);
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
      virtual bool empty() const override { return this->primaryAzoneId_ == nullptr
        && this->primaryRegionId_ == nullptr && this->secondaryAzoneId_ == nullptr && this->secondaryRegionId_ == nullptr && this->topologyType_ == nullptr; };
      // primaryAzoneId Field Functions 
      bool hasPrimaryAzoneId() const { return this->primaryAzoneId_ != nullptr;};
      void deletePrimaryAzoneId() { this->primaryAzoneId_ = nullptr;};
      inline string getPrimaryAzoneId() const { DARABONBA_PTR_GET_DEFAULT(primaryAzoneId_, "") };
      inline Data& setPrimaryAzoneId(string primaryAzoneId) { DARABONBA_PTR_SET_VALUE(primaryAzoneId_, primaryAzoneId) };


      // primaryRegionId Field Functions 
      bool hasPrimaryRegionId() const { return this->primaryRegionId_ != nullptr;};
      void deletePrimaryRegionId() { this->primaryRegionId_ = nullptr;};
      inline string getPrimaryRegionId() const { DARABONBA_PTR_GET_DEFAULT(primaryRegionId_, "") };
      inline Data& setPrimaryRegionId(string primaryRegionId) { DARABONBA_PTR_SET_VALUE(primaryRegionId_, primaryRegionId) };


      // secondaryAzoneId Field Functions 
      bool hasSecondaryAzoneId() const { return this->secondaryAzoneId_ != nullptr;};
      void deleteSecondaryAzoneId() { this->secondaryAzoneId_ = nullptr;};
      inline string getSecondaryAzoneId() const { DARABONBA_PTR_GET_DEFAULT(secondaryAzoneId_, "") };
      inline Data& setSecondaryAzoneId(string secondaryAzoneId) { DARABONBA_PTR_SET_VALUE(secondaryAzoneId_, secondaryAzoneId) };


      // secondaryRegionId Field Functions 
      bool hasSecondaryRegionId() const { return this->secondaryRegionId_ != nullptr;};
      void deleteSecondaryRegionId() { this->secondaryRegionId_ = nullptr;};
      inline string getSecondaryRegionId() const { DARABONBA_PTR_GET_DEFAULT(secondaryRegionId_, "") };
      inline Data& setSecondaryRegionId(string secondaryRegionId) { DARABONBA_PTR_SET_VALUE(secondaryRegionId_, secondaryRegionId) };


      // topologyType Field Functions 
      bool hasTopologyType() const { return this->topologyType_ != nullptr;};
      void deleteTopologyType() { this->topologyType_ = nullptr;};
      inline string getTopologyType() const { DARABONBA_PTR_GET_DEFAULT(topologyType_, "") };
      inline Data& setTopologyType(string topologyType) { DARABONBA_PTR_SET_VALUE(topologyType_, topologyType) };


    protected:
      shared_ptr<string> primaryAzoneId_ {};
      shared_ptr<string> primaryRegionId_ {};
      shared_ptr<string> secondaryAzoneId_ {};
      shared_ptr<string> secondaryRegionId_ {};
      shared_ptr<string> topologyType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDBInstanceHAResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDBInstanceHAResponseBody::Data) };
    inline DescribeDBInstanceHAResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDBInstanceHAResponseBody::Data) };
    inline DescribeDBInstanceHAResponseBody& setData(const DescribeDBInstanceHAResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDBInstanceHAResponseBody& setData(DescribeDBInstanceHAResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDBInstanceHAResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceHAResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDBInstanceHAResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeDBInstanceHAResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
