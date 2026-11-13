// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWEBFILTERTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWEBFILTERTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ListWebFilterTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWebFilterTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WebFilterTemplateIds, webFilterTemplateIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListWebFilterTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WebFilterTemplateIds, webFilterTemplateIds_);
    };
    ListWebFilterTemplatesRequest() = default ;
    ListWebFilterTemplatesRequest(const ListWebFilterTemplatesRequest &) = default ;
    ListWebFilterTemplatesRequest(ListWebFilterTemplatesRequest &&) = default ;
    ListWebFilterTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWebFilterTemplatesRequest() = default ;
    ListWebFilterTemplatesRequest& operator=(const ListWebFilterTemplatesRequest &) = default ;
    ListWebFilterTemplatesRequest& operator=(ListWebFilterTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr && this->webFilterTemplateIds_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListWebFilterTemplatesRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWebFilterTemplatesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListWebFilterTemplatesRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListWebFilterTemplatesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListWebFilterTemplatesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // webFilterTemplateIds Field Functions 
    bool hasWebFilterTemplateIds() const { return this->webFilterTemplateIds_ != nullptr;};
    void deleteWebFilterTemplateIds() { this->webFilterTemplateIds_ = nullptr;};
    inline const vector<string> & getWebFilterTemplateIds() const { DARABONBA_PTR_GET_CONST(webFilterTemplateIds_, vector<string>) };
    inline vector<string> getWebFilterTemplateIds() { DARABONBA_PTR_GET(webFilterTemplateIds_, vector<string>) };
    inline ListWebFilterTemplatesRequest& setWebFilterTemplateIds(const vector<string> & webFilterTemplateIds) { DARABONBA_PTR_SET_VALUE(webFilterTemplateIds_, webFilterTemplateIds) };
    inline ListWebFilterTemplatesRequest& setWebFilterTemplateIds(vector<string> && webFilterTemplateIds) { DARABONBA_PTR_SET_RVALUE(webFilterTemplateIds_, webFilterTemplateIds) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> pageNo_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> status_ {};
    shared_ptr<vector<string>> webFilterTemplateIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
