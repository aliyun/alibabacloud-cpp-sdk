// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLIENTUSERDEFINERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLIENTUSERDEFINERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteClientUserDefineRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteClientUserDefineRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdList, idList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteClientUserDefineRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdList, idList_);
    };
    DeleteClientUserDefineRuleRequest() = default ;
    DeleteClientUserDefineRuleRequest(const DeleteClientUserDefineRuleRequest &) = default ;
    DeleteClientUserDefineRuleRequest(DeleteClientUserDefineRuleRequest &&) = default ;
    DeleteClientUserDefineRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteClientUserDefineRuleRequest() = default ;
    DeleteClientUserDefineRuleRequest& operator=(const DeleteClientUserDefineRuleRequest &) = default ;
    DeleteClientUserDefineRuleRequest& operator=(DeleteClientUserDefineRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->idList_ == nullptr; };
    // idList Field Functions 
    bool hasIdList() const { return this->idList_ != nullptr;};
    void deleteIdList() { this->idList_ = nullptr;};
    inline const vector<int64_t> & getIdList() const { DARABONBA_PTR_GET_CONST(idList_, vector<int64_t>) };
    inline vector<int64_t> getIdList() { DARABONBA_PTR_GET(idList_, vector<int64_t>) };
    inline DeleteClientUserDefineRuleRequest& setIdList(const vector<int64_t> & idList) { DARABONBA_PTR_SET_VALUE(idList_, idList) };
    inline DeleteClientUserDefineRuleRequest& setIdList(vector<int64_t> && idList) { DARABONBA_PTR_SET_RVALUE(idList_, idList) };


  protected:
    // The IDs of the custom defense rules.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> idList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
