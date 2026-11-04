// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFACEUSERBYNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYFACEUSERBYNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryFaceUserByNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFaceUserByNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFaceUserByNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsolationId, isolationId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
    };
    QueryFaceUserByNameRequest() = default ;
    QueryFaceUserByNameRequest(const QueryFaceUserByNameRequest &) = default ;
    QueryFaceUserByNameRequest(QueryFaceUserByNameRequest &&) = default ;
    QueryFaceUserByNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFaceUserByNameRequest() = default ;
    QueryFaceUserByNameRequest& operator=(const QueryFaceUserByNameRequest &) = default ;
    QueryFaceUserByNameRequest& operator=(QueryFaceUserByNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isolationId_ == nullptr
        && this->name_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->params_ == nullptr; };
    // isolationId Field Functions 
    bool hasIsolationId() const { return this->isolationId_ != nullptr;};
    void deleteIsolationId() { this->isolationId_ = nullptr;};
    inline string getIsolationId() const { DARABONBA_PTR_GET_DEFAULT(isolationId_, "") };
    inline QueryFaceUserByNameRequest& setIsolationId(string isolationId) { DARABONBA_PTR_SET_VALUE(isolationId_, isolationId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryFaceUserByNameRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline QueryFaceUserByNameRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryFaceUserByNameRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline QueryFaceUserByNameRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


  protected:
    // The business isolation ID, which is used to isolate data between different business applications under the same Alibaba Cloud account. Make sure that this parameter is consistent with the **IsolationId** set when you call the [AddFaceUser](https://help.aliyun.com/document_detail/288338.html) operation to add a user.
    // 
    // This parameter is required.
    shared_ptr<string> isolationId_ {};
    // The username. The name can contain Chinese characters, uppercase and lowercase letters, digits, underscores (_), and hyphens (-), and can be up to 64 characters in length.
    // 
    // Fuzzy match is supported. If this parameter is not specified, all records are matched.
    shared_ptr<string> name_ {};
    // The page number of the page to return. Minimum value: 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries to return on each page. Maximum value: 50. Minimum value: 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The custom user parameters.
    // 
    // Exact match is supported, but fuzzy match is not supported.
    shared_ptr<string> params_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
