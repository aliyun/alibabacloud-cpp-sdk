// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTINEENVIRONMENTVARIABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTINEENVIRONMENTVARIABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListRoutineEnvironmentVariablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoutineEnvironmentVariablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoutineEnvironmentVariablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListRoutineEnvironmentVariablesRequest() = default ;
    ListRoutineEnvironmentVariablesRequest(const ListRoutineEnvironmentVariablesRequest &) = default ;
    ListRoutineEnvironmentVariablesRequest(ListRoutineEnvironmentVariablesRequest &&) = default ;
    ListRoutineEnvironmentVariablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoutineEnvironmentVariablesRequest() = default ;
    ListRoutineEnvironmentVariablesRequest& operator=(const ListRoutineEnvironmentVariablesRequest &) = default ;
    ListRoutineEnvironmentVariablesRequest& operator=(ListRoutineEnvironmentVariablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && this->keyWord_ == nullptr && this->name_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ListRoutineEnvironmentVariablesRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // keyWord Field Functions 
    bool hasKeyWord() const { return this->keyWord_ != nullptr;};
    void deleteKeyWord() { this->keyWord_ = nullptr;};
    inline string getKeyWord() const { DARABONBA_PTR_GET_DEFAULT(keyWord_, "") };
    inline ListRoutineEnvironmentVariablesRequest& setKeyWord(string keyWord) { DARABONBA_PTR_SET_VALUE(keyWord_, keyWord) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListRoutineEnvironmentVariablesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListRoutineEnvironmentVariablesRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListRoutineEnvironmentVariablesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The environment name.
    // 
    // Valid values:
    // - `production`: production environment
    // - `staging`: staging environment
    // 
    // This parameter is required.
    shared_ptr<string> env_ {};
    // The keyword used to perform a case-insensitive fuzzy search on environment variable keys.
    shared_ptr<string> keyWord_ {};
    // The function name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The page number. Default value: 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Default value: 20.
    shared_ptr<int64_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
