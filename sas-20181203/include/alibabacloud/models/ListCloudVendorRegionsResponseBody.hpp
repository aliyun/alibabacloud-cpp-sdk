// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDVENDORREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDVENDORREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCloudVendorRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudVendorRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudVendorRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCloudVendorRegionsResponseBody() = default ;
    ListCloudVendorRegionsResponseBody(const ListCloudVendorRegionsResponseBody &) = default ;
    ListCloudVendorRegionsResponseBody(ListCloudVendorRegionsResponseBody &&) = default ;
    ListCloudVendorRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudVendorRegionsResponseBody() = default ;
    ListCloudVendorRegionsResponseBody& operator=(const ListCloudVendorRegionsResponseBody &) = default ;
    ListCloudVendorRegionsResponseBody& operator=(ListCloudVendorRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Area, area_);
        DARABONBA_PTR_TO_JSON(Disable, disable_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Selected, selected_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Area, area_);
        DARABONBA_PTR_FROM_JSON(Disable, disable_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Selected, selected_);
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
      virtual bool empty() const override { return this->area_ == nullptr
        && this->disable_ == nullptr && this->regionId_ == nullptr && this->selected_ == nullptr; };
      // area Field Functions 
      bool hasArea() const { return this->area_ != nullptr;};
      void deleteArea() { this->area_ = nullptr;};
      inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
      inline Data& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


      // disable Field Functions 
      bool hasDisable() const { return this->disable_ != nullptr;};
      void deleteDisable() { this->disable_ = nullptr;};
      inline int32_t getDisable() const { DARABONBA_PTR_GET_DEFAULT(disable_, 0) };
      inline Data& setDisable(int32_t disable) { DARABONBA_PTR_SET_VALUE(disable_, disable) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // selected Field Functions 
      bool hasSelected() const { return this->selected_ != nullptr;};
      void deleteSelected() { this->selected_ = nullptr;};
      inline int32_t getSelected() const { DARABONBA_PTR_GET_DEFAULT(selected_, 0) };
      inline Data& setSelected(int32_t selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


    protected:
      // The area to which the region belongs. The valid values vary based on the value of the Vendor parameter.
      // 
      // *   Valid values if **Vendor** is set to Tencent:
      // *   **cn**: China
      // *   **southeast_asia**: Southeast Asia Pacific
      // *   **northeast_asia**: Northeast Asia Pacific
      // *   **southern_asia**: South Asia Pacific
      // *   **north_America**: North America
      // *   **south_America**: South America
      // *   **western_America**: Western United States
      // *   **eastern_America**: Eastern United States
      // *   **european**: Europe
      // *   Valid values if **Vendor** is set to HUAWEICLOUD:
      // *   **cn**: China
      // *   **africa**: Africa
      // *   **latin_america**: Latin America
      // *   **asia**: Asia Pacific
      // *   Valid values if **Vendor** is set to Azure:
      // *   **middle_east**: Middle East
      // *   **south_america**: South America
      // *   **canada**: Canada
      // *   **asia-pacific**: Asia Pacific
      // *   **europe**: Europe
      // *   **africa**: Africa
      // *   **us**: United States
      // *   **other**: other regions
      // *   Valid values if **Vendor** is set to AWS:
      // *   **cn**: China
      // *   **us**: United States
      // *   **eu**: Europe
      // *   **asia**: Asia Pacific
      // *   **south_america**: South America
      // *   **me**: Middle East
      // *   **ca**: Canada
      // *   **af**: Africa
      shared_ptr<string> area_ {};
      // Indicates whether the region is configured as a synchronization region on another site. Valid values:
      // 
      // *   **0**: The region is not configured as a synchronization region on another site.
      // *   **1**: The region is configured as a synchronization region on another site.
      shared_ptr<int32_t> disable_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // Indicates whether the region is configured as a synchronization region on this site. Valid values:
      // 
      // *   **0**: The region is not configured as a synchronization region on this site.
      // *   **1**: The region is configured as a synchronization region on this site.
      shared_ptr<int32_t> selected_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCloudVendorRegionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListCloudVendorRegionsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListCloudVendorRegionsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListCloudVendorRegionsResponseBody::Data>) };
    inline vector<ListCloudVendorRegionsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListCloudVendorRegionsResponseBody::Data>) };
    inline ListCloudVendorRegionsResponseBody& setData(const vector<ListCloudVendorRegionsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCloudVendorRegionsResponseBody& setData(vector<ListCloudVendorRegionsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListCloudVendorRegionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCloudVendorRegionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudVendorRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCloudVendorRegionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The return code.
    shared_ptr<string> code_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> count_ {};
    // The regions that the service provider supports.
    shared_ptr<vector<ListCloudVendorRegionsResponseBody::Data>> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
