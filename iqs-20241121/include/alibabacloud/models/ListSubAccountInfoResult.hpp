// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBACCOUNTINFORESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBACCOUNTINFORESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class ListSubAccountInfoResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubAccountInfoResult& obj) { 
      DARABONBA_PTR_TO_JSON(subAccountInfos, subAccountInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubAccountInfoResult& obj) { 
      DARABONBA_PTR_FROM_JSON(subAccountInfos, subAccountInfos_);
    };
    ListSubAccountInfoResult() = default ;
    ListSubAccountInfoResult(const ListSubAccountInfoResult &) = default ;
    ListSubAccountInfoResult(ListSubAccountInfoResult &&) = default ;
    ListSubAccountInfoResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubAccountInfoResult() = default ;
    ListSubAccountInfoResult& operator=(const ListSubAccountInfoResult &) = default ;
    ListSubAccountInfoResult& operator=(ListSubAccountInfoResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubAccountInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubAccountInfos& obj) { 
        DARABONBA_PTR_TO_JSON(accountName, accountName_);
      };
      friend void from_json(const Darabonba::Json& j, SubAccountInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(accountName, accountName_);
      };
      SubAccountInfos() = default ;
      SubAccountInfos(const SubAccountInfos &) = default ;
      SubAccountInfos(SubAccountInfos &&) = default ;
      SubAccountInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubAccountInfos() = default ;
      SubAccountInfos& operator=(const SubAccountInfos &) = default ;
      SubAccountInfos& operator=(SubAccountInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountName_ == nullptr; };
      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline SubAccountInfos& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    protected:
      shared_ptr<string> accountName_ {};
    };

    virtual bool empty() const override { return this->subAccountInfos_ == nullptr; };
    // subAccountInfos Field Functions 
    bool hasSubAccountInfos() const { return this->subAccountInfos_ != nullptr;};
    void deleteSubAccountInfos() { this->subAccountInfos_ = nullptr;};
    inline const vector<ListSubAccountInfoResult::SubAccountInfos> & getSubAccountInfos() const { DARABONBA_PTR_GET_CONST(subAccountInfos_, vector<ListSubAccountInfoResult::SubAccountInfos>) };
    inline vector<ListSubAccountInfoResult::SubAccountInfos> getSubAccountInfos() { DARABONBA_PTR_GET(subAccountInfos_, vector<ListSubAccountInfoResult::SubAccountInfos>) };
    inline ListSubAccountInfoResult& setSubAccountInfos(const vector<ListSubAccountInfoResult::SubAccountInfos> & subAccountInfos) { DARABONBA_PTR_SET_VALUE(subAccountInfos_, subAccountInfos) };
    inline ListSubAccountInfoResult& setSubAccountInfos(vector<ListSubAccountInfoResult::SubAccountInfos> && subAccountInfos) { DARABONBA_PTR_SET_RVALUE(subAccountInfos_, subAccountInfos) };


  protected:
    shared_ptr<vector<ListSubAccountInfoResult::SubAccountInfos>> subAccountInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
