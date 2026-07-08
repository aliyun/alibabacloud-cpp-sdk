// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPPLUGINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPPLUGINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppPluginsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppPluginsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppPluginsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
    };
    ListAppPluginsRequest() = default ;
    ListAppPluginsRequest(const ListAppPluginsRequest &) = default ;
    ListAppPluginsRequest(ListAppPluginsRequest &&) = default ;
    ListAppPluginsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppPluginsRequest() = default ;
    ListAppPluginsRequest& operator=(const ListAppPluginsRequest &) = default ;
    ListAppPluginsRequest& operator=(ListAppPluginsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->phase_ == nullptr && this->platform_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline ListAppPluginsRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAppPluginsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAppPluginsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline ListAppPluginsRequest& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ListAppPluginsRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


  protected:
    // The business ID of the application instance.
    shared_ptr<string> bizId_ {};
    // The number of entries per query.
    // 
    // Valid values: 10 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. This parameter is empty if no more results are available.
    shared_ptr<string> nextToken_ {};
    // The status of the Dataset Accelerator instance. Valid values:
    // - Created: init.
    // - Running: running.
    // - Stopped: stopped.
    shared_ptr<string> phase_ {};
    // The platform.
    shared_ptr<string> platform_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
