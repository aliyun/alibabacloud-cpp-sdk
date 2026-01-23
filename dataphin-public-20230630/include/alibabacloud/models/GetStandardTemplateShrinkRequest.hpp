// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTANDARDTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTANDARDTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetStandardTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStandardTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FilterQuery, filterQueryShrink_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Nullable, nullable_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStandardTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterQuery, filterQueryShrink_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Nullable, nullable_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetStandardTemplateShrinkRequest() = default ;
    GetStandardTemplateShrinkRequest(const GetStandardTemplateShrinkRequest &) = default ;
    GetStandardTemplateShrinkRequest(GetStandardTemplateShrinkRequest &&) = default ;
    GetStandardTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStandardTemplateShrinkRequest() = default ;
    GetStandardTemplateShrinkRequest& operator=(const GetStandardTemplateShrinkRequest &) = default ;
    GetStandardTemplateShrinkRequest& operator=(GetStandardTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterQueryShrink_ == nullptr
        && this->id_ == nullptr && this->nullable_ == nullptr && this->opTenantId_ == nullptr; };
    // filterQueryShrink Field Functions 
    bool hasFilterQueryShrink() const { return this->filterQueryShrink_ != nullptr;};
    void deleteFilterQueryShrink() { this->filterQueryShrink_ = nullptr;};
    inline string getFilterQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(filterQueryShrink_, "") };
    inline GetStandardTemplateShrinkRequest& setFilterQueryShrink(string filterQueryShrink) { DARABONBA_PTR_SET_VALUE(filterQueryShrink_, filterQueryShrink) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetStandardTemplateShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // nullable Field Functions 
    bool hasNullable() const { return this->nullable_ != nullptr;};
    void deleteNullable() { this->nullable_ = nullptr;};
    inline bool getNullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
    inline GetStandardTemplateShrinkRequest& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetStandardTemplateShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    shared_ptr<string> filterQueryShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<bool> nullable_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
