// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGSETLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONFIGSETLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ConfigSetListResponseBodyConfigSets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ConfigSetListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigSetListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigSets, configSets_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCounts, totalCounts_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigSetListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigSets, configSets_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCounts, totalCounts_);
    };
    ConfigSetListResponseBody() = default ;
    ConfigSetListResponseBody(const ConfigSetListResponseBody &) = default ;
    ConfigSetListResponseBody(ConfigSetListResponseBody &&) = default ;
    ConfigSetListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigSetListResponseBody() = default ;
    ConfigSetListResponseBody& operator=(const ConfigSetListResponseBody &) = default ;
    ConfigSetListResponseBody& operator=(ConfigSetListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configSets_ == nullptr
        && return this->currentPage_ == nullptr && return this->hasMore_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCounts_ == nullptr; };
    // configSets Field Functions 
    bool hasConfigSets() const { return this->configSets_ != nullptr;};
    void deleteConfigSets() { this->configSets_ = nullptr;};
    inline const vector<ConfigSetListResponseBodyConfigSets> & configSets() const { DARABONBA_PTR_GET_CONST(configSets_, vector<ConfigSetListResponseBodyConfigSets>) };
    inline vector<ConfigSetListResponseBodyConfigSets> configSets() { DARABONBA_PTR_GET(configSets_, vector<ConfigSetListResponseBodyConfigSets>) };
    inline ConfigSetListResponseBody& setConfigSets(const vector<ConfigSetListResponseBodyConfigSets> & configSets) { DARABONBA_PTR_SET_VALUE(configSets_, configSets) };
    inline ConfigSetListResponseBody& setConfigSets(vector<ConfigSetListResponseBodyConfigSets> && configSets) { DARABONBA_PTR_SET_RVALUE(configSets_, configSets) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ConfigSetListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ConfigSetListResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ConfigSetListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ConfigSetListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCounts Field Functions 
    bool hasTotalCounts() const { return this->totalCounts_ != nullptr;};
    void deleteTotalCounts() { this->totalCounts_ = nullptr;};
    inline int32_t totalCounts() const { DARABONBA_PTR_GET_DEFAULT(totalCounts_, 0) };
    inline ConfigSetListResponseBody& setTotalCounts(int32_t totalCounts) { DARABONBA_PTR_SET_VALUE(totalCounts_, totalCounts) };


  protected:
    std::shared_ptr<vector<ConfigSetListResponseBodyConfigSets>> configSets_ = nullptr;
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<bool> hasMore_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCounts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
