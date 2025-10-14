// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORIGINPOOLSRESPONSEBODYORIGINPOOLS_HPP_
#define ALIBABACLOUD_MODELS_LISTORIGINPOOLSRESPONSEBODYORIGINPOOLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOriginPoolsResponseBodyOriginPoolsOrigins.hpp>
#include <alibabacloud/models/ListOriginPoolsResponseBodyOriginPoolsReferences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListOriginPoolsResponseBodyOriginPools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOriginPoolsResponseBodyOriginPools& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Origins, origins_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(ReferenceLBCount, referenceLBCount_);
      DARABONBA_PTR_TO_JSON(References, references_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOriginPoolsResponseBodyOriginPools& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Origins, origins_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(ReferenceLBCount, referenceLBCount_);
      DARABONBA_PTR_FROM_JSON(References, references_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    ListOriginPoolsResponseBodyOriginPools() = default ;
    ListOriginPoolsResponseBodyOriginPools(const ListOriginPoolsResponseBodyOriginPools &) = default ;
    ListOriginPoolsResponseBodyOriginPools(ListOriginPoolsResponseBodyOriginPools &&) = default ;
    ListOriginPoolsResponseBodyOriginPools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOriginPoolsResponseBodyOriginPools() = default ;
    ListOriginPoolsResponseBodyOriginPools& operator=(const ListOriginPoolsResponseBodyOriginPools &) = default ;
    ListOriginPoolsResponseBodyOriginPools& operator=(ListOriginPoolsResponseBodyOriginPools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->origins_ == nullptr && return this->recordName_ == nullptr && return this->referenceLBCount_ == nullptr
        && return this->references_ == nullptr && return this->siteId_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ListOriginPoolsResponseBodyOriginPools& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListOriginPoolsResponseBodyOriginPools& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListOriginPoolsResponseBodyOriginPools& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // origins Field Functions 
    bool hasOrigins() const { return this->origins_ != nullptr;};
    void deleteOrigins() { this->origins_ = nullptr;};
    inline const vector<Models::ListOriginPoolsResponseBodyOriginPoolsOrigins> & origins() const { DARABONBA_PTR_GET_CONST(origins_, vector<Models::ListOriginPoolsResponseBodyOriginPoolsOrigins>) };
    inline vector<Models::ListOriginPoolsResponseBodyOriginPoolsOrigins> origins() { DARABONBA_PTR_GET(origins_, vector<Models::ListOriginPoolsResponseBodyOriginPoolsOrigins>) };
    inline ListOriginPoolsResponseBodyOriginPools& setOrigins(const vector<Models::ListOriginPoolsResponseBodyOriginPoolsOrigins> & origins) { DARABONBA_PTR_SET_VALUE(origins_, origins) };
    inline ListOriginPoolsResponseBodyOriginPools& setOrigins(vector<Models::ListOriginPoolsResponseBodyOriginPoolsOrigins> && origins) { DARABONBA_PTR_SET_RVALUE(origins_, origins) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string recordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline ListOriginPoolsResponseBodyOriginPools& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // referenceLBCount Field Functions 
    bool hasReferenceLBCount() const { return this->referenceLBCount_ != nullptr;};
    void deleteReferenceLBCount() { this->referenceLBCount_ = nullptr;};
    inline int32_t referenceLBCount() const { DARABONBA_PTR_GET_DEFAULT(referenceLBCount_, 0) };
    inline ListOriginPoolsResponseBodyOriginPools& setReferenceLBCount(int32_t referenceLBCount) { DARABONBA_PTR_SET_VALUE(referenceLBCount_, referenceLBCount) };


    // references Field Functions 
    bool hasReferences() const { return this->references_ != nullptr;};
    void deleteReferences() { this->references_ = nullptr;};
    inline const Models::ListOriginPoolsResponseBodyOriginPoolsReferences & references() const { DARABONBA_PTR_GET_CONST(references_, Models::ListOriginPoolsResponseBodyOriginPoolsReferences) };
    inline Models::ListOriginPoolsResponseBodyOriginPoolsReferences references() { DARABONBA_PTR_GET(references_, Models::ListOriginPoolsResponseBodyOriginPoolsReferences) };
    inline ListOriginPoolsResponseBodyOriginPools& setReferences(const Models::ListOriginPoolsResponseBodyOriginPoolsReferences & references) { DARABONBA_PTR_SET_VALUE(references_, references) };
    inline ListOriginPoolsResponseBodyOriginPools& setReferences(Models::ListOriginPoolsResponseBodyOriginPoolsReferences && references) { DARABONBA_PTR_SET_RVALUE(references_, references) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListOriginPoolsResponseBodyOriginPools& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // Whether the origin pool is enabled:
    // 
    // - true: Enabled;
    // - false: Disabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // ID of the origin pool.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Name of the origin pool, unique within a site.
    std::shared_ptr<string> name_ = nullptr;
    // Information about the origins added to the origin pool.
    std::shared_ptr<vector<Models::ListOriginPoolsResponseBodyOriginPoolsOrigins>> origins_ = nullptr;
    // Domain name assigned to the origin pool, which can be used as the origin address for records under the site.
    std::shared_ptr<string> recordName_ = nullptr;
    // Number of load balancers that reference this origin pool.
    std::shared_ptr<int32_t> referenceLBCount_ = nullptr;
    // Reference information for the origin pool. The origin pool is considered referenced when it is configured in a load balancer or set as the origin for a record.
    std::shared_ptr<Models::ListOriginPoolsResponseBodyOriginPoolsReferences> references_ = nullptr;
    // ID of the site to which the origin pool belongs.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
