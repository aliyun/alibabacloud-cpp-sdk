// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORDGROUPREQUESTBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORDGROUPREQUESTBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateWordGroupRequestBodyDataWordInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class UpdateWordGroupRequestBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWordGroupRequestBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(WordInfoList, wordInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWordGroupRequestBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(WordInfoList, wordInfoList_);
    };
    UpdateWordGroupRequestBodyData() = default ;
    UpdateWordGroupRequestBodyData(const UpdateWordGroupRequestBodyData &) = default ;
    UpdateWordGroupRequestBodyData(UpdateWordGroupRequestBodyData &&) = default ;
    UpdateWordGroupRequestBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWordGroupRequestBodyData() = default ;
    UpdateWordGroupRequestBodyData& operator=(const UpdateWordGroupRequestBodyData &) = default ;
    UpdateWordGroupRequestBodyData& operator=(UpdateWordGroupRequestBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->wordInfoList_ == nullptr; };
    // wordInfoList Field Functions 
    bool hasWordInfoList() const { return this->wordInfoList_ != nullptr;};
    void deleteWordInfoList() { this->wordInfoList_ = nullptr;};
    inline const vector<Models::UpdateWordGroupRequestBodyDataWordInfoList> & wordInfoList() const { DARABONBA_PTR_GET_CONST(wordInfoList_, vector<Models::UpdateWordGroupRequestBodyDataWordInfoList>) };
    inline vector<Models::UpdateWordGroupRequestBodyDataWordInfoList> wordInfoList() { DARABONBA_PTR_GET(wordInfoList_, vector<Models::UpdateWordGroupRequestBodyDataWordInfoList>) };
    inline UpdateWordGroupRequestBodyData& setWordInfoList(const vector<Models::UpdateWordGroupRequestBodyDataWordInfoList> & wordInfoList) { DARABONBA_PTR_SET_VALUE(wordInfoList_, wordInfoList) };
    inline UpdateWordGroupRequestBodyData& setWordInfoList(vector<Models::UpdateWordGroupRequestBodyDataWordInfoList> && wordInfoList) { DARABONBA_PTR_SET_RVALUE(wordInfoList_, wordInfoList) };


  protected:
    // List of keyword groups.
    std::shared_ptr<vector<Models::UpdateWordGroupRequestBodyDataWordInfoList>> wordInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
