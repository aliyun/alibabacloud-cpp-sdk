// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATADIALOGUES_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATADIALOGUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataDialoguesDialogue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBodyDataDialogues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBodyDataDialogues& obj) { 
      DARABONBA_PTR_TO_JSON(Dialogue, dialogue_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBodyDataDialogues& obj) { 
      DARABONBA_PTR_FROM_JSON(Dialogue, dialogue_);
    };
    GetResultToReviewResponseBodyDataDialogues() = default ;
    GetResultToReviewResponseBodyDataDialogues(const GetResultToReviewResponseBodyDataDialogues &) = default ;
    GetResultToReviewResponseBodyDataDialogues(GetResultToReviewResponseBodyDataDialogues &&) = default ;
    GetResultToReviewResponseBodyDataDialogues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBodyDataDialogues() = default ;
    GetResultToReviewResponseBodyDataDialogues& operator=(const GetResultToReviewResponseBodyDataDialogues &) = default ;
    GetResultToReviewResponseBodyDataDialogues& operator=(GetResultToReviewResponseBodyDataDialogues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dialogue_ != nullptr; };
    // dialogue Field Functions 
    bool hasDialogue() const { return this->dialogue_ != nullptr;};
    void deleteDialogue() { this->dialogue_ = nullptr;};
    inline const vector<Models::GetResultToReviewResponseBodyDataDialoguesDialogue> & dialogue() const { DARABONBA_PTR_GET_CONST(dialogue_, vector<Models::GetResultToReviewResponseBodyDataDialoguesDialogue>) };
    inline vector<Models::GetResultToReviewResponseBodyDataDialoguesDialogue> dialogue() { DARABONBA_PTR_GET(dialogue_, vector<Models::GetResultToReviewResponseBodyDataDialoguesDialogue>) };
    inline GetResultToReviewResponseBodyDataDialogues& setDialogue(const vector<Models::GetResultToReviewResponseBodyDataDialoguesDialogue> & dialogue) { DARABONBA_PTR_SET_VALUE(dialogue_, dialogue) };
    inline GetResultToReviewResponseBodyDataDialogues& setDialogue(vector<Models::GetResultToReviewResponseBodyDataDialoguesDialogue> && dialogue) { DARABONBA_PTR_SET_RVALUE(dialogue_, dialogue) };


  protected:
    std::shared_ptr<vector<Models::GetResultToReviewResponseBodyDataDialoguesDialogue>> dialogue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
