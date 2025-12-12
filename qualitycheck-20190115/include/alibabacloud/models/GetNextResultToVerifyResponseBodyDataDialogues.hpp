// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNEXTRESULTTOVERIFYRESPONSEBODYDATADIALOGUES_HPP_
#define ALIBABACLOUD_MODELS_GETNEXTRESULTTOVERIFYRESPONSEBODYDATADIALOGUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetNextResultToVerifyResponseBodyDataDialoguesDialogue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetNextResultToVerifyResponseBodyDataDialogues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNextResultToVerifyResponseBodyDataDialogues& obj) { 
      DARABONBA_PTR_TO_JSON(Dialogue, dialogue_);
    };
    friend void from_json(const Darabonba::Json& j, GetNextResultToVerifyResponseBodyDataDialogues& obj) { 
      DARABONBA_PTR_FROM_JSON(Dialogue, dialogue_);
    };
    GetNextResultToVerifyResponseBodyDataDialogues() = default ;
    GetNextResultToVerifyResponseBodyDataDialogues(const GetNextResultToVerifyResponseBodyDataDialogues &) = default ;
    GetNextResultToVerifyResponseBodyDataDialogues(GetNextResultToVerifyResponseBodyDataDialogues &&) = default ;
    GetNextResultToVerifyResponseBodyDataDialogues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNextResultToVerifyResponseBodyDataDialogues() = default ;
    GetNextResultToVerifyResponseBodyDataDialogues& operator=(const GetNextResultToVerifyResponseBodyDataDialogues &) = default ;
    GetNextResultToVerifyResponseBodyDataDialogues& operator=(GetNextResultToVerifyResponseBodyDataDialogues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dialogue_ == nullptr; };
    // dialogue Field Functions 
    bool hasDialogue() const { return this->dialogue_ != nullptr;};
    void deleteDialogue() { this->dialogue_ = nullptr;};
    inline const vector<Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogue> & dialogue() const { DARABONBA_PTR_GET_CONST(dialogue_, vector<Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogue>) };
    inline vector<Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogue> dialogue() { DARABONBA_PTR_GET(dialogue_, vector<Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogue>) };
    inline GetNextResultToVerifyResponseBodyDataDialogues& setDialogue(const vector<Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogue> & dialogue) { DARABONBA_PTR_SET_VALUE(dialogue_, dialogue) };
    inline GetNextResultToVerifyResponseBodyDataDialogues& setDialogue(vector<Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogue> && dialogue) { DARABONBA_PTR_SET_RVALUE(dialogue_, dialogue) };


  protected:
    std::shared_ptr<vector<Models::GetNextResultToVerifyResponseBodyDataDialoguesDialogue>> dialogue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
