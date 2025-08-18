// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPUTESOURCESREQUESTLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPUTESOURCESREQUESTLISTQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListComputeSourcesRequestListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComputeSourcesRequestListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(BindProject, bindProject_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListComputeSourcesRequestListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(BindProject, bindProject_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListComputeSourcesRequestListQuery() = default ;
    ListComputeSourcesRequestListQuery(const ListComputeSourcesRequestListQuery &) = default ;
    ListComputeSourcesRequestListQuery(ListComputeSourcesRequestListQuery &&) = default ;
    ListComputeSourcesRequestListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComputeSourcesRequestListQuery() = default ;
    ListComputeSourcesRequestListQuery& operator=(const ListComputeSourcesRequestListQuery &) = default ;
    ListComputeSourcesRequestListQuery& operator=(ListComputeSourcesRequestListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindProject_ != nullptr
        && this->keyword_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->type_ != nullptr; };
    // bindProject Field Functions 
    bool hasBindProject() const { return this->bindProject_ != nullptr;};
    void deleteBindProject() { this->bindProject_ = nullptr;};
    inline bool bindProject() const { DARABONBA_PTR_GET_DEFAULT(bindProject_, false) };
    inline ListComputeSourcesRequestListQuery& setBindProject(bool bindProject) { DARABONBA_PTR_SET_VALUE(bindProject_, bindProject) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListComputeSourcesRequestListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListComputeSourcesRequestListQuery& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListComputeSourcesRequestListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListComputeSourcesRequestListQuery& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> bindProject_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
