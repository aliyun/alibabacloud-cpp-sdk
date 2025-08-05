// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEOVERVIEWRESPONSEBODYDATAGATEWAY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEOVERVIEWRESPONSEBODYDATAGATEWAY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetResourceOverviewResponseBodyDataGateway : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceOverviewResponseBodyDataGateway& obj) { 
      DARABONBA_PTR_TO_JSON(runningCount, runningCount_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceOverviewResponseBodyDataGateway& obj) { 
      DARABONBA_PTR_FROM_JSON(runningCount, runningCount_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    GetResourceOverviewResponseBodyDataGateway() = default ;
    GetResourceOverviewResponseBodyDataGateway(const GetResourceOverviewResponseBodyDataGateway &) = default ;
    GetResourceOverviewResponseBodyDataGateway(GetResourceOverviewResponseBodyDataGateway &&) = default ;
    GetResourceOverviewResponseBodyDataGateway(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceOverviewResponseBodyDataGateway() = default ;
    GetResourceOverviewResponseBodyDataGateway& operator=(const GetResourceOverviewResponseBodyDataGateway &) = default ;
    GetResourceOverviewResponseBodyDataGateway& operator=(GetResourceOverviewResponseBodyDataGateway &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->runningCount_ != nullptr
        && this->totalCount_ != nullptr; };
    // runningCount Field Functions 
    bool hasRunningCount() const { return this->runningCount_ != nullptr;};
    void deleteRunningCount() { this->runningCount_ = nullptr;};
    inline int64_t runningCount() const { DARABONBA_PTR_GET_DEFAULT(runningCount_, 0L) };
    inline GetResourceOverviewResponseBodyDataGateway& setRunningCount(int64_t runningCount) { DARABONBA_PTR_SET_VALUE(runningCount_, runningCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetResourceOverviewResponseBodyDataGateway& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Number of running gateways.
    std::shared_ptr<int64_t> runningCount_ = nullptr;
    // Number of gateway instances.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
