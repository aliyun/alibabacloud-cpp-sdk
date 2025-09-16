// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRUNTIMEINFORESPONSEBODYRESULTQUERYNODECONFIGSTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRUNTIMEINFORESPONSEBODYRESULTQUERYNODECONFIGSTATUSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(configUpdateTime, configUpdateTime_);
      DARABONBA_PTR_TO_JSON(donePercent, donePercent_);
      DARABONBA_PTR_TO_JSON(doneSize, doneSize_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(totalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(configUpdateTime, configUpdateTime_);
      DARABONBA_PTR_FROM_JSON(donePercent, donePercent_);
      DARABONBA_PTR_FROM_JSON(doneSize, doneSize_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(totalSize, totalSize_);
    };
    GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList() = default ;
    GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList(const GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList &) = default ;
    GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList(GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList &&) = default ;
    GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList() = default ;
    GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList& operator=(const GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList &) = default ;
    GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList& operator=(GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configUpdateTime_ != nullptr
        && this->donePercent_ != nullptr && this->doneSize_ != nullptr && this->name_ != nullptr && this->totalSize_ != nullptr; };
    // configUpdateTime Field Functions 
    bool hasConfigUpdateTime() const { return this->configUpdateTime_ != nullptr;};
    void deleteConfigUpdateTime() { this->configUpdateTime_ = nullptr;};
    inline string configUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(configUpdateTime_, "") };
    inline GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList& setConfigUpdateTime(string configUpdateTime) { DARABONBA_PTR_SET_VALUE(configUpdateTime_, configUpdateTime) };


    // donePercent Field Functions 
    bool hasDonePercent() const { return this->donePercent_ != nullptr;};
    void deleteDonePercent() { this->donePercent_ = nullptr;};
    inline int32_t donePercent() const { DARABONBA_PTR_GET_DEFAULT(donePercent_, 0) };
    inline GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList& setDonePercent(int32_t donePercent) { DARABONBA_PTR_SET_VALUE(donePercent_, donePercent) };


    // doneSize Field Functions 
    bool hasDoneSize() const { return this->doneSize_ != nullptr;};
    void deleteDoneSize() { this->doneSize_ = nullptr;};
    inline int32_t doneSize() const { DARABONBA_PTR_GET_DEFAULT(doneSize_, 0) };
    inline GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList& setDoneSize(int32_t doneSize) { DARABONBA_PTR_SET_VALUE(doneSize_, doneSize) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The time when the configuration was last updated.
    std::shared_ptr<string> configUpdateTime_ = nullptr;
    // The process progress of QRS workers in the cluster. Unit: percentage.
    std::shared_ptr<int32_t> donePercent_ = nullptr;
    // The number of processed QRS workers in the cluster.
    std::shared_ptr<int32_t> doneSize_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> name_ = nullptr;
    // The total number of QRS workers in the cluster.
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
