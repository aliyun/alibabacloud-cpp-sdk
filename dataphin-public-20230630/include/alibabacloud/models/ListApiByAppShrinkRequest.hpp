// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIBYAPPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIBYAPPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListApiByAppShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiByAppShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(PageQuery, pageQueryShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiByAppShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(PageQuery, pageQueryShrink_);
    };
    ListApiByAppShrinkRequest() = default ;
    ListApiByAppShrinkRequest(const ListApiByAppShrinkRequest &) = default ;
    ListApiByAppShrinkRequest(ListApiByAppShrinkRequest &&) = default ;
    ListApiByAppShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiByAppShrinkRequest() = default ;
    ListApiByAppShrinkRequest& operator=(const ListApiByAppShrinkRequest &) = default ;
    ListApiByAppShrinkRequest& operator=(ListApiByAppShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->pageQueryShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListApiByAppShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // pageQueryShrink Field Functions 
    bool hasPageQueryShrink() const { return this->pageQueryShrink_ != nullptr;};
    void deletePageQueryShrink() { this->pageQueryShrink_ = nullptr;};
    inline string getPageQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(pageQueryShrink_, "") };
    inline ListApiByAppShrinkRequest& setPageQueryShrink(string pageQueryShrink) { DARABONBA_PTR_SET_VALUE(pageQueryShrink_, pageQueryShrink) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<string> pageQueryShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
