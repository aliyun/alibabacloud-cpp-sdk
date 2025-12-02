// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCALLBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCALLBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class QueryCallbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCallbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckForOss, checkForOss_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCallbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckForOss, checkForOss_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    QueryCallbackRequest() = default ;
    QueryCallbackRequest(const QueryCallbackRequest &) = default ;
    QueryCallbackRequest(QueryCallbackRequest &&) = default ;
    QueryCallbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCallbackRequest() = default ;
    QueryCallbackRequest& operator=(const QueryCallbackRequest &) = default ;
    QueryCallbackRequest& operator=(QueryCallbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkForOss_ == nullptr
        && return this->id_ == nullptr && return this->regionId_ == nullptr; };
    // checkForOss Field Functions 
    bool hasCheckForOss() const { return this->checkForOss_ != nullptr;};
    void deleteCheckForOss() { this->checkForOss_ = nullptr;};
    inline bool checkForOss() const { DARABONBA_PTR_GET_DEFAULT(checkForOss_, false) };
    inline QueryCallbackRequest& setCheckForOss(bool checkForOss) { DARABONBA_PTR_SET_VALUE(checkForOss_, checkForOss) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryCallbackRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryCallbackRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Query data under the OSS detection task.
    std::shared_ptr<bool> checkForOss_ = nullptr;
    // Primary key ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
