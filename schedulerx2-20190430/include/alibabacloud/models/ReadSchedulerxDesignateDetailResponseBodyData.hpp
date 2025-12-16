// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READSCHEDULERXDESIGNATEDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_READSCHEDULERXDESIGNATEDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ReadSchedulerxDesignateDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadSchedulerxDesignateDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DesignateDetailVos, designateDetailVos_);
    };
    friend void from_json(const Darabonba::Json& j, ReadSchedulerxDesignateDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DesignateDetailVos, designateDetailVos_);
    };
    ReadSchedulerxDesignateDetailResponseBodyData() = default ;
    ReadSchedulerxDesignateDetailResponseBodyData(const ReadSchedulerxDesignateDetailResponseBodyData &) = default ;
    ReadSchedulerxDesignateDetailResponseBodyData(ReadSchedulerxDesignateDetailResponseBodyData &&) = default ;
    ReadSchedulerxDesignateDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadSchedulerxDesignateDetailResponseBodyData() = default ;
    ReadSchedulerxDesignateDetailResponseBodyData& operator=(const ReadSchedulerxDesignateDetailResponseBodyData &) = default ;
    ReadSchedulerxDesignateDetailResponseBodyData& operator=(ReadSchedulerxDesignateDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->designateDetailVos_ == nullptr; };
    // designateDetailVos Field Functions 
    bool hasDesignateDetailVos() const { return this->designateDetailVos_ != nullptr;};
    void deleteDesignateDetailVos() { this->designateDetailVos_ = nullptr;};
    inline const vector<Models::ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos> & designateDetailVos() const { DARABONBA_PTR_GET_CONST(designateDetailVos_, vector<Models::ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos>) };
    inline vector<Models::ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos> designateDetailVos() { DARABONBA_PTR_GET(designateDetailVos_, vector<Models::ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos>) };
    inline ReadSchedulerxDesignateDetailResponseBodyData& setDesignateDetailVos(const vector<Models::ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos> & designateDetailVos) { DARABONBA_PTR_SET_VALUE(designateDetailVos_, designateDetailVos) };
    inline ReadSchedulerxDesignateDetailResponseBodyData& setDesignateDetailVos(vector<Models::ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos> && designateDetailVos) { DARABONBA_PTR_SET_RVALUE(designateDetailVos_, designateDetailVos) };


  protected:
    // *
    std::shared_ptr<vector<Models::ReadSchedulerxDesignateDetailResponseBodyDataDesignateDetailVos>> designateDetailVos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
