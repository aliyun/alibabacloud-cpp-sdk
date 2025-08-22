// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDESIGATEINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDESIGATEINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetDesigateInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDesigateInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DesignateType, designateType_);
      DARABONBA_PTR_TO_JSON(Transferable, transferable_);
    };
    friend void from_json(const Darabonba::Json& j, GetDesigateInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DesignateType, designateType_);
      DARABONBA_PTR_FROM_JSON(Transferable, transferable_);
    };
    GetDesigateInfoResponseBodyData() = default ;
    GetDesigateInfoResponseBodyData(const GetDesigateInfoResponseBodyData &) = default ;
    GetDesigateInfoResponseBodyData(GetDesigateInfoResponseBodyData &&) = default ;
    GetDesigateInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDesigateInfoResponseBodyData() = default ;
    GetDesigateInfoResponseBodyData& operator=(const GetDesigateInfoResponseBodyData &) = default ;
    GetDesigateInfoResponseBodyData& operator=(GetDesigateInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->designateType_ != nullptr
        && this->transferable_ != nullptr; };
    // designateType Field Functions 
    bool hasDesignateType() const { return this->designateType_ != nullptr;};
    void deleteDesignateType() { this->designateType_ = nullptr;};
    inline int32_t designateType() const { DARABONBA_PTR_GET_DEFAULT(designateType_, 0) };
    inline GetDesigateInfoResponseBodyData& setDesignateType(int32_t designateType) { DARABONBA_PTR_SET_VALUE(designateType_, designateType) };


    // transferable Field Functions 
    bool hasTransferable() const { return this->transferable_ != nullptr;};
    void deleteTransferable() { this->transferable_ = nullptr;};
    inline bool transferable() const { DARABONBA_PTR_GET_DEFAULT(transferable_, false) };
    inline GetDesigateInfoResponseBodyData& setTransferable(bool transferable) { DARABONBA_PTR_SET_VALUE(transferable_, transferable) };


  protected:
    std::shared_ptr<int32_t> designateType_ = nullptr;
    std::shared_ptr<bool> transferable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
