// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECOSTCENTERSHARERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVECOSTCENTERSHARERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class SaveCostCenterShareRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveCostCenterShareRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateShareRuleList, createShareRuleList_);
      DARABONBA_PTR_TO_JSON(ModifyShareRuleList, modifyShareRuleList_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
      DARABONBA_PTR_TO_JSON(RemoveShareRuleList, removeShareRuleList_);
    };
    friend void from_json(const Darabonba::Json& j, SaveCostCenterShareRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateShareRuleList, createShareRuleList_);
      DARABONBA_PTR_FROM_JSON(ModifyShareRuleList, modifyShareRuleList_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
      DARABONBA_PTR_FROM_JSON(RemoveShareRuleList, removeShareRuleList_);
    };
    SaveCostCenterShareRuleRequest() = default ;
    SaveCostCenterShareRuleRequest(const SaveCostCenterShareRuleRequest &) = default ;
    SaveCostCenterShareRuleRequest(SaveCostCenterShareRuleRequest &&) = default ;
    SaveCostCenterShareRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveCostCenterShareRuleRequest() = default ;
    SaveCostCenterShareRuleRequest& operator=(const SaveCostCenterShareRuleRequest &) = default ;
    SaveCostCenterShareRuleRequest& operator=(SaveCostCenterShareRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModifyShareRuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModifyShareRuleList& obj) { 
        DARABONBA_PTR_TO_JSON(FromCostCenterList, fromCostCenterList_);
        DARABONBA_PTR_TO_JSON(ShareRatioList, shareRatioList_);
        DARABONBA_PTR_TO_JSON(ShareRuleId, shareRuleId_);
        DARABONBA_PTR_TO_JSON(ShareRuleName, shareRuleName_);
        DARABONBA_PTR_TO_JSON(ShareType, shareType_);
        DARABONBA_PTR_TO_JSON(ToCostCenterList, toCostCenterList_);
      };
      friend void from_json(const Darabonba::Json& j, ModifyShareRuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(FromCostCenterList, fromCostCenterList_);
        DARABONBA_PTR_FROM_JSON(ShareRatioList, shareRatioList_);
        DARABONBA_PTR_FROM_JSON(ShareRuleId, shareRuleId_);
        DARABONBA_PTR_FROM_JSON(ShareRuleName, shareRuleName_);
        DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
        DARABONBA_PTR_FROM_JSON(ToCostCenterList, toCostCenterList_);
      };
      ModifyShareRuleList() = default ;
      ModifyShareRuleList(const ModifyShareRuleList &) = default ;
      ModifyShareRuleList(ModifyShareRuleList &&) = default ;
      ModifyShareRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModifyShareRuleList() = default ;
      ModifyShareRuleList& operator=(const ModifyShareRuleList &) = default ;
      ModifyShareRuleList& operator=(ModifyShareRuleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fromCostCenterList_ == nullptr
        && this->shareRatioList_ == nullptr && this->shareRuleId_ == nullptr && this->shareRuleName_ == nullptr && this->shareType_ == nullptr && this->toCostCenterList_ == nullptr; };
      // fromCostCenterList Field Functions 
      bool hasFromCostCenterList() const { return this->fromCostCenterList_ != nullptr;};
      void deleteFromCostCenterList() { this->fromCostCenterList_ = nullptr;};
      inline const vector<int64_t> & getFromCostCenterList() const { DARABONBA_PTR_GET_CONST(fromCostCenterList_, vector<int64_t>) };
      inline vector<int64_t> getFromCostCenterList() { DARABONBA_PTR_GET(fromCostCenterList_, vector<int64_t>) };
      inline ModifyShareRuleList& setFromCostCenterList(const vector<int64_t> & fromCostCenterList) { DARABONBA_PTR_SET_VALUE(fromCostCenterList_, fromCostCenterList) };
      inline ModifyShareRuleList& setFromCostCenterList(vector<int64_t> && fromCostCenterList) { DARABONBA_PTR_SET_RVALUE(fromCostCenterList_, fromCostCenterList) };


      // shareRatioList Field Functions 
      bool hasShareRatioList() const { return this->shareRatioList_ != nullptr;};
      void deleteShareRatioList() { this->shareRatioList_ = nullptr;};
      inline const vector<double> & getShareRatioList() const { DARABONBA_PTR_GET_CONST(shareRatioList_, vector<double>) };
      inline vector<double> getShareRatioList() { DARABONBA_PTR_GET(shareRatioList_, vector<double>) };
      inline ModifyShareRuleList& setShareRatioList(const vector<double> & shareRatioList) { DARABONBA_PTR_SET_VALUE(shareRatioList_, shareRatioList) };
      inline ModifyShareRuleList& setShareRatioList(vector<double> && shareRatioList) { DARABONBA_PTR_SET_RVALUE(shareRatioList_, shareRatioList) };


      // shareRuleId Field Functions 
      bool hasShareRuleId() const { return this->shareRuleId_ != nullptr;};
      void deleteShareRuleId() { this->shareRuleId_ = nullptr;};
      inline int64_t getShareRuleId() const { DARABONBA_PTR_GET_DEFAULT(shareRuleId_, 0L) };
      inline ModifyShareRuleList& setShareRuleId(int64_t shareRuleId) { DARABONBA_PTR_SET_VALUE(shareRuleId_, shareRuleId) };


      // shareRuleName Field Functions 
      bool hasShareRuleName() const { return this->shareRuleName_ != nullptr;};
      void deleteShareRuleName() { this->shareRuleName_ = nullptr;};
      inline string getShareRuleName() const { DARABONBA_PTR_GET_DEFAULT(shareRuleName_, "") };
      inline ModifyShareRuleList& setShareRuleName(string shareRuleName) { DARABONBA_PTR_SET_VALUE(shareRuleName_, shareRuleName) };


      // shareType Field Functions 
      bool hasShareType() const { return this->shareType_ != nullptr;};
      void deleteShareType() { this->shareType_ = nullptr;};
      inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
      inline ModifyShareRuleList& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


      // toCostCenterList Field Functions 
      bool hasToCostCenterList() const { return this->toCostCenterList_ != nullptr;};
      void deleteToCostCenterList() { this->toCostCenterList_ = nullptr;};
      inline const vector<int64_t> & getToCostCenterList() const { DARABONBA_PTR_GET_CONST(toCostCenterList_, vector<int64_t>) };
      inline vector<int64_t> getToCostCenterList() { DARABONBA_PTR_GET(toCostCenterList_, vector<int64_t>) };
      inline ModifyShareRuleList& setToCostCenterList(const vector<int64_t> & toCostCenterList) { DARABONBA_PTR_SET_VALUE(toCostCenterList_, toCostCenterList) };
      inline ModifyShareRuleList& setToCostCenterList(vector<int64_t> && toCostCenterList) { DARABONBA_PTR_SET_RVALUE(toCostCenterList_, toCostCenterList) };


    protected:
      shared_ptr<vector<int64_t>> fromCostCenterList_ {};
      shared_ptr<vector<double>> shareRatioList_ {};
      // This parameter is required.
      shared_ptr<int64_t> shareRuleId_ {};
      shared_ptr<string> shareRuleName_ {};
      // This parameter is required.
      shared_ptr<string> shareType_ {};
      shared_ptr<vector<int64_t>> toCostCenterList_ {};
    };

    class CreateShareRuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateShareRuleList& obj) { 
        DARABONBA_PTR_TO_JSON(FromCostCenterList, fromCostCenterList_);
        DARABONBA_PTR_TO_JSON(ShareRatioList, shareRatioList_);
        DARABONBA_PTR_TO_JSON(ShareRuleName, shareRuleName_);
        DARABONBA_PTR_TO_JSON(ShareType, shareType_);
        DARABONBA_PTR_TO_JSON(ToCostCenterList, toCostCenterList_);
      };
      friend void from_json(const Darabonba::Json& j, CreateShareRuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(FromCostCenterList, fromCostCenterList_);
        DARABONBA_PTR_FROM_JSON(ShareRatioList, shareRatioList_);
        DARABONBA_PTR_FROM_JSON(ShareRuleName, shareRuleName_);
        DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
        DARABONBA_PTR_FROM_JSON(ToCostCenterList, toCostCenterList_);
      };
      CreateShareRuleList() = default ;
      CreateShareRuleList(const CreateShareRuleList &) = default ;
      CreateShareRuleList(CreateShareRuleList &&) = default ;
      CreateShareRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateShareRuleList() = default ;
      CreateShareRuleList& operator=(const CreateShareRuleList &) = default ;
      CreateShareRuleList& operator=(CreateShareRuleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fromCostCenterList_ == nullptr
        && this->shareRatioList_ == nullptr && this->shareRuleName_ == nullptr && this->shareType_ == nullptr && this->toCostCenterList_ == nullptr; };
      // fromCostCenterList Field Functions 
      bool hasFromCostCenterList() const { return this->fromCostCenterList_ != nullptr;};
      void deleteFromCostCenterList() { this->fromCostCenterList_ = nullptr;};
      inline const vector<int64_t> & getFromCostCenterList() const { DARABONBA_PTR_GET_CONST(fromCostCenterList_, vector<int64_t>) };
      inline vector<int64_t> getFromCostCenterList() { DARABONBA_PTR_GET(fromCostCenterList_, vector<int64_t>) };
      inline CreateShareRuleList& setFromCostCenterList(const vector<int64_t> & fromCostCenterList) { DARABONBA_PTR_SET_VALUE(fromCostCenterList_, fromCostCenterList) };
      inline CreateShareRuleList& setFromCostCenterList(vector<int64_t> && fromCostCenterList) { DARABONBA_PTR_SET_RVALUE(fromCostCenterList_, fromCostCenterList) };


      // shareRatioList Field Functions 
      bool hasShareRatioList() const { return this->shareRatioList_ != nullptr;};
      void deleteShareRatioList() { this->shareRatioList_ = nullptr;};
      inline const vector<double> & getShareRatioList() const { DARABONBA_PTR_GET_CONST(shareRatioList_, vector<double>) };
      inline vector<double> getShareRatioList() { DARABONBA_PTR_GET(shareRatioList_, vector<double>) };
      inline CreateShareRuleList& setShareRatioList(const vector<double> & shareRatioList) { DARABONBA_PTR_SET_VALUE(shareRatioList_, shareRatioList) };
      inline CreateShareRuleList& setShareRatioList(vector<double> && shareRatioList) { DARABONBA_PTR_SET_RVALUE(shareRatioList_, shareRatioList) };


      // shareRuleName Field Functions 
      bool hasShareRuleName() const { return this->shareRuleName_ != nullptr;};
      void deleteShareRuleName() { this->shareRuleName_ = nullptr;};
      inline string getShareRuleName() const { DARABONBA_PTR_GET_DEFAULT(shareRuleName_, "") };
      inline CreateShareRuleList& setShareRuleName(string shareRuleName) { DARABONBA_PTR_SET_VALUE(shareRuleName_, shareRuleName) };


      // shareType Field Functions 
      bool hasShareType() const { return this->shareType_ != nullptr;};
      void deleteShareType() { this->shareType_ = nullptr;};
      inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
      inline CreateShareRuleList& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


      // toCostCenterList Field Functions 
      bool hasToCostCenterList() const { return this->toCostCenterList_ != nullptr;};
      void deleteToCostCenterList() { this->toCostCenterList_ = nullptr;};
      inline const vector<int64_t> & getToCostCenterList() const { DARABONBA_PTR_GET_CONST(toCostCenterList_, vector<int64_t>) };
      inline vector<int64_t> getToCostCenterList() { DARABONBA_PTR_GET(toCostCenterList_, vector<int64_t>) };
      inline CreateShareRuleList& setToCostCenterList(const vector<int64_t> & toCostCenterList) { DARABONBA_PTR_SET_VALUE(toCostCenterList_, toCostCenterList) };
      inline CreateShareRuleList& setToCostCenterList(vector<int64_t> && toCostCenterList) { DARABONBA_PTR_SET_RVALUE(toCostCenterList_, toCostCenterList) };


    protected:
      shared_ptr<vector<int64_t>> fromCostCenterList_ {};
      shared_ptr<vector<double>> shareRatioList_ {};
      shared_ptr<string> shareRuleName_ {};
      // This parameter is required.
      shared_ptr<string> shareType_ {};
      shared_ptr<vector<int64_t>> toCostCenterList_ {};
    };

    virtual bool empty() const override { return this->createShareRuleList_ == nullptr
        && this->modifyShareRuleList_ == nullptr && this->nbid_ == nullptr && this->ownerAccountId_ == nullptr && this->removeShareRuleList_ == nullptr; };
    // createShareRuleList Field Functions 
    bool hasCreateShareRuleList() const { return this->createShareRuleList_ != nullptr;};
    void deleteCreateShareRuleList() { this->createShareRuleList_ = nullptr;};
    inline const vector<SaveCostCenterShareRuleRequest::CreateShareRuleList> & getCreateShareRuleList() const { DARABONBA_PTR_GET_CONST(createShareRuleList_, vector<SaveCostCenterShareRuleRequest::CreateShareRuleList>) };
    inline vector<SaveCostCenterShareRuleRequest::CreateShareRuleList> getCreateShareRuleList() { DARABONBA_PTR_GET(createShareRuleList_, vector<SaveCostCenterShareRuleRequest::CreateShareRuleList>) };
    inline SaveCostCenterShareRuleRequest& setCreateShareRuleList(const vector<SaveCostCenterShareRuleRequest::CreateShareRuleList> & createShareRuleList) { DARABONBA_PTR_SET_VALUE(createShareRuleList_, createShareRuleList) };
    inline SaveCostCenterShareRuleRequest& setCreateShareRuleList(vector<SaveCostCenterShareRuleRequest::CreateShareRuleList> && createShareRuleList) { DARABONBA_PTR_SET_RVALUE(createShareRuleList_, createShareRuleList) };


    // modifyShareRuleList Field Functions 
    bool hasModifyShareRuleList() const { return this->modifyShareRuleList_ != nullptr;};
    void deleteModifyShareRuleList() { this->modifyShareRuleList_ = nullptr;};
    inline const vector<SaveCostCenterShareRuleRequest::ModifyShareRuleList> & getModifyShareRuleList() const { DARABONBA_PTR_GET_CONST(modifyShareRuleList_, vector<SaveCostCenterShareRuleRequest::ModifyShareRuleList>) };
    inline vector<SaveCostCenterShareRuleRequest::ModifyShareRuleList> getModifyShareRuleList() { DARABONBA_PTR_GET(modifyShareRuleList_, vector<SaveCostCenterShareRuleRequest::ModifyShareRuleList>) };
    inline SaveCostCenterShareRuleRequest& setModifyShareRuleList(const vector<SaveCostCenterShareRuleRequest::ModifyShareRuleList> & modifyShareRuleList) { DARABONBA_PTR_SET_VALUE(modifyShareRuleList_, modifyShareRuleList) };
    inline SaveCostCenterShareRuleRequest& setModifyShareRuleList(vector<SaveCostCenterShareRuleRequest::ModifyShareRuleList> && modifyShareRuleList) { DARABONBA_PTR_SET_RVALUE(modifyShareRuleList_, modifyShareRuleList) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline SaveCostCenterShareRuleRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // ownerAccountId Field Functions 
    bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
    void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
    inline int64_t getOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
    inline SaveCostCenterShareRuleRequest& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


    // removeShareRuleList Field Functions 
    bool hasRemoveShareRuleList() const { return this->removeShareRuleList_ != nullptr;};
    void deleteRemoveShareRuleList() { this->removeShareRuleList_ = nullptr;};
    inline const vector<int64_t> & getRemoveShareRuleList() const { DARABONBA_PTR_GET_CONST(removeShareRuleList_, vector<int64_t>) };
    inline vector<int64_t> getRemoveShareRuleList() { DARABONBA_PTR_GET(removeShareRuleList_, vector<int64_t>) };
    inline SaveCostCenterShareRuleRequest& setRemoveShareRuleList(const vector<int64_t> & removeShareRuleList) { DARABONBA_PTR_SET_VALUE(removeShareRuleList_, removeShareRuleList) };
    inline SaveCostCenterShareRuleRequest& setRemoveShareRuleList(vector<int64_t> && removeShareRuleList) { DARABONBA_PTR_SET_RVALUE(removeShareRuleList_, removeShareRuleList) };


  protected:
    shared_ptr<vector<SaveCostCenterShareRuleRequest::CreateShareRuleList>> createShareRuleList_ {};
    shared_ptr<vector<SaveCostCenterShareRuleRequest::ModifyShareRuleList>> modifyShareRuleList_ {};
    shared_ptr<string> nbid_ {};
    shared_ptr<int64_t> ownerAccountId_ {};
    shared_ptr<vector<int64_t>> removeShareRuleList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
