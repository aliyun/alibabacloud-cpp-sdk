// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DescribeCloudResourceStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudResourceStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudResourceStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCloudResourceStatusResponseBody() = default ;
    DescribeCloudResourceStatusResponseBody(const DescribeCloudResourceStatusResponseBody &) = default ;
    DescribeCloudResourceStatusResponseBody(DescribeCloudResourceStatusResponseBody &&) = default ;
    DescribeCloudResourceStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudResourceStatusResponseBody() = default ;
    DescribeCloudResourceStatusResponseBody& operator=(const DescribeCloudResourceStatusResponseBody &) = default ;
    DescribeCloudResourceStatusResponseBody& operator=(DescribeCloudResourceStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CloudName, cloudName_);
        DARABONBA_PTR_TO_JSON(CloudProduct, cloudProduct_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CloudName, cloudName_);
        DARABONBA_PTR_FROM_JSON(CloudProduct, cloudProduct_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      virtual bool empty() const override { return this->cloudName_ == nullptr
        && this->cloudProduct_ == nullptr && this->totalCount_ == nullptr; };
      // cloudName Field Functions 
      bool hasCloudName() const { return this->cloudName_ != nullptr;};
      void deleteCloudName() { this->cloudName_ = nullptr;};
      inline string getCloudName() const { DARABONBA_PTR_GET_DEFAULT(cloudName_, "") };
      inline Data& setCloudName(string cloudName) { DARABONBA_PTR_SET_VALUE(cloudName_, cloudName) };


      // cloudProduct Field Functions 
      bool hasCloudProduct() const { return this->cloudProduct_ != nullptr;};
      void deleteCloudProduct() { this->cloudProduct_ = nullptr;};
      inline string getCloudProduct() const { DARABONBA_PTR_GET_DEFAULT(cloudProduct_, "") };
      inline Data& setCloudProduct(string cloudProduct) { DARABONBA_PTR_SET_VALUE(cloudProduct_, cloudProduct) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The cloud service provider.
      shared_ptr<string> cloudName_ {};
      // The cloud service.
      shared_ptr<string> cloudProduct_ {};
      // The total number of cloud resources on which certificates are deployed.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeCloudResourceStatusResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeCloudResourceStatusResponseBody::Data>) };
    inline vector<DescribeCloudResourceStatusResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeCloudResourceStatusResponseBody::Data>) };
    inline DescribeCloudResourceStatusResponseBody& setData(const vector<DescribeCloudResourceStatusResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCloudResourceStatusResponseBody& setData(vector<DescribeCloudResourceStatusResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudResourceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<vector<DescribeCloudResourceStatusResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
