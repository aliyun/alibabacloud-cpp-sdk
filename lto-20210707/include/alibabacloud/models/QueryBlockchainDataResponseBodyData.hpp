// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBLOCKCHAINDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYBLOCKCHAINDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class QueryBlockchainDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBlockchainDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AlgType, algType_);
      DARABONBA_PTR_TO_JSON(PlainData, plainData_);
      DARABONBA_PTR_TO_JSON(PrivacyData, privacyData_);
      DARABONBA_PTR_TO_JSON(PrivacyRuleId, privacyRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBlockchainDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgType, algType_);
      DARABONBA_PTR_FROM_JSON(PlainData, plainData_);
      DARABONBA_PTR_FROM_JSON(PrivacyData, privacyData_);
      DARABONBA_PTR_FROM_JSON(PrivacyRuleId, privacyRuleId_);
    };
    QueryBlockchainDataResponseBodyData() = default ;
    QueryBlockchainDataResponseBodyData(const QueryBlockchainDataResponseBodyData &) = default ;
    QueryBlockchainDataResponseBodyData(QueryBlockchainDataResponseBodyData &&) = default ;
    QueryBlockchainDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBlockchainDataResponseBodyData() = default ;
    QueryBlockchainDataResponseBodyData& operator=(const QueryBlockchainDataResponseBodyData &) = default ;
    QueryBlockchainDataResponseBodyData& operator=(QueryBlockchainDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algType_ == nullptr
        && return this->plainData_ == nullptr && return this->privacyData_ == nullptr && return this->privacyRuleId_ == nullptr; };
    // algType Field Functions 
    bool hasAlgType() const { return this->algType_ != nullptr;};
    void deleteAlgType() { this->algType_ = nullptr;};
    inline string algType() const { DARABONBA_PTR_GET_DEFAULT(algType_, "") };
    inline QueryBlockchainDataResponseBodyData& setAlgType(string algType) { DARABONBA_PTR_SET_VALUE(algType_, algType) };


    // plainData Field Functions 
    bool hasPlainData() const { return this->plainData_ != nullptr;};
    void deletePlainData() { this->plainData_ = nullptr;};
    inline string plainData() const { DARABONBA_PTR_GET_DEFAULT(plainData_, "") };
    inline QueryBlockchainDataResponseBodyData& setPlainData(string plainData) { DARABONBA_PTR_SET_VALUE(plainData_, plainData) };


    // privacyData Field Functions 
    bool hasPrivacyData() const { return this->privacyData_ != nullptr;};
    void deletePrivacyData() { this->privacyData_ = nullptr;};
    inline string privacyData() const { DARABONBA_PTR_GET_DEFAULT(privacyData_, "") };
    inline QueryBlockchainDataResponseBodyData& setPrivacyData(string privacyData) { DARABONBA_PTR_SET_VALUE(privacyData_, privacyData) };


    // privacyRuleId Field Functions 
    bool hasPrivacyRuleId() const { return this->privacyRuleId_ != nullptr;};
    void deletePrivacyRuleId() { this->privacyRuleId_ = nullptr;};
    inline string privacyRuleId() const { DARABONBA_PTR_GET_DEFAULT(privacyRuleId_, "") };
    inline QueryBlockchainDataResponseBodyData& setPrivacyRuleId(string privacyRuleId) { DARABONBA_PTR_SET_VALUE(privacyRuleId_, privacyRuleId) };


  protected:
    std::shared_ptr<string> algType_ = nullptr;
    std::shared_ptr<string> plainData_ = nullptr;
    std::shared_ptr<string> privacyData_ = nullptr;
    std::shared_ptr<string> privacyRuleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
