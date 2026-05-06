// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPERFORMANCEDATACOLLECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPERFORMANCEDATACOLLECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdatePerformanceDataCollectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePerformanceDataCollectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePerformanceDataCollectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdatePerformanceDataCollectionRequest() = default ;
    UpdatePerformanceDataCollectionRequest(const UpdatePerformanceDataCollectionRequest &) = default ;
    UpdatePerformanceDataCollectionRequest(UpdatePerformanceDataCollectionRequest &&) = default ;
    UpdatePerformanceDataCollectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePerformanceDataCollectionRequest() = default ;
    UpdatePerformanceDataCollectionRequest& operator=(const UpdatePerformanceDataCollectionRequest &) = default ;
    UpdatePerformanceDataCollectionRequest& operator=(UpdatePerformanceDataCollectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && this->siteId_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline UpdatePerformanceDataCollectionRequest& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdatePerformanceDataCollectionRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // This parameter is required.
    shared_ptr<string> enable_ {};
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
