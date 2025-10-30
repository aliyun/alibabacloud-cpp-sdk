// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRIVILEGETRANSFERRESULTENTRIE_HPP_
#define ALIBABACLOUD_MODELS_PRIVILEGETRANSFERRESULTENTRIE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PrivilegeTransferResultEntrie.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class PrivilegeTransferResultEntrie : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrivilegeTransferResultEntrie& obj) { 
      DARABONBA_PTR_TO_JSON(Children, children_);
      DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_TO_JSON(IsLeaf, isLeaf_);
      DARABONBA_PTR_TO_JSON(Privilege, privilege_);
      DARABONBA_PTR_TO_JSON(PrivilegeDisplayName, privilegeDisplayName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Test, test_);
    };
    friend void from_json(const Darabonba::Json& j, PrivilegeTransferResultEntrie& obj) { 
      DARABONBA_PTR_FROM_JSON(Children, children_);
      DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_FROM_JSON(IsLeaf, isLeaf_);
      DARABONBA_PTR_FROM_JSON(Privilege, privilege_);
      DARABONBA_PTR_FROM_JSON(PrivilegeDisplayName, privilegeDisplayName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Test, test_);
    };
    PrivilegeTransferResultEntrie() = default ;
    PrivilegeTransferResultEntrie(const PrivilegeTransferResultEntrie &) = default ;
    PrivilegeTransferResultEntrie(PrivilegeTransferResultEntrie &&) = default ;
    PrivilegeTransferResultEntrie(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrivilegeTransferResultEntrie() = default ;
    PrivilegeTransferResultEntrie& operator=(const PrivilegeTransferResultEntrie &) = default ;
    PrivilegeTransferResultEntrie& operator=(PrivilegeTransferResultEntrie &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->children_ == nullptr
        && return this->errMsg_ == nullptr && return this->isLeaf_ == nullptr && return this->privilege_ == nullptr && return this->privilegeDisplayName_ == nullptr && return this->status_ == nullptr
        && return this->test_ == nullptr; };
    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<PrivilegeTransferResultEntrie> & children() const { DARABONBA_PTR_GET_CONST(children_, vector<PrivilegeTransferResultEntrie>) };
    inline vector<PrivilegeTransferResultEntrie> children() { DARABONBA_PTR_GET(children_, vector<PrivilegeTransferResultEntrie>) };
    inline PrivilegeTransferResultEntrie& setChildren(const vector<PrivilegeTransferResultEntrie> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline PrivilegeTransferResultEntrie& setChildren(vector<PrivilegeTransferResultEntrie> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline PrivilegeTransferResultEntrie& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // isLeaf Field Functions 
    bool hasIsLeaf() const { return this->isLeaf_ != nullptr;};
    void deleteIsLeaf() { this->isLeaf_ = nullptr;};
    inline bool isLeaf() const { DARABONBA_PTR_GET_DEFAULT(isLeaf_, false) };
    inline PrivilegeTransferResultEntrie& setIsLeaf(bool isLeaf) { DARABONBA_PTR_SET_VALUE(isLeaf_, isLeaf) };


    // privilege Field Functions 
    bool hasPrivilege() const { return this->privilege_ != nullptr;};
    void deletePrivilege() { this->privilege_ = nullptr;};
    inline string privilege() const { DARABONBA_PTR_GET_DEFAULT(privilege_, "") };
    inline PrivilegeTransferResultEntrie& setPrivilege(string privilege) { DARABONBA_PTR_SET_VALUE(privilege_, privilege) };


    // privilegeDisplayName Field Functions 
    bool hasPrivilegeDisplayName() const { return this->privilegeDisplayName_ != nullptr;};
    void deletePrivilegeDisplayName() { this->privilegeDisplayName_ = nullptr;};
    inline string privilegeDisplayName() const { DARABONBA_PTR_GET_DEFAULT(privilegeDisplayName_, "") };
    inline PrivilegeTransferResultEntrie& setPrivilegeDisplayName(string privilegeDisplayName) { DARABONBA_PTR_SET_VALUE(privilegeDisplayName_, privilegeDisplayName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PrivilegeTransferResultEntrie& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // test Field Functions 
    bool hasTest() const { return this->test_ != nullptr;};
    void deleteTest() { this->test_ = nullptr;};
    inline string test() const { DARABONBA_PTR_GET_DEFAULT(test_, "") };
    inline PrivilegeTransferResultEntrie& setTest(string test) { DARABONBA_PTR_SET_VALUE(test_, test) };


  protected:
    std::shared_ptr<vector<PrivilegeTransferResultEntrie>> children_ = nullptr;
    std::shared_ptr<string> errMsg_ = nullptr;
    std::shared_ptr<bool> isLeaf_ = nullptr;
    std::shared_ptr<string> privilege_ = nullptr;
    std::shared_ptr<string> privilegeDisplayName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> test_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
