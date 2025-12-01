// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVULLISTBYIDRESPONSEBODYDATAEFFECTMSGDTOS_HPP_
#define ALIBABACLOUD_MODELS_GETVULLISTBYIDRESPONSEBODYDATAEFFECTMSGDTOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetVulListByIdResponseBodyDataEffectMsgDTOS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVulListByIdResponseBodyDataEffectMsgDTOS& obj) { 
      DARABONBA_PTR_TO_JSON(MatchList, matchList_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(SoftName, softName_);
    };
    friend void from_json(const Darabonba::Json& j, GetVulListByIdResponseBodyDataEffectMsgDTOS& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchList, matchList_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(SoftName, softName_);
    };
    GetVulListByIdResponseBodyDataEffectMsgDTOS() = default ;
    GetVulListByIdResponseBodyDataEffectMsgDTOS(const GetVulListByIdResponseBodyDataEffectMsgDTOS &) = default ;
    GetVulListByIdResponseBodyDataEffectMsgDTOS(GetVulListByIdResponseBodyDataEffectMsgDTOS &&) = default ;
    GetVulListByIdResponseBodyDataEffectMsgDTOS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVulListByIdResponseBodyDataEffectMsgDTOS() = default ;
    GetVulListByIdResponseBodyDataEffectMsgDTOS& operator=(const GetVulListByIdResponseBodyDataEffectMsgDTOS &) = default ;
    GetVulListByIdResponseBodyDataEffectMsgDTOS& operator=(GetVulListByIdResponseBodyDataEffectMsgDTOS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->matchList_ == nullptr
        && return this->path_ == nullptr && return this->softName_ == nullptr; };
    // matchList Field Functions 
    bool hasMatchList() const { return this->matchList_ != nullptr;};
    void deleteMatchList() { this->matchList_ = nullptr;};
    inline string matchList() const { DARABONBA_PTR_GET_DEFAULT(matchList_, "") };
    inline GetVulListByIdResponseBodyDataEffectMsgDTOS& setMatchList(string matchList) { DARABONBA_PTR_SET_VALUE(matchList_, matchList) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetVulListByIdResponseBodyDataEffectMsgDTOS& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // softName Field Functions 
    bool hasSoftName() const { return this->softName_ != nullptr;};
    void deleteSoftName() { this->softName_ = nullptr;};
    inline string softName() const { DARABONBA_PTR_GET_DEFAULT(softName_, "") };
    inline GetVulListByIdResponseBodyDataEffectMsgDTOS& setSoftName(string softName) { DARABONBA_PTR_SET_VALUE(softName_, softName) };


  protected:
    // Hit
    std::shared_ptr<string> matchList_ = nullptr;
    // Path
    std::shared_ptr<string> path_ = nullptr;
    // Software name
    std::shared_ptr<string> softName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
