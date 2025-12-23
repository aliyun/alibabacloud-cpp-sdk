// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWQUERYSTATUSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWQUERYSTATUSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DescribeSlowQueryStatusResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowQueryStatusResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(appGroupId, appGroupId_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowQueryStatusResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(appGroupId, appGroupId_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    DescribeSlowQueryStatusResponseBodyResult() = default ;
    DescribeSlowQueryStatusResponseBodyResult(const DescribeSlowQueryStatusResponseBodyResult &) = default ;
    DescribeSlowQueryStatusResponseBodyResult(DescribeSlowQueryStatusResponseBodyResult &&) = default ;
    DescribeSlowQueryStatusResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowQueryStatusResponseBodyResult() = default ;
    DescribeSlowQueryStatusResponseBodyResult& operator=(const DescribeSlowQueryStatusResponseBodyResult &) = default ;
    DescribeSlowQueryStatusResponseBodyResult& operator=(DescribeSlowQueryStatusResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appGroupId_ == nullptr
        && return this->region_ == nullptr && return this->status_ == nullptr; };
    // appGroupId Field Functions 
    bool hasAppGroupId() const { return this->appGroupId_ != nullptr;};
    void deleteAppGroupId() { this->appGroupId_ = nullptr;};
    inline string appGroupId() const { DARABONBA_PTR_GET_DEFAULT(appGroupId_, "") };
    inline DescribeSlowQueryStatusResponseBodyResult& setAppGroupId(string appGroupId) { DARABONBA_PTR_SET_VALUE(appGroupId_, appGroupId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeSlowQueryStatusResponseBodyResult& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSlowQueryStatusResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appGroupId_ = nullptr;
    // The network type of the slow query optimization service. Valid values:
    // 
    // *   outer: the Internet
    // *   internal: the internal network
    std::shared_ptr<string> region_ = nullptr;
    // The status of the slow query optimization service. Valid values:
    // 
    // *   enabled
    // *   disabled
    // *   n/a
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
