// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRCVCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRCVCLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRCVClustersResponseBodyVClusters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ListRCVClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRCVClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VClusters, VClusters_);
    };
    friend void from_json(const Darabonba::Json& j, ListRCVClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VClusters, VClusters_);
    };
    ListRCVClustersResponseBody() = default ;
    ListRCVClustersResponseBody(const ListRCVClustersResponseBody &) = default ;
    ListRCVClustersResponseBody(ListRCVClustersResponseBody &&) = default ;
    ListRCVClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRCVClustersResponseBody() = default ;
    ListRCVClustersResponseBody& operator=(const ListRCVClustersResponseBody &) = default ;
    ListRCVClustersResponseBody& operator=(ListRCVClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->VClusters_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRCVClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // VClusters Field Functions 
    bool hasVClusters() const { return this->VClusters_ != nullptr;};
    void deleteVClusters() { this->VClusters_ = nullptr;};
    inline const vector<ListRCVClustersResponseBodyVClusters> & VClusters() const { DARABONBA_PTR_GET_CONST(VClusters_, vector<ListRCVClustersResponseBodyVClusters>) };
    inline vector<ListRCVClustersResponseBodyVClusters> VClusters() { DARABONBA_PTR_GET(VClusters_, vector<ListRCVClustersResponseBodyVClusters>) };
    inline ListRCVClustersResponseBody& setVClusters(const vector<ListRCVClustersResponseBodyVClusters> & VClusters) { DARABONBA_PTR_SET_VALUE(VClusters_, VClusters) };
    inline ListRCVClustersResponseBody& setVClusters(vector<ListRCVClustersResponseBodyVClusters> && VClusters) { DARABONBA_PTR_SET_RVALUE(VClusters_, VClusters) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListRCVClustersResponseBodyVClusters>> VClusters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
