// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListServiceVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Versions, versions_);
    };
    ListServiceVersionsResponseBody() = default ;
    ListServiceVersionsResponseBody(const ListServiceVersionsResponseBody &) = default ;
    ListServiceVersionsResponseBody(ListServiceVersionsResponseBody &&) = default ;
    ListServiceVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceVersionsResponseBody() = default ;
    ListServiceVersionsResponseBody& operator=(const ListServiceVersionsResponseBody &) = default ;
    ListServiceVersionsResponseBody& operator=(ListServiceVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Versions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Versions& obj) { 
        DARABONBA_PTR_TO_JSON(BuildTime, buildTime_);
        DARABONBA_PTR_TO_JSON(ImageAvailable, imageAvailable_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(ServiceConfig, serviceConfig_);
        DARABONBA_PTR_TO_JSON(ServiceRunnable, serviceRunnable_);
      };
      friend void from_json(const Darabonba::Json& j, Versions& obj) { 
        DARABONBA_PTR_FROM_JSON(BuildTime, buildTime_);
        DARABONBA_PTR_FROM_JSON(ImageAvailable, imageAvailable_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(ServiceConfig, serviceConfig_);
        DARABONBA_PTR_FROM_JSON(ServiceRunnable, serviceRunnable_);
      };
      Versions() = default ;
      Versions(const Versions &) = default ;
      Versions(Versions &&) = default ;
      Versions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Versions() = default ;
      Versions& operator=(const Versions &) = default ;
      Versions& operator=(Versions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->buildTime_ == nullptr
        && this->imageAvailable_ == nullptr && this->imageId_ == nullptr && this->message_ == nullptr && this->serviceConfig_ == nullptr && this->serviceRunnable_ == nullptr; };
      // buildTime Field Functions 
      bool hasBuildTime() const { return this->buildTime_ != nullptr;};
      void deleteBuildTime() { this->buildTime_ = nullptr;};
      inline string getBuildTime() const { DARABONBA_PTR_GET_DEFAULT(buildTime_, "") };
      inline Versions& setBuildTime(string buildTime) { DARABONBA_PTR_SET_VALUE(buildTime_, buildTime) };


      // imageAvailable Field Functions 
      bool hasImageAvailable() const { return this->imageAvailable_ != nullptr;};
      void deleteImageAvailable() { this->imageAvailable_ = nullptr;};
      inline string getImageAvailable() const { DARABONBA_PTR_GET_DEFAULT(imageAvailable_, "") };
      inline Versions& setImageAvailable(string imageAvailable) { DARABONBA_PTR_SET_VALUE(imageAvailable_, imageAvailable) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline int32_t getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, 0) };
      inline Versions& setImageId(int32_t imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Versions& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // serviceConfig Field Functions 
      bool hasServiceConfig() const { return this->serviceConfig_ != nullptr;};
      void deleteServiceConfig() { this->serviceConfig_ = nullptr;};
      inline string getServiceConfig() const { DARABONBA_PTR_GET_DEFAULT(serviceConfig_, "") };
      inline Versions& setServiceConfig(string serviceConfig) { DARABONBA_PTR_SET_VALUE(serviceConfig_, serviceConfig) };


      // serviceRunnable Field Functions 
      bool hasServiceRunnable() const { return this->serviceRunnable_ != nullptr;};
      void deleteServiceRunnable() { this->serviceRunnable_ = nullptr;};
      inline string getServiceRunnable() const { DARABONBA_PTR_GET_DEFAULT(serviceRunnable_, "") };
      inline Versions& setServiceRunnable(string serviceRunnable) { DARABONBA_PTR_SET_VALUE(serviceRunnable_, serviceRunnable) };


    protected:
      // The time when the service version was created. The time is displayed in UTC.
      shared_ptr<string> buildTime_ {};
      // Indicates whether the image is available. Valid values:
      // 
      // *   true: The image is available.
      // *   false: The image is unavailable.
      // *   unknown: The availability of the image is unknown.
      shared_ptr<string> imageAvailable_ {};
      // The image ID.
      shared_ptr<int32_t> imageId_ {};
      // The returned message.
      shared_ptr<string> message_ {};
      // The service deployment configurations. This parameter is returned only if the service is deployed by using a custom image.
      shared_ptr<string> serviceConfig_ {};
      // Indicates whether Elastic Algorithm service (EAS) is activated. Valid values:
      // 
      // *   true: EAS is activated.
      // *   false: EAS is not activated.
      // *   unknown: The activation of EAS is unknown.
      shared_ptr<string> serviceRunnable_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->versions_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListServiceVersionsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListServiceVersionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListServiceVersionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<ListServiceVersionsResponseBody::Versions> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<ListServiceVersionsResponseBody::Versions>) };
    inline vector<ListServiceVersionsResponseBody::Versions> getVersions() { DARABONBA_PTR_GET(versions_, vector<ListServiceVersionsResponseBody::Versions>) };
    inline ListServiceVersionsResponseBody& setVersions(const vector<ListServiceVersionsResponseBody::Versions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline ListServiceVersionsResponseBody& setVersions(vector<ListServiceVersionsResponseBody::Versions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
    // The historical versions of the service.
    shared_ptr<vector<ListServiceVersionsResponseBody::Versions>> versions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
