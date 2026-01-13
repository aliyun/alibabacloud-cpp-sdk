// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICECONFIGRESULT_HPP_
#define ALIBABACLOUD_MODELS_SERVICECONFIGRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class ServiceConfigResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ServiceConfigResult& obj) { 
      DARABONBA_PTR_TO_JSON(poiSearchTotalQuota, poiSearchTotalQuota_);
      DARABONBA_PTR_TO_JSON(poiSearchUsedQuota, poiSearchUsedQuota_);
      DARABONBA_PTR_TO_JSON(searchTotalQuota, searchTotalQuota_);
      DARABONBA_PTR_TO_JSON(searchUsedQuota, searchUsedQuota_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ServiceConfigResult& obj) { 
      DARABONBA_PTR_FROM_JSON(poiSearchTotalQuota, poiSearchTotalQuota_);
      DARABONBA_PTR_FROM_JSON(poiSearchUsedQuota, poiSearchUsedQuota_);
      DARABONBA_PTR_FROM_JSON(searchTotalQuota, searchTotalQuota_);
      DARABONBA_PTR_FROM_JSON(searchUsedQuota, searchUsedQuota_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ServiceConfigResult() = default ;
    ServiceConfigResult(const ServiceConfigResult &) = default ;
    ServiceConfigResult(ServiceConfigResult &&) = default ;
    ServiceConfigResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ServiceConfigResult() = default ;
    ServiceConfigResult& operator=(const ServiceConfigResult &) = default ;
    ServiceConfigResult& operator=(ServiceConfigResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->poiSearchTotalQuota_ == nullptr
        && this->poiSearchUsedQuota_ == nullptr && this->searchTotalQuota_ == nullptr && this->searchUsedQuota_ == nullptr && this->status_ == nullptr; };
    // poiSearchTotalQuota Field Functions 
    bool hasPoiSearchTotalQuota() const { return this->poiSearchTotalQuota_ != nullptr;};
    void deletePoiSearchTotalQuota() { this->poiSearchTotalQuota_ = nullptr;};
    inline string getPoiSearchTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(poiSearchTotalQuota_, "") };
    inline ServiceConfigResult& setPoiSearchTotalQuota(string poiSearchTotalQuota) { DARABONBA_PTR_SET_VALUE(poiSearchTotalQuota_, poiSearchTotalQuota) };


    // poiSearchUsedQuota Field Functions 
    bool hasPoiSearchUsedQuota() const { return this->poiSearchUsedQuota_ != nullptr;};
    void deletePoiSearchUsedQuota() { this->poiSearchUsedQuota_ = nullptr;};
    inline string getPoiSearchUsedQuota() const { DARABONBA_PTR_GET_DEFAULT(poiSearchUsedQuota_, "") };
    inline ServiceConfigResult& setPoiSearchUsedQuota(string poiSearchUsedQuota) { DARABONBA_PTR_SET_VALUE(poiSearchUsedQuota_, poiSearchUsedQuota) };


    // searchTotalQuota Field Functions 
    bool hasSearchTotalQuota() const { return this->searchTotalQuota_ != nullptr;};
    void deleteSearchTotalQuota() { this->searchTotalQuota_ = nullptr;};
    inline string getSearchTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(searchTotalQuota_, "") };
    inline ServiceConfigResult& setSearchTotalQuota(string searchTotalQuota) { DARABONBA_PTR_SET_VALUE(searchTotalQuota_, searchTotalQuota) };


    // searchUsedQuota Field Functions 
    bool hasSearchUsedQuota() const { return this->searchUsedQuota_ != nullptr;};
    void deleteSearchUsedQuota() { this->searchUsedQuota_ = nullptr;};
    inline string getSearchUsedQuota() const { DARABONBA_PTR_GET_DEFAULT(searchUsedQuota_, "") };
    inline ServiceConfigResult& setSearchUsedQuota(string searchUsedQuota) { DARABONBA_PTR_SET_VALUE(searchUsedQuota_, searchUsedQuota) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ServiceConfigResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> poiSearchTotalQuota_ {};
    shared_ptr<string> poiSearchUsedQuota_ {};
    shared_ptr<string> searchTotalQuota_ {};
    shared_ptr<string> searchUsedQuota_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
