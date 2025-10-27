// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READSCHEDULERXDESIGNATEINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_READSCHEDULERXDESIGNATEINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ReadSchedulerxDesignateInfoResponseBodyDataDesignateDetailVos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ReadSchedulerxDesignateInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadSchedulerxDesignateInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DesignateDetailVos, designateDetailVos_);
      DARABONBA_PTR_TO_JSON(DesignateType, designateType_);
      DARABONBA_PTR_TO_JSON(Transferable, transferable_);
    };
    friend void from_json(const Darabonba::Json& j, ReadSchedulerxDesignateInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DesignateDetailVos, designateDetailVos_);
      DARABONBA_PTR_FROM_JSON(DesignateType, designateType_);
      DARABONBA_PTR_FROM_JSON(Transferable, transferable_);
    };
    ReadSchedulerxDesignateInfoResponseBodyData() = default ;
    ReadSchedulerxDesignateInfoResponseBodyData(const ReadSchedulerxDesignateInfoResponseBodyData &) = default ;
    ReadSchedulerxDesignateInfoResponseBodyData(ReadSchedulerxDesignateInfoResponseBodyData &&) = default ;
    ReadSchedulerxDesignateInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadSchedulerxDesignateInfoResponseBodyData() = default ;
    ReadSchedulerxDesignateInfoResponseBodyData& operator=(const ReadSchedulerxDesignateInfoResponseBodyData &) = default ;
    ReadSchedulerxDesignateInfoResponseBodyData& operator=(ReadSchedulerxDesignateInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->designateDetailVos_ == nullptr
        && return this->designateType_ == nullptr && return this->transferable_ == nullptr; };
    // designateDetailVos Field Functions 
    bool hasDesignateDetailVos() const { return this->designateDetailVos_ != nullptr;};
    void deleteDesignateDetailVos() { this->designateDetailVos_ = nullptr;};
    inline const vector<Models::ReadSchedulerxDesignateInfoResponseBodyDataDesignateDetailVos> & designateDetailVos() const { DARABONBA_PTR_GET_CONST(designateDetailVos_, vector<Models::ReadSchedulerxDesignateInfoResponseBodyDataDesignateDetailVos>) };
    inline vector<Models::ReadSchedulerxDesignateInfoResponseBodyDataDesignateDetailVos> designateDetailVos() { DARABONBA_PTR_GET(designateDetailVos_, vector<Models::ReadSchedulerxDesignateInfoResponseBodyDataDesignateDetailVos>) };
    inline ReadSchedulerxDesignateInfoResponseBodyData& setDesignateDetailVos(const vector<Models::ReadSchedulerxDesignateInfoResponseBodyDataDesignateDetailVos> & designateDetailVos) { DARABONBA_PTR_SET_VALUE(designateDetailVos_, designateDetailVos) };
    inline ReadSchedulerxDesignateInfoResponseBodyData& setDesignateDetailVos(vector<Models::ReadSchedulerxDesignateInfoResponseBodyDataDesignateDetailVos> && designateDetailVos) { DARABONBA_PTR_SET_RVALUE(designateDetailVos_, designateDetailVos) };


    // designateType Field Functions 
    bool hasDesignateType() const { return this->designateType_ != nullptr;};
    void deleteDesignateType() { this->designateType_ = nullptr;};
    inline int32_t designateType() const { DARABONBA_PTR_GET_DEFAULT(designateType_, 0) };
    inline ReadSchedulerxDesignateInfoResponseBodyData& setDesignateType(int32_t designateType) { DARABONBA_PTR_SET_VALUE(designateType_, designateType) };


    // transferable Field Functions 
    bool hasTransferable() const { return this->transferable_ != nullptr;};
    void deleteTransferable() { this->transferable_ = nullptr;};
    inline bool transferable() const { DARABONBA_PTR_GET_DEFAULT(transferable_, false) };
    inline ReadSchedulerxDesignateInfoResponseBodyData& setTransferable(bool transferable) { DARABONBA_PTR_SET_VALUE(transferable_, transferable) };


  protected:
    // -
    std::shared_ptr<vector<Models::ReadSchedulerxDesignateInfoResponseBodyDataDesignateDetailVos>> designateDetailVos_ = nullptr;
    std::shared_ptr<int32_t> designateType_ = nullptr;
    std::shared_ptr<bool> transferable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
