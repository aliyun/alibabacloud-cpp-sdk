// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYINFORESPONSEBODYREGULAREXPRESSLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYINFORESPONSEBODYREGULAREXPRESSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetPolicyInfoResponseBodyRegularExpressList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyInfoResponseBodyRegularExpressList& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(InputOutputType, inputOutputType_);
      DARABONBA_PTR_TO_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_TO_JSON(MatchAndReplace, matchAndReplace_);
      DARABONBA_PTR_TO_JSON(RegularExpress, regularExpress_);
      DARABONBA_PTR_TO_JSON(RegularExpressId, regularExpressId_);
      DARABONBA_PTR_TO_JSON(RegularExpressName, regularExpressName_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyInfoResponseBodyRegularExpressList& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(InputOutputType, inputOutputType_);
      DARABONBA_PTR_FROM_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_FROM_JSON(MatchAndReplace, matchAndReplace_);
      DARABONBA_PTR_FROM_JSON(RegularExpress, regularExpress_);
      DARABONBA_PTR_FROM_JSON(RegularExpressId, regularExpressId_);
      DARABONBA_PTR_FROM_JSON(RegularExpressName, regularExpressName_);
    };
    GetPolicyInfoResponseBodyRegularExpressList() = default ;
    GetPolicyInfoResponseBodyRegularExpressList(const GetPolicyInfoResponseBodyRegularExpressList &) = default ;
    GetPolicyInfoResponseBodyRegularExpressList(GetPolicyInfoResponseBodyRegularExpressList &&) = default ;
    GetPolicyInfoResponseBodyRegularExpressList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyInfoResponseBodyRegularExpressList() = default ;
    GetPolicyInfoResponseBodyRegularExpressList& operator=(const GetPolicyInfoResponseBodyRegularExpressList &) = default ;
    GetPolicyInfoResponseBodyRegularExpressList& operator=(GetPolicyInfoResponseBodyRegularExpressList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && return this->inputOutputType_ == nullptr && return this->isEnabled_ == nullptr && return this->matchAndReplace_ == nullptr && return this->regularExpress_ == nullptr && return this->regularExpressId_ == nullptr
        && return this->regularExpressName_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline int32_t actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, 0) };
    inline GetPolicyInfoResponseBodyRegularExpressList& setActionType(int32_t actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // inputOutputType Field Functions 
    bool hasInputOutputType() const { return this->inputOutputType_ != nullptr;};
    void deleteInputOutputType() { this->inputOutputType_ = nullptr;};
    inline int32_t inputOutputType() const { DARABONBA_PTR_GET_DEFAULT(inputOutputType_, 0) };
    inline GetPolicyInfoResponseBodyRegularExpressList& setInputOutputType(int32_t inputOutputType) { DARABONBA_PTR_SET_VALUE(inputOutputType_, inputOutputType) };


    // isEnabled Field Functions 
    bool hasIsEnabled() const { return this->isEnabled_ != nullptr;};
    void deleteIsEnabled() { this->isEnabled_ = nullptr;};
    inline int32_t isEnabled() const { DARABONBA_PTR_GET_DEFAULT(isEnabled_, 0) };
    inline GetPolicyInfoResponseBodyRegularExpressList& setIsEnabled(int32_t isEnabled) { DARABONBA_PTR_SET_VALUE(isEnabled_, isEnabled) };


    // matchAndReplace Field Functions 
    bool hasMatchAndReplace() const { return this->matchAndReplace_ != nullptr;};
    void deleteMatchAndReplace() { this->matchAndReplace_ = nullptr;};
    inline string matchAndReplace() const { DARABONBA_PTR_GET_DEFAULT(matchAndReplace_, "") };
    inline GetPolicyInfoResponseBodyRegularExpressList& setMatchAndReplace(string matchAndReplace) { DARABONBA_PTR_SET_VALUE(matchAndReplace_, matchAndReplace) };


    // regularExpress Field Functions 
    bool hasRegularExpress() const { return this->regularExpress_ != nullptr;};
    void deleteRegularExpress() { this->regularExpress_ = nullptr;};
    inline string regularExpress() const { DARABONBA_PTR_GET_DEFAULT(regularExpress_, "") };
    inline GetPolicyInfoResponseBodyRegularExpressList& setRegularExpress(string regularExpress) { DARABONBA_PTR_SET_VALUE(regularExpress_, regularExpress) };


    // regularExpressId Field Functions 
    bool hasRegularExpressId() const { return this->regularExpressId_ != nullptr;};
    void deleteRegularExpressId() { this->regularExpressId_ = nullptr;};
    inline int64_t regularExpressId() const { DARABONBA_PTR_GET_DEFAULT(regularExpressId_, 0L) };
    inline GetPolicyInfoResponseBodyRegularExpressList& setRegularExpressId(int64_t regularExpressId) { DARABONBA_PTR_SET_VALUE(regularExpressId_, regularExpressId) };


    // regularExpressName Field Functions 
    bool hasRegularExpressName() const { return this->regularExpressName_ != nullptr;};
    void deleteRegularExpressName() { this->regularExpressName_ = nullptr;};
    inline string regularExpressName() const { DARABONBA_PTR_GET_DEFAULT(regularExpressName_, "") };
    inline GetPolicyInfoResponseBodyRegularExpressList& setRegularExpressName(string regularExpressName) { DARABONBA_PTR_SET_VALUE(regularExpressName_, regularExpressName) };


  protected:
    std::shared_ptr<int32_t> actionType_ = nullptr;
    std::shared_ptr<int32_t> inputOutputType_ = nullptr;
    std::shared_ptr<int32_t> isEnabled_ = nullptr;
    std::shared_ptr<string> matchAndReplace_ = nullptr;
    std::shared_ptr<string> regularExpress_ = nullptr;
    std::shared_ptr<int64_t> regularExpressId_ = nullptr;
    std::shared_ptr<string> regularExpressName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
