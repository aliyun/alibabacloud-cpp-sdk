// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCAVAILABLEDBCLUSTERLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCAVAILABLEDBCLUSTERLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeSyncAvailableDBClusterListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyncAvailableDBClusterListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SyncAvailableDBClusters, syncAvailableDBClusters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyncAvailableDBClusterListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SyncAvailableDBClusters, syncAvailableDBClusters_);
    };
    DescribeSyncAvailableDBClusterListResponseBody() = default ;
    DescribeSyncAvailableDBClusterListResponseBody(const DescribeSyncAvailableDBClusterListResponseBody &) = default ;
    DescribeSyncAvailableDBClusterListResponseBody(DescribeSyncAvailableDBClusterListResponseBody &&) = default ;
    DescribeSyncAvailableDBClusterListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyncAvailableDBClusterListResponseBody() = default ;
    DescribeSyncAvailableDBClusterListResponseBody& operator=(const DescribeSyncAvailableDBClusterListResponseBody &) = default ;
    DescribeSyncAvailableDBClusterListResponseBody& operator=(DescribeSyncAvailableDBClusterListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->syncAvailableDBClusters_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSyncAvailableDBClusterListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // syncAvailableDBClusters Field Functions 
    bool hasSyncAvailableDBClusters() const { return this->syncAvailableDBClusters_ != nullptr;};
    void deleteSyncAvailableDBClusters() { this->syncAvailableDBClusters_ = nullptr;};
    inline const vector<DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters> & syncAvailableDBClusters() const { DARABONBA_PTR_GET_CONST(syncAvailableDBClusters_, vector<DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters>) };
    inline vector<DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters> syncAvailableDBClusters() { DARABONBA_PTR_GET(syncAvailableDBClusters_, vector<DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters>) };
    inline DescribeSyncAvailableDBClusterListResponseBody& setSyncAvailableDBClusters(const vector<DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters> & syncAvailableDBClusters) { DARABONBA_PTR_SET_VALUE(syncAvailableDBClusters_, syncAvailableDBClusters) };
    inline DescribeSyncAvailableDBClusterListResponseBody& setSyncAvailableDBClusters(vector<DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters> && syncAvailableDBClusters) { DARABONBA_PTR_SET_RVALUE(syncAvailableDBClusters_, syncAvailableDBClusters) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried instances or clusters.
    std::shared_ptr<vector<DescribeSyncAvailableDBClusterListResponseBodySyncAvailableDBClusters>> syncAvailableDBClusters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
