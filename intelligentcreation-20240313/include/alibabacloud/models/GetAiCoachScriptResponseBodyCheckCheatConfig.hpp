// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYCHECKCHEATCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYCHECKCHEATCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachScriptResponseBodyCheckCheatConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachScriptResponseBodyCheckCheatConfig& obj) { 
      DARABONBA_PTR_TO_JSON(checkImage, checkImage_);
      DARABONBA_PTR_TO_JSON(checkVoice, checkVoice_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachScriptResponseBodyCheckCheatConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(checkImage, checkImage_);
      DARABONBA_PTR_FROM_JSON(checkVoice, checkVoice_);
    };
    GetAICoachScriptResponseBodyCheckCheatConfig() = default ;
    GetAICoachScriptResponseBodyCheckCheatConfig(const GetAICoachScriptResponseBodyCheckCheatConfig &) = default ;
    GetAICoachScriptResponseBodyCheckCheatConfig(GetAICoachScriptResponseBodyCheckCheatConfig &&) = default ;
    GetAICoachScriptResponseBodyCheckCheatConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachScriptResponseBodyCheckCheatConfig() = default ;
    GetAICoachScriptResponseBodyCheckCheatConfig& operator=(const GetAICoachScriptResponseBodyCheckCheatConfig &) = default ;
    GetAICoachScriptResponseBodyCheckCheatConfig& operator=(GetAICoachScriptResponseBodyCheckCheatConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkImage_ == nullptr
        && return this->checkVoice_ == nullptr; };
    // checkImage Field Functions 
    bool hasCheckImage() const { return this->checkImage_ != nullptr;};
    void deleteCheckImage() { this->checkImage_ = nullptr;};
    inline bool checkImage() const { DARABONBA_PTR_GET_DEFAULT(checkImage_, false) };
    inline GetAICoachScriptResponseBodyCheckCheatConfig& setCheckImage(bool checkImage) { DARABONBA_PTR_SET_VALUE(checkImage_, checkImage) };


    // checkVoice Field Functions 
    bool hasCheckVoice() const { return this->checkVoice_ != nullptr;};
    void deleteCheckVoice() { this->checkVoice_ = nullptr;};
    inline bool checkVoice() const { DARABONBA_PTR_GET_DEFAULT(checkVoice_, false) };
    inline GetAICoachScriptResponseBodyCheckCheatConfig& setCheckVoice(bool checkVoice) { DARABONBA_PTR_SET_VALUE(checkVoice_, checkVoice) };


  protected:
    std::shared_ptr<bool> checkImage_ = nullptr;
    std::shared_ptr<bool> checkVoice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
