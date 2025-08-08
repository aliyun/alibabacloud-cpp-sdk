// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWWORKFLOWRESPONSEBODYWORKFLOWDETAILWORKFLOWNODELISTWORKFLOWNODEAUDITUSERLISTAUDITUSER_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWWORKFLOWRESPONSEBODYWORKFLOWDETAILWORKFLOWNODELISTWORKFLOWNODEAUDITUSERLISTAUDITUSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser& obj) { 
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(RealName, realName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser& obj) { 
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(RealName, realName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser() = default ;
    PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser(const PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser &) = default ;
    PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser(PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser &&) = default ;
    PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser() = default ;
    PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser& operator=(const PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser &) = default ;
    PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser& operator=(PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nickName_ != nullptr
        && this->realName_ != nullptr && this->userId_ != nullptr; };
    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // realName Field Functions 
    bool hasRealName() const { return this->realName_ != nullptr;};
    void deleteRealName() { this->realName_ = nullptr;};
    inline string realName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
    inline PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline PreviewWorkflowResponseBodyWorkflowDetailWorkflowNodeListWorkflowNodeAuditUserListAuditUser& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> nickName_ = nullptr;
    std::shared_ptr<string> realName_ = nullptr;
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
