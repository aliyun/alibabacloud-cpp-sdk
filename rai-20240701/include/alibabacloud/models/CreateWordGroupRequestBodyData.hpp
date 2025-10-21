// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORDGROUPREQUESTBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORDGROUPREQUESTBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateWordGroupRequestBodyDataWordInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class CreateWordGroupRequestBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWordGroupRequestBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(WordInfoList, wordInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWordGroupRequestBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(WordInfoList, wordInfoList_);
    };
    CreateWordGroupRequestBodyData() = default ;
    CreateWordGroupRequestBodyData(const CreateWordGroupRequestBodyData &) = default ;
    CreateWordGroupRequestBodyData(CreateWordGroupRequestBodyData &&) = default ;
    CreateWordGroupRequestBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWordGroupRequestBodyData() = default ;
    CreateWordGroupRequestBodyData& operator=(const CreateWordGroupRequestBodyData &) = default ;
    CreateWordGroupRequestBodyData& operator=(CreateWordGroupRequestBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->wordInfoList_ == nullptr; };
    // wordInfoList Field Functions 
    bool hasWordInfoList() const { return this->wordInfoList_ != nullptr;};
    void deleteWordInfoList() { this->wordInfoList_ = nullptr;};
    inline const vector<Models::CreateWordGroupRequestBodyDataWordInfoList> & wordInfoList() const { DARABONBA_PTR_GET_CONST(wordInfoList_, vector<Models::CreateWordGroupRequestBodyDataWordInfoList>) };
    inline vector<Models::CreateWordGroupRequestBodyDataWordInfoList> wordInfoList() { DARABONBA_PTR_GET(wordInfoList_, vector<Models::CreateWordGroupRequestBodyDataWordInfoList>) };
    inline CreateWordGroupRequestBodyData& setWordInfoList(const vector<Models::CreateWordGroupRequestBodyDataWordInfoList> & wordInfoList) { DARABONBA_PTR_SET_VALUE(wordInfoList_, wordInfoList) };
    inline CreateWordGroupRequestBodyData& setWordInfoList(vector<Models::CreateWordGroupRequestBodyDataWordInfoList> && wordInfoList) { DARABONBA_PTR_SET_RVALUE(wordInfoList_, wordInfoList) };


  protected:
    // Keyword group list
    std::shared_ptr<vector<Models::CreateWordGroupRequestBodyDataWordInfoList>> wordInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
