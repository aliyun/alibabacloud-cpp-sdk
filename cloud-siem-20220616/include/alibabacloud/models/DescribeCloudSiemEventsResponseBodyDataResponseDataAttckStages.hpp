// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMEVENTSRESPONSEBODYDATARESPONSEDATAATTCKSTAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMEVENTSRESPONSEBODYDATARESPONSEDATAATTCKSTAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages& obj) { 
      DARABONBA_PTR_TO_JSON(AlertNum, alertNum_);
      DARABONBA_PTR_TO_JSON(TacticId, tacticId_);
      DARABONBA_PTR_TO_JSON(TacticName, tacticName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertNum, alertNum_);
      DARABONBA_PTR_FROM_JSON(TacticId, tacticId_);
      DARABONBA_PTR_FROM_JSON(TacticName, tacticName_);
    };
    DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages() = default ;
    DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages(const DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages &) = default ;
    DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages(DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages &&) = default ;
    DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages() = default ;
    DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages& operator=(const DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages &) = default ;
    DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages& operator=(DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertNum_ != nullptr
        && this->tacticId_ != nullptr && this->tacticName_ != nullptr; };
    // alertNum Field Functions 
    bool hasAlertNum() const { return this->alertNum_ != nullptr;};
    void deleteAlertNum() { this->alertNum_ = nullptr;};
    inline int32_t alertNum() const { DARABONBA_PTR_GET_DEFAULT(alertNum_, 0) };
    inline DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages& setAlertNum(int32_t alertNum) { DARABONBA_PTR_SET_VALUE(alertNum_, alertNum) };


    // tacticId Field Functions 
    bool hasTacticId() const { return this->tacticId_ != nullptr;};
    void deleteTacticId() { this->tacticId_ = nullptr;};
    inline string tacticId() const { DARABONBA_PTR_GET_DEFAULT(tacticId_, "") };
    inline DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages& setTacticId(string tacticId) { DARABONBA_PTR_SET_VALUE(tacticId_, tacticId) };


    // tacticName Field Functions 
    bool hasTacticName() const { return this->tacticName_ != nullptr;};
    void deleteTacticName() { this->tacticName_ = nullptr;};
    inline string tacticName() const { DARABONBA_PTR_GET_DEFAULT(tacticName_, "") };
    inline DescribeCloudSiemEventsResponseBodyDataResponseDataAttckStages& setTacticName(string tacticName) { DARABONBA_PTR_SET_VALUE(tacticName_, tacticName) };


  protected:
    std::shared_ptr<int32_t> alertNum_ = nullptr;
    std::shared_ptr<string> tacticId_ = nullptr;
    std::shared_ptr<string> tacticName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
