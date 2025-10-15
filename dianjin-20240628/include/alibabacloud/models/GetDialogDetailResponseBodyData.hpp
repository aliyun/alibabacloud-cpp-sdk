// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIALOGDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDIALOGDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDialogDetailResponseBodyDataDialogueList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetDialogDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDialogDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(dialogueList, dialogueList_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(totalDialogTurns, totalDialogTurns_);
      DARABONBA_PTR_TO_JSON(validDialogTurns, validDialogTurns_);
    };
    friend void from_json(const Darabonba::Json& j, GetDialogDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(dialogueList, dialogueList_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(totalDialogTurns, totalDialogTurns_);
      DARABONBA_PTR_FROM_JSON(validDialogTurns, validDialogTurns_);
    };
    GetDialogDetailResponseBodyData() = default ;
    GetDialogDetailResponseBodyData(const GetDialogDetailResponseBodyData &) = default ;
    GetDialogDetailResponseBodyData(GetDialogDetailResponseBodyData &&) = default ;
    GetDialogDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDialogDetailResponseBodyData() = default ;
    GetDialogDetailResponseBodyData& operator=(const GetDialogDetailResponseBodyData &) = default ;
    GetDialogDetailResponseBodyData& operator=(GetDialogDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dialogueList_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->status_ == nullptr && return this->totalDialogTurns_ == nullptr && return this->validDialogTurns_ == nullptr; };
    // dialogueList Field Functions 
    bool hasDialogueList() const { return this->dialogueList_ != nullptr;};
    void deleteDialogueList() { this->dialogueList_ = nullptr;};
    inline const vector<Models::GetDialogDetailResponseBodyDataDialogueList> & dialogueList() const { DARABONBA_PTR_GET_CONST(dialogueList_, vector<Models::GetDialogDetailResponseBodyDataDialogueList>) };
    inline vector<Models::GetDialogDetailResponseBodyDataDialogueList> dialogueList() { DARABONBA_PTR_GET(dialogueList_, vector<Models::GetDialogDetailResponseBodyDataDialogueList>) };
    inline GetDialogDetailResponseBodyData& setDialogueList(const vector<Models::GetDialogDetailResponseBodyDataDialogueList> & dialogueList) { DARABONBA_PTR_SET_VALUE(dialogueList_, dialogueList) };
    inline GetDialogDetailResponseBodyData& setDialogueList(vector<Models::GetDialogDetailResponseBodyDataDialogueList> && dialogueList) { DARABONBA_PTR_SET_RVALUE(dialogueList_, dialogueList) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetDialogDetailResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDialogDetailResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalDialogTurns Field Functions 
    bool hasTotalDialogTurns() const { return this->totalDialogTurns_ != nullptr;};
    void deleteTotalDialogTurns() { this->totalDialogTurns_ = nullptr;};
    inline int32_t totalDialogTurns() const { DARABONBA_PTR_GET_DEFAULT(totalDialogTurns_, 0) };
    inline GetDialogDetailResponseBodyData& setTotalDialogTurns(int32_t totalDialogTurns) { DARABONBA_PTR_SET_VALUE(totalDialogTurns_, totalDialogTurns) };


    // validDialogTurns Field Functions 
    bool hasValidDialogTurns() const { return this->validDialogTurns_ != nullptr;};
    void deleteValidDialogTurns() { this->validDialogTurns_ = nullptr;};
    inline int32_t validDialogTurns() const { DARABONBA_PTR_GET_DEFAULT(validDialogTurns_, 0) };
    inline GetDialogDetailResponseBodyData& setValidDialogTurns(int32_t validDialogTurns) { DARABONBA_PTR_SET_VALUE(validDialogTurns_, validDialogTurns) };


  protected:
    std::shared_ptr<vector<Models::GetDialogDetailResponseBodyDataDialogueList>> dialogueList_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> totalDialogTurns_ = nullptr;
    std::shared_ptr<int32_t> validDialogTurns_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
