// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKCOUNTSTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKCOUNTSTATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckCountStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckCountStatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(StatisticType, statisticType_);
      DARABONBA_PTR_TO_JSON(TaskSources, taskSources_);
      DARABONBA_PTR_TO_JSON(Vendors, vendors_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckCountStatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(StatisticType, statisticType_);
      DARABONBA_PTR_FROM_JSON(TaskSources, taskSources_);
      DARABONBA_PTR_FROM_JSON(Vendors, vendors_);
    };
    GetCheckCountStatisticRequest() = default ;
    GetCheckCountStatisticRequest(const GetCheckCountStatisticRequest &) = default ;
    GetCheckCountStatisticRequest(GetCheckCountStatisticRequest &&) = default ;
    GetCheckCountStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckCountStatisticRequest() = default ;
    GetCheckCountStatisticRequest& operator=(const GetCheckCountStatisticRequest &) = default ;
    GetCheckCountStatisticRequest& operator=(GetCheckCountStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->statisticType_ == nullptr
        && return this->taskSources_ == nullptr && return this->vendors_ == nullptr; };
    // statisticType Field Functions 
    bool hasStatisticType() const { return this->statisticType_ != nullptr;};
    void deleteStatisticType() { this->statisticType_ = nullptr;};
    inline string statisticType() const { DARABONBA_PTR_GET_DEFAULT(statisticType_, "") };
    inline GetCheckCountStatisticRequest& setStatisticType(string statisticType) { DARABONBA_PTR_SET_VALUE(statisticType_, statisticType) };


    // taskSources Field Functions 
    bool hasTaskSources() const { return this->taskSources_ != nullptr;};
    void deleteTaskSources() { this->taskSources_ = nullptr;};
    inline const vector<string> & taskSources() const { DARABONBA_PTR_GET_CONST(taskSources_, vector<string>) };
    inline vector<string> taskSources() { DARABONBA_PTR_GET(taskSources_, vector<string>) };
    inline GetCheckCountStatisticRequest& setTaskSources(const vector<string> & taskSources) { DARABONBA_PTR_SET_VALUE(taskSources_, taskSources) };
    inline GetCheckCountStatisticRequest& setTaskSources(vector<string> && taskSources) { DARABONBA_PTR_SET_RVALUE(taskSources_, taskSources) };


    // vendors Field Functions 
    bool hasVendors() const { return this->vendors_ != nullptr;};
    void deleteVendors() { this->vendors_ = nullptr;};
    inline const vector<string> & vendors() const { DARABONBA_PTR_GET_CONST(vendors_, vector<string>) };
    inline vector<string> vendors() { DARABONBA_PTR_GET(vendors_, vector<string>) };
    inline GetCheckCountStatisticRequest& setVendors(const vector<string> & vendors) { DARABONBA_PTR_SET_VALUE(vendors_, vendors) };
    inline GetCheckCountStatisticRequest& setVendors(vector<string> && vendors) { DARABONBA_PTR_SET_RVALUE(vendors_, vendors) };


  protected:
    // The type of the statistics. Valid values:
    // 
    // *   **user**: the top five users that are granted excessive permissions.
    // *   **role**: the top five roles that are granted excessive permissions.
    // *   **instance**: the top five cloud services on which risks are detected.
    // *   **host**: the top five servers on which baseline risks are detected.
    std::shared_ptr<string> statisticType_ = nullptr;
    std::shared_ptr<vector<string>> taskSources_ = nullptr;
    // The cloud service providers.
    std::shared_ptr<vector<string>> vendors_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
