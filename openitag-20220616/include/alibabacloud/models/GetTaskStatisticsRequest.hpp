// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTASKSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class GetTaskStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(StatType, statType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(StatType, statType_);
    };
    GetTaskStatisticsRequest() = default ;
    GetTaskStatisticsRequest(const GetTaskStatisticsRequest &) = default ;
    GetTaskStatisticsRequest(GetTaskStatisticsRequest &&) = default ;
    GetTaskStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskStatisticsRequest() = default ;
    GetTaskStatisticsRequest& operator=(const GetTaskStatisticsRequest &) = default ;
    GetTaskStatisticsRequest& operator=(GetTaskStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->statType_ == nullptr; };
    // statType Field Functions 
    bool hasStatType() const { return this->statType_ != nullptr;};
    void deleteStatType() { this->statType_ = nullptr;};
    inline string getStatType() const { DARABONBA_PTR_GET_DEFAULT(statType_, "") };
    inline GetTaskStatisticsRequest& setStatType(string statType) { DARABONBA_PTR_SET_VALUE(statType_, statType) };


  protected:
    // Statistics Type. Valid values:
    // - OPERATORCELL: Operation cell.
    // - ITEM: Single item.
    shared_ptr<string> statType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
