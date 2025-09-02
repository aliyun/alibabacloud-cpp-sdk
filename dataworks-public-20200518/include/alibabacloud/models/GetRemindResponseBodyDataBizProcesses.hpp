// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREMINDRESPONSEBODYDATABIZPROCESSES_HPP_
#define ALIBABACLOUD_MODELS_GETREMINDRESPONSEBODYDATABIZPROCESSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetRemindResponseBodyDataBizProcesses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRemindResponseBodyDataBizProcesses& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BizProcessName, bizProcessName_);
    };
    friend void from_json(const Darabonba::Json& j, GetRemindResponseBodyDataBizProcesses& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BizProcessName, bizProcessName_);
    };
    GetRemindResponseBodyDataBizProcesses() = default ;
    GetRemindResponseBodyDataBizProcesses(const GetRemindResponseBodyDataBizProcesses &) = default ;
    GetRemindResponseBodyDataBizProcesses(GetRemindResponseBodyDataBizProcesses &&) = default ;
    GetRemindResponseBodyDataBizProcesses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRemindResponseBodyDataBizProcesses() = default ;
    GetRemindResponseBodyDataBizProcesses& operator=(const GetRemindResponseBodyDataBizProcesses &) = default ;
    GetRemindResponseBodyDataBizProcesses& operator=(GetRemindResponseBodyDataBizProcesses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizId_ != nullptr
        && this->bizProcessName_ != nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline int64_t bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, 0L) };
    inline GetRemindResponseBodyDataBizProcesses& setBizId(int64_t bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizProcessName Field Functions 
    bool hasBizProcessName() const { return this->bizProcessName_ != nullptr;};
    void deleteBizProcessName() { this->bizProcessName_ = nullptr;};
    inline string bizProcessName() const { DARABONBA_PTR_GET_DEFAULT(bizProcessName_, "") };
    inline GetRemindResponseBodyDataBizProcesses& setBizProcessName(string bizProcessName) { DARABONBA_PTR_SET_VALUE(bizProcessName_, bizProcessName) };


  protected:
    // The ID of the workflow.
    std::shared_ptr<int64_t> bizId_ = nullptr;
    // The name of the workflow.
    std::shared_ptr<string> bizProcessName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
