// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMEVENTDETAILRESPONSEBODYDATAATTCKSTAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMEVENTDETAILRESPONSEBODYDATAATTCKSTAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeCloudSiemEventDetailResponseBodyDataAttckStages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudSiemEventDetailResponseBodyDataAttckStages& obj) { 
      DARABONBA_PTR_TO_JSON(AlertNum, alertNum_);
      DARABONBA_PTR_TO_JSON(TacticId, tacticId_);
      DARABONBA_PTR_TO_JSON(TacticName, tacticName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudSiemEventDetailResponseBodyDataAttckStages& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertNum, alertNum_);
      DARABONBA_PTR_FROM_JSON(TacticId, tacticId_);
      DARABONBA_PTR_FROM_JSON(TacticName, tacticName_);
    };
    DescribeCloudSiemEventDetailResponseBodyDataAttckStages() = default ;
    DescribeCloudSiemEventDetailResponseBodyDataAttckStages(const DescribeCloudSiemEventDetailResponseBodyDataAttckStages &) = default ;
    DescribeCloudSiemEventDetailResponseBodyDataAttckStages(DescribeCloudSiemEventDetailResponseBodyDataAttckStages &&) = default ;
    DescribeCloudSiemEventDetailResponseBodyDataAttckStages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudSiemEventDetailResponseBodyDataAttckStages() = default ;
    DescribeCloudSiemEventDetailResponseBodyDataAttckStages& operator=(const DescribeCloudSiemEventDetailResponseBodyDataAttckStages &) = default ;
    DescribeCloudSiemEventDetailResponseBodyDataAttckStages& operator=(DescribeCloudSiemEventDetailResponseBodyDataAttckStages &&) = default ;
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
    inline DescribeCloudSiemEventDetailResponseBodyDataAttckStages& setAlertNum(int32_t alertNum) { DARABONBA_PTR_SET_VALUE(alertNum_, alertNum) };


    // tacticId Field Functions 
    bool hasTacticId() const { return this->tacticId_ != nullptr;};
    void deleteTacticId() { this->tacticId_ = nullptr;};
    inline string tacticId() const { DARABONBA_PTR_GET_DEFAULT(tacticId_, "") };
    inline DescribeCloudSiemEventDetailResponseBodyDataAttckStages& setTacticId(string tacticId) { DARABONBA_PTR_SET_VALUE(tacticId_, tacticId) };


    // tacticName Field Functions 
    bool hasTacticName() const { return this->tacticName_ != nullptr;};
    void deleteTacticName() { this->tacticName_ = nullptr;};
    inline string tacticName() const { DARABONBA_PTR_GET_DEFAULT(tacticName_, "") };
    inline DescribeCloudSiemEventDetailResponseBodyDataAttckStages& setTacticName(string tacticName) { DARABONBA_PTR_SET_VALUE(tacticName_, tacticName) };


  protected:
    std::shared_ptr<int32_t> alertNum_ = nullptr;
    std::shared_ptr<string> tacticId_ = nullptr;
    std::shared_ptr<string> tacticName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
