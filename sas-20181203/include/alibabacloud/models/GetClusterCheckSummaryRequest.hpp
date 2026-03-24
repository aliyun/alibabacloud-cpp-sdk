// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERCHECKSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERCHECKSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClusterCheckSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterCheckSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterCheckSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    GetClusterCheckSummaryRequest() = default ;
    GetClusterCheckSummaryRequest(const GetClusterCheckSummaryRequest &) = default ;
    GetClusterCheckSummaryRequest(GetClusterCheckSummaryRequest &&) = default ;
    GetClusterCheckSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterCheckSummaryRequest() = default ;
    GetClusterCheckSummaryRequest& operator=(const GetClusterCheckSummaryRequest &) = default ;
    GetClusterCheckSummaryRequest& operator=(GetClusterCheckSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetClusterCheckSummaryRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // ID of the queried cluster
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
