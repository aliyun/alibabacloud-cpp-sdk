// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYREQUESTREGULAREXPRESSLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYREQUESTREGULAREXPRESSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class CreatePolicyRequestRegularExpressList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyRequestRegularExpressList& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(RegularExpress, regularExpress_);
      DARABONBA_PTR_TO_JSON(RegularExpressName, regularExpressName_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyRequestRegularExpressList& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(RegularExpress, regularExpress_);
      DARABONBA_PTR_FROM_JSON(RegularExpressName, regularExpressName_);
    };
    CreatePolicyRequestRegularExpressList() = default ;
    CreatePolicyRequestRegularExpressList(const CreatePolicyRequestRegularExpressList &) = default ;
    CreatePolicyRequestRegularExpressList(CreatePolicyRequestRegularExpressList &&) = default ;
    CreatePolicyRequestRegularExpressList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyRequestRegularExpressList() = default ;
    CreatePolicyRequestRegularExpressList& operator=(const CreatePolicyRequestRegularExpressList &) = default ;
    CreatePolicyRequestRegularExpressList& operator=(CreatePolicyRequestRegularExpressList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && return this->regularExpress_ == nullptr && return this->regularExpressName_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline int32_t actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, 0) };
    inline CreatePolicyRequestRegularExpressList& setActionType(int32_t actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // regularExpress Field Functions 
    bool hasRegularExpress() const { return this->regularExpress_ != nullptr;};
    void deleteRegularExpress() { this->regularExpress_ = nullptr;};
    inline string regularExpress() const { DARABONBA_PTR_GET_DEFAULT(regularExpress_, "") };
    inline CreatePolicyRequestRegularExpressList& setRegularExpress(string regularExpress) { DARABONBA_PTR_SET_VALUE(regularExpress_, regularExpress) };


    // regularExpressName Field Functions 
    bool hasRegularExpressName() const { return this->regularExpressName_ != nullptr;};
    void deleteRegularExpressName() { this->regularExpressName_ = nullptr;};
    inline string regularExpressName() const { DARABONBA_PTR_GET_DEFAULT(regularExpressName_, "") };
    inline CreatePolicyRequestRegularExpressList& setRegularExpressName(string regularExpressName) { DARABONBA_PTR_SET_VALUE(regularExpressName_, regularExpressName) };


  protected:
    std::shared_ptr<int32_t> actionType_ = nullptr;
    std::shared_ptr<string> regularExpress_ = nullptr;
    std::shared_ptr<string> regularExpressName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
