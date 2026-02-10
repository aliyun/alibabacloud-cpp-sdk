// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERSCANCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERSCANCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerScanConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerScanConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerScanConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeContainerScanConfigResponseBody() = default ;
    DescribeContainerScanConfigResponseBody(const DescribeContainerScanConfigResponseBody &) = default ;
    DescribeContainerScanConfigResponseBody(DescribeContainerScanConfigResponseBody &&) = default ;
    DescribeContainerScanConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerScanConfigResponseBody() = default ;
    DescribeContainerScanConfigResponseBody& operator=(const DescribeContainerScanConfigResponseBody &) = default ;
    DescribeContainerScanConfigResponseBody& operator=(DescribeContainerScanConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AllCount, allCount_);
        DARABONBA_PTR_TO_JSON(AppNames, appNames_);
        DARABONBA_PTR_TO_JSON(ChooseCount, chooseCount_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AllCount, allCount_);
        DARABONBA_PTR_FROM_JSON(AppNames, appNames_);
        DARABONBA_PTR_FROM_JSON(ChooseCount, chooseCount_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
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
      virtual bool empty() const override { return this->allCount_ == nullptr
        && this->appNames_ == nullptr && this->chooseCount_ == nullptr && this->clusterId_ == nullptr && this->clusterName_ == nullptr; };
      // allCount Field Functions 
      bool hasAllCount() const { return this->allCount_ != nullptr;};
      void deleteAllCount() { this->allCount_ = nullptr;};
      inline int32_t getAllCount() const { DARABONBA_PTR_GET_DEFAULT(allCount_, 0) };
      inline Data& setAllCount(int32_t allCount) { DARABONBA_PTR_SET_VALUE(allCount_, allCount) };


      // appNames Field Functions 
      bool hasAppNames() const { return this->appNames_ != nullptr;};
      void deleteAppNames() { this->appNames_ = nullptr;};
      inline string getAppNames() const { DARABONBA_PTR_GET_DEFAULT(appNames_, "") };
      inline Data& setAppNames(string appNames) { DARABONBA_PTR_SET_VALUE(appNames_, appNames) };


      // chooseCount Field Functions 
      bool hasChooseCount() const { return this->chooseCount_ != nullptr;};
      void deleteChooseCount() { this->chooseCount_ = nullptr;};
      inline int32_t getChooseCount() const { DARABONBA_PTR_GET_DEFAULT(chooseCount_, 0) };
      inline Data& setChooseCount(int32_t chooseCount) { DARABONBA_PTR_SET_VALUE(chooseCount_, chooseCount) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Data& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    protected:
      // The total number of container applications in the cluster.
      shared_ptr<int32_t> allCount_ {};
      // The names of the container applications.
      shared_ptr<string> appNames_ {};
      // The number of selected container applications.
      shared_ptr<int32_t> chooseCount_ {};
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeContainerScanConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeContainerScanConfigResponseBody::Data) };
    inline DescribeContainerScanConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeContainerScanConfigResponseBody::Data) };
    inline DescribeContainerScanConfigResponseBody& setData(const DescribeContainerScanConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeContainerScanConfigResponseBody& setData(DescribeContainerScanConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeContainerScanConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContainerScanConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<DescribeContainerScanConfigResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
