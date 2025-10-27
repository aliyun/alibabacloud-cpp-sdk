// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPUSHALLTASKRESPONSEBODYPUSHTASKRSP_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPUSHALLTASKRESPONSEBODYPUSHTASKRSP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyPushAllTaskResponseBodyPushTaskRsp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPushAllTaskResponseBodyPushTaskRsp& obj) { 
      DARABONBA_PTR_TO_JSON(PushTaskResultList, pushTaskResultList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPushAllTaskResponseBodyPushTaskRsp& obj) { 
      DARABONBA_PTR_FROM_JSON(PushTaskResultList, pushTaskResultList_);
    };
    ModifyPushAllTaskResponseBodyPushTaskRsp() = default ;
    ModifyPushAllTaskResponseBodyPushTaskRsp(const ModifyPushAllTaskResponseBodyPushTaskRsp &) = default ;
    ModifyPushAllTaskResponseBodyPushTaskRsp(ModifyPushAllTaskResponseBodyPushTaskRsp &&) = default ;
    ModifyPushAllTaskResponseBodyPushTaskRsp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPushAllTaskResponseBodyPushTaskRsp() = default ;
    ModifyPushAllTaskResponseBodyPushTaskRsp& operator=(const ModifyPushAllTaskResponseBodyPushTaskRsp &) = default ;
    ModifyPushAllTaskResponseBodyPushTaskRsp& operator=(ModifyPushAllTaskResponseBodyPushTaskRsp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pushTaskResultList_ == nullptr; };
    // pushTaskResultList Field Functions 
    bool hasPushTaskResultList() const { return this->pushTaskResultList_ != nullptr;};
    void deletePushTaskResultList() { this->pushTaskResultList_ = nullptr;};
    inline const vector<Models::ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList> & pushTaskResultList() const { DARABONBA_PTR_GET_CONST(pushTaskResultList_, vector<Models::ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList>) };
    inline vector<Models::ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList> pushTaskResultList() { DARABONBA_PTR_GET(pushTaskResultList_, vector<Models::ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList>) };
    inline ModifyPushAllTaskResponseBodyPushTaskRsp& setPushTaskResultList(const vector<Models::ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList> & pushTaskResultList) { DARABONBA_PTR_SET_VALUE(pushTaskResultList_, pushTaskResultList) };
    inline ModifyPushAllTaskResponseBodyPushTaskRsp& setPushTaskResultList(vector<Models::ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList> && pushTaskResultList) { DARABONBA_PTR_SET_RVALUE(pushTaskResultList_, pushTaskResultList) };


  protected:
    // The information about the server on which security check tasks failed.
    std::shared_ptr<vector<Models::ModifyPushAllTaskResponseBodyPushTaskRspPushTaskResultList>> pushTaskResultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
