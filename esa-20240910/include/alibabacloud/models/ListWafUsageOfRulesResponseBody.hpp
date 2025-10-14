// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFUSAGEOFRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFUSAGEOFRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWafUsageOfRulesResponseBodySites.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafUsageOfRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafUsageOfRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BatchConfigUsage, batchConfigUsage_);
      DARABONBA_PTR_TO_JSON(InstanceUsage, instanceUsage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sites, sites_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafUsageOfRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchConfigUsage, batchConfigUsage_);
      DARABONBA_PTR_FROM_JSON(InstanceUsage, instanceUsage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sites, sites_);
    };
    ListWafUsageOfRulesResponseBody() = default ;
    ListWafUsageOfRulesResponseBody(const ListWafUsageOfRulesResponseBody &) = default ;
    ListWafUsageOfRulesResponseBody(ListWafUsageOfRulesResponseBody &&) = default ;
    ListWafUsageOfRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafUsageOfRulesResponseBody() = default ;
    ListWafUsageOfRulesResponseBody& operator=(const ListWafUsageOfRulesResponseBody &) = default ;
    ListWafUsageOfRulesResponseBody& operator=(ListWafUsageOfRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchConfigUsage_ == nullptr
        && return this->instanceUsage_ == nullptr && return this->requestId_ == nullptr && return this->sites_ == nullptr; };
    // batchConfigUsage Field Functions 
    bool hasBatchConfigUsage() const { return this->batchConfigUsage_ != nullptr;};
    void deleteBatchConfigUsage() { this->batchConfigUsage_ = nullptr;};
    inline int64_t batchConfigUsage() const { DARABONBA_PTR_GET_DEFAULT(batchConfigUsage_, 0L) };
    inline ListWafUsageOfRulesResponseBody& setBatchConfigUsage(int64_t batchConfigUsage) { DARABONBA_PTR_SET_VALUE(batchConfigUsage_, batchConfigUsage) };


    // instanceUsage Field Functions 
    bool hasInstanceUsage() const { return this->instanceUsage_ != nullptr;};
    void deleteInstanceUsage() { this->instanceUsage_ = nullptr;};
    inline int64_t instanceUsage() const { DARABONBA_PTR_GET_DEFAULT(instanceUsage_, 0L) };
    inline ListWafUsageOfRulesResponseBody& setInstanceUsage(int64_t instanceUsage) { DARABONBA_PTR_SET_VALUE(instanceUsage_, instanceUsage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWafUsageOfRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sites Field Functions 
    bool hasSites() const { return this->sites_ != nullptr;};
    void deleteSites() { this->sites_ = nullptr;};
    inline const vector<ListWafUsageOfRulesResponseBodySites> & sites() const { DARABONBA_PTR_GET_CONST(sites_, vector<ListWafUsageOfRulesResponseBodySites>) };
    inline vector<ListWafUsageOfRulesResponseBodySites> sites() { DARABONBA_PTR_GET(sites_, vector<ListWafUsageOfRulesResponseBodySites>) };
    inline ListWafUsageOfRulesResponseBody& setSites(const vector<ListWafUsageOfRulesResponseBodySites> & sites) { DARABONBA_PTR_SET_VALUE(sites_, sites) };
    inline ListWafUsageOfRulesResponseBody& setSites(vector<ListWafUsageOfRulesResponseBodySites> && sites) { DARABONBA_PTR_SET_RVALUE(sites_, sites) };


  protected:
    std::shared_ptr<int64_t> batchConfigUsage_ = nullptr;
    std::shared_ptr<int64_t> instanceUsage_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // List of site usage.
    std::shared_ptr<vector<ListWafUsageOfRulesResponseBodySites>> sites_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
