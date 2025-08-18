// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIBYAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIBYAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListApiByAppRequestPageQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListApiByAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiByAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(PageQuery, pageQuery_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiByAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(PageQuery, pageQuery_);
    };
    ListApiByAppRequest() = default ;
    ListApiByAppRequest(const ListApiByAppRequest &) = default ;
    ListApiByAppRequest(ListApiByAppRequest &&) = default ;
    ListApiByAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiByAppRequest() = default ;
    ListApiByAppRequest& operator=(const ListApiByAppRequest &) = default ;
    ListApiByAppRequest& operator=(ListApiByAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->opTenantId_ != nullptr
        && this->pageQuery_ != nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListApiByAppRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // pageQuery Field Functions 
    bool hasPageQuery() const { return this->pageQuery_ != nullptr;};
    void deletePageQuery() { this->pageQuery_ = nullptr;};
    inline const ListApiByAppRequestPageQuery & pageQuery() const { DARABONBA_PTR_GET_CONST(pageQuery_, ListApiByAppRequestPageQuery) };
    inline ListApiByAppRequestPageQuery pageQuery() { DARABONBA_PTR_GET(pageQuery_, ListApiByAppRequestPageQuery) };
    inline ListApiByAppRequest& setPageQuery(const ListApiByAppRequestPageQuery & pageQuery) { DARABONBA_PTR_SET_VALUE(pageQuery_, pageQuery) };
    inline ListApiByAppRequest& setPageQuery(ListApiByAppRequestPageQuery && pageQuery) { DARABONBA_PTR_SET_RVALUE(pageQuery_, pageQuery) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ListApiByAppRequestPageQuery> pageQuery_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
