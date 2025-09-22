// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTRANSLATETASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTRANSLATETASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class GetDocTranslateTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocTranslateTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(charactersCount, charactersCount_);
      DARABONBA_PTR_TO_JSON(pageCount, pageCount_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(translateFileUrl, translateFileUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocTranslateTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(charactersCount, charactersCount_);
      DARABONBA_PTR_FROM_JSON(pageCount, pageCount_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(translateFileUrl, translateFileUrl_);
    };
    GetDocTranslateTaskResponseBodyData() = default ;
    GetDocTranslateTaskResponseBodyData(const GetDocTranslateTaskResponseBodyData &) = default ;
    GetDocTranslateTaskResponseBodyData(GetDocTranslateTaskResponseBodyData &&) = default ;
    GetDocTranslateTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocTranslateTaskResponseBodyData() = default ;
    GetDocTranslateTaskResponseBodyData& operator=(const GetDocTranslateTaskResponseBodyData &) = default ;
    GetDocTranslateTaskResponseBodyData& operator=(GetDocTranslateTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->charactersCount_ != nullptr
        && this->pageCount_ != nullptr && this->status_ != nullptr && this->taskId_ != nullptr && this->translateFileUrl_ != nullptr; };
    // charactersCount Field Functions 
    bool hasCharactersCount() const { return this->charactersCount_ != nullptr;};
    void deleteCharactersCount() { this->charactersCount_ = nullptr;};
    inline int32_t charactersCount() const { DARABONBA_PTR_GET_DEFAULT(charactersCount_, 0) };
    inline GetDocTranslateTaskResponseBodyData& setCharactersCount(int32_t charactersCount) { DARABONBA_PTR_SET_VALUE(charactersCount_, charactersCount) };


    // pageCount Field Functions 
    bool hasPageCount() const { return this->pageCount_ != nullptr;};
    void deletePageCount() { this->pageCount_ = nullptr;};
    inline int32_t pageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0) };
    inline GetDocTranslateTaskResponseBodyData& setPageCount(int32_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDocTranslateTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetDocTranslateTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // translateFileUrl Field Functions 
    bool hasTranslateFileUrl() const { return this->translateFileUrl_ != nullptr;};
    void deleteTranslateFileUrl() { this->translateFileUrl_ = nullptr;};
    inline string translateFileUrl() const { DARABONBA_PTR_GET_DEFAULT(translateFileUrl_, "") };
    inline GetDocTranslateTaskResponseBodyData& setTranslateFileUrl(string translateFileUrl) { DARABONBA_PTR_SET_VALUE(translateFileUrl_, translateFileUrl) };


  protected:
    std::shared_ptr<int32_t> charactersCount_ = nullptr;
    std::shared_ptr<int32_t> pageCount_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> translateFileUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
