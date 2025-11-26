// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGLOBALQUESTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGLOBALQUESTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListGlobalQuestionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGlobalQuestionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGlobalQuestionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
    };
    ListGlobalQuestionsRequest() = default ;
    ListGlobalQuestionsRequest(const ListGlobalQuestionsRequest &) = default ;
    ListGlobalQuestionsRequest(ListGlobalQuestionsRequest &&) = default ;
    ListGlobalQuestionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGlobalQuestionsRequest() = default ;
    ListGlobalQuestionsRequest& operator=(const ListGlobalQuestionsRequest &) = default ;
    ListGlobalQuestionsRequest& operator=(ListGlobalQuestionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->scriptId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListGlobalQuestionsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListGlobalQuestionsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListGlobalQuestionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ListGlobalQuestionsRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
