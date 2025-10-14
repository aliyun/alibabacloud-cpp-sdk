// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHCHEATDETECTIONRESPONSEBODYIMAGECHEAT_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHCHEATDETECTIONRESPONSEBODYIMAGECHEAT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAICoachCheatDetectionResponseBodyImageCheatList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachCheatDetectionResponseBodyImageCheat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachCheatDetectionResponseBodyImageCheat& obj) { 
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(list, list_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachCheatDetectionResponseBodyImageCheat& obj) { 
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(list, list_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetAICoachCheatDetectionResponseBodyImageCheat() = default ;
    GetAICoachCheatDetectionResponseBodyImageCheat(const GetAICoachCheatDetectionResponseBodyImageCheat &) = default ;
    GetAICoachCheatDetectionResponseBodyImageCheat(GetAICoachCheatDetectionResponseBodyImageCheat &&) = default ;
    GetAICoachCheatDetectionResponseBodyImageCheat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachCheatDetectionResponseBodyImageCheat() = default ;
    GetAICoachCheatDetectionResponseBodyImageCheat& operator=(const GetAICoachCheatDetectionResponseBodyImageCheat &) = default ;
    GetAICoachCheatDetectionResponseBodyImageCheat& operator=(GetAICoachCheatDetectionResponseBodyImageCheat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desc_ == nullptr
        && return this->list_ == nullptr && return this->status_ == nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline GetAICoachCheatDetectionResponseBodyImageCheat& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::GetAICoachCheatDetectionResponseBodyImageCheatList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::GetAICoachCheatDetectionResponseBodyImageCheatList>) };
    inline vector<Models::GetAICoachCheatDetectionResponseBodyImageCheatList> list() { DARABONBA_PTR_GET(list_, vector<Models::GetAICoachCheatDetectionResponseBodyImageCheatList>) };
    inline GetAICoachCheatDetectionResponseBodyImageCheat& setList(const vector<Models::GetAICoachCheatDetectionResponseBodyImageCheatList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetAICoachCheatDetectionResponseBodyImageCheat& setList(vector<Models::GetAICoachCheatDetectionResponseBodyImageCheatList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetAICoachCheatDetectionResponseBodyImageCheat& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<vector<Models::GetAICoachCheatDetectionResponseBodyImageCheatList>> list_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
