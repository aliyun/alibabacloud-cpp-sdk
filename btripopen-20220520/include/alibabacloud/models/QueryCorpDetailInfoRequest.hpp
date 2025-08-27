// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCORPDETAILINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCORPDETAILINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class QueryCorpDetailInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCorpDetailInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(account_id, accountId_);
      DARABONBA_PTR_TO_JSON(target_corp_id, targetCorpId_);
      DARABONBA_PTR_TO_JSON(target_third_corp_id, targetThirdCorpId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCorpDetailInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(account_id, accountId_);
      DARABONBA_PTR_FROM_JSON(target_corp_id, targetCorpId_);
      DARABONBA_PTR_FROM_JSON(target_third_corp_id, targetThirdCorpId_);
    };
    QueryCorpDetailInfoRequest() = default ;
    QueryCorpDetailInfoRequest(const QueryCorpDetailInfoRequest &) = default ;
    QueryCorpDetailInfoRequest(QueryCorpDetailInfoRequest &&) = default ;
    QueryCorpDetailInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCorpDetailInfoRequest() = default ;
    QueryCorpDetailInfoRequest& operator=(const QueryCorpDetailInfoRequest &) = default ;
    QueryCorpDetailInfoRequest& operator=(QueryCorpDetailInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->targetCorpId_ != nullptr && this->targetThirdCorpId_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline QueryCorpDetailInfoRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // targetCorpId Field Functions 
    bool hasTargetCorpId() const { return this->targetCorpId_ != nullptr;};
    void deleteTargetCorpId() { this->targetCorpId_ = nullptr;};
    inline string targetCorpId() const { DARABONBA_PTR_GET_DEFAULT(targetCorpId_, "") };
    inline QueryCorpDetailInfoRequest& setTargetCorpId(string targetCorpId) { DARABONBA_PTR_SET_VALUE(targetCorpId_, targetCorpId) };


    // targetThirdCorpId Field Functions 
    bool hasTargetThirdCorpId() const { return this->targetThirdCorpId_ != nullptr;};
    void deleteTargetThirdCorpId() { this->targetThirdCorpId_ = nullptr;};
    inline string targetThirdCorpId() const { DARABONBA_PTR_GET_DEFAULT(targetThirdCorpId_, "") };
    inline QueryCorpDetailInfoRequest& setTargetThirdCorpId(string targetThirdCorpId) { DARABONBA_PTR_SET_VALUE(targetThirdCorpId_, targetThirdCorpId) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<string> targetCorpId_ = nullptr;
    std::shared_ptr<string> targetThirdCorpId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
