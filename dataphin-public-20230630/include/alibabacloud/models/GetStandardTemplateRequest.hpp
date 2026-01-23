// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTANDARDTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTANDARDTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetStandardTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStandardTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FilterQuery, filterQuery_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Nullable, nullable_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStandardTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterQuery, filterQuery_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Nullable, nullable_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetStandardTemplateRequest() = default ;
    GetStandardTemplateRequest(const GetStandardTemplateRequest &) = default ;
    GetStandardTemplateRequest(GetStandardTemplateRequest &&) = default ;
    GetStandardTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStandardTemplateRequest() = default ;
    GetStandardTemplateRequest& operator=(const GetStandardTemplateRequest &) = default ;
    GetStandardTemplateRequest& operator=(GetStandardTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FilterQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FilterQuery& obj) { 
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, FilterQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      FilterQuery() = default ;
      FilterQuery(const FilterQuery &) = default ;
      FilterQuery(FilterQuery &&) = default ;
      FilterQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FilterQuery() = default ;
      FilterQuery& operator=(const FilterQuery &) = default ;
      FilterQuery& operator=(FilterQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->version_ == nullptr; };
      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline FilterQuery& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<int32_t> version_ {};
    };

    virtual bool empty() const override { return this->filterQuery_ == nullptr
        && this->id_ == nullptr && this->nullable_ == nullptr && this->opTenantId_ == nullptr; };
    // filterQuery Field Functions 
    bool hasFilterQuery() const { return this->filterQuery_ != nullptr;};
    void deleteFilterQuery() { this->filterQuery_ = nullptr;};
    inline const GetStandardTemplateRequest::FilterQuery & getFilterQuery() const { DARABONBA_PTR_GET_CONST(filterQuery_, GetStandardTemplateRequest::FilterQuery) };
    inline GetStandardTemplateRequest::FilterQuery getFilterQuery() { DARABONBA_PTR_GET(filterQuery_, GetStandardTemplateRequest::FilterQuery) };
    inline GetStandardTemplateRequest& setFilterQuery(const GetStandardTemplateRequest::FilterQuery & filterQuery) { DARABONBA_PTR_SET_VALUE(filterQuery_, filterQuery) };
    inline GetStandardTemplateRequest& setFilterQuery(GetStandardTemplateRequest::FilterQuery && filterQuery) { DARABONBA_PTR_SET_RVALUE(filterQuery_, filterQuery) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetStandardTemplateRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // nullable Field Functions 
    bool hasNullable() const { return this->nullable_ != nullptr;};
    void deleteNullable() { this->nullable_ = nullptr;};
    inline bool getNullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
    inline GetStandardTemplateRequest& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetStandardTemplateRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    shared_ptr<GetStandardTemplateRequest::FilterQuery> filterQuery_ {};
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
