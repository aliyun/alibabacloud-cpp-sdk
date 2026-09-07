// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPERIPHERALDRIVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPERIPHERALDRIVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribePeripheralDriversResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePeripheralDriversResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DriverInfos, driverInfos_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePeripheralDriversResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DriverInfos, driverInfos_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePeripheralDriversResponseBody() = default ;
    DescribePeripheralDriversResponseBody(const DescribePeripheralDriversResponseBody &) = default ;
    DescribePeripheralDriversResponseBody(DescribePeripheralDriversResponseBody &&) = default ;
    DescribePeripheralDriversResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePeripheralDriversResponseBody() = default ;
    DescribePeripheralDriversResponseBody& operator=(const DescribePeripheralDriversResponseBody &) = default ;
    DescribePeripheralDriversResponseBody& operator=(DescribePeripheralDriversResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DriverInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DriverInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Brand, brand_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(OwnerType, ownerType_);
        DARABONBA_PTR_TO_JSON(Source, source_);
      };
      friend void from_json(const Darabonba::Json& j, DriverInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Brand, brand_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(OwnerType, ownerType_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
      };
      DriverInfos() = default ;
      DriverInfos(const DriverInfos &) = default ;
      DriverInfos(DriverInfos &&) = default ;
      DriverInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DriverInfos() = default ;
      DriverInfos& operator=(const DriverInfos &) = default ;
      DriverInfos& operator=(DriverInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->brand_ == nullptr
        && this->createTime_ == nullptr && this->deviceType_ == nullptr && this->icon_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->osType_ == nullptr && this->ownerType_ == nullptr && this->source_ == nullptr; };
      // brand Field Functions 
      bool hasBrand() const { return this->brand_ != nullptr;};
      void deleteBrand() { this->brand_ = nullptr;};
      inline string getBrand() const { DARABONBA_PTR_GET_DEFAULT(brand_, "") };
      inline DriverInfos& setBrand(string brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DriverInfos& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // deviceType Field Functions 
      bool hasDeviceType() const { return this->deviceType_ != nullptr;};
      void deleteDeviceType() { this->deviceType_ = nullptr;};
      inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
      inline DriverInfos& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline DriverInfos& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline DriverInfos& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DriverInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline DriverInfos& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // ownerType Field Functions 
      bool hasOwnerType() const { return this->ownerType_ != nullptr;};
      void deleteOwnerType() { this->ownerType_ = nullptr;};
      inline string getOwnerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
      inline DriverInfos& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline DriverInfos& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    protected:
      // The brand to which the driver belongs.
      shared_ptr<string> brand_ {};
      // The time when the driver record was created, in ISO 8601 (RFC 3339) format with a time zone offset. The time zone offset is based on the returned value. This field may be empty or not returned if the time information does not exist.
      shared_ptr<string> createTime_ {};
      // The device type to which the driver applies.
      shared_ptr<string> deviceType_ {};
      // The brand icon URL. This field may be empty or not returned if no icon is configured. The example value is for illustration purposes only.
      shared_ptr<string> icon_ {};
      // The driver ID, which can be used for subsequent queries.
      shared_ptr<string> id_ {};
      // The driver name.
      shared_ptr<string> name_ {};
      // The operating system to which the driver applies, such as Windows. The actual returned value prevails.
      shared_ptr<string> osType_ {};
      // The driver ownership. Valid values:
      // - WUYING: Wuying official driver.
      // - CUSTOMER: Custom driver of the current account.
      shared_ptr<string> ownerType_ {};
      // The driver source. Valid values:
      // - OpsApp: Uploaded from the management console.
      // - WuyingHelper: Uploaded from Wuying Helper.
      // - Wuying: Wuying source.
      // 
      // Unrecognized sources may also be classified as Wuying. To distinguish between official and custom drivers, use OwnerType.
      shared_ptr<string> source_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->driverInfos_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribePeripheralDriversResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // driverInfos Field Functions 
    bool hasDriverInfos() const { return this->driverInfos_ != nullptr;};
    void deleteDriverInfos() { this->driverInfos_ = nullptr;};
    inline const vector<DescribePeripheralDriversResponseBody::DriverInfos> & getDriverInfos() const { DARABONBA_PTR_GET_CONST(driverInfos_, vector<DescribePeripheralDriversResponseBody::DriverInfos>) };
    inline vector<DescribePeripheralDriversResponseBody::DriverInfos> getDriverInfos() { DARABONBA_PTR_GET(driverInfos_, vector<DescribePeripheralDriversResponseBody::DriverInfos>) };
    inline DescribePeripheralDriversResponseBody& setDriverInfos(const vector<DescribePeripheralDriversResponseBody::DriverInfos> & driverInfos) { DARABONBA_PTR_SET_VALUE(driverInfos_, driverInfos) };
    inline DescribePeripheralDriversResponseBody& setDriverInfos(vector<DescribePeripheralDriversResponseBody::DriverInfos> && driverInfos) { DARABONBA_PTR_SET_RVALUE(driverInfos_, driverInfos) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribePeripheralDriversResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePeripheralDriversResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePeripheralDriversResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The total number of matching drivers, not the length of the current page list. This value may be 0 when the current page contains no data.
    shared_ptr<int32_t> count_ {};
    // The list of driver information on the current page. An empty list is returned when no data is available.
    shared_ptr<vector<DescribePeripheralDriversResponseBody::DriverInfos>> driverInfos_ {};
    // Reserved field. This field does not provide a valid return value and may not be returned. This operation uses PageSize and PageNumber for pagination. Do not rely on this field. The example value 20 is provided only to illustrate the integer type and does not represent the actual return value, default value, or page size of this operation.
    shared_ptr<int32_t> maxResults_ {};
    // Reserved field. Token-based pagination is not supported and this field may not be returned. Do not rely on this field for continued queries. The example value token-for-format-only is provided only to illustrate the string type and is not an actual return value or a usable pagination token.
    shared_ptr<string> nextToken_ {};
    // The request ID. Provide this value when troubleshooting issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
