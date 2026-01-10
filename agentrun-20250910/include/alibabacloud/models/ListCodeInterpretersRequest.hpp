// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCODEINTERPRETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCODEINTERPRETERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListCodeInterpretersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCodeInterpretersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(codeInterpreterName, codeInterpreterName_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListCodeInterpretersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(codeInterpreterName, codeInterpreterName_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ListCodeInterpretersRequest() = default ;
    ListCodeInterpretersRequest(const ListCodeInterpretersRequest &) = default ;
    ListCodeInterpretersRequest(ListCodeInterpretersRequest &&) = default ;
    ListCodeInterpretersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCodeInterpretersRequest() = default ;
    ListCodeInterpretersRequest& operator=(const ListCodeInterpretersRequest &) = default ;
    ListCodeInterpretersRequest& operator=(ListCodeInterpretersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeInterpreterName_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // codeInterpreterName Field Functions 
    bool hasCodeInterpreterName() const { return this->codeInterpreterName_ != nullptr;};
    void deleteCodeInterpreterName() { this->codeInterpreterName_ = nullptr;};
    inline string getCodeInterpreterName() const { DARABONBA_PTR_GET_DEFAULT(codeInterpreterName_, "") };
    inline ListCodeInterpretersRequest& setCodeInterpreterName(string codeInterpreterName) { DARABONBA_PTR_SET_VALUE(codeInterpreterName_, codeInterpreterName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCodeInterpretersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCodeInterpretersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // 根据代码解释器实例名称进行模糊匹配过滤
    shared_ptr<string> codeInterpreterName_ {};
    // 当前页码，从1开始计数
    shared_ptr<int32_t> pageNumber_ {};
    // 每页返回的记录数量
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
