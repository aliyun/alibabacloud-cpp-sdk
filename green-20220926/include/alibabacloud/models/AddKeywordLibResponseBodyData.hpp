// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDKEYWORDLIBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDKEYWORDLIBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddKeywordLibResponseBodyDataKeywordsResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class AddKeywordLibResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddKeywordLibResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(KeywordsResult, keywordsResult_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, AddKeywordLibResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(KeywordsResult, keywordsResult_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    AddKeywordLibResponseBodyData() = default ;
    AddKeywordLibResponseBodyData(const AddKeywordLibResponseBodyData &) = default ;
    AddKeywordLibResponseBodyData(AddKeywordLibResponseBodyData &&) = default ;
    AddKeywordLibResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddKeywordLibResponseBodyData() = default ;
    AddKeywordLibResponseBodyData& operator=(const AddKeywordLibResponseBodyData &) = default ;
    AddKeywordLibResponseBodyData& operator=(AddKeywordLibResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keywordsResult_ == nullptr
        && return this->libId_ == nullptr && return this->taskId_ == nullptr; };
    // keywordsResult Field Functions 
    bool hasKeywordsResult() const { return this->keywordsResult_ != nullptr;};
    void deleteKeywordsResult() { this->keywordsResult_ = nullptr;};
    inline const Models::AddKeywordLibResponseBodyDataKeywordsResult & keywordsResult() const { DARABONBA_PTR_GET_CONST(keywordsResult_, Models::AddKeywordLibResponseBodyDataKeywordsResult) };
    inline Models::AddKeywordLibResponseBodyDataKeywordsResult keywordsResult() { DARABONBA_PTR_GET(keywordsResult_, Models::AddKeywordLibResponseBodyDataKeywordsResult) };
    inline AddKeywordLibResponseBodyData& setKeywordsResult(const Models::AddKeywordLibResponseBodyDataKeywordsResult & keywordsResult) { DARABONBA_PTR_SET_VALUE(keywordsResult_, keywordsResult) };
    inline AddKeywordLibResponseBodyData& setKeywordsResult(Models::AddKeywordLibResponseBodyDataKeywordsResult && keywordsResult) { DARABONBA_PTR_SET_RVALUE(keywordsResult_, keywordsResult) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string libId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline AddKeywordLibResponseBodyData& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AddKeywordLibResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Result.
    std::shared_ptr<Models::AddKeywordLibResponseBodyDataKeywordsResult> keywordsResult_ = nullptr;
    // The id of the keyword library.
    std::shared_ptr<string> libId_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
